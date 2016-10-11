#include<bits/stdc++.h>
using namespace std;

int n,i,j;
string a[10001],b[10001];
void quickSort(string *a, int n) {
  int i=0,j=n-1;
  string t,p;
  p=a[rand()%n];
  do{
    while(a[i]<p)i++;
    while(a[j]>p)j--;
    if(i<=j){
      t=a[i];
      a[i]=a[j];
      a[j]=t;
      i++;
      j--;
    }
  } while(i<=j);
  if (j>0) quickSort(a,j);
  if (n>i) quickSort(a+i,n-i);
}
int main(){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}

