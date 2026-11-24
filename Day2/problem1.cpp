#include <iostream>
using namespace std;

class fraction
{
private:
    int num;
    int dem;

public:
    fraction(int num, int dem)
    {
        this->num = num;
        this->dem = dem;
    };
    void setNum(int num)
    {
        this->num = num;
    };
    int getNum()
    {
        return this->num;
    };

    void setDem(int dem)
    {
        this->dem = dem;
    };
    int getDem()
    {
        return this->dem;
    };

    void display()
    {
        cout << this->num << " / " << this->dem << "\n";
    };
    fraction add(fraction f)
    {
        fraction result(0, 0);
        result.num = this->dem * f.num + this->num * f.dem;
        result.dem = f.dem * this->dem;
        return result;
    };
    fraction sub(fraction f)
    {
        fraction result(0, 0);
        result.num = this->num * f.dem - this->dem * f.num;
        result.dem = f.dem * this->dem;
        return result;
    };
};

int main()
{
    fraction f1(1, 2);
    fraction f2(1, 3);

    cout << "First Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    fraction sum = f1.add(f2);

    cout << "\nAddition Result: ";
    sum.display();

    fraction sub = f1.sub(f2);

    cout << "Subtraction Result: ";
    sub.display();

    f1.setNum(5);
    f1.setDem(6);

    cout << "\nAfter Setters: ";
    f1.display();

    cout << "Numerator: " << f1.getNum() << endl;
    cout << "Denominator: " << f1.getDem() << endl;


}