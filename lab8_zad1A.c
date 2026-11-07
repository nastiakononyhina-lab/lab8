#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, m;
    long long p = 1;   // 2 в степени i

    // Часть 1: степени двойки от 0 до n
    printf("Введите степень n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("2^%d = %10lld\n", i, p);   // выравнивание по правому краю
        if (i < n)
            p *= 2;
    }
    printf("Результат: %lldK\n", p / 1024);   // K = 1024

    // Часть 2: степени двойки до числа m, результат с точностью 0.1
    printf("\nВведите число m: ");
    scanf("%d", &m);

    p = 1;
    for (int i = 0; p <= m; i++)
    {
        printf("2^%d = %10lld\n", i, p);
        p *= 2;
    }
    printf("Результат: %.1fK\n", m / 1024.0);

    return 0;
}
