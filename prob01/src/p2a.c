#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count = atoi(argv[2]);
    while(count){
        printf("Hello %s!\n", argv[1]);
        count--;
    }
    return 0;
}


