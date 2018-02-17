#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n+1];
int h[100002]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];
    h[arr[i]]++;
}
int p;
cin>>p;
for(int i=0;i<n;i++){
    if(h[p-arr[i]]){
        if(p==2*arr[i]){
            if(h[arr[i]]>=2){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            cout<<"YES"<<endl;
            return 0;
        }
    }
}
cout<<"NO"<<endl;



return 0;
}
