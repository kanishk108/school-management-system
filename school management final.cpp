#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int admin1();
int main();
int mainmenu();

class admin
{
   private:
   int id_t,id_s,std,age_t,age_s;
   char mbno_t[15];
   char mbno_s[15];
   char name_t[20];
   char name_s[20];
   char Tcourse[30];
   char jdate_t[30];
   char jdate_s[30];
   char email_t[30];
   char email_s[30];
   char div;

   public:
   void getdata_t();                                      // teacher
   void getdata_s();
   void showdata_t();
   void showdata_s();
};

 void admin::getdata_t()                                      // teacher
   {
       cout<<"\n\t\t\t\tEnter Teacher ID: ";
       cin>>id_t;
       cout<<"\n\t\t\t\tEnter Teacher name: ";
       cin>>name_t;
       cout<<"\n\t\t\t\tEnter Teacher course: ";
       cin>>Tcourse;
       cout<<"\n\t\t\t\tEnter the joining date:  ";
       cin>>jdate_t;
       cout<<"\n\t\t\t\tEnter the age:  ";
       cin>>age_t;
       cout<<"\n\t\t\t\tEnter the mobile number:  ";
       cin>>mbno_t;
       cout<<"\n\t\t\t\tEnter the email id :  ";
       cin>>email_t;
   }

   void admin::getdata_s()
   {
       cout<<"\n\n\t\t\t\tEnter Student ID: ";
       cin>>id_s;
       cout<<"\n\t\t\t\tEnter Student name: ";
       cin>>name_s;
       cout<<"\n\t\t\t\tEnter Student std: ";
       cin>>std;
       cout<<"\n\t\t\t\tEnter Student div: ";
       cin>>div;
       cout<<"\n\t\t\t\tEnter the date of addmission:  ";
       cin>>jdate_s;
       cout<<"\n\t\t\t\tEnter the age:  ";
       cin>>age_s;
       cout<<"\n\t\t\t\tEnter the mobile number:  ";
       cin>>mbno_s;
       cout<<"\n\t\t\t\tEnter the email id :  ";
       cin>>email_s;
   }

   void admin::showdata_t()
   {
       cout<<"\n\t\t\t\tTeacher ID: "<<id_t;
       cout<<"\n\t\t\t\tTeacher name: "<<name_t;
       cout<<"\n\t\t\t\tTeacher course: "<<Tcourse;
       cout<<"\n\t\t\t\tTeacher Joining date: "<<jdate_t;
       cout<<"\n\t\t\t\tTeacher age: "<<age_t;
       cout<<"\n\t\t\t\tTeacher mobile number: "<<mbno_t;
       cout<<"\n\t\t\t\tTeacher email ID: "<<email_t;
   }

   void admin::showdata_s()
{
      cout<<"\n\n\t\t\t\tStudent Id:"<<id_s << "\n";
      cout<<"\t\t\t\tStudent name:"<<name_s << endl;
cout<<"\t\t\t\tStudent std:"<<std << endl;
cout<<"\t\t\t\tStudent div:"<<div << endl;
 cout<<"\t\t\t\tStudent Admission date:"<<jdate_s << endl;
 cout<<"\t\t\t\tStudent age:"<<age_s << endl;
 cout<<"\t\t\t\tStudent Mobile number:"<<mbno_s << endl;
 cout<<"\t\t\t\tStudent email id:"<<email_s << endl;
}
/*
class teacher
{
	public: 
void teach();
};

void teacher::teach()
{
	admin s1;
	s1.showdata_t();
}*/

int admin1()
{ 
   admin s1;
   //teacher t1;
   
   int c;
   while(1)
   {
   
   cout<<"\n\n\t\t\t\t1.Add teacher details";	
   cout<<"\n\t\t\t\t2.Add student details";
   cout<<"\n\t\t\t\t3.Show all teacher details";
   cout<<"\n\t\t\t\t4.Show all student details";
   cout<<"\n\t\t\t\t5. <- Go back";
   cout<<"\n\n\t\t\t\tEnter your choice: ";
   cin>>c;
   switch(c)
   {
   	case 1: 
   	s1.getdata_t();
   	break;
   	
   	case 2:
   	s1.getdata_s();
   	break;
   	
   	case 3:
   		s1.showdata_t();
   		break;
   		
   	case 4: 
   		s1.showdata_s();
   		break;
   		
   	case 5:
   		mainmenu();
   		
   		default: 
   		cout<<"\n\t\t\t\t-----INVALID CHOICE-----";
   }
}
}


int mainmenu()                                                                      // mainmenu function
{
admin s1;
int choice;
cout<<"\n\t\t\t\t|||| Welcome to the Coral Coast Convent high school ||||";

cout<<"\n\t\t\t\t1.Admin : ";
cout<<"\n\t\t\t\t2.Teacher : ";
cout<<"\n\t\t\t\t3.Student : ";
cout<<"\n\t\t\t\t4.About us : ";
cout<<"\n\t\t\t\t5.Contact : ";
cout<<"\n\n\t\t\t\tEnter your choice : ";
cin>>choice;

switch (choice)
{
case 1:
admin1();
break;

case 2:
s1.showdata_t();
/*
case 3:
Student();
break;
case 4:
About us();
break;
case 5:
Contact();
break;
*/
}
admin1();
return 0;
}





int main()                                                                   // main function
{
 mainmenu();
return 0;
}


