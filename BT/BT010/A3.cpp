
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

