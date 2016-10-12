#include<stdio.h>
#include<math.h>

int n,i,j,a[1000];

int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>=i;j--){
            if (a[j]<a[j-1]) {a[j]=a[j]+a[j-1];a[j-1]=a[j]-a[j-1];a[j]=a[j]-a[j-1];}
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
