/*
Wei Chen
CIS 1202
12/1/2020
*/


#include <iostream>
#include <cmath>


using namespace std;


template <typename Template>


Template half(Template interger)
{
    Template quotient;
    quotient = interger / 2;
    return quotient;
}
int half(int interger)
{
    int quotient;


    quotient = round(static_cast<double>(interger) / 2);
        
    return quotient;
}
int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}
