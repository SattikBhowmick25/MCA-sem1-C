#include<stdio.h>

int main()
{
	int valid_oper=1;
	char key,oper='+';
	int i,val;
	double result=0.0;
	printf("Accept Calculator Input [Press = and <Enter> to End] : "); 
	do
	{
		val=0;
		key = getchar();
		
		while (key>='0' && key<='9')
		{
			val=val*10 + (key - '0');
			key = getchar();
		}
		switch(oper)
		{
		  	case '+': 	result += val; 
		  				break;
		  	case '-': 	result -= val; 
		  				break;
		  	case '*': 	result *= val; 
		  				break;
		  	case '/': 	result /= val; 
		  				break;
		  	case '=': 	printf("\nResult is %lf", result);
			       		valid_oper=0; 
				   		break;
		  	default:	printf("\nError"); 
			       		valid_oper=0; 
				   		break;
		}

		oper = key;
	} while (valid_oper);
	
	printf("\nPress . to exit");
	while(getchar() != '.');
	return 0;
}
