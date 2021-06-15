#include <iostream>
#include <string>
using namespace std;

class Empregado
{
	public:
		Empregado(string nome, string sobrenome, double salario){
			this->nome=nome;
			this->sobrenome=sobrenome;
			this->salario=salario;
		}
		string getNome(){
			return nome;
		}
		void setNome(string nome){
			this->nome = nome;
		}
		string getSobrenome(){
			return sobrenome;
		}
		void setSobrenome(string sobrenome){
			this->sobrenome = sobrenome;
		}
		double getSalario(){
			return salario;
		}
		void setSalario(double salario){
			this->salario = salario;
		}
		double salarioAnual(){
			return salario*13;
		}
		void darAumento(double percentual){
			salario=salario + salario*percentual;
		}
	private:
		string nome;
		string sobrenome;
		double salario;
};

int main()
{
	Empregado e1 = Empregado("Joao", "da Silva", 3000);
	Empregado e2 = Empregado("Jose", "Moreira", 2000);
	cout<<"Salario Anual 1: "<< e1.salarioAnual()<<endl;
	cout<<"Salario Anual 2: "<< e2.salarioAnual()<<endl;
	e1.darAumento(0.10);
	e2.darAumento(0.10);
	cout<<"Salario Anual 1: "<< e1.salarioAnual()<<endl;
	cout<<"Salario Anual 2: "<< e2.salarioAnual()<<endl;
	return 0;
}