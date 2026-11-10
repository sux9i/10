#include <stdio.h>

int main() {
    int n;
    int arr[100];
    printf("Сколько чисел будет в массиве? ");
    scanf("%d", &n);
    printf("Введите числа через пробел: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int first = -1; 
    int last = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            first = i; 
            break;   
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > 0) {
            last = i;
            break;
        }
    }
    int sum = 0;
    for (int i = first + 1; i < last; i++) {
        sum = sum + arr[i]; 
    }
    printf("Сумма между ними: %d\n", sum);
    return 0;
}
