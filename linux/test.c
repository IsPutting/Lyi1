��#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
char *name1='今天';
wchar_t *name2='今天';
int main(){
    printf("%s\n",name1);
    printf("%s\n",name2);
    return 0;
}
