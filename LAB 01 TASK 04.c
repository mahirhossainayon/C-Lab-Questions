#include<stdio.h>
#include<string.h>
int main(){

char s1[30];
char s2[30];
printf("Please Enter Any String:");
gets(s1);
puts(s1);
printf("Please Enter Any String:");
gets(s2);
puts(s2);
int i=0,len=0;
while (s1[i]!='\0'){
    i++;
    len++;
}
 i=0;
 int flag=0;
while(i!=len){
   if (s1[i] != s2[i]){
    flag++;
    break;
   }
   i++;
}
 if (flag>0){
    printf("not same");
   }
   else {
    printf("same");
   }

}
