#ifndef _STUDENT_
#define _STUDENT_
#include <string>
class Student{
    int GPA;
    int age;
    std::string experience;
    public:
        Student(int GPA, int age, std::string experience): GPA{GPA}, age{age}, experience{experience}{}
        const int getGPA() const {return GPA;}
        const int getAGE() const {return age;}
        const std::string getEXP() const {return experience;}
        void study(){
            GPA++;
        }

};


#endif
