#include<stdio.h>
#include<string.h>
int main(){
char name[30];
printf("Please Enter Any String:  ");
fgets(name,30,stdin);
puts(name);
int i=0,len=0;
while (name[i]!='\0'){
    i++;
    len++;
}
printf("length:%d \n",len-1);// fgets function includes /n
printf("length:%d",strlen(name)-1);// fgets function includes /n

}

