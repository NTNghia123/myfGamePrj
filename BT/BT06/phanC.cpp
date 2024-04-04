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
