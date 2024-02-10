#include<stdio.h>
#include<string.h>
int main(){
char s1[30];
printf("Please Enter Any String:");
gets(s1);
puts(s1);
int vow=0,con=0,num=0,sp=0;
for(int i=0;i<strlen(s1);i++){
if(s1[i]>='a'&&s1[i]<= 'z'|| s1[i]>= 'A'&& s1[i]<= 'Z' ){
if(s1[i]== 'a'||s1[i]== 'e'||s1[i]== 'i'|| s1[i]== 'o'||s1[i]== 'u' ){
vow++;
}
else { con++; }
}
else if ( s1[i]>= '0' && s1[i]<= '9' ){
    num++;
}
else{
sp++;
}

}

printf("%i \n",vow);
printf("%i \n",con);
printf("%i \n",con+vow);
printf("%i \n",num);
printf("%i \n",sp);






}


