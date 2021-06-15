#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
	public:
		GradeBook(string courseName, string professorName){
			this->courseName=courseName;
			this->professorName=professorName;
		}	
		GradeBook(string courseName){
			this->courseName=courseName;
		}		
		void setCourseName (string name)
		{
			courseName=name;
		}
		string getCourseName ()
		{
			return courseName;
		}	
		void setProfessorName (string professorName)
		{
			this->professorName=professorName;
		}
		string getProfessorName ()
		{
			return professorName;
		}
		void displayMessage()
		{
			cout<<"Bem vindo ao Curso de "<<courseName<<endl;
			cout<<"Professor: "<<professorName<<endl;
		}
	private:
		string courseName;
		string professorName;
};

int main()
{
	string nameOfCourse, nameOfProfessor;
	//GradeBook y;
	cout<<"Digite o nome do curso:";
	getline(cin, nameOfCourse);
	cout<<endl;
	cout<<"Digite o nome do professor:";
	getline(cin, nameOfProfessor);
	cout<<endl;
	GradeBook y = GradeBook(nameOfCourse,nameOfProfessor);
	//y.setCourseName(nameOfCourse);
	//y.setProfessorName(nameOfProfessor);
	y.displayMessage();
	return 0;
}