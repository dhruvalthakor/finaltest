#include <stdio.h>
//---------Q4---------
int isDivisible(int num) {
    return (num % 3 == 0) && (num % 5 == 0);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isDivisible(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }

    return 0;
}
