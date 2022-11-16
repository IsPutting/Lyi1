#include <stdio.h>
 
extern int count;
int hello;
void write_extern(void)
{
   printf("count is %d\n", count);
   return 0;
}