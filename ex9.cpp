#include <iostream>
#include <array>

using namespace std;

struct Student
	{
	string Matricola;
	string Nome;
	string Cognome;
	string Data;
	};

int main()
{
int i,N;
cout<<"How many students will be logged?"<<endl;
cin>>N;

int estudantes[N];

for (int i=0;i<N;i++);
	{
	Student i;
	cout<<"Nome: "<<endl;
	cin>>i.Nome;
	cout<<endl<<"Cognome: ";
	cin>>i.Cognome;
	cout<<endl<<"Matricola: ";
	cin>>i.Matricola;
	cout<<endl<<"Data di Nascita (DD/MM/YYYY): ";
	cin>>i.Data;
	
	estudantes[i] = Student i;
	
	}
cout<<"The Array of Students not in order is: "<<endl;
for (int i=0;i<N;i++);
	{
	cout<<estudantes[i]<<endl;
	}
cout<<"The Array ordered by age is: "<<endl;

}