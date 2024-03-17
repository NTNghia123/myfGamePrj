// chỉ được dùng mảng và c string
Bài 2
#include <iostream>
using namespace std;
int main()
{
char c[100] ;
cin.getline(c,100);
int sizec = 0;
    while (c[sizec] != '\0') {
        ++sizec;
    }
    int cnt = sizec - 1;

    for ( int i = 0 ; i < sizec/2; i++){
        if ( c[i] != c[cnt - i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
Bài 3 đã test
// chỉ được dùng mảng và c string
#include <iostream>
void intToCstring(int num, char str[100]){
    // dau tien la tao mot mang du dai de chua
    // nhap tung so vao mang day theo chieu tu phai sang trai
    // dao nguoc mang
    char * c = str;
    while ( num > 0 ){
        *c ++ = num % 10 + '0';
        num /= 10;
    }
    *c = '\0';
    c -- ;
    char * start = str;
    while ( start < c){
        char temp = *start;
        *start = *c;
        *c = temp;
        start ++;
        c -- ;
    }
}
bool ifMirror(char * c){
    int sizec = 0;
    while (c[sizec] != '\0') {
        ++sizec;
    }
    int cnt = sizec - 1;
    for ( int i = 0 ; i < sizec/2; i++){
        if ( c[i] != c[cnt - i]){
            return false;
        }
    }
return true;
}
using namespace std;
int main()
{
    int T;
    cin >> T;
    for ( int i = 0 ; i < T ; i++){
        int count = 0;
        int A, B;
        cin >> A >> B;
    for ( int i = A ; i <= B; i++){
        char str[100];
        intToCstring(i, str);
        if (ifMirror(str)) count++;
    }
    cout << count << endl;
    }
    return 0;
}
Bai 4
#include <iostream>
using namespace std;
int
main ()
{
  int m, n;
  cin >> m >> n;
  char arr[m][n];
  char res[m][n];
    for ( int i = 0 ; i < m ; i++){
          for (int j = 0; j < n; j++){
        char tmp;
        cin >> tmp;
        arr[i][j] = tmp;
	}
    }

    for ( int i = 0 ; i < m ; i++){
          for (int j = 0; j < n; j++){
        if ( arr[i][j] == '*') res[i][j] = arr[i][j];
        else{
            int cnt = 0;
            for ( int k = i - 1 ; k <= i + 1 ; k++ ){
                for ( int l = j - 1 ; l <= j + 1 ; l++ ){
                    if ( k >= 0 && l >= 0){
                        if (arr[k][l] == '*') cnt++;
                    }
            }
        }
        res[i][j] = cnt + '0';
	}
    }
    }

    for ( int i = 0 ; i < m ; i++){
          for (int j = 0; j < n; j++){
        cout << res[i][j] << " ";
	}
	cout << endl;
    }
  return 0;
}
BAI 5
#include <iostream>
using namespace std;

struct Res {
    int cnt = 1;
    int m, n;
    int **arr;
    int minX = 0;
    int minY = 0;
    int maxX;
    int maxY;

    Res(int mcin, int ncin) : m(mcin), n(ncin), maxX(m - 1), maxY(n - 1) {
        arr = new int *[m];
        for (int i = 0; i < m; i++) {
            arr[i] = new int[n];
        }
    }
    void Spiral(){
        while ( minX <= maxX && minY <= maxY){
        for (int i = minY; i <= maxY && minX <= maxX && minY <= maxY; i++) {
            arr[minX][i] = cnt;
            cnt++;
        }
        minX++;

        for (int i = minX; i <= maxX && minX <= maxX && minY <= maxY; i++) {
            arr[i][maxY] = cnt;
            cnt++;
        }
        maxY--;

        for (int i = maxY; i >= minY && minX <= maxX && minY <= maxY; i--) {
            arr[maxX][i] = cnt;
            cnt++;
        }
        maxX--;

        for (int i = maxX; i >= minX && minX <= maxX && minY <= maxY; i--) {
            arr[i][minY] = cnt;
            cnt++;
        }
        minY++;

    }
    }
    void cOut() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    Res res(m, n);
    res.Spiral();
    res.cOut();
    return 0;
}
BAI 6
#include <iostream>
using namespace std;

struct Magic{
    int x = 0 , y;
    int cnt = 1 ;
    int N;
    int ** arr;
    void cIn(){
        cin >> N;
        y = N / 2 ;
        arr = new int * [N];
        for (int i = 0 ; i <N ; i ++){
            arr[i] = new int [N];
        }
        for (int i = 0 ; i <N ; i ++){
         for (int j = 0 ; j <N ; j ++){
            arr[i][j] = 0 ;
    }
    }
    }
    void minXmaxY(){
        x ++;
        cnt++;
        arr[x][y] = cnt;
    }
    void maxY(){
        cnt ++;
        x --;
        y = 0 ;
        arr[x][y] = cnt;
    }
    void minX(){
        cnt++;
        x = N - 1;
        y ++;
        arr[x][y] = cnt;
    }
    void outinBoard(){
        x ++;
        cnt++ ;
        arr[x][y] = cnt;
    }
    void norm(){
        x --;
        y ++;
        cnt++;
        arr[x][y] = cnt;
    }
    void magicArr(){
        int max = N * N;
        arr[x][y] = cnt;
        while ( cnt < max ){
            if (x == 0 && y == N - 1) minXmaxY();
            else if ( y == N - 1) maxY();
            else if ( x == 0 ) minX();
            else if ( arr[x - 1][y + 1] != 0 ) outinBoard();
            else norm();
        }
    }
    void cOut() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Magic magic;
    magic.cIn();
    magic.magicArr();
    magic.cOut();
}

