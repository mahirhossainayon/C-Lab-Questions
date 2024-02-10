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
int i=0;
while(s2[i]!='\0'){
    s1[i] = s2[i];
    i++;
}
printf("%s",s1);

printf("\n");
printf("Please Enter Any String:");
gets(s1);
puts(s1);
printf("Please Enter Any String:");
gets(s2);
puts(s2);
strcpy(s1,s2);
printf("%s",s1);
}
