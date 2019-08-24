#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class node
{
    public:
    int t,x,maxdiff;
    Node *next;
};

class List:public Node
{

    Node *first,*last;
public:
    List()
    {
        first=NULL;
        last=NULL;
    }

    void create(int t,int x);
};

void List::create(int t, int x)
{
    Node *temp = new Node;
    temp->t=t;
    temp->x=x;
    temp->maxdiff = x-t;
    //temp->next=NULL;
    if(first==nullptr)
    {
        first=temp;
        last=first;
    }

    else
    {
        while(((first->next)->maxdiff)<(temp->maxdiff) || first->next==nullptr)
            first = first->next;
        if(first->next!=nullptr)
        {
                temp->next = first->next;
                temp = first->next;
        }

        last->next=temp;
        last=temp;
    }
}

int main()
{
    List list = new List;
    struct Node *Head = nullptr;
    int n,i,res=0,temp=0;
    vector<int> t,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        t.push_back(0);
        x.push_back(0);
        cin>>t[i]>>x[i];
    }
   // for()

    cout<<res;
}
/*
2
1 1
2 1
*/


/*
5
2 1
1 1
4 5
2 0
5 1
*/

