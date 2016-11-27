#include<iostream>
using namespace std;
int operant1, operant2, result;
char op;
int main() {
	do
	{
		cout << "ÊäÈë¼ÆËãÊ½:" << endl;
		cin >> operant1 >> op >> operant2;
		switch (op)
		{
		case'+':
			result = operant1 + operant2;
			cout << operant1 << op << operant2 << "=" << result << endl;
			break;
		case'-':
			result = operant1 - operant2;
			cout << operant1 << op << operant2 << "=" << result << endl;
			break;
		case'*':
			result = operant1 * operant2;
			cout << operant1 << op << operant2 << "=" << result << endl;
			break;
		case'/':
			result = operant1 / operant2;
			cout << operant1 << op << operant2 << "=" << result << endl;
			break;
		default:cout << "error\n";
			break;
		}

	} while (operant1 != 0 && op != 48 && operant2 != 0);
	cout << exit;
}