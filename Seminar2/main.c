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

    //������ 1. ����� ���� �����
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("%d+%d+%d=%d\n",a,b,c,a + b + c);
   
    //������ 2. ����� � ������������ ���� �����
    printf("Enter 3 numbers\n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("%d+%d+%d=%d\n", a,b,c,a + b + c);
    printf("%d*%d*%d=%d\n", a,b,c,a * b * c);

    //������ 3. �������� ���� �����
    printf("Enter 2 numbers\n");
    scanf_s("%d %d", &a, &b);
    printf("%d-%d=%d\n", a,b,a - b);


    //������ 4. ����� ������� �������������� ���� �����
    printf("Enter 4-range number\n");
    scanf_s("%d", &a);
    printf("Medius = %.2f\n", medium(a));

    return 0;
}