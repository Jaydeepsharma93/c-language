#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *file_odd;
	int a;
	file_odd=fopen("odd_num_file","w");
	if(file_odd==NULL)
    {
        printf("odd file not open !");
    }
    else
    {
        printf("odd file opened !");
    }
    for(a=50; a<=70; a++)
    {
    	if(a%2 != 0)
    	{
    		fprintf(file_odd,"%d ",a);
		}
	}
	fclose(file_odd);
	
    FILE *file_even;
	file_even=fopen("even_num_file","w");
	if(file_even==NULL)
    {
        printf("\neven file not open !");
    }
    else
    {
        printf("\neven file opened !");
    }
    for(a=50; a<=70; a++)
    {
    	if(a%2 == 0)
    	{
    		fprintf(file_even,"%d ",a);
		}
	}
	fclose(file_even);
}