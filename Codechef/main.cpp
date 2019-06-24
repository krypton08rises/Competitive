#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n,t,c,i,j;

    cin>>t;

    int num;
    vector <int> v;
    vector <string> str;

    for(i=0;i<t;i++){

            int sum=0;
            cin>>n>>c;

            for(j=0;j<n;j++){
                        cin>>num;
                        v.push_back(num);
                    }

            for(j=0;j<v.size();j++){
                        sum+=v[j];
            }

            if(sum<=c)

                    str[i]="yes";

            else

                    str[i]="no";
            v.clear();
        }

        for(i=0;i<str.size();i++)
                cout<<str[i]<<endl;

    }

