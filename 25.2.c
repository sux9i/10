#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    int player, comp;
    printf("Предлагаем поиграть в игру ''Камень/ножницы/бумага''. 1 - камень, 2 - ножницы, 3 - бумага \n");
    printf("Введите число от 1 до 3\n");
    scanf_s("%d", &player);
    сomp = 1 + rand() % 3;
    printf("Компьютер выбрал: &comp\n");
    if (comp == 1)
    {
        printf("Камень\n");

    }
    else if (comp==2)
    {
        printf("Ножницы\n");
    }
    else
    {
        printf("Бумага\n");
    }
    return 0;
}