#include "Reports.hpp"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std; 

Data::Data(string n, int id, float g1, float g2, float g3): name(n),idnumb(id), grade1(g1), grade2(g2), grade3(g3) {};
Student::Student(string n, int id, float g1, float g2, float g3) : Data {n,id,g1,g2,g3} {}
string Data::get_name(){ 
    return name; 
}
float Data::get_grade(){ 
    float sum =0; 
    sum = grade1 + grade2 + grade3; 
    gradeavg = sum/3;   
    return gradeavg; 
}
/*int Data::get_idnumb(){ 
     return idnumb; 
}*/
int Data::get_idnumb(){
    //int idnumb = rand(); 
	return idnumb;
}

void Data::set_stdName(string n){ 
    this -> name = n; 
}
void Data:: set_grade(float avg){ 
    this -> gradeavg = avg; 
}
void Data:: set_idnumb(int id){ 
    this -> idnumb = id; 
}
//function returns letter grade to student. 
char Data:: studentData(float avg){
     this-> gradeavg = avg; 
     //this-> lgrade = lg; 
     if(avg >= 90)
        lgrade = 'A'; 
    else if(avg >= 80 && avg <= 89)
        lgrade = 'B'; 
    else if(avg >= 70 && avg <= 79)
        lgrade = 'C'; 
    else if(avg <=69)
        lgrade = 'F'; 

    return lgrade; 
}
