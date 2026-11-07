#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, m;
    int s = 0;   // сумма (объявлена до цикла)
    int k = 1;   // номер итерации

    printf("Введите m (начало, m >= n): ");
    scanf("%d", &m);
    printf("Введите n (конец): ");
    scanf("%d", &n);

    for (int i = m; i >= n; i--)
    {
        s += i;
        printf("выполнено %d раз\n", k++);
    }

    printf("результат %d\n", s);
    return 0;
}
