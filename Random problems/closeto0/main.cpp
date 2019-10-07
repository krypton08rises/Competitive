#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==2 || n==3)
        return true;
    for (int i=2; i*i<=n; i++)
        if (n%i == 0)
           return false;
    return true;

}

int func(int a)
{
    for(int i=int(sqrt(a));i>0;i--)
    {
        if(a%i==0)
        {
            a=a/i;
            return a;
        }
    }
}

int main()
{
    int a,count=0;
    cin>>a;
    while(!isprime(a))
    {
        a = func(a);
        count++;
        cout<<a<<"      ";
    }
    count+=a;
    cout<<count;
}
