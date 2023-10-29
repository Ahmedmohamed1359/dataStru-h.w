// 3-//

#include <stdio.h>

int main() {
    int start = 54;
    int end = 102;
    int increment = 4;

    for (int i = start; i <= end; i += increment) {
        printf("%d", i);

        if (i + increment <= end) {
            printf("->");
        } else {
            printf("\n");
        }
    }

    return 0;
}
