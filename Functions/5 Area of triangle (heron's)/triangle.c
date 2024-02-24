#include <stdio.h>
#include <math.h>
void triarea(float a, float b, float c)
{
	float s,ar;
	if((a+b)>c&&(b+c)>a&&(c+a)>b)
	{
		s=(a+b+c)/2.0;
		ar=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area of the triangle : %.2f unit",ar);
	}
	else 
	printf("Sides entered are invalid");
}
int main()
{
	float a,b,c,
	printf("Enter the sides of the triangle (a,b,c): ");
	scanf("%f %f %f",&a,&b,&c);
	return 0;
}