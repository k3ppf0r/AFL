#include <stdio.h>

void work() {
    for(int i=1; i<=10; i++) {
        printf("Hello, world %d\n", i);
    }
}

int main(void) {
    work();
    return 0;
}