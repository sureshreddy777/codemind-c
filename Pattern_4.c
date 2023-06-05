#include<stdio.h>

int main() {
    int rows; 
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j <= rows - i; j++) {
            printf("*");
        }
        printf("
");
    }
    return 0;
}