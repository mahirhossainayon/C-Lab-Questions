#include<stdio.h>
int main(){

    int row;
    scanf("%d",&row);
     int col;
    scanf("%d",&col);
int arr[row][col];
    for (int i = 0; i < row; i++) {
     for (int j = 0; j< col; j++) {
        scanf("%d",&arr[i][j]);}
    }
float max01=0,max02=0;
for (int i = 0; i <row; i++) {
     for (int j = 0; j< col; j++) {
        if(arr[i][j]>max01){
        max01=arr[i][j];
    }}
    printf("Highest in %dst city : %f \n",i+1,max01);
    max01=0;

}}
