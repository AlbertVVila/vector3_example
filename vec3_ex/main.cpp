#include <stdio.h>
#include "Vec3.h"

int main()
{
	Vec3<int> a;
	Vec3<int> b(2,2,1); 
	Vec3<double> c(1,1,4);
	c.Normalize();
	printf("distance :%.3f", c.x);
}