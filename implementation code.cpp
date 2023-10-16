#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string type;
    string name;
    string birthDate;
    string owner;
    double weight;
    string sex;
    string color;
public:
    // Default constructor
    Pet() {
        type = "";
        name = "";
        birthDate = "";
        owner = "";
        weight = 0.0;
        sex = "";
        color = "";
    }
    
    // Constructor with parameters
    Pet(string t, string n, string b, string o, double w, string s, string c) {
        type = t;
        name = n;
        birthDate = b;
        owner = o;
        weight = w;
        sex = s;
        color = c;
    }
    
    // Pure virtual method
    virtual void speak() = 0;
    
    // Method to get owner tag
    string getTag() {
        return "If lost, call " + owner;
    }
    
    // Method to get pet information
    string toString() {
        string info = "Name: " + name + "\n";
        info += "Type: " + type + "\n";
        info += "Birth Date: " + birthDate + "\n";
        info += "Owner: " + owner + "\n";
        info += "Weight: " + to_string(weight) + "\n";
        info += "Sex: " + sex + "\n";
        info += "Color: " + color + "\n";
        return info;
    }
};

class Dog : public Pet {
public:
    Dog(string n, string b, string o, double w, string s, string c) : Pet("Dog", n, b, o, w, s, c) {}
    void speak() {
        cout << "Bark! Bark!" << endl;
    }
};

class Cat : public Pet {
public:
    Cat(string n, string b, string o, double w, string s, string c) : Pet("Cat", n, b, o, w, s, c) {}
    void speak() {
        cout << "Meow! Meow!" << endl;
    }
};

class Bird : public Pet {
public:
    Bird(string n, string b, string o, double w, string s, string c) : Pet("Bird", n, b, o, w, s, c) {}
    void speak() {
        cout << "Tweet! Tweet!" << endl;
    }
};

class Turtle : public Pet {
public:
    Turtle(string n, string b, string o, double w, string s, string c) : Pet("Turtle", n, b, o, w, s, c) {}
    void speak() {
        cout << "Hiss! Hiss!" << endl;
    }
};