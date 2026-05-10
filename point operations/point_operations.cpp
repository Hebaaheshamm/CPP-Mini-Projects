#include <iostream>
#include <cmath>
using namespace std;


struct Point {
    double x, y;

    double distance(const Point& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }


    void move(double dx, double dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    Point p1, p2;
    cout << "Enter coordinates of Point 1 (x y): ";
    cin >> p1.x >> p1.y;
    cout << "Enter coordinates of Point 2 (x y): ";
    cin >> p2.x >> p2.y;
    
    double distance = p1.distance(p2);
    cout << "Distance between the points: " << distance << endl;
    
    double dx, dy;
    cout << "Enter dx and dy to move Point 1: ";
    cin >> dx >> dy;
    p1.move(dx, dy);
    
    cout << "New coordinates of Point 1: (" << p1.x << ", " << p1.y << ")" << endl;
    
    return 0;
}
