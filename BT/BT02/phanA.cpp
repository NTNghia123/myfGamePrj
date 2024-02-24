#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout <<"Nhap so gio lam viec: ";
    cin >> hour;
    int mucLuong[4] = { 12000, 16000 , 20000 , 25000};
    unsigned int long long luong;
    if ( hour > 100){
        luong = 100 * mucLuong[0];
        hour -= 100;
        if ( hour > 50){
            luong += 50 *mucLuong[1];
            hour -= 50;
            if ( hour > 50){
                luong += 50 *mucLuong[2];
                hour -= 50;
                luong += hour * mucLuong[3];
            }else luong += hour * mucLuong[2];
        }else luong += hour *mucLuong[1];
    }else luong = hour * mucLuong[0];
    cout << "Tien luong truoc thue la: " << luong;
    return 0;
}
