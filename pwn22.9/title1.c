#include <stdio.h>
void stack_overflow(){
 char buf[64] = {0};
 scanf("%s", &buf);
 printf("hello %s\n", &buf);
}
void get_shell(){
 system("/bin/sh");
}
int main(int argc, char const *argv[]){
 stack_overflow();
 return 0;
}
