#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Russian");
    char c;
    short int shi;
    unsigned short int us;
    int i;
    unsigned char uc;
    wchar_t wt;
    long long int lli;
    size_t st;
    float f;
    double d;
    signed int sint;
    printf("Размеры типов данных (в байтах):\n\n");
    printf("1) char: %d\n", (int)((char*)(&c + 1) - (char*)(&c)));
    printf("2) short int: %d\n", (int)((char*)(&shi + 1) - (char*)(&shi)));
    printf("3) unsigned short int: %d\n", (int)((char*)(&us + 1) - (char*)(&us)));
    printf("4) int: %d\n", (int)((char*)(&i + 1) - (char*)(&i)));
    printf("5) unsigned char: %d\n", (int)((char*)(&uc + 1) - (char*)(&uc)));
    printf("6) wchar_t: %d\n", (int)((char*)(&wt + 1) - (char*)(&wt)));
    printf("7) long long int: %d\n", (int)((char*)(&lli + 1) - (char*)(&lli)));
    printf("8) size_t: %d\n", (int)((char*)(&st + 1) - (char*)(&st)));
    printf("9) float: %d\n", (int)((char*)(&f + 1) - (char*)(&f)));
    printf("10) double: %d\n", (int)((char*)(&d + 1) - (char*)(&d)));
    printf("11) signed int: %d\n", (int)((char*)(&sint + 1) - (char*)(&sint)));
    return 0;
}
