#include <iostream>
using namespace std; 
struct Point
{
    int x;
    int y;
};

int main()
{
    Point p;
    cin >> p.x >> p.y;
    cout << "(" << p.x << ", " << p.y << ")";
    return 0;
}
