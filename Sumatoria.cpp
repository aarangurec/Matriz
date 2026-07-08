#include<iostream>
using namespace std;
int main(){
	int A[100][100];
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<"Ingrese el valor en "<<i+1<<j+1<<": ";
			cin>>A[i][j];
		}
	}
	int cont=0;
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cont=cont+A[i][j];}
	} 
	cout<<cont;
	return 0; 
}