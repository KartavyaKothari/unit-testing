#include<stdio.h>

int checkIfUserWantsToContinue(char res) {

    if(res == 'n' || res == 'N')
            return 0;
    else
            return 1;
}

int main(int argc, char const *argv[]) {

      float a,b;
      int ch;
      char res;
      int i = 0;

	while (1) {

            i++;

            if(i>20)
                  break;

            printf("\nEnter two numbers, choice and if you want to contine (y/n):\n");
            printf("\n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");

            scanf("%f %f %d %c",&a,&b,&ch,&res);

            if(a != (int)a || b != (int)b) {

                  printf("\n");
                  printf("%.2f %.2f %d %c\n", a,b,ch,res);
            }

            else
                  printf("\n");
                  printf("%d %d %d %c\n", (int)a,(int)b,ch,res);

            if(a != (int)a || b != (int)b) {

                  printf("\n");
                  printf("One of numbers is non integer\n");

                  if(checkIfUserWantsToContinue(res))
                        continue;
                  else
                        break;
            }

            if(a > 65535 || b > 65535) {

                  printf("Number is of datatype large int \n");

                  if(checkIfUserWantsToContinue(res))
                        continue;
                  else
                        break;
            }

    	      switch (ch) {

                  case 1: printf("Addition = %d\n",(int)(a+b));
    			        break;

    		      case 2: printf("Subtraction = %d\n",(int)(a-b));
    			        break;

    		      case 3: printf("Multiplication = %d\n",(int)(a*b));
    			        break;

    		      case 4: if (b == 0) {

                              printf("Division by zero error\n");
                              continue;
                          }

                          printf("Division = %.2f\n",(a/b));
    			        break;

    		      default: printf("Invalid Choice\n\n");
            }

            if(checkIfUserWantsToContinue(res))
                  continue;

            else
                  break;
      }

      return 0;
}
