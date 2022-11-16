#include <stdio.h>

void	dump_32bits_integer(int const n) {

	char	*ptr = (char *)&n;

	// Loop over bytes of an int
	for (int j = 3; j >= 0; j--) {
		// Loop over the bits of a byte
		for (int i = 7; i >= 0; i--) {
			printf("%d", (*(ptr + j) & (1 << i)) >> i );
			if (i != 8 && i % 8 == 0) {
				printf(" ");
			}
		}
	}
	printf("\n");
}


int main(void) {

	int a = 42;

	double 	b = a;			/* Implicit conversion */
	double 	c = (double)a;	/* Explicit conversion */

	double 	d = a;			/* Implicit promotion -> OK */
	int		e = d;			/* Implicit demotion -> Hazardous */
	int		f = (int)d;		/* Explicit demotion-> OK, you are in charge. */

	dump_32bits_integer(-1);

}