#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> n;
	cin >> a;
	cin >> b;
	cin >> c;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;

	switch (a)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "�������";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	default:
		break;
	}

	switch (b)
	{
	case 1:
		switch (c)
		{
		case 0:
			cout << "������ ";
			break;
		case 1:
			cout << "����������� ";
			break;
		case 2:
			cout << "���������� ";
			break;
		case 3:
			cout << "���������� ";
			break;
		case 4:
			cout << "������������ ";
			break;
		case 5:
			cout << "���������� ";
			break;
		case 6:
			cout << "����������� ";
			break;
		case 7:
			cout << "���������� ";
			break;
		case 8:
			cout << "������������ ";
			break;
		case 9:
			cout << "������������ ";
			break;
		}
		break;
	case 2:
		cout << "�������� ";
		break;
	case 3:
		cout << "�������� ";
		break;
	case 4:
		cout << "����� ";
		break;
	case 5:
		cout << "��������� ";
		break;
	case 6:
		cout << "���������� ";
		break;
	case 7:
		cout << "���������";
		break;
	case 8:
		cout << "����������� ";
		break;
	case 9:
		cout << "���������";
		break;
	default:
		break;
	}
	switch (c)
	{
	case 1:
		cout << "���� ";
		break;
	case 2:
		cout << "��� ";
		break;
	case 3:
		cout << "��� ";
		break;
	case 4:
		cout << "������ ";
		break;
	case 5:
		cout << "���� ";
		break;
	case 6:
		cout << "����� ";
		break;
	case 7:
		cout << "���� ";
		break;
	case 8:
		cout << "������ ";
		break;
	case 9:
		cout << "������ ";
		break;
	default:
		break;
	}
	if (c == 1)
	{
		cout << "�����";
	}
	else if (c > 1 && c < 5)
	{
		cout << "������";
	}
	else
	{
		cout << "�������" << endl;
	}
	return EXIT_SUCCESS;
}
