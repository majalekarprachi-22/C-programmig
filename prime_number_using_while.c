#include <stdio.h>

int main() {
    int number, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= number / 2) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (number > 1 && flag == 0)
        printf("%d is a Prime Number", number);
    else
        printf("%d is not a Prime Number", number);

    return 0;
}
