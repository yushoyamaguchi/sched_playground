#include <stdio.h>

int main() {
    int i;
    while(1){
        i++;
        if (i % 100000000 == 0)
            printf("%d\n", i);
    }
    return 0;
}