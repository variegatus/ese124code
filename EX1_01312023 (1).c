#include <stdio.h>


	
int main () {
	float val1, val2, result;
	char oper;
	
	while (1) {
		
		printf ("value 1: ");
		scanf ("%f", &val1);            // read the first number
		
		printf ("value 2: ");
		scanf ("%f", &val2);             // read the second number
		getchar();                       // removes the enter character from the input buffer
		
		printf ("operator: ");
		scanf ("%c", &oper);              // read the operator 
		
		if (oper == '+')
		   result = val1 + val2;
		else
			if (oper == '-')
			  result = val1 - val2;
			else
			    if (oper == '*')
			      result = val1 * val2;
			    else
			        if (oper == '/')
			          result = val1 / val2;
			        else
			            if (oper == '%')
			               result = (int) val1 % (int) val2;    // :-)
			            else 
			                 printf ("Error: %c is not an operator\n", oper); 
		
		printf ("result = %f\n", result);  
		
	}
}
