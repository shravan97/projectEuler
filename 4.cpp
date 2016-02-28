#include <iostream>
using namespace std;

bool palindrome(long long int num)
{
	long long int x=num , reverse=0;
	int r;

	//Find reverse of the number and check if it is the same
	while(x>0)
	{
		r= x%10;
		reverse = r + reverse*10;
		x/=10;

	}

	if(reverse==num)
		return 1;
	return 0;

}

bool product_chck(long long int num)
{
	//Check for the product of two 3 digit numbers
	for (int i = 100; i < 1000; ++i)
	{
		if(num%i==0 && ((num/i)<1000 && (num/i)>=100 ))
		{
			return 1;
		}
	}

	return 0;

}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long long int n;
		cin>>n;

		for(long long int j=n-1;j>=101101;j--)
			if(palindrome(j)==1 && product_chck(j)==1)
			{
				cout<<j<<'\n';
				break;
			}

	}


	return 0;
}