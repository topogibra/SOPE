#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[],char const *envp[])
{
    int i = 0;
    const char * login = "LOGNAME";
    while(envp[i] != NULL){
        if (!strncmp(login,envp[i],7)){
            printf("Hello %s!\n",envp[i]+8);
            return 0;
        }
        i++;
    }
    return 0;
}
