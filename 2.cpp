#include <iostream>
#include <cmath>
using namespace std;

struct mat
{
	long long int a , b, c ,d;
};

mat mult(mat m1 , mat m2)
{
	mat res ;
	res.a = m1.a*m2.a+m1.b*m2.c;
	res.b = m1.a*m2.b+m1.b*m2.d;
	res.c = m1.c*m2.a+m1.d*m2.c;
	res.d = m1.c*m2.b+m1.d*m2.d;

	return res;
}
mat power(mat m1 , long long int k)
{
	if(k==1)
		return m1;
	else
	{
		mat t = power(m1,k/2);

		if(k%2==1)
		{
			
			return mult(mult(t,t) , m1);
		}
		else
		{
			return mult(t,t);
		}
	}

}

long long int fibo(long long int n)
{
	mat f = {1,1,1,0};

	mat res = power(f,n-1);

	return res.a;
}


main()
{
	long long int t , i , n;

	cin>>t;

	for(i=0;i<t;i++)
	{
		cin>>n;

		long long int k = 3;
		long long int sum =0 , prev=0;

		while(prev<n)
		{
			prev=fibo(k);
			if(prev <=n)
				sum+=prev;
			k+=3;
		}

		cout<<sum<<'\n';

	}

	return 0;
}