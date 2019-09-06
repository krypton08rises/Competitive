#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
  int f[n+1];
  int i;
  f[0] = 0;   f[1] = 1;
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

  return f[n];
}

int main()
{
    int t,i,n;
    cin>>t;
    vector<int> ans;
    for(i=0;i<t;i++)
    {
        cin>>n;
        /*
        if(n==1)
            ans[i] = 0;
        if(n==2)
            ans[i] = 1;
        */
        ans[i] = fib(pow(2,int(log2(n))));
        ans[i] = ans[i]%pow(10,int(log10(ans[i])));
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<"\n";
    }
}
