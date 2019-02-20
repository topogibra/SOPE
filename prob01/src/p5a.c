#include <stdio.h>


int main(int argc, char const *argv[],char const *envp[])
{
    int i = 0;
    while(envp[i] != NULL){
        puts(envp[i]);
        i++;
    }
    return 0;
}
