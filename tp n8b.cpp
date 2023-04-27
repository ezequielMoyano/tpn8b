#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string ProcesaPalabra(string frase){
	
	for(int pos=0;pos<frase.size();pos++)
	{
		if(frase[pos]=='a')
		{
		frase[pos]='b';
		}
	}
	frase[frase.size()-1]=' ';
		return frase;
}

int main( ){
	string frase,nueva;
	
	cout<<"ingresar una frase"<<endl;
	cin>>frase;
	
	nueva=ProcesaPalabra(frase);
	
	cout<<"la frase re hecha es: "<<nueva<<endl;
	cin>>frase;
	return 0;
}
