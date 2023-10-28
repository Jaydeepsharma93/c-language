#include <stdio.h>
#include<stdlib.h>

main()
{
    FILE *file_;
    int a;
    file_ = fopen("file_3_5.txt", "w");

    if (file_ == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    for(a=1; a<50; a++)
	{
		if(a%3==0 && a%5)
       fprintf(file_,"%d\t",a);
	}

    fclose(file_);
    printf("file_3_5.txt");

	
}