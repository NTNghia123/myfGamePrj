
#include <iostream>

using namespace std;
int main(){
    int n = 5;
    int * ptr = new int ;
    *ptr = n;

    int * res = new int ;
    res = ptr;

    delete ptr; // xoa ptr
    delete res; // vi ptr da bi xoa nen res hien dang khong chi vao dau
    return 0;
}
//khi giải phóng bộ nhớ của con trỏ ( bằng delete, chương trình sẽ gặp lỗi vì địa chỉ đã bị giải phóng.
