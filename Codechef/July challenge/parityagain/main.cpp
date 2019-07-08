#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

int isevenones(int n);

int main(){
        int t,i,j,q,k,temp,evensum,oddsum,l=0;
        map<int, int> map1;
        vector<int> v,res;
        cin>>t;
        vector<int>::iterator it=v.begin();

        for(i=0;i<t;i++){

                cin>>q;
                evensum=0;
                oddsum=0;
                for(j=0;j<q;j++,it++){

                        v.push_back(0);
                        res.push_back(0);
                        cin>>v[j];

                        if(map1[v[j]]!=v[j])
                                map1.insert(pair<int, int>(v[j],v[j]));

                        else v.erase(it);
                    }

                     for(k=0,j=0;k<j;k++,l+=2,j++){
                                temp = v[k]^v[j];

                                if(map1[temp]==temp){
                                        map1.insert(pair<int,int>(temp,temp));
                                        if(isevenones(v[j]))
                                                evensum++;
                                            else
                                                    oddsum++;
                                        if(isevenones(temp))
                                                evensum++;
                                            else
                                                    oddsum++;
                                    }
                                    cout<<evensum<<" "<<oddsum<<"\n";
                            }

            }
}


int evenones(int num){
    int count=1;

        if(num==0)
            return 1;

        if(ceil(log2(num)) == floor(log2(num)))
                return log2(num);
            else {
                while(num!=0){
                        num-=pow(2,floor(log2(num)));
                        count++;
                    }
            }
                if(count%2==0)
                    return 1;
                return 0;
        }
