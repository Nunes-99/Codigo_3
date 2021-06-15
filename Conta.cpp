#include <iostream>
#include <string>
using namespace std;

class Conta
{
	public:
		Conta(double saldoInicial){
			if(saldoInicial<0){
				cout<<"Saldo inicial invalido"<<endl;
				saldo=0;
			}
			else
				saldo=saldoInicial;			
		}
		void Credito(double valor){
			saldo=saldo+valor;
		}
		void Debito(double valor){
			if(valor<=saldo)
				saldo=saldo-valor;
			else
				cout<<"Saldo inferior ao valor solicitado"<<endl;
		}
		double getSaldo(){
			return saldo;
		}
	private:
		double saldo;
};

int main()
{
	Conta c1 = Conta(200);
	Conta c2 = Conta(-400);
	
	c1.Credito(400);
	cout<<c1.getSaldo()<<endl;
	c2.Debito(100);
	return 0;
}