BÀI 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt (0);
    // in ra một tam giác ngược kích thước n;
    for ( int m = n; m > 0; m--){
    for ( int j = cnt; j > 0 ; j--){
        cout << " ";
    }
    cnt ++;
    for ( int i = m ; i > 0 ; i--){
        cout << "*";
    }
    cout << endl;
}
    return 0;
}
BÀI 3
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt( n - 1);
    for ( int j = 0; j < 5 ; j++){
    
    for ( int m = cnt ; m >0 ; m--){
        cout << " ";
    }
    cnt --;
    for ( int i = 1; i <= j*2 + 1; i++ ){
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
BÀI 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt(0);
    for ( int j = n; j > 0 ; j--){
    
    for ( int m = 0 ; m < cnt ; m++){
        cout << " ";
    }
    cnt ++;
    for ( int i = 1; i <= j*2 - 1; i++ ){
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
BÀI 6
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt (0);
    for ( int m = 1; m <= 10 ; m++){
    for ( int i = m  ; i <= 10 ; i++){
        cout << i << " " ;
    }
        for (int j = 1 ; j <= cnt ; j++){
            cout << j << " ";
        }
        cnt++;
        cout << endl;
    }
    return 0;
}
BÀI 7
#include <iostream>
using namespace std;
int main ()
{
  int a(-1);
  do {
    int b(0);
    cin >> b;
    if ( a != b) cout << b << " ";
    a = b;
}while ( a > 0 );
  return 0;
}
CHECK LỖI
Bài 1. Tìm lỗi trong mỗi vòng lặp sau:
1.	while (n<20);
   cout << n++ <<endl;
2.	for (int i = 1, i <= 8, ++i)
   cout << 1.0/i << endl;
3.	int n = 10;
   do
 	      cout << 1.0/n ;
                  n++;
               while (n < 20);
4.	for (int i=10; i<20; ) {
   cout << i*i <<endl;
   i--;
}

KIỂM TRA SỐ CHÍNH PHƯƠNG
#include <iostream>
using namespace std;
bool cphuong(int & upd , int sotest){
    int bp = upd * upd;
    if (bp < sotest){
        upd++;
        return cphuong(upd,sotest);
    } else if ( bp == sotest){
        return true;
    }else return false;
}

int main ()
{
int sotest;
cin >> sotest;
int tmp = 1;
cout << cphuong(tmp,sotest);
  return 0;
}
Bài 15
#include <iostream>
using namespace std;
int fibo(int upd ){
    if ( upd <= 2){
       return 1; 
    } 
    else{
        return fibo(upd - 2) + fibo(upd - 1);
    }
}
int main()
{
    int n; cin >> n;
    for(int i = 1 ; ;i++){
        int tmp = fibo(i);
        if ( tmp <= n) cout << tmp << " " ;
        else return 0;
    }
    return 0;
}
BÀI 17 18 19
#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "Tong so mon hoc can tinh DTB: " << n << endl;
    double sum(0), cnt(0);
    for ( int i = 1 ; i <= n; i++){
        double diem(0), heso(0);
        cout << "Diem mon hoc " << i << ": " ;
        cin >> diem; 
        cout << endl;
        while ( diem <0 || diem >10){
            cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): ";
            cin >> diem;
            cout << endl;
        }
        cout << "He so mon hoc " << i << ": " ;
        cin >> heso;
        cout << endl;
        sum += (diem * heso);
        cnt += heso;
    }
    cout << "So mon hoc: " << n << endl;
    cout << "Tong so he so: " << cnt << endl;
    cout << "Diem trung binh cua 2 mon hoc: " << sum/cnt << endl;
    return 0;
}
