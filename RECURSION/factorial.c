#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    int n = 6;
    // printf("Enter n :");
    // scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}