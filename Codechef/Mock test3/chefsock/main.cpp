#include <iostream>

using namespace std;

int main()
{
    int jc,sc,money;
        cin>>jc>>sc>>money;
        if(((money-jc)/sc)%2==0)
            cout<<"Lucky Chef";
        else cout<<"Unlucky Chef";
}
