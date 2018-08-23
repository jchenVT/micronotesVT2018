#include <stdio.h>

long getAbsoluteValue(long x);
int findMax( int arr[], int size);

int main(void)
{
	long userIn;
	printf("Enter a value: ");
	scanf("%ld", &userIn);
	long abs = getAbsoluteValue(userIn);
	printf("\nThe absolute value of %ld is: %ld\n", userIn, abs);

	const int arraySize = 5;
	int intArray[arraySize] =  {3, 2, -5, 8, 3};
	int theMax;
	theMax = findMax(intArray, arraySize);

	printf("The max of the array was %i\n", theMax);

	unsigned int rip, ded;
	rip = 4294967295;
	ded = rip + 1;
	printf("this is rip %i, this is ded %i\n",rip,ded);
}

long getAbsoluteValue(long x)
{
	return x < 0 ? -x : x;
}

int findMax( int arr[], int size) 
{
	int max; max = arr[0]; for(int i=1;i<size;i++) if(arr[i] > max) max = arr[i]; return max;
}


