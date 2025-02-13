#include<iostream>
using namespace std;

class Teacher {
    //Properties / attributes
    private:
    double salary; //<-- there are some things that we cannot give direct access to

    public:
    string name;
    string dept;
    string subject;
    


    //methods / member function

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double sal){
        salary = sal;
    }

    double getSalary(){
        return salary;
    }

};

int main(){

    Teacher t1; 
    t1.name = "XYZ";
    cout<<t1.name<<endl;
    t1.setSalary(25000);
    cout<<"Rs."<<t1.getSalary()<<endl;

    return 0;
}