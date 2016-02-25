#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

//Code to project Euler #3
//Works for numbers upto 8*10^6

vector <long long int> primegen(long long int n)
{
	std::vector<long long int > v;
	v.push_back(2);

	bool composite[n+1];
	memset(composite , 0 , n+1);

	for(long long int i=3;i<=n;i+=2)
	{
		if(!composite[i])
		{
			v.push_back(i);
			for(long long int j=i*3;j<=n;j+=2*i)
				composite[j]=1;
		}	
	}

	return v;
}

int main()
{
	int t;
	cin>>t;
    
	for (int i = 0; i < t; ++i)
	{
		long long int n;
		cin>>n; 
    
        std::vector<long long int > v = primegen(n);

		for (long long int j = v.size()-1; j >=0 ;j--)
		{
			if(n%v[j]==0)
			{
				cout<<v[j]<<'\n';
				break;
			}
		}
    }   

	


	return 0;
}