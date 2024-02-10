#include<stdio.h>
int main(){
   int n;
    scanf("%d",&n);
int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


int s,a;
scanf("%d", &s);
for (int i=n;i>=s;i--){
    arr[i]=arr[i-1];
}
scanf("%d", &a);
arr[s]=a;

for(int i=0; i<=n;i++){
    printf("%d ",arr[i]);
}}
