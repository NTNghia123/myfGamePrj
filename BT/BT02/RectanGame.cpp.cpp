
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n--;
    unsigned long long int a,b, a_min, b_min;    
    cin >> a_min >> b_min;
    for ( int i = 0 ; i < n ; i++){
        a = b = 0;
        cin >> a >> b;
        if ( a_min > a) a_min = a;
        if ( b_min > b) b_min = b;
    }
    cout << a_min * b_min;

    return 0;
}