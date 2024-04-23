#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int *ptr = new int ;
    ptr= &n; // gan ptr dc cap phat dong cho bien dia phuong gay ro ri bo nho
    delete ptr; // khi delete, no xoa dia chi duoc cap cho pointer ma n lai la bien dia phuong khong the xoa nen gay ra loi

    return 0  ;
}
