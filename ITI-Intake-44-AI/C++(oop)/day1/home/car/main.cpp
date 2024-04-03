#include <iostream>

using namespace std;

class car
{
    string color;
    int max_speed;
    int current_speed;

public:
    // set
    void setColor(string _color)
    {
        color = _color;
    }

    void setMaxSpeed(int _max_speed)
    {
        max_speed = _max_speed;
    }

    void setCurrentSpeed(int _current_speed)
    {
        current_speed = _current_speed;
    }

    void setAccelerate(int _increase_speed)
    {
        current_speed += _increase_speed;
        if (current_speed > max_speed)
        {
            current_speed = max_speed;
        }
    }

    void setDeaccelerate(int _decrease_speed)
    {
        current_speed -= _decrease_speed;
        if (current_speed < 0)
        {
            current_speed = 0;
        }
    }

    // get
    string getColor()
    {
        return color;
    }

    int getMaxSpeed()
    {
        return max_speed;
    }

    int getCurrentSpeed()
    {
        return current_speed;
    }

    int getAccelerate()
    {
        return current_speed;
    }

    int getDeaccelerate()
    {
        return current_speed;
    }
};

int main()
{
    car c1;
    c1.setColor("Red");
    c1.setMaxSpeed(100);
    c1.setCurrentSpeed(50);
    c1.setAccelerate(30);
    c1.setDeaccelerate(20);

    cout << c1.getColor() << endl;
    cout << c1.getMaxSpeed() << endl;
    cout << c1.getCurrentSpeed() << endl;
    return 0;
}
