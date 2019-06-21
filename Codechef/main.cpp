#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n,t,c;
    cin>>t;
    string str;
      for(int i=0;i<t;i++){
        cin>>n>>c;
        vector <int> v;
        getline(cin,str);
        for(int i=0,j=0;i<str.size();i++){
            if(str[i]!=' '){
                v[j]=str[i];
                j++;
            }
        }
        for(int i=0;i<vector.size();i++){
            cout<<v[i];
        }
    }
}
