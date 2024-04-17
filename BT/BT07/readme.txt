BAI 2
#include<iostream>
using namespace std;

void f(int a[]) {
    cout<< sizeof(a)<< endl;
}
void ff(int a[5]) {
    cout<< sizeof(a)<< endl;
}

int main() {
    int A[5] = {1,2,3,4,5};
    cout<< sizeof(A)<< endl;
    f(A);
    ff(A);
    return 0;
}
BAI 3
#include<iostream>
using namespace std;
int count_even(int *a, int b)
{
    int res = 0;
    for (int i = 0; i < b; i++) if ( a[i] % 2 == 0) res ++; // dung nhu mang
    // for (int i = b - 5; i < b; i++) if (*(a + i) % 2 == 0) res ++; // dùng con tro
    return res;
}
int main()
{
    int *arr = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << count_even(arr,10);
    return 0;
}
BAI 4
