#include <iostream>
#include <vector>
#include <string>

using namespace std;
int findiff(vector<string> str,int n);

int main(){
        int t,i,n,j,k,temp=0,temp1,temp2;
        cin>>t;
        string buf;
        vector<int> res;
        vector<string> v;
        for(i=0;i<t;i++){
                res.push_back(0);
                cin>>n;
                getline(cin,buf);
                for(j=0;j<n;j++){
                        v.push_back("");
                        getline(cin,v[j]);
                }
                res[i] = findiff(v,n);
                temp = res[i];
                for(j=0;j<n;j++){
                        temp1=0;
                        temp2=0;
                        for(k=0;k<n/2;k++){
                            temp1-=int(v[j][k])-48;
                        }
                        cout<<temp1<<"  ";
                        temp1*=2;
                        for(k=n/2;k<n;k++){
                            temp2+=int(v[j][k])-48;
                        }
                        cout<<temp2<<"  ";
                        temp2*=2;
                    if(abs(res[i])>abs(res[i]+temp1+temp2))
                        temp += temp1+temp2;
                        cout<<temp<<"\n";
                }
                res[i] = abs(temp);
        }

        for(i=0;i<t;i++)
            cout<<res[i]<<"\n";

}

int findiff(vector<string> str,int n){
        int j,k,sum1,sum2,res=0;
            for(j=0;j<n;j++){
                    sum1=0;
                    sum2=0;
                        for(k=0;k<n/2;k++)
                            sum1+=int(str[j][k])-48;
                        for(k=n/2;k<n;k++)
                            sum2+=int(str[j][k])-48;
                        res += sum1-sum2;
                }
        return res;
}
