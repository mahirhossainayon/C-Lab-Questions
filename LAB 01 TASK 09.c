#include<stdio.h>
#include<string.h>
int main(){
printf("Please Enter Any String:");
char s1[100];
gets(s1);
puts(s1);
int s=0,i=0;
    while (s1[i]!='\0'){
        s++;i++;
    }
    for (int j=s-1;j>=0;j--){
        printf("%c",s1[j]);

    }
}
