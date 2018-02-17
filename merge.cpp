#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* next;
};
node* input(int n)
{
    node* head;
    node* tail;
    tail=NULL;
    head=NULL;
    while(n--)
    {
        node* temp = new node;
        cin>>temp->data;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    return head;
}
int main()
{
int n,m;
cin>>n;
node* head= input(n);
cin>>m;
node* head1= input(m);


node* head3;
node* temp;
node* temp1;
temp=head;
temp1=head1;
if(temp->data>temp1->data)
{
    head3=temp1;
    temp1=temp1->next;
}
else
{
    head3=temp;
    temp=temp->next;
}
node* tempo=head3;

while(temp && temp1)
{
    if(temp->data>temp1->data)
{
    tempo->next=temp1;
    temp1=temp1->next;
}
else
{
    tempo->next=temp;
    temp=temp->next;
}
tempo=tempo->next;

}
node* tent=temp==NULL ? temp1:temp;
tempo->next=tent;
tempo=head3;
while(tempo)
{
    cout<<tempo->data<<" ";
    tempo=tempo->next;
}


}

