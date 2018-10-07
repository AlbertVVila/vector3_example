#include <stdio.h>
#include "Vec3.h"

int main()
{
	Vec3<int> a;
	Vec3<int> b(2,2,1); 
	Vec3<int> c(3, 1, 3);
	printf("distance :%.3f\n", c.distance_to(b));

	Vec3<int> d = b + c;
	printf("d.x:%d\n", d.x);

	Vec3<double> f(1,1,4);
	f.Normalize();
	printf("normalized f.x :%.3f\n", f.x);
}