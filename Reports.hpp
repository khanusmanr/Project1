#ifndef REPORTS_HPP
#define REPORTS_HPP

#include <iostream>
#include <stdio.h>

using namespace std;

class Student; 

class Data{ 
    private: 
        string name; 
        
    public: 
        Data(string n, int id, float g1, float g2, float g3);
        float gradeavg; 
        float grade1, grade2, grade3; 
        char lgrade; 
        int idnumb; 
        string get_name(); 
        float get_grade(); 
        void set_stdName(string n); 
        void set_grade(float avg); 
        void set_idnumb(int id); 
        char studentData(float avg);
        int get_idnumb();
};

class Student : public Data { 
    public: 
        Student(string n, int id, float g1, float g2, float g3); 
};
#endif