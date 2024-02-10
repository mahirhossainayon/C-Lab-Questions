#include<stdio.h>

void arraSum(int arrA[2][2], int arrB[2][3], int arrC[2][3]);
void print(int arrC[2][3]);
 void inputA(int arrA[2][2]);
 void inputB(int arrB[2][3]);
int main() {
int  arrA[2][2],arrB[2][3],arrC[2][3]={};
inputA(arrA);
inputB(arrB);
    arraSum(arrA, arrB, arrC);
    print(arrC);
    return 0;
}
  void inputA(int arrA[2][2]){
    for(int i=0;i<2;i++) {
             for(int j=0;j<2;j++){
              printf("enter %d row %d column : ",i,j);
              scanf("%d",&arrA[i][j]);
                                 }
                         }}
void inputB(int arrB[2][3]){
    for(int i=0;i<2;i++) {
             for(int j=0;j<3;j++){
              printf("enter %d row %d column : ",i,j);
              scanf("%d",&arrB[i][j]);
                                 }
                         }}
void arraSum(int arrA[2][2], int arrB[2][3], int arrC[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
}

void print(int arrC[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d ", arrC[i][j]);
        }
        printf("\n");
    }
}
