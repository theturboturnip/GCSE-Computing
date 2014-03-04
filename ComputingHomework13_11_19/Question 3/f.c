#include <stdio.h> 
 
 int f(int x) {  
  return x + 2;  
}  
 
int main(void) { 
   int x = 5; 
  printf("%d %d\n", f(x+2), f(f(x+2)));  
  return 0;  
} 