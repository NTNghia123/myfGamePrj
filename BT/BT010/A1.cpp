#include <iostream>
#include <cstring>
using namespace std;

char *  concat(const char* a, const char* b ){
    int lena = strlen(a);
    int lenb = strlen(b);
    char * res = new char [lena + lenb + 1];

    strcpy(res,a);
    strcat(res,b);

    res[lena + lenb] = '\0';
    return res;
}
int main()
{
    const char * a = "hi";
    const char * b = " there";
    char * res = concat(a,b);
    cout << res;

    return 0;
}
