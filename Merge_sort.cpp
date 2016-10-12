#include<bits/stdc++.h>
using namespace std;

int n,i,j;
string a[10001],b[10001];
string* merge_sort(string *a,string *b, int l,int r){
    int i;
    if (l==r){
        b[l]=a[l];
        return b;
    }
    int m=(l+r)/2;
    string *l_b=merge_sort(a,b,l,m);
    string *r_b=merge_sort(a,b,m+1,r);
    string *t=l_b==a ? b:a;
    int w=r-l,l_cur=l,r_cur=m+1;
    for(i=l;i<=r;i++){
        if (l_cur<=m && r_cur <=r){
            if (l_b[l_cur]<r_b[r_cur]){
                t[i]=l_b[l_cur];
                l_cur++;
            } else {
                t[i]=r_b[r_cur];
                r_cur++;
            }
        } else if (l_cur<=m){
            t[i]=l_b[l_cur];
            l_cur++;
        } else {
            t[i]=r_b[r_cur];
            r_cur++;
        }
    }
    return t;
}

int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    string m[10001];
    *m=*merge_sort(a,b,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}
