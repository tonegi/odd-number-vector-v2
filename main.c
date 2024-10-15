#include <stdio.h>

int main(void) {
int i = 0, number = 1;

  for(; i < 10; i++){
    printf("Position %d = %d\n", i+1, number);
    number = number + 2;
    }

  return 0;
}
