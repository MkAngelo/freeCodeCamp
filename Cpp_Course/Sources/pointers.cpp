#include <iostream>

using namespace std;

int main(){
    // POINTER it's a memory address

    int age = 19;
    int *pAge = &age; //pointer variable
    double gpa = 2.7;
    double *pGpa = &gpa; // pointer variable
    string name = "Mike";
    string *pName = &name; // pointer varible

    cout << "Age: " << pAge << endl; // MEmory address
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &*&name << endl;


    cout << "Age: " << *pAge << endl; // Reference 
    cout << "Gpa: " << *&gpa << endl;
    cout << "Name: " << *pName << endl;
    return 0;
}