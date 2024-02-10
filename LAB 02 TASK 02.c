#include<stdio.h>
void totalSalary(int sold,int monthlysales, int sold_money,int com_money,int ind );
int main (){
int sold,monthlysales,sold_money,com_money,ind ;
printf(" minimum base salary:15000 TK \n Bonus for every computers sold: 200 TK \n commission for the total monthly sales: 2 percent \n");
printf("enter number of sold computers: ");
scanf("%d",&sold);
printf("enter indivisiual price: ");
scanf("%d",&ind);
totalSalary(sold,monthlysales,sold_money,com_money,ind );
}
void totalSalary(int sold,int monthlysales, int sold_money,int com_money,int ind ){

sold_money= sold*200;
monthlysales = ind*sold;
com_money = monthlysales*0.02;
printf("total salary = %d \n",(15000+sold_money+com_money));
}

