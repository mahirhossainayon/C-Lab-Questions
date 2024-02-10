#include<stdio.h>
#include<math.h>
#define pi 3.14
float area(float x,float y,float a,float b);
int main(){
float a=4,b=10,x=1,y=5;
area(x,y,a,b);
}
float area(float x,float y,float a,float b){

float Power01=pow((a-x),2);
float power02=pow((b-y),2);
float radius = (sqrt(Power01+power02))/2;
float ar = pi*radius*radius;
printf("%.2f",ar);

}
