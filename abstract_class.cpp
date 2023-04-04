// <!-- An abstract class is designed to act as base class. It is a design concept in program development and provides a base upon which other classes may be built.
// Abstract Class is a class which contains atleast one Pure Virtual function in it. Abstract classes are used to provide an Interface for its sub classes. Classes inheriting an Abstract Class must provide definition to the pure virtual function, otherwise they will also become abstract class.
//  -->


#include<iostream>
using namespace std;


class A{
public:
      virtual void sleep()=0;
};
class B:public A {
    public:
    void sleep(){
        cout<<"sleep of B";
    }

};
class C{
    public:
    void sleep(){
        cout<<"sleep of C ";
    }

};


int main(){
    C d;
    d.sleep();

}






//Inline pure virtual definition is Illegal.
