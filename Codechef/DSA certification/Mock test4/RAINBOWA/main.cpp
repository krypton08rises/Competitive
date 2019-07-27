#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,i,n,j;
    cin>>t;
    vector<int> v;
    vector<string> str;
    for(i=0;i<t;i++){
        cin>>n;
        str.push_back("yes");
        for(j=0;j<n;j++){
                v.push_back(0);
                cin>>v[j];
                if(v[j]>10)
                    return 0;
        }
        /*
        if(n%2!=0 && v[n/2]!=v[(n/2)-1]+1)
            str[i]="no";
        else if((v[(n/2)-1] != v[n/2] || v[(n/2)-1] != v[(n/2)-2]-1)){
            str[i]="no";
        }
        */

        for(j=0;j<n/2;j++){
            if(v[j]!=v[n-j-1] && (v[j]!=v[j-1]+1 || v[j]!=v[j-1]))
                str[i]="no";
        }
        if(v[j]!=v[j+1]-1 || v[j]!=v[j+1])
            str[i]="no";
        v.clear();
    }

    for(i=0;i<t;i++){
        cout<<str[i]<<"\n";
    }
}
