def isPrime(n) : 
    if (n <= 1) : 
        return False
    if (n <= 3) : 
        return True
  
    if (n % 2 == 0 or n % 3 == 0) : 
        return False
    i = 5
    while(i * i <= n) : 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i = i + 6
  
    return True
 
n,m,a = list(map(int, input().split()))

if a%n == 0 or a%m == 0:
	print(1)
else:
	if isPrime(a) and isPrime(n*m-a):
		print(3)
	else:
		f = 1
		for i in range(1,n+1):
			if a%i == 0:
				ot = a/i
				if ot < n and i < m or ot < m and i < n:
					print(2)
					f = 0
					break
		b = n*m - a

		for i in range(1,n+1):
			if b%i == 0:
				ot = b/i
				if ot < n and i < m or ot < m and i < n:
					print(2)
					f = 0
					break

		if f:
			print(3)

