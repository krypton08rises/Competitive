#include <iostream>
#include <cstring>
using namespace std;
bool isprime(int n);

int main()
{
    int a,b,c,m;
    cin>>a>>b>>c;
    for(m=0;;m++){
        if(!isprime(a*m*m+b*m+c))
            cout<<m;
    }
}

bool isprime(int n){

    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
