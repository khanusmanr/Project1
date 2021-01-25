#include "../Reports.hpp"
#include <gtest/gtest.h>

TEST(gradavg, Testing_grade_average){ 
    string n =  "Usman"; 
    int id = 10691311; 
    float g1 = 95; 
    float g2 = 90; 
    float g3 = 100; 
    float gavg =0; 
    //char lg = 'A'; 
    Student std(n,id,g1,g2,g3); 
    
   ASSERT_EQ(g1,std.grade1); 
   ASSERT_EQ(g2,std.grade2);
   ASSERT_EQ(g3,std.grade3);
   gavg = std.get_grade(); 
   ASSERT_EQ(gavg,std.gradeavg);
};

TEST(GradeReport, Testing_lettergrade){
    string n =  "Usman"; 
    int id = 10691311; 
    float g1 = 95; 
    float g2 = 90; 
    float g3 = 100; 
    float gavg = 95;
    char ch;  
    Student std(n,id,g1,g2,g3); 
    ch = std.studentData(gavg); 
    ASSERT_EQ(ch, std.lgrade);
};
/*
TEST(IDNumbGen, Testing_IDNumGenerator){
    string n =  "Usman"; 
    int id  = 0; 
    float g1 = 95; 
    float g2 = 90; 
    float g3 = 100; 
    Student std(n,id,g1,g2,g3);
    id = std.get_idnumb(); 
    ASSERT_EQ(id, std.idnumb); 
};*/