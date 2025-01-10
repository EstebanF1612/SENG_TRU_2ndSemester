#include <iostream>
using namespace std;

class Rectangle{
    private:
        double width;
        double height;
    public:
        Rectangle(){
            width = 1;
            height = 1;
        }
        Rectangle(double NewWidth, double NewHeight){
            width = NewWidth;
            height = NewHeight;
        }

        double getWidth(){
            return width;
        }

        double getHeight(){
            return height;
        }

        void setWidth(double newWidth){
            if (newWidth >= 0){
                width = newWidth;
            } else {
                cout<<"\nError: Width must be equal or higher than zero";
            }
        }

        void setHeight(double newHeight){
            if (newHeight >= 0){
                height = newHeight;
            } else {
                cout<<"\nError: Height must be equal or higher than zero";
            }
        }

        double getArea(){
            return width*height;
        }

        double getPerimeter(){
            return ((2*width)+(2*height));
        }     
};

int main(){

    Rectangle Rectangle1;
    Rectangle Rectangle2;

    Rectangle1.setWidth(4);
    Rectangle1.setHeight(40);
    Rectangle2.setWidth(3.5);
    Rectangle2.setHeight(35.9);

    cout<<"\nRectangle 1 =====";
    cout<<"\nWidth: "<<Rectangle1.getWidth();
    cout<<"\nHeight: "<<Rectangle1.getHeight();
    cout<<"\nArea: "<<Rectangle1.getArea();
    cout<<"\nPerimeter: "<<Rectangle1.getPerimeter();


    cout<<"\nRectangle 2 =====";
    cout<<"\nWidth: "<<Rectangle2.getWidth();
    cout<<"\nHeight: "<<Rectangle2.getHeight();
    cout<<"\nArea: "<<Rectangle2.getArea();
    cout<<"\nPerimeter: "<<Rectangle2.getPerimeter();
    
    return 0;
}