#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int long long tienVay ;
    cin >> tienVay;
    double lai = 0.02;
    for ( int i = 1; i <= 12 ; i++){
        double laisuat = round(tienVay * lai);
        tienVay += laisuat;
        tienVay = tienVay;
    }
    cout << tienVay;
    return 0;
}
