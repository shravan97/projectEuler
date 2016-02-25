
def primes(n):
	prime_list=[2]
	composite=[0 for x in range(0,n+1)]

	for i in range(3,n+1 , 2):
		if not composite[i]:
			prime_list.append(i)
			for j in range(3*i , n+1 , 2*i):
				composite[j]=1;
	return prime_list		
	
t = int(raw_input(""))

for i in range(0,t):
	n = int(raw_input(""))
	k = primes(n)

	for j in range(len(k) -1 , 0 ,-1):
		if n%k[j]==0:
			print k[j]
			break