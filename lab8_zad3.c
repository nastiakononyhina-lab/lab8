#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Вариант 11: для заданного n вычислить произведение
// (1 - 1/2^2) * (1 - 1/3^2) * ... * (1 - 1/n^2)
//
// Контрольные примеры:
// n = 2 -> 1 - 1/4 = 0.75
// n = 3 -> 0.75 * (1 - 1/9) = 0.6667
// n = 4 -> 0.6667 * (1 - 1/16) = 0.625

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    double p = 1;   // произведение

    printf("Введите n (n >= 2): ");
    scanf("%d", &n);

    for (int k = 2; k <= n; k++)
        p = p * (1 - 1.0 / (k * k));

    printf("Результат: %f\n", p);

    return 0;
}
