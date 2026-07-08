#include <iostream> 

using namespace std;
int main(){
	int n;
	cout<<"Tamano de la Matriz "<<endl;
	cin>>n;
	int A [100][100];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<"Ingrese el valor en "<<i+1<<j+1<<": ";
			cin>>A[i][j];
		}
	}
	int S;
    for(int i = 0; i < n; i++){
    	S=S+A[i][i];
    }
    cout<<S;

    return 0;
}