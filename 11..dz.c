#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    printf("Введите количество элементов массива: ");
    scanf_s("%d", &n);
    int arr[100];
    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    int first_pos = -1;
    int last_pos = -1;  
    int sum = 0;      
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            first_pos = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > 0) {
            last_pos = i;
            break; 
        }
    }
    if (first_pos != -1 && last_pos != -1 && last_pos > first_pos + 1) {
        for (int i = first_pos + 1; i < last_pos; i++) {
            sum = sum + arr[i];
        }
        printf("\nСумма элементов между первым и последним положительными: %d\n", sum);
    }
    else {
        printf("\nМежду первым и последним положительными элементами нет других чисел (или их вообще нет). Сумма = 0\n");
    }
    return 0;
}
