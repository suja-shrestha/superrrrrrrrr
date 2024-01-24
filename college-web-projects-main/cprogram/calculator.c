//WAP to create a simple console calculator!
#include <stdio.h>

int main(){
    char op;
    int x,y,z;
    printf("***Console Calculator***");
    printf("\nEnter operator (+, -, * or /): ");
    scanf("%c", &op);
    printf("Enter Number x : ");
    scanf("%d", &x);
    printf("Enter number y: ");
    scanf("%d",&y);

    switch (op){
        case '+':
            z = x+y;
            printf("Sum: %d", z);
            break;
        case '-':
            z = x - y;
            printf("Difference: %d",z);
            break;
        case '*':
            z = x * y;
            printf("Product: %d", z);
            break;
        case '/':
            z = x / y;
            printf("Result: %d", z);
            break;
        default:
            printf("Invalid sign! Try again!");
            break;
    }
    return 0;
}
