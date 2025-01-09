#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    double weight;
    string color;

public:
    Animal(string NewName, double NewWeight, string NewColor)
    {
        name = NewName;
        // I made it so that the weight is equal to zero kg in case the user inputs negative weight numbers
        (NewWeight >= 0) ? weight = NewWeight : weight = 0;
        color = NewColor;
    }

    string getName()
    {
        return name;
    }

    double getWeight()
    {
        return weight;
    }

    string getColor()
    {
        return color;
    }
};

int main()
{

    string animalName;
    double animalWeight;
    string animalColor;
    cout << "Input the name of animal " << 1 << ": ";
    cin >> animalName;
    cout << "Input the weight of animal " << 1 << ": ";
    cin >> animalWeight;
    cout << "Input the color of animal " << 1 << ": ";
    cin >> animalColor;

    Animal Animal1(animalName, animalWeight, animalColor);

    cout << "Input the name of animal " << 2 << ": ";
    cin >> animalName;
    cout << "Input the weight of animal " << 2 << ": ";
    cin >> animalWeight;
    cout << "Input the color of animal " << 2 << ": ";
    cin >> animalColor;

    Animal Animal2(animalName, animalWeight, animalColor);

    cout<<"Animal 1 ==== \n Name: "<<Animal1.getName()<<"\n Weight: "<<Animal1.getWeight()<<"kg\n Color: "<<Animal1.getColor()<<"\n\n";
    cout<<"Animal 2 ==== \n Name: "<<Animal2.getName()<<"\n Weight: "<<Animal2.getWeight()<<"kg\n Color: "<<Animal2.getColor()<<"\n\n";

    if (Animal1.getWeight()>Animal2.getWeight()){
        cout<<"Animal 1 has the highest weight with "<<Animal1.getWeight()<<"kg";
    } else if (Animal1.getWeight()<Animal2.getWeight()){
        cout<<"Animal 2 has the highest weight with "<<Animal2.getWeight()<<"kg";
    } else {
        cout<<"Both animals have the same weight";
    }
    return 0;
}