#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/** Determine the value of a particular bit in an integer
@param val an arbitrary value
@param n bit position, assumed to satisfy 0 <= n <= 31
 (bit position 0 is the least-significant bit)
@return true if bit n is 1; otherwise false */

bool getBit(unsigned int val, unsigned int n);

int main(void)
{
	bool test1, test2, test3;
	test1 = getBit(12, 2);
	test2 = getBit(5, 1);
	test3 = getBit(106, 5);
	if (test1) printf("First test successful\n");
	if (!test2) printf("2nd test success\n");
	if (test3) printf("3rd test success\n");

	return 0;
}


bool getBit(unsigned int val, unsigned int n)
{
	//bool isOne = false;
	unsigned int theBit;
	theBit = pow(2, n);
	//isOne = theBit & val;
	return  theBit & val;
}

