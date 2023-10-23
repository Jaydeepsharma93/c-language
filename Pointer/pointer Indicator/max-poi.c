#include <stdio.h>
 
main()
{
  int *maximum,n, i, location = 1;
 
  printf("Enter the size of array : ");
  scanf("%d", &n);
  int arr[n];
 
  for (i=0; i<n ; i++)
  {
  	printf("array[%d] : ",i);
    scanf("%d", &arr[i]);
  }
   maximum  = arr;
  *maximum = *arr;
 
  for (i=1; i<n; i++)
  {
    if(*(arr+i) > *maximum)
    {
       *maximum = *(arr+i);
    }
  }
 
  printf("Maximum num in array is: %d",*maximum);
}