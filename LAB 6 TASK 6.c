#include <stdio.h>

void input(int arr[2][3]);
void print(int arr[3][2]);
void transpose(int arr[2][3], int arrT[3][2]);
void printO(int arr[2][3]);

int main() {
    int arr[2][3];
    int arrT[3][2];
    input(arr);
    transpose(arr, arrT);
    printO(arr);
    print(arrT);

    return 0;
}

void input(int arr[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter %d row %d column: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printO(int arr[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
    }
        printf("\n");
    }
}

void print(int arrT[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arrT[i][j]);
    }
        printf("\n");
}
}

void transpose(int arr[2][3], int arrT[3][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arrT[j][i] = arr[i][j];
}
}
}
