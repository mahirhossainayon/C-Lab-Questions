
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
while(s2[i]!='\0'){
    s1[len] = s2[i];
    len++;
    i++;
}
printf("%s",s1);

//with function

printf("\n");
printf("Please Enter Any String:");
gets(s1);
puts(s1);
printf("Please Enter Any String:");
gets(s2);
puts(s2);
strcat(s1,s2);
printf("%s",s1);
}


