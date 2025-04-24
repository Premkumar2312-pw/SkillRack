#include <math.h>

double calculateDistance(Point *point1, Point *point2)
{
    int dx = point2->X - point1->X;
    int dy = point2->Y - point1->Y;
    return sqrt(dx * dx + dy * dy);
}