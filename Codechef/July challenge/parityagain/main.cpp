#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

int isevenones(int n);

int main(){
        int t,i,j,q,k,l=0,temp,evensum,oddsum;
//        map<int, int> map1;
        vector<int> v,res;
        cin>>t;

        for(i=0;i<t;i++){

                cin>>q;
                evensum=0;
                oddsum=0;

                for(j=0;j<q;j++){
                            v.push_back(0);
                            cin>>v[j];
                    }

                for(j=0;j<q;j++){
                                res.push_back(0);
                                res[l] = v[j];
                                l++;
                                if(isevenones(v[j])==1)
                                                evensum++;
                                            else if(isevenones(res[l])==0)
                                                    oddsum++;
                                for(k=0;k<j;k++){
                                            res.push_back(0);
                                            res[l] = res[k]^v[j];
                                            if(isevenones(res[l])==1)
                                                        evensum++;
                                                    else if(isevenones(res[l])==0)
                                                            oddsum++;
                                                l++;
                                    }
                                    cout<<evensum<<" "<<oddsum<<"\n";
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
            return (count%2==0)? 1 : 0 ;
        }
