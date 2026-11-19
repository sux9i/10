#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int m = 1 + rand() % 10;
    int k;
    printf("Предлагаем поиграть в игру ''Угадай число''. Ваша задача угадать число, которое загадал компьютер.\n");
    printf("Введите число от 1 до 10\n");
    scanf_s("%d", &k);
    if (k == m)
    {
        printf("Вы угадали число %d\n", m);

    }
    else
    {
        printf("Вы проиграли. Компьютер загадал число %d\n", m);
    }
    return 0;
}
