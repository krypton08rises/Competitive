#include <bits/stdc++.h>

using namespace std;

#define NIL -1
vector<long long int> lookup;

void _initialize(long long int n)
{
    for (long long int i = 0; i < n; i++)
    {
            lookup.push_back(NIL);
    }
}

long long int fib(long long int n)
{
    if (lookup[n] == NIL)
    {
        if (n <= 1)
            lookup[n] = n;
        else
            lookup[n] = fib(n - 1) + fib(n - 2);
}
return lookup[n];
}


int main()
{

    int t,i;
    long long int n;
    cin>>t;
    vector<int> ans;
    for(i=0;i<t;i++)
    {
        ans.push_back(0);
        cin>>n;
        _initialize(n);
        if(n==1)
        {
            return 0;
        }
        if(n==2)
        {
             ans[i] = 1;
             continue;
        }
        ans[i] = fib(pow(2,(long long)(log2(n)))-1);
        ans[i]%=10;
        lookup.clear();
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<"\n";
    }
}
