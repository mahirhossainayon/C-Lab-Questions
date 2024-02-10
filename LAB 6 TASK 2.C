#include<stdio.h>
void input(int arr[3][3]);
void print(int arr[3][3]);
int main(){
    int arr[3][3];
    input(arr);
    print(arr);
}
void input(int arr[3][3]){
    for(int i=0;i<3;i++) {
             for(int j=0;j<3;j++){
              printf("enter %d row %d column : ",i,j);
              scanf("%d",&arr[i][j]);
                                 }
                         }
                        }
void print(int arr[3][3]){
    for(int i=0;i<3;i++) {
             for(int j=0;j<3;j++){
             printf("%d ",arr[i][j]);
                                 }
             printf("\n");
                         }
                        }
