#include<stdio.h>
char getC()
{
	char c;
	printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\nPress 0 for exit");
		
	printf("\n\nEnter your choice : ");
	scanf(" %c",&c);
	
	printf("\n");
	
	return c;
}
float getValues(char varName[]);float getValues(char varName[])
{
    float number;
	printf("Enter value of %s : ", varName);
	scanf("%f", &number);
	
	return number;

}
float performOperation(char c, float a, float b)
{
	float answer;

	switch(c)
	{
	    case '+':return a + b;break;
			case '-':return a - b;break;
			    case '*':return a * b;break;
			     	case '/':return a / b;break;
			    		case '%':answer = ((int) a % (int) b);return answer;break;
			    		    default:printf("default num");
	}
}


void main(){

	char c;
	float a, b;
	
	c = getC();
	
	while (c != '0' && (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')){
	
	
		a = getValues("first number");
		b = getValues("second number");
		
		printf("\n%.2f %c %.2f = %.2f\n\n", a, c, b, performOperation(c, a, b));
		
		c = getC();
		
	}
	
}





