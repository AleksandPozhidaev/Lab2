#include <stdio.h>     
#include <locale.h>
#define D 2.54
#define I 2.32166
#define S 2.7076
#define a1 1,852
#define a2 1,609
#define a3 1475
#define a4 7,468
#define a5 7412,6
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    zd1();
    zd2();
    zd3();
    res1();
    res2();
    kvdr();

    
    
}

    //задание 1
    
int zd1() {
        int num1, num2, num3;

        puts("Введите первое значение:");
        scanf("%d", &num1);
        printf("Введено значение: %d\n", num1);
        puts("\nВведите второе значение:");
        scanf("%d", &num2);
        printf("\nВведено значение: %d\n", num2);
        float chastnoe;
        chastnoe = (float)num2 / num1;
        printf("\nСумма: %d\nРазность: %d\nПроизведение: %d\nЧастное: %.3f\nОстаток: %d\n\n", num1 + num2, num1 - num2, num1 * num2, chastnoe, num2 % num1);
        system("pause");
}

        // задание 2
int zd2() {
        puts("\n\nВведите значение для расчёта:");
        int dym;
        float result, result1, result2, result3, result4, result5, result6, result7;
        scanf("%d", &dym);
        result = D * dym;
        result1 = I * dym;
        result2 = S * dym;
        result3 = a1 * dym;
        result4 = a2 * dym;
        result5 = a3 * dym;
        result6 = a4 * dym;
        result7 = a5 * dym;

        printf("\n%d английских дюймов – это %.1f см\n", dym, result);
        printf("%d испанских дюймов – это %.1f см\n", dym, result1);
        printf("%d старолитовских дюймов – это %.1f см\n", dym, result2);
        printf("%d морских миль – это %.1f м\n", dym, result3);
        printf("%d сухопутных миль – это %.1f км\n", dym, result4);
        printf("%d римских миль – это %.1f м\n", dym, result5);
        printf("%d старорусских миль – это %.1f км\n", dym, result6);
        printf("%d географических миль – это %.1f км\n\n", dym, result7);
        system("pause");
}
    


    //задание 3
int zd3() {
    float a, b;

    puts("\nВведите число A:");
    scanf("%f", &a);
    puts("\nВведите число B:");
    scanf("%f", &b);
    puts("_____________________________________________________________");
    puts("|     a   *   b     |     a    +    b   |      a   -   b    | ");
    puts("-------------------------------------------------------------");
    printf("|  %6.1f * %6.1f  |  %6.1f + %6.1f  |  %6.1f - %6.1f  |", a, b, a, b, a, b);
    puts("\n-------------------------------------------------------------");
    printf("|  %9.1f        |   %9.1f       |    %9.1f      |", a * b, a + b, a - b);
    puts("\n-------------------------------------------------------------");
    system("pause");
}  

    //Домашняя работа
float res1(float aaa)
{
    float ddd = aaa / 2;
    return ddd;
}

float res2(float aaa)
{
    float ccc = aaa / sqrt(2);
    return ccc;
}

float kvdr(void)
{
    setlocale(LC_ALL, "RUS");

    float aaa;
    float ccc = 0, ddd = 0;

    puts("Введите сторону квадрата:");
    scanf("%f", &aaa);
    printf("Сторона квадрата %f\n", aaa);

    //опис.окр

    puts("\nРадиус описанной окружности:");
    printf("%f", res1(aaa));

    //впис. окр
    puts("\nРадиус вписанной окружности:");
    printf("%f", res2(aaa));
}