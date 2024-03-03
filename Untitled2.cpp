// binary search
#include<stdio.h>
void binarysearch(int A[] , int i , int j , int target);
int main ()
{ int size , i , target , flag = 0;
printf("Enter the size of the array \n");
scanf("%d" , &size);
int array[size];
printf("Enter the elements of the array \n");
for (i = 0 ; i<size ; i++)
{
	scanf("%d" , &array[i]);
}
printf("Enter the target value");
scanf("%d" , &target);
binarysearch(array,0,size-1,target);

return 0;
}
void binarysearch(int A[] , int i , int j , int target)
{ 
int low , high , mid ;
low = i ;
high = j;
if (A[low] == target)
{
	printf("Found");
	return;
}
if (A[high] == target)
{
	printf("Found");
	return;
}
while (low<high)
{
mid = (low + high)/2;
if (A[mid] == target)
{
	printf("Found");
	return;
}
else {
if (A[mid] < target)
{
low = mid +1;
}
if (A[mid] > target)
{
high = mid +1;
}
}
}
printf("Not found");
}
