#include<bits/stdc++.h>
using namespace std;
int n,i,j;
string a[10001],x;

int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        j=i;
        x=a[i];
        while(j>0 && a[j-1]>x){
            a[j]=a[j-1];
            j--;
        }
        a[j]=x;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}
