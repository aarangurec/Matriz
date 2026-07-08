#include <iostream> 

using namespace std;
int main(){
	int n;
	cout<<"Tamano de la Matriz "<<endl;
	cin>>n;
	int A [100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				A[i][j]=1;
			}
			else {
				A[i][j]=0;
			}
		}
	}
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
