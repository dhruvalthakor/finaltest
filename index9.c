#include <stdio.h>

int main() {
    int i, j;
    for(i = 5; i >= 1; i--) {
        for(j = 8; j >= i; j--) {
            if(j <= 5) printf("%d", j);
            else printf("-");
        }
        printf("\n");
    }
    return 0;
}

