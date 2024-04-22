/*

#include <iostream>
#include <cstring>
using namespace std;

struct String{

    char * ptr;
    int n;

    String (const char * s){
        n = strlen(s);
        ptr = new char [n + 1];
        strcpy(ptr,s);
    }
    ~String(){
        delete[] ptr;
    }
    void print (){
        cout << ptr << endl;
    }
    int const getLength(){
        n = strlen(ptr);
        return n;
    }
    void append ( const char* s){
        int slen  = strlen(s);
        char * tmp =  new char [slen + n + 1];
        strcpy(tmp, ptr);
        strcpy(tmp + n, s);

        delete[] ptr;
        ptr = tmp;

        n = slen + n;
    }
};

int main()
{
    String s ( "HELLO");
    s.print();
    s.append(" WORLD");
    s.print();
}
*/
#include <iostream>
using namespace std;

int length ( char const a[]) {
    int len = 0;
    int i = 0 ;
    while ( a[i] != '\0'){
        len ++ ;
        i ++ ;
    }
    return len;
}
// void copy (char* a, char* b){
//     int len = length(a);
//     for ( int i = 0; i < len ; i++){
//         b[i] = a[i];
//     }
// }
    char * const_to_char ( char const * a){
        int len = length(a);
        char * res = new char [len + 1];

        const char * start = a;
        int cnt = 0 ;
        while ( *start != '\0'){
            res[cnt] = *start;
            cnt++;
            start++;
        }
        res[cnt] = '\0';
        return res;
    }

char * reverse(char const * a) {

    const char * start = a;
    const char * end = a;
    int len = length(a);

    while ( *end != '\0') end ++;

    char * res = new char [len];
    char * resStart = res;
    int cnt = len - 1;
    while ( start < end ){
        *(resStart + cnt)= *start;
        cnt--;
        start ++;
    }
    return res;
}
char * delete_char(char const a[], char c){
    int len = length(a);
    char * res = new char [len + 1];
    int cnt = 0 ;
    for ( int i = 0 ; i < len ; i++){
        if ( a[i] != c) {
            res[cnt] = a[i];
            cnt ++;
        }
    }
    res[cnt] = '\0';
    return res;
}
char *  pad_right(char const a[], int n){
    int len = length(a);
    if ( len >= n ) return const_to_char(a);

    char * res = new char [n + 1];
    int cnt = 0 ;
    while ( cnt <= len ){
        res[cnt] = a[cnt];
        cnt++;
    }
    //*res = *const_to_char(a);
    while ( len < n ){
        res[len] = ' ';
        len ++;
    }
    res[n] = '\0';
    return res;
}
char *  pad_left(char const a[], int n){
    int len = length(a);
    if ( len >= n ) return const_to_char(a);

    char * res = new char [n + 1];
    int dif = n - len  ;
    int i = 0 ;
    while (i < dif) {
        res[i] = ' ';
        i++;
    }
    i = 0;
    while (i <= len) {
        res[dif + i] = a[i];
        i++;
    }
    return res;
}
char *  trun_cate(char const a[], int n){
    int len = length(a);
    if ( len <= n ) return const_to_char(a);

    char * res = new char [n + 1];
    int i = 0 ;
    while ( i < n ){
        res[i] = a[i];
        i++;
    }
    res[n] = '\0';
    return res;
}
char * trim_left(char const a[]){
    int len = length(a);
    int cnt = 0 ;
    while ( a[cnt] == ' '){
        cnt ++ ;
    }
    cout << endl << cnt;
    if ( cnt == 0 ) return const_to_char(a);
    char * res = new char [len - cnt + 1];

    for (int i = 0; i < len - cnt; i++) {
        res[i] = a[cnt + i];
    }
    res[len - cnt] = '\0';
    return res;
}
char * trim_right(char const a[]){
    int len = length(a);
    int last = len - 1 ;
    int cnt = 0 ;
    while ( a[last] == ' '){
        cnt ++ ;
        last --;
    }
    cout << endl << cnt;
    char * res = new char [len - cnt + 1];
    int i = 0 ;
    for ( ; i < len - cnt ; i++){
        res[i] = a[i];
    }
    res[len - cnt] = '\0';
    return res;
}
int main() {
    char a[] = "123";
    cout << a << endl;

    char *res = reverse(a);
    cout << res;
    delete[] res; // Giải phóng bộ nhớ cho mảng res

    res = delete_char(a, '1');
    cout << endl << res;
    delete[] res; // Giải phóng bộ nhớ cho mảng res

    res = const_to_char(a);
    cout << endl << res;
    delete[] res; // Giải phóng bộ nhớ cho mảng res

    char * rightes = pad_right(a,5);
    cout << endl << rightes << ';' ;

    char * les = pad_left(a,5);
    cout << endl << les << ';' ;

    res = trun_cate(a,2);
    cout << endl << res << ';' ;
    delete[] res;

    res = trim_left(les);
    cout << endl << res << ';' ;
    delete[] res;

    res = trim_right(rightes);
    cout << endl << res << ';' ;
    delete[] res;

    return 0;
}
