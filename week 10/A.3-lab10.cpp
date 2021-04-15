#include <iostream>
#include <cmath>
using namespace std;
struct MidPoint
{
    double x;
    double y;
};

void mid_point(double x1, double x2, double y1, double y2, midPoint point)
{
    point.x = sqrt ((x1 - x2) * (x1 - x2));
    point.y = sqrt ((y1 - y2) * (y1 - y2));
}

int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    MidPoint point;
    mid_point(x1, x2, y1, y2, point);
    cout << "toa do trung diem la " << "(" << point.x << ", " << point.y << ")";
    return 0;
}
