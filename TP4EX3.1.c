
#include <stdio.h>
int main(void) {
	int n, m, T[20], i, r,j;
	printf("donner un nombre décimal: ");
	scanf("%d", &n);
	m=n;

	for (i = 0; i <= 19; i++) {
		r = m % 2;
		T[i] = r;
		m = m / 2;
	}
	for (i = (19); i >= 0; i--) {
		printf("%d", T[i]);

	}
}
