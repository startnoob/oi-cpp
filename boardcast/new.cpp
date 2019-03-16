/*************************************************************************
	> File Name: new.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2019年03月16日 星期六 11时23分52秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    string name;
    int score;
    Node* next;
};
Node *head,*p,*r;
int main()
{
    int t;
    cin>>t;
    head=new Node;
    r=head;
    while(t--)
    {
        string in;
        int in1;
        cin>>in>>in1;
        p=new Node;
        p->name=in;
        p->score=in1;
        p->next=NULL;
        r->next=p;
        r=p;
    }
    p=head->next;
    while(p->next!=NULL)
    {
        cout<<p->name<<endl;
        p=p->next;
    }
    cout<<p->name<<endl;
    return 0;
}
