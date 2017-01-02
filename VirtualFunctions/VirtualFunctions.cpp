#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

////  Challenge Code Begin 

class Person {
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
    protected:
        string name;
        int age;
};


class Professor: public Person {
    static int next_id;
    public:
        Professor() : id (next_id) {
            next_id++;
        }
        void getdata();
        void putdata();
    protected:
        int id;
        int publications;
};

void Professor::getdata(){
    cin >> name;
    cin >> age;
    cin >> publications;
}

void Professor::putdata(){
    cout << name << " " << age << " " << publications << " " << id <<endl;
}


class Student:public Person{
    static int next_id;
    public:
        void getdata();
        void putdata();
        Student() : id (next_id) {
            next_id++;
        } 
    protected:
        int id;
        int marks[6];
};

void Student::getdata(){
    cin>> name >> age;
    for (int i = 0; i < 6; i++){
        cin >> marks[i];
    }
}

void Student::putdata(){
    
    int total=0;
    cout << name << " " << age << " ";
    for (auto mark: marks) {
        total += mark;

    }
    cout << total << " " << id << endl; 
}

int Student::next_id = 1;
int Professor::next_id = 1;

////  Challenge Code End


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0;i < n;i++){

        cin >> val;
        if (val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
