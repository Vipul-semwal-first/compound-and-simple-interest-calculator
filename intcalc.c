#include<stdio.h>
int main(){
    float p, n, r, ci, si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the number of years: ");
    scanf("%f", &n);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    si = (p * n * r) / 100;
    ci = p * (pow(1 + r / 100.0, n)) - p;
    printf("Simple Interest: %f\n", si);
    printf("Compound Interest: %f\n", ci);
    printf("Total Amount with Simple Interest: %f\n", p + si);
    printf("Total Amount with Compound Interest: %f\n", p + ci);
    return 0;
}