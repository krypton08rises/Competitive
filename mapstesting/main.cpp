#include <iostream>
#include <map>

using namespace std;

int main()
{
        map<int,int> p;
        p.insert(pair<int,int> (2,45));
        cout<<p[1];
}
