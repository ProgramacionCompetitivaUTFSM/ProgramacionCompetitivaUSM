def main ():
	n, m, a = map(int, input().split())
	if a % n == 0 or a % m == 0:
		return 1
	b = (n*m)-a
	s1 = n
	while s1 != 1:
		if a % s1 == 0:
			break
		s1 -= 1
	if a/s1 < m:
		return 2
	s2 = n
	while s2 != 1:
		if b % s2 == 0:
			break
		s2 -= 1
	if b/s2 < m:
		return 2
	if a < n or a < m or b < n or b < m:
		return 2
	return 3

print(main())