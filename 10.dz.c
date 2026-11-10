#include <stdio.h>
#include <locale.h>
float area_triangle(float a, float b) {
    return 0.5f * a * b;
}
void treug(int a, int b, char s) {
    for (int i = 1; i <= a; i++) {
        int count = (i * b) / a;
        for (int j = 0; j < count; j++) {
            printf("%c", s);
        }
        printf("\n");
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    float a, b;
    char s;
    printf("\nМЕНЮ (Прямоугольный треугольник)\n");
    printf("1. Рассчитать площадь\n");
    printf("2. Вывести определение фигуры\n");
    printf("3. Нарисовать фигуру\n");
    printf("Выберите действие: ");
    scanf_s("%d", &choice);
    if (choice == 1) {
        printf("Введите длину первого катета (a): ");
        scanf_s("%f", &a);
        printf("Введите длину второго катета (b): ");
        scanf_s("%f", &b);
        if (a > 0 && b > 0) {
            printf("Площадь прямоугольного треугольника: %.2f\n", area_triangle(a, b));
        }
        else {
            printf("Ошибка: стороны должны быть положительными!\n");
        }
    }
    else if (choice == 2) {
        printf("\nОпределение:\n");
        printf("Прямоугольный треугольник — это треугольник, в котором один угол прямой (равен 90 градусам).\n");
        printf("Стороны, образующие прямой угол, называются катетами, а сторона, лежащая напротив прямого угла — гипотенузой.\n");
    }
    else if (choice == 3) {
        printf("Введите размер первого катета (целое число): ");
        scanf_s("%f", &a);
        printf("Введите размер второгоо катета (целое число): ");
        scanf_s("%f", &b);
        printf("Введите символ для рисования: ");
        scanf_s(" %c", &s);
        if (a > 0 && b > 0) {
            printf("\nРисуем треугольник:\n");
            treug((int)a, (int)b, s);
        }
        else {
            printf("Ошибка: стороны должны быть положительными!\n");
        }
    }
    return 0;
}
