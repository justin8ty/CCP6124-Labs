#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    double calcArea()
    {
        return 3.14159 * radius * radius;
    }
};

class Pizza
{
private:
    double price;
    Circle size;

public:
    void setPrice(double p)
    {
        price = p;
    }

    void setSize(double r)
    {
        size.setRadius(r);
    }

    double costPerSqIn()
    {
        double area = size.calcArea();
        if (area == 0)
        {
            return 0;
        }
        return price / area;
    }
};

int main()
{
    Pizza myPizza;
    myPizza.setPrice(314.159);
    myPizza.setSize(10);
    cout << "Price per square inch $" << myPizza.costPerSqIn();
    return 0;
}