#include <iostream>
using namespace std;
int main()
{

    unsigned int long long luong, luongGoc;
    cout << "Nhap vao muc luong cua ban: ";
    cin >> luong;
    luong = luong * 91 / 100 ;
    luongGoc = luong;

    unsigned long long int thue(0);
    double mucThue[3] = { 0.1 , 0.15, 0.2};
    if ( luong > 1000000){
        luong -= 1000000;
        if ( luong > 500000){
            thue += 500000 * mucThue[0];
            luong -= 500000;
            if (luong >500000){
                thue += 500000 * mucThue[1];
                luong -= 500000;
                thue += luong * mucThue[2];
            }else thue += luong * mucThue[1];
        }else thue += luong * mucThue[0];

    }else thue = 0 ;
    cout << "Tien thue la: " << thue << endl;
    cout << "Muc luong sau thue la: " << luongGoc - thue;
    return 0;
}
