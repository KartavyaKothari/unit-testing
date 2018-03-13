#include<stdio.h>

void isFloat(float a, float b){
    if(a != (int)a || b != (int)b){
        printf("One of numbers is non integer\n");
        goto START;
    }

void isLargeInt(int a,int b) {

      if(a > 65535 || b > 65535) {

            printf("Number is of datatype large int \n");
            goto START;
      }
}

int main(int argc, char const *argv[]) {

	float a,b;
    int ch;

    START:;

	while (1) {
        printf("Enter two numbers : \n\n");

    	printf("1st number : ");
    	scanf("%f",&a);

    	printf("2nd number : ");
    	scanf("%f",&b);

        isLargeInt(a,b);
        isFloat(a,b);

    	printf("\n");
    	printf("Enter choice 1. Addition\n");
    	printf("		   2. Subtraction\n");
    	printf("		   3. Multiplication\n");
    	printf("		   4. Division\n");
    	printf("\n");

    	scanf("%d",&ch);
    	printf("\n");

    	switch (ch) {

    		case 1 : printf("Addition = %f ",(a+b));
    			   break;

    		case 2 : printf("Subtraction = %f",(a-b));
    			   break;

    		case 3 : printf("Multiplication = %f",(a*b));
    			   break;

    		case 4 : printf("Division = %f",(a/b));
    			   break;

    		default : printf("Invalid Input");

    	}
    }

      return 0;
}
