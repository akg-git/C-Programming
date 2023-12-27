#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);
	
	//Rule for sides of a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2;

        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Ttriangle Area = %.2lf \n", area);
    } else {
        printf("Invalid triangle sides.\n");
    }
}
