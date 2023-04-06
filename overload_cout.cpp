// operator overloading
#include<iostream>
using namespace std;



class A{
    public:
    string name;
    long rollno;

};

void operator<<(ostream& COUT, A& a1){
    COUT << "NAME: "<<a1.name<<endl;
    COUT << "ROLL NO : "<<a1.rollno<<endl;

}
int main(){
    A a1;
    a1.name="Aman";
    a1.rollno=26;
    cout<<a1;
}