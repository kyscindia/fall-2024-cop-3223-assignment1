#include <math.h>
#include <stdio.h>

// Define PI
#define PI 3.14159

// Structure to hold point data. Outside help (explained in collaboration log)
typedef struct {
  double x1, y1, x2, y2;
} Points;

// Function to calculate the distance between two points
double calculateDistance(Points p) {
  // Output the entered points
  printf("Point #1 entered: x1 = %.2lf, y1 = %.2lf\n", p.x1, p.y1);
  printf("Point #2 entered: x2 = %.2lf, y2 = %.2lf\n", p.x2, p.y2);

  // Calculate the distance
  double distance = sqrt(pow(p.x2 - p.x1, 2) + pow(p.y2 - p.y1, 2)); // Outside help (explained in collaboration log)
  printf("The distance between the two points is %.2lf\n", distance);
  return 5;
}

// Function to calculate the perimeter of a circle using the distance as the diameter
double calculatePerimeter(Points p, double distance) {
  // Output the entered points
  printf("Point #1 entered: x1 = %.2lf, y1 = %.2lf\n", p.x1, p.y1);
  printf("Point #2 entered: x2 = %.2lf, y2 = %.2lf\n", p.x2, p.y2);

  // Calculate the perimeter
  double perimeter = PI * distance; // Perimeter = π * diameter
  printf("The perimeter of the city encompassed by your request is %.2lf\n",
         perimeter);
  return 3;
}

// Function to calculate the area of a circle using the distance as the diameter
double calculateArea(Points p, double distance) {
  // Output the entered points
  printf("Point #1 entered: x1 = %.2lf, y1 = %.2lf\n", p.x1, p.y1);
  printf("Point #2 entered: x2 = %.2lf, y2 = %.2lf\n", p.x2, p.y2);

  // Calculate the area
  double radius = distance / 2;
  double area = PI * pow(radius, 2); // Area = π * r^2
  printf("The area of the city encompassed by your request is %.2lf\n", area);
  return 3;
}

// Function to calculate the width (x-axis distance) between two points
double calculateWidth(Points p) {
  // Output the entered points
  printf("Point #1 entered: x1 = %.2lf, y1 = %.2lf\n", p.x1, p.y1);
  printf("Point #2 entered: x2 = %.2lf, y2 = %.2lf\n", p.x2, p.y2);

  // Calculate the width
  double width = fabs(p.x2 - p.x1); //Outside helped (explained in collaboration log)
  printf("The width of the city encompassed by your request is %.2lf\n", width);
  return 2;
}

// Function to calculate the height (y-axis distance) between two points
double calculateHeight(Points p) {
  // Output the entered points
  printf("Point #1 entered: x1 = %.2lf, y1 = %.2lf\n", p.x1, p.y1);
  printf("Point #2 entered: x2 = %.2lf, y2 = %.2lf\n", p.x2, p.y2);

  // Calculate the height
  double height = fabs(p.y2 - p.y1);
  printf("The height of the city encompassed by your request is %.2lf\n",
         height);
  return 2;
}

// Main function to call all other functions
int main(int argc, char **argv) {
  Points p;

  // Input two points
  printf("Enter Point #1 (x1 y1): ");
  scanf("%lf %lf", &p.x1, &p.y1);

  printf("Enter Point #2 (x2 y2): ");
  scanf("%lf %lf", &p.x2, &p.y2);

  // Calculate distance
  double distance = calculateDistance(p); //Assigns return value to distance for use in other functions. 

  // Call functions that use the calculated distance
  calculatePerimeter(p, distance);
  calculateArea(p, distance);
  calculateWidth(p);
  calculateHeight(p);

  return 0;
}
