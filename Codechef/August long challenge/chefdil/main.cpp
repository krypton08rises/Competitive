#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t,i,j,k;
    char key;
    cin>>t;
    string str,buf;
    getline(cin,buf);
    vector<string> res;
    for(i=0;i<t;i++){
            res.push_back("LOSE");
            getline(cin,str);
            j=0;
            key = str[j];
            j++;
            while(j<str.size()){
                if(key==str[j]){
                        j++;
                        continue;
                }
                str[j] = (str[j]=='0')?'1':'1';
                if(j+1!=str.size()-1){
                    j++;
                    str[j] = (str[j]=='1')?'0':'1';
                }
            }
            j--;
            if(str[j]=='1')
                res[i] = "WIN";
    }
    for(i=0;i<t;i++)
            cout<<res[i]<<"\n";
}
