#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Вариант 11: y = 5*x^3 + 2*x^2 - 15*x - 6, интервал [1.3; 3.4]

int main()
{
    setlocale(LC_ALL, "Russian");

    float a = 1.3f;   // начало интервала
    float b = 3.4f;   // конец интервала
    float h, x, y;

    printf("Табулирование функции y = 5x^3 + 2x^2 - 15x - 6 на отрезке [1.3; 3.4]\n");
    printf("Введите шаг табуляции: ");
    scanf("%f", &h);

    printf("______________\n");
    printf("|  x   |  f(x)   |\n");
    printf("______________\n");

    // 0.0001 нужно, чтобы последняя точка не потерялась из-за погрешности float
    for (x = a; x <= b + 0.0001f; x += h)
    {
        y = 5 * x * x * x + 2 * x * x - 15 * x - 6;
        printf("| %4.2f | %7.3f |\n", x, y);
    }

    return 0;
}
