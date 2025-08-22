#include<iostream>
#include<string>
using namespace std;
int main()
{
 string name;
 int age;
 float salary;
 countinue:        //for loop
 cout<<endl;
 cout<<"\t\t\tEnter Your Name: ";
 cin>>name;        //user will enter
 cout<<endl;
 cout<<"\t\t\tEnter Your Age: ";
 cin>>age;            //user will enter
 if (age>0)           //age is positive 
    {
     cout<<endl;
	}
 else
     {
      cout<<"\t\t\tERROR... "<<endl;
      cout<<"\t\t\tEnter Your Age Again: ";
      cin>>age;       //user will enter
      cout<<endl;
	 }
 cout<<"\t\t\tEnter Your Salary: ";
 cin>>salary;
 if (salary>=0)       //salary is always something
    {
     cout<<endl;
	}
 else
     {
      cout<<"\t\t\tERROR..."<<endl;
      cout<<"\t\t\tEnter Your Salary Again: ";           
      cin>>salary;                    //user will enter
      cout<<endl;
	 }
 cout<<"\t\tHELLO! "<<name<<", you are "<<age<<" years old and your salary is $"<<salary<<"."<<endl;        //Random Message
 char response;
 cout<<"\t\tDo you want to countinue this or you want to exit? For Countinue; Press C and For Exit; Press E... ";
 cin>>response;         //user will decide
 cout<<endl;
 if (response == 'C')          
 {
  goto countinue;	    //back to enter your name....
 }
 else
     {
      cout<<"\n\t\t\t\t\tEXITING..."<<endl;
	 }
}     