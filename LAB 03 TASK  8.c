#include <stdio.h>
void eligble(int marksMath,int marksPhysics,int marksChemistry );
int main() {
    int marksMath, marksPhysics, marksChemistry;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &marksMath);

    printf("Enter marks in Physics: ");
    scanf("%d", &marksPhysics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &marksChemistry);
    eligble (marksMath,marksPhysics,marksChemistry);
}

void eligble (int marksMath,int marksPhysics,int marksChemistry ){
    if (marksMath >= 60 && marksPhysics >= 50 && marksChemistry >= 40 && (marksMath + marksPhysics + marksChemistry) >= 200) {
        printf("Congratulations! You are eligible for admission.\n");
    } else if ((marksMath + marksPhysics) >= 150) {
        printf("Congratulations! You are eligible for admission.\n");
    } else {
        printf("Sorry, you are not eligible for admission.\n");
    }

}

