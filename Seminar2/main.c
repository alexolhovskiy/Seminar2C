#include <stdio.h>            
#include <locale.h>
#include <math.h>


double medium(int num) {
    int sum = 0, count = 0;
    while (abs(num) > 0) {
        sum += num % 10;
        count+=(num%10)>0?1:0;
        num /= 10;
    }
    return (double)sum / (double)count;
}


int main(void)
{
    setlocale(LC_ALL, "Rus");

    //Задача 1. Сумма трех чисел
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("%d+%d+%d=%d\n",a,b,c,a + b + c);
   
    //Задача 2. Сумма и произведение трех чисел
    printf("Enter 3 numbers\n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("%d+%d+%d=%d\n", a,b,c,a + b + c);
    printf("%d*%d*%d=%d\n", a,b,c,a * b * c);

    //Задача 3. Разность двух чисел
    printf("Enter 2 numbers\n");
    scanf_s("%d %d", &a, &b);
    printf("%d-%d=%d\n", a,b,a - b);


    //Задача 4. Найти среднее арифметическое цифр числа
    printf("Enter 4-range number\n");
    scanf_s("%d", &a);
    printf("Medius = %.2f\n", medium(a));

    return 0;
}