#include<iostream>
using namespace std;

int numeros_primos(int a, int b);


int main()
{
	int a;
	int b;
	int i;
	cout<<"Ingrese el primero numero ";
	cin>>a;
	cout<<"Ingrese el segundo numero ";
	cin>>b;

	cout<<numeros_primos(a,b)<<endl;
	return 0;
}


int numeros_primos(int a, int b)
{
	int contador=0;
	int primo;
	while(a<b)
		{
			a++;
			primo=1;
			contador=2;
			
			while(contador<=a/2)
				{
					if(a%contador==0)
						primo=0;
						contador++;
				}
			if(primo!=0)
				cout<<a<<endl;
		}
}
