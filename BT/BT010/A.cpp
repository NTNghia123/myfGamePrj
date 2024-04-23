#include <iostream>
#include <cstring>
using namespace std;

char *  concat(const char* a, const char* b ){
    int lena = strlen(a);
    int lenb = strlen(b);
    char * res = new char [lena + lenb + 1];

    strcpy(res,a);
    strcat(res,b);

    res[lena + lenb] = '\0';
    return res;
}
int main()
{
    const char * a = "hi";
    const char * b = " there";
    char * res = concat(a,b);
    cout << res;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // xoa con tro p
    *p2 = 100;// truy cap vao vung da bi xoa -> loi
    cout << *p2;// loi ( vi con tro p2 khong xac dinh)
    delete p2;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // c khong phai la con tro duoc cap phat dong nen khong the delete
    cerr << "a after deleting c:" << "-" << a << "-" << endl;


    return 0;
}

#include <iostream>

using namespace std;
int main(){
    int n = 5;
    int * p = new int ;
    p = &n;
    int *c = p;
    cout << n << endl;
    cout << *p << endl;
    delete p;
    cerr << c;

}
#include <iostream>

using namespace std;
int main(){
    int n = 5;
    int * ptr = new int ;
    *ptr = n;

    int * res = new int ;
    res = ptr;

    delete ptr;
    delete res;
    return 0;
}
//khi giải phóng bộ nhớ của con trỏ ( bằng delete, chương trình sẽ gặp lỗi vì địa chỉ đã bị giải phóng.
