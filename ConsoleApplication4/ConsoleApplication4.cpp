#include <iostream>
using namespace std;
int main() {
	int Grid[10][10] = {};
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> Grid[i][j];
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (Grid[i][j] == 0) {
				if (Grid[i][j - 1] == 2 || Grid[i][j + 1] == 2 || Grid[i][j - 1] == 1 || Grid[i][j + 1] == 1 || Grid[i - 1][j] == 2 || Grid[i + 1][j] == 2 || Grid[i - 1][j] == 1 || Grid[i + 1][j] == 1) {
					Grid[i][j] = 9;
				}
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << Grid[i][j];
			if (j != 9)cout << " ";
		}
		if (i != 9)cout << "\n";
	}
}