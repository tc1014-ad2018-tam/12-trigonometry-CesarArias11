/* This program will receive an angle in degrees from the user, convert this value into radians and ultimately, calculate the
 * value of the trigonometric functions (if it exists).
 *
 * Author: César Alejadndro Arias Perales
 * Date: October 4th, 2018
 * Mail: a01411995@itesm.mx
 *
 */

#include <stdio.h>
#include <math.h>

// Function of the sine of an angle
double sine(double angle) {
    printf("The sine is: %.4lf.\n", sin(angle));
    return 0;
}

// Function of the cosine of an angle
double cosine(double angle) {
    printf("The cosine is: %.4lf.\n", cos(angle));
    return 0;
}

// Function that checks if the value of the tangent exists or not.
double tangent(double angle, double angle2) {
    if (fmod((angle - 90), 180) == 0) {
        printf("The tangent doesn't exist.\n");
    } else {
        printf("The tangent is: %.4lf.\n", tan(angle2));
    }
    return 0;
}

// Function that checks if the value of the secant exists or not.
double secant(double angle, double angle2) {
    if (fmod((angle - 90), 180) == 0) {
        printf("The secant doesn't exist.\n");
    } else {
        printf("The secant is: %.4lf.\n", 1/cos(angle2));
    }
    return 0;
}

// Function that checks if the value of the cosecant exists or not.
double cosecant(double angle, double angle2) {
    if (fmod(angle, 180) == 0) {
        printf("The cosecant doesn't exist.\n");
    } else {
        printf("The cosecant is: %.4lf.\n", 1/sin(angle2));
    }
    return 0;
}

// Function that checks if the value of the cotangent exists or not.
double cotangent(double angle, double angle2) {
    if (fmod(angle, 180) == 0) {
        printf("The cotangent doesn't exist.\n");
    } else {
        printf("The cotangent is: %.4lf.\n", 1/tan(angle2));
    }
    return 0;
}


int main() {

    // Two variables for storing the original input and its angle.
    double angle, x;

    // Here I ask for the value of the angle.
    printf("Give me an angle: \n");
    scanf("%lf", &angle);

    // Calculation of radians
    x = angle*0.0174533;

    // It uses the previously created functions.
    sine(x);
    cosine(x);
    tangent(angle, x);
    secant(angle, x);
    cosecant(angle, x);
    cotangent(angle, x);

    return 0;
}