#include<iostream>
using namespace std;



   inline double circleArea(double r)
    {
        double area;
        return area=3.14*r*r;
    }


    int main()
    {
        double r;
        cout << "Enter a R:";
        cin >> r;
        cout <<"the area is:"<<circleArea(r);
        return 0;
    }