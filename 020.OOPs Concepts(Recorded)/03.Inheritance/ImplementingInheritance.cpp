#include<iostream>
using namespace std;

class Vehicle {
    protected:
        string name;
        string model;
        int noOfTyres;

    public:
        string getName() {
            return this -> name;
        }

        Vehicle(string _name, string _model, int _noOfTyres) {
            cout << "I am inside vehicle ctor" << endl;

            this -> name = _name;
            this -> model = _model;
            this -> noOfTyres = _noOfTyres;
        }

    
        void start_engine() {
            cout << "Engine is starting " << name << " " << model << endl;
        }

        void stop_engine() {
            cout << "Engine is stopping " << name << " " << model << endl;
        }

        ~Vehicle() {
            cout << "I am inside vehicle dtor" << endl;
        }
};

class Car : public Vehicle {
    protected:
        int noOfDoors;
        string transmissionType;

    public:
        Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres) {
            cout << "I am inside car ctor" << endl;
            
            this -> noOfDoors = _noOfDoors;
            this -> transmissionType = _transmissionType;
        }

        void startAc() {
            cout << "AC has started of " << name << endl;
        }

        ~Car() {
            cout << "I am inside car dtor" << endl;
        }
};

class Motorcycle : public Vehicle {
    protected:
        string handleBarStyle;
        string suspensionType;

    public:
        Motorcycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType) : Vehicle(_name, _model, _noOfTyres) {
            cout << "Mototcycle ctor called" << endl;

            this -> handleBarStyle = _handleBarStyle;
            this -> suspensionType = _suspensionType;
        }

        void wheelie() {
            cout << "Wheelie kar rahi hai " << name << endl;
        }

        ~Motorcycle() {
            cout << "I am inside motorcycle dtor" << endl;
        }
};

int main() {
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAc();
    A.stop_engine();
    //cout << A.name << endl; //Not accessible

    Vehicle v();
    //v.name; //Not accessible

    Motorcycle M("BMW", "VXI", 2, "U", "Hard");
    M.start_engine();
    M.wheelie();
    M.stop_engine();

    return 0;
}