#include <stdio.h>

void idnChecker(int arr[3][3]);

int main() {
     int arr[3][3];
    for(int i=0;i<3;i++) {
             for(int j=0;j<3;j++){
              printf("enter %d row %d column : ",i,j);
              scanf("%d",&arr[i][j]);
                                }
                         }
    idnChecker(arr);
    return 0;
}

void idnChecker(int arr[3][3]) {
    int flag = 0;
    if(sizeof(arr[0])==sizeof(arr[0][0])){
        flag+=1;
    }

    sizeof(arr[0])+sizeof(arr[0][0]);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                if (arr[i][j] == 1) {
                    continue;
                } else {
                    flag += 1;
                    break;
                }
            } else {
                if (arr[i][j] == 0) {
                    continue;
                } else {
                    flag += 1;
                    break;
                }
            }
        }
    }
    if (flag > 0) {
        printf("Not an Identity matrix\n");
    } else {
        printf("Identity matrix\n");
    }
}
