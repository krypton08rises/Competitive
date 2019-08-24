#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumofdigits(int n);

int main()
{
    int t,i,n,j,k,prod,sum,temp;
    vector<int> v,res;
    cin>>t;
    for(i=0;i<t;i++){
            sum=0;
            cin>>n;
            res.push_back(0);
            for(j=0;j<n;j++){
                v.push_back(0);
                cin>>v[j];
            }
            for(j=0;j<n-1;j++){
                for(k=j+1;k<n;k++){
                  prod = v[j]*v[k];
                temp = sumofdigits(prod);
                if(temp>sum)
                    sum=temp;
                }
            }
            res[i] = sum;
       v.clear();
    }
    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
}


int sumofdigits(int n){
    int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
}
