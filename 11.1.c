#include <stdio.h>
#include <locale.h>
#define N 10
int main()
{
    setlocale(LC_ALL, "Russian");
    float A[N], B[N];
    float temp, sum = 0, sr;
    int i;
    printf("¬ведите 10 элементов массива:\n");
    for (i = 0; i < N; i++)
    {
        printf("A[%d] = ", i + 1);
        scanf_s("%f", &temp);
        A[i] = temp;
    }
    for (i = 0; i < N; i++)
    {
        B[i] = A[i] * A[i];
    }
    printf("\nиндекс | исходное значение | новое значение\n");
    printf("--------------------------------------------\n");
    for (i = 0; i < N; i++)
    {
        printf("%5d | %11.2f        | %9.2f\n",
            i + 1, A[i], B[i]);

        sum += B[i];
    }
    sr = sum / N;
    printf("\nсреднее арифметическое = %.2f\n", sr);
    return 0;
}