#include<stdio.h>
int multiplication(int num1, int num2){
    int x = num1*num2;
    return x;
}
int main(){
    int num1, num2, result;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    result = multiplication(num1, num2);
    printf("Result: %d", result);
}
