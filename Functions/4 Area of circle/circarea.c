//to calulate the area of a circle , given its radius
#include <stdio.h>
void areacircle(float r)
{
	printf("Area of the circle with radius %.3f: %.3f",r,3.14*r*r);
}
int main()
{
	float radius ;
	printf("Enter the radius of the circle : ");
	scanf("%f",&radius);
	areacircle(radius);
	return 0;
}