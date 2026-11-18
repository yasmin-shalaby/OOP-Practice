#include <iostream>
using namespace std;
const float PI = 3.14;

class circle
{
private:
    double redius = 1.0;
    string color = "red";

public:
    // Constructors---------------------
    circle() {
    };
    circle(double redius)
    {
        this->redius = redius;
    };
    circle(double redius, string color)
    {
        this->redius = redius;
        this->color = color;
    };
    // Methouds--------------------------
    double get_redius()
    {
        return redius;
    };
    string get_color()
    {
        return color;
    };

    void set_redius(double redius)
    {
        this->redius = redius;
    };
    void set_color(string color)
    {
        this->color = color;
    };
    double get_area()
    {
        return 2 * PI * redius;
    };
};

int main()
{

    circle c1;
    circle c2(2.0);
    circle c3(3.0, "blue");

    cout << "C1 redius = " << c1.get_redius() << " and color = " << c1.get_color() << " and area = " << c1.get_area() << "\n";
    cout << "C2 redius = " << c2.get_redius() << " and color = " << c2.get_color() << " and area = " << c2.get_area() << "\n";
    cout << "C3 redius = " << c3.get_redius() << " and color = " << c3.get_color() << " and area = " << c3.get_area() << "\n";
}