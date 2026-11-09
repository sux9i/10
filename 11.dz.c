#include <stdio.h>
#include <math.h>
#include <locale.h>
#define SIZE 100
double funct(double x) {
    return pow(2.0, x) - 2.0 * x * x - 1.0;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double arr[SIZE], st = 2.0, end = 4.0, sum_polog = 0.0, sum_otric = 0.0;;
    double step = (end - st) / (SIZE - 1);
    int count_polog = 0, count_otric = 0;
    for (int i = 0; i < SIZE; i++) {
        double x = st + i * step; 
        arr[i] = funct((x));

        if (arr[i] > 0) {
            sum_polog += arr[i];
            count_polog++;
        }
        else if (arr[i] < 0) {
            sum_otric += arr[i];
            count_otric++;
        }
    }
    double sr_polog = 0.0;
    if (count_polog > 0) {
        sr_polog = sum_polog / count_otric;
    }
    printf("Имя массива: arr\n");
    printf("Накопленное значение (сумма) положительных: %.4f\n", sum_polog);
    printf("Накопленное значение (сумма) отрицательных: %.4f\n", sum_otric);
    printf("Число положительных элементов: %d\n", count_polog);
    printf("Число отрицательных элементов: %d\n", count_otric);
    printf("Среднее значение положительных элементов: %.4f\n", sr_polog);
    return 0;
}