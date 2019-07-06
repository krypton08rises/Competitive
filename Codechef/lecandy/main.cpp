#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int n,t,c,i,j,num,sum;
    vector <string> str;

    cin>>t;

    for(i=0;i<t;i++){
            str.push_back("");
            sum=0;
            cin>>n>>c;
            for(int j=0;j<n;j++){
                        cin>>num;
                        sum+=num;
                    }

            if(sum<=c)
                    str[i]="yes";
                else
                        str[i]="no";
        }

        for(i=0;i<t;i++)
                cout<<str[i]<<endl;

    }

