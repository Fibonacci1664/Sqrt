#include<iostream>
#include<cmath>

int mySqrt(double inputNum)
{
	if (inputNum == 0 || inputNum == 1)
	{
		return inputNum;
	}

	double r1 = inputNum;			// This is our initial guess for which we just use the original input num, so this could be vastly improved
	double acc = 0.000001;
	double square = inputNum + 1;	// Set this to input value + 1, this allows first entry into the while loop

	// Keep chekcing the difference against the accuracy required
	while ((square - inputNum) > acc)
	{
		// This is the Babylonian formula, and will slowly reduce from input number to the square root, within the degree of accuracy set.
		r1 = (r1 + (inputNum / r1)) / 2;

		// Work out the new r1 value squared
		square = r1 * r1;
	}

	// Once the difference gets less than the required accuracy, the while loop will exit
	return r1;
}

int main()
{
	// TEST CASES	
	//double test1 = mySqrt(0);					// Should return 0 - PASS
	//double test2 = mySqrt(1);					// Should return 1 - PASS
	//double test3 = mySqrt(2);					// Should return 1 - PASS - Min x1 multiplier 1.0001 to provide a correct ans to 3dp
	//double test4 = mySqrt(4);					// Should return 2 - PASS - Min x1 multiplier 1.0001 to provide a correct ans to 3dp
	//double test5 = mySqrt(8);					// Should return 2 - PASS - Min x1 multiplier 1.0001 to provide a correct ans to 3dp
	//double test6 = mySqrt(9);					// Should return 3 - PASS - Min x1 multiplier 1.0001 to provide a correct ans to 3dp
	//double test7 = mySqrt(256);				// Should return 16 - PASS - Min x1 multiplier 1.00001 to provide a correct ans to 3dp
	//double test8 = mySqrt(8192);				// Should return 90 - PASS - Min x1 multiplier 1.000001 to provide a correct ans to 3dp
	//double test9 = mySqrt(2147395599);		// Should return 46339 - PASS - Min x1 multiplier 1.000001 to provide a correct ans to 3dp
	//double test10 = mySqrt(2147395600);		// Should return 46340 - PASS - Min x1 multiplier 1.01 to provide a correct ans to 3dp
	//double test11 = mySqrt(183692038);		// Should return 46339 - PASS - Min x1 multiplier 1.01 to provide a correct ans to 3dp
	double test12 = mySqrt(562464195);		// Should return 46339 - PASS - Min x1 multiplier 1.01 to provide a correct ans to 3dp

	std::cout << "The square root of 562464195 = " << test12 << '\n';

	return 0;
}