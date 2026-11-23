#include <stdio.h>
#include <locale.h>
int* reverse(int* start, int* end)
{
    static int b[100];
    int i, n;
    n = end - start + 1;
    for (i = 0; i < n; i++)
    {
        b[i] = start[n - 1 - i];
    }
    return b;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[100], n, i;
    int* b;
    printf("Введите количество элементов: ");
    scanf_s("%d", &n);
    printf("Введите элементы массива:\n");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    b = reverse(a, a + n - 1);
    printf("Результат:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
