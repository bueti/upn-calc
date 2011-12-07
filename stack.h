#define STACKSIZE 100

struct c_stack {
  char data[STACKSIZE];
  char size;
} stack;




// returns 0 on stack overflow
char push(char c);
// returns 0 on stack underflow
char pop();
// returns 0 on stack underflow
char peek();
