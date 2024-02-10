#include<stdio.h>
#include<string.h>
int main(){

char s1[30];
printf("Please Enter Any String:");
gets(s1);
puts(s1);
int count=0;
for(int i=0;i<strlen(s1);i++){
if(s1[i]== ' '||s1[i]== '\n'||s1[i]== '\t'  ){
count++;

}}
printf("%i",count);}
