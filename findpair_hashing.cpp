#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n,i;
cin>>n;
ll a[n+1];
bool h[100002]={0};
for(i=0;i<n;i++)
{
cin>>a[i];
h[a[i]]=true;
}
ll q,p;
cin>>q;
while(q--)
{
cin>>p;
ll j=p-1,flag=0;
for(i=1;i<p;i++)
{
    if(h[i]==true && h[j]==true)
    {
        flag=1;
        cout<<"YES"<<endl;
        break;
    }
    else
    {
        j--;
    }
}
if(flag==0)
{
    cout<<"NO"<<endl;
}
}
return 0;
}
