#include<stdio.h>
#include<string.h>

void leftRotatebyOne(int arr[], int n);
 
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d1, int n)
{
  int i;
  for (i = 0; i < d1; i++)
    leftRotatebyOne(arr, n);
}
 
void leftRotatebyOne(int arr[], int n)
{
  int i, temp;
  temp = arr[0];
  for (i = 0; i < n-1; i++)
     arr[i] = arr[i+1];
  arr[i] = temp;
}
 
/* utility function to print an array */
void printArray(int arr[], int size)
{
  int i;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
}
 
/* Driver program to test above functions */
int main()
{
	int n,d,d1;
	scanf("%d",&n);
	scanf("%d",&d);
	d1=d%n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   leftRotate(arr, d1, n);
   printArray(arr, n);
   getchar();
   return 0;
}


