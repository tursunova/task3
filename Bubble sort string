#include<bits/stdc++.h>
using namespace std;
int n,i,j;
string a[1000],c;

int main(){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if (a[j]<a[j-1]) swap(a[j-1],a[j]);
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}
