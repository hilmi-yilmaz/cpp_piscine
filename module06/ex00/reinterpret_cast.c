#include <stdio.h>

/*
** Reinterpreted casting is identity casting.
** The bits in memory stay exactly the same (no bit transformation).
*/

int	main(void) {

	float	a = 420.042f;		/* Reference value */

	void	*b = &a;			/* Implicit reinterpretation cast */
	void	*c = (void *)&a;	/* Explicit reinterpretation cast */

	void	*d = &a;			/* Implicit promotion -> OK */
	int		*e = d;				/* Implicit demotion -> Hazardous */
	int		*f = (int *)d;		/* Explicit demotion -> OK, you are in charge */

	printf("%p, %f\n", &a, a);
	printf("%p\n", b);
	printf("%p\n", c);

	printf("%p, %d\n", e, *e);
	printf("%p, %d\n", f, *f);

	return 0;
}