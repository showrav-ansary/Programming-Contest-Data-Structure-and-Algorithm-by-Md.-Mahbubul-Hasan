#include <stdio.h>

double GetArea(double radius, double angle)
{
    return 0.5 * radius * radius * angle; // Partial area formula
}

double GetAngle(double a, double b, double c)
{
    return acos(((b * b) + (c * c) - (a * a)) / (2 * b * c)); // Oppposite angle formula
}

int main()
{
    int testCases;
    double radius1, radius2, radius3, angleByCircle1, angleByCircle2, angleByCircle3, areaByCircle1, areaByCircle2, areaByCircle3, areaTriangle;
    scanf("%d", &testCases);

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        scanf("%lf %lf %lf", &radius1, &radius2, &radius3);

        // Calculate the angle created by each straight line that connects each pair of circles' centers
        angleByCircle3 = GetAngle(radius1 + radius2, radius2 + radius3, radius3 + radius1);
        angleByCircle1 = GetAngle(radius2 + radius3, radius3 + radius1, radius1 + radius2);
        angleByCircle2 = GetAngle(radius3 + radius1, radius1 + radius2, radius2 + radius3);

        // Calculate the area of the triangle
        double s = (radius1 + radius2 + radius3);
        areaTriangle = sqrt(s * (s - radius1 - radius2) * (s - radius2 - radius3) * (s - radius3 - radius1));

        // Deduct area taken by the three circles
        areaTriangle -= GetArea(radius3, angleByCircle3);
        areaTriangle -= GetArea(radius1, angleByCircle1);
        areaTriangle -= GetArea(radius2, angleByCircle2);

        printf("Case %d: %lf\n", testCase, areaTriangle);
    }
}