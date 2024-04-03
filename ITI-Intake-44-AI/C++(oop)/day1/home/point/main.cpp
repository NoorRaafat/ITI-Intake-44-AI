#include <iostream>

using namespace std;

class point
{
    int x;
    int y;

public:
    void setX(int _x)
    {
        x = _x;
    }

    void setY(int _y)
    {
        y = _y;
    }

    void print()
    {
        cout << "(" << x << "," << y << ")";
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

int main()
{
    point p1;
    p1.setX(5);
    p1.setY(4);
    p1.print();

    cout << endl;

    cout << p1.getX() << endl;
    cout << p1.getY() << endl;

    return 0;
}
