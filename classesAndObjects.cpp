#include<iostream>
using namespace std;

class Teacher {
    //Properties / attributes
    
    string name;
    string dept;
    string subject;
    double salary;

    //methods / member function

    void changeDept(string newDept){
        dept = newDept;
    }

};

int main(){

    Teacher t1; //<-- A 't1' object has been created, syantax to creating an onject ((class name) object name)
    


    return 0;
}