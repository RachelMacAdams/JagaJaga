#include <iostream>
#include <map>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	map <int, string> scrable = {
		{123456, "������� ������ ��������"},
		{998765, "�������� ������ ���������"},
	{456384,"������������ ������ ���������"},
	{654738, "��������� ������� ����������"},
	{243567, "��������� ������� �������"}
	};
	int k,i = 0;
	cout << "������� ID: ";
	cin >> k;
	for (auto pair : scrable)
	{
		if (k <= pair.first)
		{
			cout << "Id :" << pair.first << "  Fio :" << pair.second << endl; i++;
		}
		
	}
	cout << "����� ����� ��� �������: " << i;
	return(0);
}