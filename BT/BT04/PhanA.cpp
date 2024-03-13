
#include <iostream>
using namespace std;

int a[10];
//int a1b1[3] = {1, 2, 3, 4};
int a1b2[5] = {1, 2, 3, 4};
int a1c1[ ] = {1, 2, 3, 4};
int main()
{
    for ( int i = 0 ; i < 10 ; i++) cout << a[i] << " ";
    cout << endl;

    // int a[10] ;
    // for ( auto n : a ) cout << n << " ";
    // int a1b3[3] = {1, 2, 3, 4};
    int a1b4[5] = {1, 2, 3, 4};
    int a1c2[ ] = {1, 2, 3, 4};
    // for ( auto n : a1b1 ) cout << n << " ";
    for ( auto n : a1b2 ) cout << n << " ";
    cout << endl;
    //for ( auto n : a1b3 ) cout << n << " ";
    //cout << endl;
    for ( auto n : a1b4 ) cout << n << " ";
    cout << endl;

    for ( auto n : a1c1 ) cout << n << " ";
    cout << endl;
    for ( auto n : a1c2 ) cout << n << " ";

    return 0;
}
