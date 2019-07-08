#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int isevenones(int);

int main(){
        int t,i,j,q,k,l=0,evensum,oddsum;
        cin>>t;
        map<int, int> map1;
        vector<int> res,v;
        for(i=0;i<t;i++){
            cin>>q;
            for(j=0;j<q;j++){
                evensum=0;
                oddsum=0;
                v.push_back(0);
                res.push_back(0);
                if(map[v[j]!=v[j])
                map1.insert(pair<int, int>(v[j],v[j]));

                }
            for(k=0;k<j;k++){
                   res[]
            }
        }
}

int isevenones(int num){
    int count=1;
        if(num==0)
            return 1;
        if(ceil(log2(num)) == floor(log2(num)))
                return 0;
                else {
                        while(num!=0){
                            num-=pow(2,floor(log2(num)));
                            count++;
                        }
                }
                (count%2==0)?return 1:return 0;
        }
