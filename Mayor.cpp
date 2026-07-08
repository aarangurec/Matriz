#include<iostream>
using namespace std;
int main(){
	int A[100][100];
	int n;
	int m;
	cin>>n;
	int mayor;
	cin>>m;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout<<"Ingrese el valor en "<<i+1<<j+1<<": ";
			cin>>A[i][j];
		}
	}
	mayor=A[0][0];
	for(int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if(A[i][j]>mayor){
				mayor=A[i][j];	
			}
	}
	
}
	cout<<"Elemento mayor: "<<mayor;
return 0;
}