#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "" // "calc.h"'s path
#include <math.h>

int spp(int n, int m)
{
    int a = n / m;
    int b = n % m;
    printf("%d * %d + %d \n", m, a, b);
}

int pri(int a)
{
    printf("%d\n", a);
}

float prf(float a)
{
    printf("%f\n", a);
}

double prd(double a)
{
    printf("%f\n", a);
}

char prc(char a)
{
    printf("%c\n", a);
}

int shutdown(int a)
{
    sleep(a);
    system("shutdown /s /t 0"); // windows
}

double power(double a, double b, double c)
{
    double d = pow(a, b);
    for (int i = b; i <= c; i++)
    {
        printf("%f\n", d);
        d *= 2;
    }
    
}

int dia(int n)
{
    int a = (n - 3) * n / 2;
    printf("%d\n",a);
}

double dipo(double a)
{
    double n;

    double discriminant = 9 + 8 * a;
    if (discriminant >= 0) {
        double sqrt_discriminant = sqrt(discriminant);
        double n1 = (3 + sqrt_discriminant) / 2;
        printf("%.2lf\n", n1);
    } else {
        printf("There are no real solutions.\n");
    }
}