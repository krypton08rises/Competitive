#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumofprod(vector<int> v){
    int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=(i+1)*v[i];
        }
        return sum;
}

int main()
{
    int t,i,n,j,sum=0,temp;
    vector<int> v,res,diff,tempvec;
    cin>>t;
    for(i=0;i<t;i++){
        temp=0;
        res.push_back(0);
        cin>>n;
        for(j=0;j<n;j++){
            v.push_back(0);
            cin>>v[j];
        }
        for(j=0;j<n-1;j++){
            diff.push_back(0);
            diff[j]=v[j+1]-v[j];
        }

        auto it = max_element(std::begin(cloud), std::end(cloud)); // c++11

        /*
        for(j=0;j<n-2;j++){
            if((v[j+1]-v[j+2]) < (v[j]-v[j+1])){
                    temp = v[j+1];
                    v[j+1] = v[j];
                    v[j] = temp;
                    temp=j+1;
                    j++;
            }
        }
        */
        if(temp!=n-2){
            temp = v[j+1];
            v[j+1] = v[j];
            v[j] = temp;
        }
        res[i] = sumofprod(v);
    }

    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
}

