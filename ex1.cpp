#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        Circle(){
            radius = 1;
        }
        Circle(double NewRadius){
            radius = NewRadius;
        }

        double getRadius(){
            return radius;
        }
        double getArea(){
            return radius*radius*3.14159;
        }
        double getPerimeter(){
            return radius*2*3.14159;
        }

        void setRadius(double NewRadius){
            if (NewRadius >= 0){
                radius = NewRadius;
            } else {
                cout<<"\n=========== ERROR: radius value must be equal or greater than zero =========\n";
            }
        }
};

int main(){
    Circle Circle1(2.0);
    Circle Circle2(30);
    Circle Circle3(100);

    cout<<"Circle with radius "<<fixed<<setprecision(2)<<Circle1.getRadius()<<" has an area of "<<Circle1.getArea()<<" units squared, and a perimeter of "<<Circle1.getPerimeter()<<" units\n";
    cout<<"Circle with radius "<<Circle2.getRadius()<<" has an area of "<<Circle2.getArea()<<" units squared, and a perimeter of "<<Circle2.getPerimeter()<<" units\n";
    cout<<"Circle with radius "<<Circle3.getRadius()<<" has an area of "<<Circle3.getArea()<<" units squared, and a perimeter of "<<Circle3.getPerimeter()<<" units\n";
    cout<<"====changing radius of third circle from "<<Circle3.getRadius()<<" units to 125 units====\n";
    Circle3.setRadius(125);
    cout<<"Circle with radius "<<Circle3.getRadius()<<" has an area of "<<Circle3.getArea()<<" units squared, and a perimeter of "<<Circle3.getPerimeter()<<" units\n";
    return 0;
}