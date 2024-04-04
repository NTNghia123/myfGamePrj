BAI 5
#include <iostream>
#include <cmath>

bool check(int num){
   if ( num ==  2) return true;
   if ( num % 2 == 0 || num < 2 ) return false;
    for ( int i = 3 ;  i < (num) ; i++){
        if ( num % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    std::cin >> n;
    for ( int i = 2 ; i < n ; i++){
        if ( check(i)) std::cout <<  i << " ";
    }
    return 0;
}
BAI 6
#include <iostream>
using namespace std;
int ucln(int a, int b){
    if ( b == 0 ) return a;
    int r = a % b;
    return ucln(b,r);
}
bool check(int num){
   if ( num ==  2) return true;
   if ( num % 2 == 0 || num < 2 ) return false;
    for ( int i = 3 ;  i < (num) ; i++){
        if ( num % i == 0) return false;
    }
    return true;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int ucl = ucln(a,b);
    cout << ucl << endl;
    if ( ucl == 1 && check(a) && check(b)) cout << " a va b la nguyen to cung nhau";


    return 0;
}
BAI 7

#include <iostream>
using namespace std;
void tri(int n){
    int cnts = 1;
    int cntspace = n - 1;
    for (int i = 0 ; i  < n; i++){
        for ( int j = 0 ; j < cntspace; j++){
            cout << " ";
        }
        for ( int j = 0 ; j < cnts; j++){
            cout << "*";
        }
        cout << endl;
        cnts += 2;
        cntspace -- ;
    }
}
int main()
{
    int n;
    cin >> n;
    tri(n);


    return 0;
}
BAI 9
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void lown(int n){

    int num = rand();
    int res = num % n;
cout << res;
}
int main()
{
    int n;
    cin >> n;
    srand(time(0));
    lown(n);
    return 0;
}
BAI 11
#include <iostream>
#include <vector>
using namespace std;
vector <int> chuyen(int num){
    vector <int> henhiphan;
    for ( int i = 31 ; i >0 ; i--){
        int tmp = (num >> i ) & 1;
        henhiphan.push_back(tmp);
    }
    return henhiphan;
}
int main()
{
    int n;
    cin >> n;
    vector <int> binary = chuyen(n);
    for ( auto i : binary) cout << i ;

    return 0;
}
