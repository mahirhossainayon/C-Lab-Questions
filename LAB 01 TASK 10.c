#include<stdio.h>
#include<string.h>
int main(){
char s1[30];
printf("Please Enter Any String:");
gets(s1);
puts(s1);
int coun=0;
for(int i=0;i<strlen(s1);i++){
if(s1[i]>='a'&&s1[i]<= 'z'|| s1[i]>= 'A'&& s1[i]<= 'Z' ){

coun++;
}
}



printf("%i \n",coun);}
