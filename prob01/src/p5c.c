#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[],char const *envp[])
{
    printf("Hello %s!\n",getenv("USER_NAME"));
    return 0;
}
