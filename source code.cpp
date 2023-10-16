#include <iostream>
#include "implementation code.cpp"

int main() {
    Dog myDog("Max", "01/01/2010", "John", 30.5, "Male", "Brown");
    cout << myDog.toString() << endl;
    myDog.speak();
    cout << myDog.getTag() << endl;
    
    Cat myCat("Shadow", "05/02/2015", "Mary", 8.2, "Female", "Black");
    cout << myCat.toString() << endl;
    myCat.speak();
    cout << myCat.getTag() << endl;
    
    Bird myBird("Tweety", "12/12/2012", "Tom", 0.8, "Unknown", "Yellow");
    cout << myBird.toString() << endl;
    myBird.speak();
    cout << myBird.getTag() << endl;
}
