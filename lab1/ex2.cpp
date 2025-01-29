#include <iostream>
using namespace std;

class Fan{
    private:
        int speed;
        bool on;
        double radius;
    public:
        Fan(){
            speed = 1;
            on = false;
            radius = 5;
        }

        int getSpeed(){
            return speed;
        }

        bool getOn(){
            return on;
        }

        double getRadius(){
            return radius;
        }

        void setSpeed(int newSpeed){
            if (newSpeed >= 1 && newSpeed<=3){
                speed = newSpeed;
            }
        }

        void setOn(bool newOnVal){
            on = newOnVal;
        }

        void setRadius(double newRadius){
            if (newRadius >= 0){
                radius = newRadius;
            }
        }
};

int main() {

    Fan Fan1;
    Fan Fan2;

    Fan1.setSpeed(3);
    Fan1.setRadius(10);
    Fan1.setOn(true);

    Fan2.setSpeed(2);
    Fan2.setRadius(5);
    Fan2.setOn(false);

    cout<<"\nFan 1 ====";
    cout<<"\nSpeed: "<<Fan1.getSpeed();
    cout<<"\nRadius: "<<Fan1.getRadius();
    cout<<"\nOn Status: "<<boolalpha<<Fan1.getOn();

    cout<<"\nFan 2 ====";
    cout<<"\nSpeed: "<<Fan2.getSpeed();
    cout<<"\nRadius: "<<Fan2.getRadius();
    cout<<"\nOn Status: "<<Fan2.getOn();
    return 0;
}