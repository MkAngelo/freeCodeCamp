#include <iostream>
using namespace std;

class Student { // Our class / template
    public:
        string name;
        string major;
        int gpa;

        Student(string aName, string aMajor, int aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        string hasHonors(){
            if( gpa >= 3.5 ){
                return "YES";
            }
            return "NO";
        }
};



int main(){

    Student student1("Jim", "Business", 2.4);
    Student student2("Pan", "Art", 3.9);
    
    cout << student1.name << " has honors?: " << student1.hasHonors() << endl;
    cout << student2.name << " has honors?: " << student2.hasHonors() << endl;

    return 0;
}