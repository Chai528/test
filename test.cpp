#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() {
	cout << "˭����˧�ģ�" << endl;
	cout << "1.��" << endl;
	cout << "2.������" << endl;
	char select;
	while (1) {
		cin >> select;
		if (select == 1){
			break;
		}
		else if (select == 2) {
			cout << "Ҳ��ʶȤ" << endl;
			system("pause");
			break;
		}
		cout << "���ٺú����룿˭˵����" << endl;
	}
	cout << "������" << endl;
	return 0;
}