#include "stack.h"

char push(char c) {
  if(stack.size == STACKSIZE)
    return 0;
  return stack.data[stack.size++] = c;
}

char pop() {
  if(stack.size == 0)
    return 0;
  return stack.data[--stack.size];
}

char peek() {
  if(stack.size == 0)
    return 0;
  return stack.data[stack.size-1];
}

/*
Klammerproblem:
push (
kommt ) schau in stack ob ( vorhanden, wenn ja, pull (, wenn nein, nächste Klammer usw.

(()(()))
push (
push (
pull )
push (
push (
pull )
pull )
pull )
Stack leer: richtig
Stack nicht leer: fehler

*/
