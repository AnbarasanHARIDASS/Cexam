#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#define STACK SIZE 10
// Structuredefiningastack
struct stack
{
char elements [ STACK SIZE ] ;
int top ;
int size;
} ;
struct stack ∗  new_stack ( )
{
  Stack* st=(Stack*)malloc(sizeof(Stack));
  st->top = -1;
  st->size = 0;
  return st;
}
int main ( )
{
struct stack ∗ st = new stack ( ) ;
push ( ’H’ , i ) ;
push ( ’e’ , i ) ;
push ( ’l’ , i ) ;

1

push ( ’l’, i ) ;
push ( ’o’, i ) ;
print ( st ) ;
reverse_print ( st ) ;
}
