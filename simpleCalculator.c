#include <stdio.h>

#define ADD(a,b)  ((a)+(b))
#define SUB(a,b) ((a)-(b))
#define MUL(a,b) ((a)*(b))
#define DIV(a,b) ((a)/(b))

int main() {
   int x;
   int y;
int scanned;
   char opcode;
   
   printf("Please choose your two integer values respectively and \n");
   printf("please choose your maths operation: a (add), s (subtract), m (multiply), d (divide) \n");
   
   scanned = scanf("%d %d %c", &x, &y, &opcode);  
   //printf("%d, %d, %d, %c\n", scanned, x,y,opcode);
   

   switch (opcode){
    case 'a':
      printf("%d",ADD(x,y));
      break;

    case 's':
      printf("%d",SUB(x,y));
      break;
    
    case 'm':
      printf("%d",MUL(x,y));
      break;

    case 'd':
      printf("%d",DIV(x,y));
      break;

    default:
      printf("don't understand");
    }
   	
   return 0;
}

