#include <iostream>

//using namespace std;

float areaOfCircle(float radius, float pi);

int main()
{
    const float pi = 3.142;
    float radius;
    std::cout << "\n Enter radius: ";
    std::cin >> radius;
    float area = areaOfCircle(radius, pi);
    std::cout << "\n The area is " << area;

    
    return 0;
}

float areaOfCircle(float radius, float pi)
{
    return pi * radius * radius;
}
