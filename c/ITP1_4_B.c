//ITP1_4_B:   Circle
#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.141592653589;
    double r;
    scanf("%lf", &r);
    double menseki;
    double enshu;
    menseki = pow(r, 2) * pi;
    enshu = 2 * r * pi;
    printf("%f %f\n", menseki, enshu);
}