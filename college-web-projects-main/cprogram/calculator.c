#include <stdio.h>
int main()
{
    char op;
    int a, b, c;
    printf("enter operator * / + _");
    scanf("%c", &op);
    printf("enter number a");
    scanf("%d", &a);
    printf("enter number b");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        c = a + b;
        printf("sum of this number is:%d", c);
        break;
    case '-':
        c = a - b;
        printf("minus of this number is:%d", c);
        break;
    case '/':
        c = a / b;
        printf("divided number is :%d", c);
        break;
    case '*':
        c = a *b;
        printf("multiplication of this number is :%d", c);
        break;
    default:
        printf("invalid op");
        default;
    }
    return 0;
}
