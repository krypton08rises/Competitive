#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,i,p;
    cin>>n;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for(i=2;i<n;i++){
        if(prime[i] == true)
            sum++;
    }
    cout<<sum;
}
