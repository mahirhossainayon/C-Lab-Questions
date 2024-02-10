#include<stdio.h>
int arraSum(int arrA[2][2],int arrB[2][2],int arrC[2][2]);
void print(int arrC[2][2]);
void inputA(int arrA[2][2]);
void inputB(int arrB[2][2]);
int main(){
    int arrA[2][2],arrB[2][2],arrC[2][2];
    inputA(arrA);
    inputB(arrB);
    arraSum(arrA,arrB,arrC);
    print(arrC);
}
void inputA(int arrA[2][2]){
    for(int i=0;i<2;i++) {
             for(int j=0;j<2;j++){
              printf("enter %d row %d column : ",i,j);
              scanf("%d",&arrA[i][j]);
                                 }
                         }}
void inputB(int arrB[2][2]){
    for(int i=0;i<2;i++) {
             for(int j=0;j<2;j++){
              printf("enter %d row %d column : ",i,j);
              scanf("%d",&arrB[i][j]);
                                 }
                         }}
int arraSum(int arrA[2][2],int arrB[2][2],int arrC[2][2]){
     for(int i=0;i<2;i++) {
             for(int j=0;j<2;j++){
            arrC[i][j]=arrA[i][j] + arrB[i][j];
                                 }
                         }
                                         }
void print(int arrC[2][2]){
    for(int i=0;i<2;i++) {
             for(int j=0;j<2;j++){
             printf("%2d ",arrC[i][j]);
                                 }
             printf("\n");
                         }
                         }
