#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ins(vector<int> v, int n);
void del(vector<int> v, int n);
void mea(vector<int> v);
void med(vector<int> v);
void mod(vector<int> v);

int main()
{
        int q,n;
        string str,buf;
        vector<int> v;
        getline(cin,buf);
        cin>>q;
        while(q!=0)
        {
            getline(cin,str);
            if(!strcmp(str,"Insert"))
            {
                    cin>>n;
                    ins(v,n);
            }

            if(!strcmp(str,"Delete"))
            {
                    cin>>n;
                    del(v,n);
            }

            if(!strcmp(str,"Mean"))
            {
                    mea(v);
            }

            if(!strcmp(str,"Median"))
            {
                    med(v);
            }

            if(!strcmp(str,"Mode"))
            {
                    mod(v);
            }
            q--;
        }
}

vector<int> ins(vector<int> v, int n)
{
    v.push_back(n);
}

vector<int> del(vector<int> v, int n)
{
    v.pop_back(n);
}

void mea(vector<int> v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    sum/=v.size();
    cout<<sum;
}

void med(vector<int> v)
{
    int ans,n = v.size();
    sort(v.begin(),v.end());
    if(n%2==0)
        ans = (v[n/2-1] + v[n/2])/2;
        else
            ans = v[n/2];
        cout<<ans;
}

void mod(vector<int> v)
{

}
