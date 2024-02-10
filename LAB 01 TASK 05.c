#include<stdio.h>
#include<string.h>
int main(){

char s1[30];
printf("Please Enter Any String:");
gets(s1);
puts(s1);
for(int i=0;i<strlen(s1);i++){
if(s1[i]>='a' && s1[i]<= 'z'){
    s1[i]=s1[i]-32;

}}
printf("%s",s1);}
