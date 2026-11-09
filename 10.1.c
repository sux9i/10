#include <stdio.h>
#include <math.h>
#include <locale.h>
double F1(double x) {
    double y;
    if (x <= 3) {
        y = x * x - 3 * x + 9;
    }
    else {
        y = 1.0 / (x * x * x + 3);
    }
    return y;
}
double F2(double x) {
    double y;
    y = x * exp(sin(x * x));
    return y;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double x, a, b;
    int choice;
    printf("Введите значение x: ");
    scanf_s("%lf", &x);
    a = F1(x);
    b = F2(x);
    printf("\n--- МЕНЮ (Выберите действие) ---\n");
    printf("1. Вывести значения функций F1(x) и F2(x)\n");
    printf("2. Вычислить произведение F1(x) * F2(x)\n");
    printf("3. Вычислить разность квадратов F1(x)^2 - F2(x)^2\n");
    printf("4. Вычислить удвоенную сумму 2 * (F1(x) + F2(x))\n");
    printf("Ваш выбор: ");
    scanf_s("%d", &choice);
    if (choice == 1) {
        printf("F1(x) = %lf, F2(x) = %lf\n", a, b);
    }
    else if (choice == 2) {
        printf("Произведение F1 * F2 = %lf\n", a * b);
    }
    else if (choice == 3) {
        printf("Разность квадратов F1^2 - F2^2 = %lf\n", a * a - b * b);
    }
    else if (choice == 4) {
        printf("Удвоенная сумма 2 * (F1 + F2) = %lf\n", 2 * (a + b));
    }
    else {
        printf("Ошибка: выбран неверный пункт меню.\n");
    }
    return 0;
}