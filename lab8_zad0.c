#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    char c;

    printf("Сколько символов печатать? ");
    scanf("%d", &n);
    printf("Какой символ печатать? ");
    scanf(" %c", &c);

    for (int start = 1; start <= n; start++)
        putchar(c);

    putchar('\n');
    return 0;
}
