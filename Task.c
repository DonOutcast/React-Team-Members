#include <stdio.h>
int main() {
    char array[50];
    int i = 0;
    while (1) {
     scanf("%c", &array[i]);
    if (array[i] == '\n') {
        break;
    }
    i++;
    }
    for (int j = 0; j < i; j++) {
        if ((array[j] >= 'a') && (array[j] <= 'z')) {
            if (j == 0) {
                array[j] -= 32;
            }
        }
        if ((array[j+ 1] >= 'a') && (array[j + 1] <= 'z')) {
        if (array[j] == ' ') {
            array[j+1] -= 32;
        }
        }
    }
    for (int j = 0; j <= i; j++) {
        printf("%c", array[j]);
    }
    return 0;
    printf("Hello Shamil");
}