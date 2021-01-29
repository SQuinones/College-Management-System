
// PROJECT

#include <iostream>
#include <string>
#include "Student-Teacher.h"

using namespace std;



Student::Student()
{

}

Student::Student( int noOfSubjects)
{
	addStudentInfo();
	subjectList = new string[noOfSubjects];
	studentGrades = new char [noOfSubjects];
}
Student::~Student()
   {
       delete[]subjectList;
       delete[]studentGrades;
   }

int Student:: getId()
{
	return id;
}

void Student :: addStudentInfo()
{

	cout<<"\nEnter Id: ";
	cin>>id;
	cin.ignore();
	cout<<"Enter Name: ";
	getline(cin,name);
	cout<<"Enter address:";
	getline(cin,addrs);
	cout<<"Enter telephone number:";
	cin>>cel_no;
	cout<<"Enter Semester name: ";
	cin>>semester;
	cout<<"Enter number of subjects: ";
	cin>>noOfSubjects;
	cin.ignore();
	subjectList = new string[noOfSubjects];
	  for(int i=0;i<noOfSubjects;i++)
	  {
	    cout<<"Enter name of subject "<<(i+1)<<":"<<endl;
	    getline(cin,subjectList[i]);
	  }
	studentGrades = new char [noOfSubjects];
	for(int i = 0 ; i < noOfSubjects ;i++)
	{
		cout <<"Enter letter grades:\n"<<subjectList[i]<<":";
		cin>>studentGrades[i];
	}
}
void Student::displayStudentInfo()
{
	cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<addrs<<endl;
    cout<<"Telephone number: "<<cel_no<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"Number of subjects: "<<noOfSubjects<<endl;
    cout<<"Subjects: "<<endl;
     for(int i=0;i<noOfSubjects;i++)
     {
       cout<<"Class "<<(i+1)<<": "<<subjectList[i]<<endl;
     }
     cout<< "Grades:" << endl;
     for(int i = 0 ; i<noOfSubjects; i++)
     {
       cout<<subjectList[i]<<": "<< studentGrades[i] <<endl; //printing the grades
     }
}

Teacher::Teacher()
{


}
Teacher :: Teacher(int subj)
{
	addTeachInfo();
	nameSubjects= new string[subj];
	hours = new int [subj];

}

Teacher:: ~Teacher()
{
	delete[]nameSubjects;
	delete[]hours;
}
 int Teacher::getId()
 {
	 return id;
 }

 void Teacher:: addTeachInfo()
 {

	 cout<<"\nEnter Id: ";
	 cin>>id;
	 cin.ignore();
	 cout<<"Enter Name: ";
	 getline(cin,name);
	 cout<<"Enter address:";
	 getline(cin,addrs);
	 cout<<"Enter telephone number:";
	 cin>>cel_no;
	 cin.ignore();
	 cout<<"Enter years or months of experience: ";
	 getline(cin,exp);
	 cout<<"Enter number of subjects "<<name<<" teachs:";;
	 cin>>subj;
	 cin.ignore();
	 nameSubjects = new string[subj];
	 for(int i=0;i<subj;i++)
	 {
	 	cout<<"Enter name of subject "<<(i+1)<<":"<<endl;
	 	getline(cin,nameSubjects[i]);
	 }
	 hours = new int [subj];
	 for(int i = 0 ; i < subj ;i++)
	 {
		 cout <<"Enter hours per week in "<<nameSubjects[i]<<":";
		 cin>>hours[i];
	 }
 }

 void Teacher::displayTeachInfo()
 {
	 cout<<"Id: "<<id<<endl;
	     cout<<"Name: "<<name<<endl;
	     cout<<"Address: "<<addrs<<endl;
	     cout<<"Telephone number: "<<cel_no<<endl;
	     cout<<"Time of experience: "<<exp<<endl;
	     cout<<"Number of subjects: "<<subj<<endl;
	     cout<<name<<" teaches: "<<endl;
	      for(int i=0;i<subj;i++)
	      {
	        cout<<"Class "<<(i+1)<<": "<<nameSubjects[i]<<endl;
	      }
	      cout<< "Hours:" << endl;
	      for(int i = 0 ; i<subj; i++)
	      {
	        cout<<nameSubjects[i]<<": "<<hours[i] <<endl; //printing the grades
	      }
 }


