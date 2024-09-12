#include <stdio.h>
#include <math.h>
#include <locale.h> 


int main() 
{
    setlocale(LC_ALL, "Russian");
    double x1, y1, r1, x2, y2, r2, distance, pow1, pow2;

    printf("Введите координаты x,y и радиус первой окружности r: ");
    scanf_s("%lf %lf %lf", &x1, &y1, &r1);

    printf("Введите координаты x,y и радиус второй окружности r: ");
    scanf_s("%lf %lf %lf", &x2, &y2, &r2);

    pow1 = pow((x1 - x2), 2.0);
    pow2 = pow((y1 - y2), 2.0);

    distance = sqrt(pow1 + pow2);
    
    if (distance < r1 + r2) {
        printf("Окружности пересекаются");
    }
    
    if (distance == r1 + r2) {
        printf("Окружности касаются");
    }
    
    if (distance > r1 + r2) {
        printf("Окружности не пересекаются");
    }
    
}
