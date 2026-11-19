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
    comp = 1 + rand() % 3;
    printf("Компьютер выбрал:\n");
    if (comp == 1)
    {
        printf("Камень\n");

    }
    else if (comp == 2)
    {
        printf("Ножницы\n");
    }
    else
    {
        printf("Бумага\n");
    }
    if (comp == player)
    {
        printf("Ничья!\n");
    }
    else if (player == 1 & comp == 2 || player == 2 & comp == 3 || player == 1 & comp == 3)
    {
        printf("Вы выиграли!\n");
    }
    else
    {
        printf("Вы проиграли...\n");
    }
    return 0;
}
