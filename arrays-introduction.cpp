#include <iostream>

using namespace std;
#define MAX 1000
int main(){
	int N;
	cin >> N;
	int arr[MAX];
	for (int i = 0; i < N; i++){
		cin >> arr[i];
	}
	for (int i = N-1; i >= 0; i--){
		cout << arr[i] << " ";
	}
	return 0;
}