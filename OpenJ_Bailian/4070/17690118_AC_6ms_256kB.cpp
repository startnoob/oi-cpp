#include"stdio.h"
int main(){
int i,j,k,a[10]={0},n,h;
while(scanf("%d",&n)!=EOF){
for(i=1;i<=n;i++){a[i]=i;printf("%d ",a[i]);}
printf("\n");
for(;;){
j=0;
for(i=1;i<n;i++)if(a[i]<a[i+1])j++;
if(j==0)break;
for(i=n-1;i>0;i--)if(a[i]<a[i+1])break;
j=a[i+1];
for(h=i+1;h<=n;h++){if(a[h]<=j&&a[h]>a[i]){j=a[h];k=h;}}
h=a[i];a[i]=a[k];a[k]=h;
int b[10]={0};j=0;k=i+1;
for(;k<=n;k++){b[j]=a[k];j++;}k=i+1;j--;
for(;k<=n;k++){a[k]=b[j];j--;}
for(i=1;i<=n;i++)printf("%d ",a[i]);
printf("\n");}}

return 0;}