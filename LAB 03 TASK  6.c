#include <stdio.h>
void grade(int index,int mark);
int main (){
    int index,mark;
    printf("enter index : ");
    scanf("%d",&index);
    printf("enter mark : ");
    scanf("%d",&mark);
    grade(index,mark);
    }
    void grade(int index,int mark){
    if(mark >= 90 && mark <= 100)
    {
        printf("%d's grade is A+",index);
    }
    else if(mark >= 80 && mark < 90)
    {
        printf("%d's grade is B",index);
    }
    else if(mark >= 70 && mark < 80)
    {
        printf("%d's grade is C",index);
    }
    else if(mark >= 60 && mark < 70)
    {
        printf("%d's grade is D",index);
    }

    else if(mark >=0 && mark < 60)
    {
        printf("%d's grade is F",index);
    }
    else
    {
        printf("%d's grade is invalid",index);
    }



}














