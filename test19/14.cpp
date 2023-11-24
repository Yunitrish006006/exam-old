#include <stdio.h>
#include <stdlib.h>
double Leibniz(int);
double power(double, int);
int main(void) {
    printf("Leibniz(%d)=%f\n", 1000, Leibniz(1000));
    // system("pause");
    return 0;
}
double Leibniz(int n) {
    int k;
    double sum=0.;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sum += (power(-1,n))/((2.0 * i) + 1);
        else
            sum -= (power(-1,n))/((2.0 * i) + 1);
            printf("%f\n",(power(-1,n))/((2.0 * i) + 1));
    }
    return 4*sum;
}
double power(double base, int n) {
    int i;
    double pow=1.0;

    for (i=0;i<n;i++) {
        pow*=base;
    }

    return pow;
}