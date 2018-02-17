#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    set <int> s;
    set <int> s1;
    set <int> s2;
    ll n,m,i;
    cin>>n;
    ll a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s1.insert(a);
    }
    cin>>m;
    ll b;
    for(i=0;i<m;i++)
    {
        cin>>b;
        s2.insert(b);
    }


    auto f1=s1.begin(),f2=s2.begin();
    //cout<<*f1<<endl;
    while(f1!=s1.end() && f2!=s2.end()){
        if(*f1==*f2){
            cout<<*f1<<" ";
            f1++;
            f2++;
        }
        else if(*f1>*f2){
            f2++;
        }
        else{
            f1++;
        }
    }


    return 0;

}
