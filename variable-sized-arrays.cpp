#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	std::vector<std::vector<int>> v;
	for (int i = 0; i < n; i++){
		int len;
		cin >> len;
		std::vector<int> row;
		for (int j = 0; j < len; j++){
			int temp;
			cin >> temp;
			row.push_back(temp);
		}
		v.push_back(v1);
	}
	for (int i = 0; i < q; i++){
		int row;
		int colx;
		cin >> row >> colx;
		cout << v[subArray][idx] << endl;
	}
	return 0;
}