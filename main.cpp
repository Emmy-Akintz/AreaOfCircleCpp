#include <iostream>

// using namespace std;
// typedef unsigned short int USHORT;

float areaOfCircle(float radius, float pi);

int main()
{
    const float pi = 3.142;
    float radius;
    std::cout << "\n Enter radius: ";
    std::cin >> radius;
    float area = areaOfCircle(radius, pi);
    std::cout << "\n The area is " << area;

    // unsigned short int *b;
    // cout << &b << endl;

    // USHORT myAge; // a variable
    // USHORT *pAge = 0; // a pointer
    // myAge = 5;
    // cout << "myAge: " << myAge << endl;
    // pAge = &myAge; // assign address of myAge to pAge
    // cout << "*pAge: " << *pAge << endl;

    
    return 0;
}

float areaOfCircle(float radius, float pi)
{
    return pi * radius * radius;
}
