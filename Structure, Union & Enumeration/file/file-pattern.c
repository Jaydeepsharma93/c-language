#include <stdio.h>
#include<stdlib.h>

main()
{
    FILE *file;
    int a, b, c;
    file = fopen("file.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    for(a=5; a>=1; a--)
	{
		for(c=a; c<5; c++)
		{
			fprintf(file," ");
		}
		for(b=1; b<=a; b++)
		{
			fprintf(file,"*");
		}
		fprintf(file,"\n");
	}

    fclose(file);
    printf("file.txt");

	
}