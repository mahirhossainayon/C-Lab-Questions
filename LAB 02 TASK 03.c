#include<stdio.h>
void value(char ch);
int main(){
    char ch;
    printf("enter your character : ");
    scanf(" %c",&ch);
    value(ch);
}
void value(char ch){
 printf ("%d",ch);

}
