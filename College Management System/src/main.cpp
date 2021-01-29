#include "Student-Teacher.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	bool repeat = true;
	int choice,option,id,p;
	int size;// size  of students or teacher

	Student stud[100];// object array Student
	Teacher teach[100];//object array teacher

	while(repeat)
	{
		cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		cout<<"\n\n\t\t\tCOLLEGUE MANAGEMENT PROGRAM\n\n";
		cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
		cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
		cout<<"1.Students information"<<endl;
		cout<<"2.Teacher information"<<endl;
		cout<<"3.Exit program"<<endl;
		cout<<"Enter your choice: "<<endl;

		cin>>choice;// user choice

		switch(choice)
		{
			case 1:
				 cout<<endl;
			     cout<<"1. Add student\n";
			     cout<<"2. Edit student\n";
			     cout<<"3. Search student\n";
			     cout<<"Choose Option: ";
			     cin>>option;

			    if (option == 1)
			    {
			       cout<< "\nEnter the number of students do you want to add: ";

			       cin>> size;

			       for( int i=1; i<=size; i++ )
			       {
			          cout<<"\nEnter the student "<<i<<" details:"<<endl;
			          stud[i].addStudentInfo();
			          cout<<"\nStudent's information was add successful!\n\n\n";
			       }

			     }// close if option 1
			     else if (option == 2)
			     {
			       cout<<"Enter id of student which you want to edit:";
			       p=-1;
			       cin>>id;
			       cout<<"Enter new information:\n";
			       for( int i=1; i <=size ; i++ )
			       {
			         if(id == stud[i].getId())
			           p =i;
			       }

			       if(p != -1)
			       {
			         stud[p].addStudentInfo();
			         cout<<"Your information has been updated successfully!\n\n\n";
			       }
			       else
			       {
			         cout<<"\n Invalid Student Id\n\n\n";
			       }

			     } // close if option 2
			     else if (option == 3)
			     {
			       cout<<"\nEnter id of student which you want to search:"<<endl;

			       p=-1;
			       cin>>id;

			      for( int i=1; i <=size ; i++ )
			      {
			        if(id == stud[i].getId())
			          p = i;
			      }
			       if(p != -1)
			       {
			         stud[p].displayStudentInfo();
			       }
			       else
			       {
			         cout<<"\n Invalid Student Id\n\n";
			       }
			     }// close if option 3
			    break;// brake case 1
		case 2:

			cout<<endl;
			cout<<"1. Add teacher\n";
			cout<<"2. Edit teacher\n";
			cout<<"3. Search teacher\n";
			cout<<"Choose Option: ";
			cin>>option;

			if (option == 1)
			{
				cout<< "\nEnter the number of teachers do you want to add: ";
				cin>>size;

				for( int i=1; i<=size; i++ )
				{
					cout<<"\nEnter the teacher "<<i<<" details:"<<endl;
					teach[i].addTeachInfo();
					cout<<"\nTeacher's information was add successful!\n\n\n";
				}

			}// close if option 1
			else if (option == 2)
			{
				cout<<"Enter id of teacher which you want to edit:";
				p=-1;
				cin>>id;
				cout<<"Enter new information:\n";
				for( int i=1; i <=size ; i++ )
				{
					if(id == teach[i].getId())
					 {
					   p =i;
					 }

				}

				if(p != -1)
				{
					teach[p].addTeachInfo();
					cout<<"Your information has been updated successfully!\n\n";
				}
				else
				{
					cout<<"\n Invalid Teacher Id\n\n\n";
				}

			 } // close if option 2
			 else if (option == 3)
			 {
				cout<<"\nEnter id of teacher which you want to search:"<<endl;
				p=-1;
				 cin>>id;

				for( int i=1; i <=size ; i++ )
				{
					if(id == teach[i].getId())
					{
					   p = i;
					}

				}
				if(p != -1)
				{
				 teach[p].displayTeachInfo();
				}
				else
				{
					cout<<"\n Invalid Teacher Id\n\n";
				}
		 }// close if option 3
		break;//break case 2

		case 3:
			repeat = false;
			cout<<"Exit program!!\n\n";
			break;

		default:
			cout<<"Invalid choice!!\n\n";
			break;
			}//close switch
		}// close while loop

	   return 0;
}



