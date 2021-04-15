#include <iostream>
using namespace std; 
struct Point
{
    int x;
    int y;
};
void passbyvalue(struct Point point)
{
    cout << "(" << &point.x << ", " << &point.y << ")";
}
void passbyreference(struct Point* point)
{
     cout << "(" << &point->x << ", " << &point->y << ")";
}

int main()
{
    Point point;
    cin >> point.x >> point.y;
    cout << "(" << &point.x << ", " << &point.y << ")";
    passbyvalue(point);
    cout << endl;
    passbyreference(&point);
    return 0;
}
