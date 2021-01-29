

#ifndef STUDENT_TEACHER_H_
#define STUDENT_TEACHER_H_
#include <string>

//PROJECT

class Student
{
private:


       int id;
       std::string name;
       std::string addrs;// address
       std::string cel_no;//Phone number
       std::string semester;// name of semester
       int noOfSubjects;
       std::string *subjectList;// name of classes
       char *studentGrades;


public:

       Student();
       Student( int noOfSubjects);
       ~Student();
       int getId();
       void addStudentInfo();
       void displayStudentInfo();


};
class Teacher
{

 private:
       int id;
       std::string name;
       std::string addrs;//Address of teacher
       std::string cel_no;//Phone number
       std::string exp;//experience
       int subj;// number of subjects whos he/she teach
       std::string *nameSubjects;
       int *hours;//hours per Week in each subject
       std::string years;//Number of years in School
public:
       Teacher();
       Teacher(int subj);
       ~Teacher();
       void teachermain();
       int getId();
       void addTeachInfo();
       void displayTeachInfo();
};



#endif /* STUDENT_TEACHER_H_ */
