int getRectangleArea(Point *point1, Point *point2)
{
    int length = abs(point1->X - point2->X);
    int breadth = abs(point1->Y - point2->Y);
    return length * breadth;
}