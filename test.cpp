#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() {
	cout << "谁是最帅的？" << endl;
	cout << "1.我" << endl;
	cout << "2.还是我" << endl;
	char select;
	while (1) {
		cin >> select;
		if (select == 1){
			break;
		}
		else if (select == 2) {
			cout << "也算识趣" << endl;
			system("pause");
			break;
		}
		cout << "你再好好想想？谁说了算" << endl;
	}
	cout << "结束了" << endl;
	return 0;
}