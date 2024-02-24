#include <iostream>
#include <cmath>
using namespace std;
 int long long tluong(int hour ){
    int mucLuong[4] = { 12000, 16000 , 20000 , 25000};
     int long long luong;
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
    return luong;
}
 int long long tthue(int luong){
     int long long luongGoc;
    luong = luong * 91 / 100 ;
    luongGoc = luong;

     long long int thue(0);
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
     int long long luongSauThue = luongGoc - thue;
    return luongSauThue;
}
 int long long laiNH(int tienVay){
    double lai = 0.02;
        double laisuat = round(tienVay * lai);
    return laisuat;
}

int main()
{
    int long long tienVay = 10000000;
    int hour[13] = {155,145,125,135,100,100,145,135,100,155,170,180};
    int cnt(1);
    int long long dunodauthang(0), khoanthanhtoancuoi(0);
    while (tienVay >0){
        int long long luongHangThang = tluong(hour[cnt]);
        int long long luongSauThue = tthue(luongHangThang);
        cout << "Thu nhap sau thue cua sinh vien thang " << cnt <<" la: " << luongSauThue << endl;

        int long long tienLai = laiNH(tienVay);
        cout << "So tien lai ngan hang vao cuoi thang " << cnt << " la: " << tienLai << endl;
        tienVay = tienVay + tienLai + 2000000 - 1500000 - luongSauThue;
        cnt++;
        if (tienVay < 0 ) tienVay = 0;
        cout << "Du no dau thang " << cnt << " la: " << tienVay << endl << endl;

        khoanthanhtoancuoi = dunodauthang + tienLai;
        dunodauthang = tienVay;
    }
    cout << "Vay sau " << cnt << " thang thi tra het no" << endl;
    cout << "Khoan thanh toan cuoi voi ngan hang la: " << khoanthanhtoancuoi;
    return 0;
}
