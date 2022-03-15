#include<stdio.h>
#include<math.h>
int main() {
	int i=1, n, x, k=1, ts=1, ms=1;
	float s = 1;
	scanf("%d%d", &x, &n);
	for(i = 1; i <= n; i++) {
		ts = pow(x, i*2);
		ms = ms*k*(k+1);
		k+=2;
		s+=(ts*1.0/ms);
		
//		printf("\n %d %d %d \n", ts, ms, k);
	}
	
	printf("%f", s);
	
}