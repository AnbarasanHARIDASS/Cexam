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
char top(Stack* st)
{
  if(empty(st))
  {
    printf("stack empty\n");
    exit(exit_failure);
  }
  return st->elements[st->top];
}
int size(Stack* st)
{
  return st->size;
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
