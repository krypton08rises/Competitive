#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findmin(int n);
int main()
{
    int s,i,j;
    int coin[] = {1,3,5};
    cin>>s;
    vector<int> mincoin;
    mincoin.push_back(0);
    for(i=1;i<=s;i++){
        mincoin.push_back(INT_MAX);
        for(j=0;j<3;j++){
                if(coin[j]>i)
                    continue;
                if(coin[j]==i){
                    mincoin[i]=1;
                    continue;
                }
            if(mincoin[i-coin[j]]+1 < mincoin[i])
                mincoin[i] = mincoin[i-coin[j]] + 1;
        }
    }
    cout<<mincoin[s];
}

