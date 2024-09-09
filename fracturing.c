#include <stdio.h>
#include <math.h>

#define PI 3.14159

//**input for x1, y1, x2, y2 */
void askForUserInput(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter coordinates for Point 1 (x1, y1): ");
    scanf("%1f %1f", &x1, &y1);
    printf("Enter coordinates for Point 2 (x2, y2): ");
    scanf("%1f %1f", &x2, &y2);
}


//**calculation of distance between 2 points */
double calculationDistance() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x2, y2);
    printf("The distance between two points is %.2f\n", distance);

    return distance;
}

//**perimeter of circle */
double calculatePerimeter() {
    double radius = calculationDistance() / 2.0;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 1.0;
}


//**calculation for area of circle */
double calculateArea() {
    double radius = calculationDistance() / 2.0;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 2.0;
}

//**calculation of width */
double calculateWidth() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1.5;

}


//**calculation of height */
double calculateHeight() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    return 2.5;
}


//**main function */
int main(int argc, char **argv) {
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}