//program to calculate area and perimeter of rectangle
#include <stdio.h>

int main(){
	float length,width,area,perimeter;
	
	printf("\nenter the length of the rectangle");
	scanf("%f", &length);
	
	printf("\nenter the width of the rectangle");
	scanf("%f", &width);
	
	area=length*width;
	
	perimeter=2*(length+width);
	
	printf("\narea of rectangle:%",area);
	printf("\nperimeter of rectangle:%f",perimeter);
	
	return 0;
}
