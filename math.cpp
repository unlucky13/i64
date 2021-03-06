/=======================================The extended Euclidean algorithm from http://e-maxx.ru/algo/extended_euclid_algorithm====/

int exgcd (int a, int b, int & x, int & y) { //assuming a<b 
  if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
