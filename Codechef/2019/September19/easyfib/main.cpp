#include <bits/stdc++.h>

using namespace std;

#define NIL -1
vector<int> lookup;

void _initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
            lookup.push_back(NIL);
    }
}

int fib(int n)
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

    int t,i,n,temp;
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
        /*
        if(n==1)
            ans[i] = 0;
        if(n==2)
            ans[i] = 1;
        */
        ans[i] = fib(pow(2,int(log2(n)))-1);
        temp = pow(10,int(log10(ans[i])));
        ans[i] = ans[i]%temp;
        lookup.clear();
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<"\n";
    }
}
