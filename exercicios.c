#include <stdio.h>

void soma(int* s2) {
    printf("A Soma é %d\n", (*s2));

}

int main() {

    int a = 3;
    int b = 6;
    int s = a + b;


    soma(&s);
}