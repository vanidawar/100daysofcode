//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.//

#include <stdio.h>
int main() 
{
    int a, b;
    char operator;
    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &a, &b, &operator);
    switch(operator) 
    {
        case '+':
            printf("%d", a + b);
        case '-':
            printf("%d", a - b);
        case '*':
            printf("%d", a * b);
        case '/':
            if (b != 0)
                {printf("%d", a / b);}
            else
                {printf("Division by zero");}
        case '%':
            if (b != 0)
                {printf("%d\n", a % b);}
            else
                {printf("Modulus by zero");}
        default:
            printf("Invalid operator");
    }
}
