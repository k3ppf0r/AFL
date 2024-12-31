#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char a[50];
    scanf("%s", a);

    if(a[0] != 'k') {
        return 0;
    }

    int pos = 0;
    while(a[++pos] == 'a');

    if(a[pos] == '$') {
        puts("nice");
    }

    return 0;
}