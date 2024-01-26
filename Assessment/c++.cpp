#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class college
{
        int nolectures;
        char lecture[100], subject[100],course[100]; 
   public:
        college(int nolectures, char *lecture, char *subject, char* course)  //Parameterized Constructor
        {
                nolectures=nolectures;
                strcpy(lecture, subject);
                strcpy(course, lecture);
                
        }
        addlecture();
        Assigin();
        display();
};
college::addlecture()   //Add lectures
{
        int damt1;
        cout<<"\n Enter lecture want to add = ";
        cin>>damt1;
        nolectures+=damt1;
}
college::Assigin()  //Assiging values
{
        int wamt1;
        cout<<"\n Assigin value = ";
        cin>>wamt1;
        if(wamt1>nolectures)
                cout<<"\n Assigin value";
        nolectures-=wamt1;
}
college::display()  //displaying the details
{
        cout<<"\n ----------------------";
        cout<<"\n Lecturer Name : "<<lecture;
        cout<<"\n Subject : "<<subject;
        cout<<"\n Course : "<<course;
        cout<<"\n Number of lectures : "<<nolectures;  
}
int main()
{
        int number_lectures;
        char Name_of_course[100], lecturer_subject[100],lecturer_name[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Name of the lecturer. ";
        cin>>lecturer_name;
        cout<<"\n Name of the subject : ";
        cin>>lecturer_subject;
        cout<<"\n Name of course : ";
        cin>>Name_of_course;
        cout<<"\n Number of Lectures : ";
        cin>>number_lectures;
  
        college b1(number_lectures, Name_of_course, lecturer_subject, lecturer_name);  //object is created
        b1.addlecture(); //
        b1.Assigin(); // calling member functions
        b1.display(); //
        
}
