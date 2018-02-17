#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
int main()
{
    int n;
    cin>>n;
    node *head;
    head=NULL;
    while(n--)
    {
        node* temp= new node;
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            node* temp1=head;
            while(temp1->next)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
