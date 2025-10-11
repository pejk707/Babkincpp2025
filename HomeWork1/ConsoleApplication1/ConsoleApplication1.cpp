#include <iostream>
using namespace std;

float square(float a)
{
    return a * a;
}

float trapezium(float a, float b, float h)
{
    return (a + b) / 2 * h;
}

int main()
{
    cout << square(6.7) << std::endl;
    cout << trapezium(6.7, 3.3, 4) << std::endl;
    system("pause");
}