#include <iostream>
#include <map>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	map <int, string> scrable = {
		{123456, "Зубенко Михаил Петрович"},
		{998765, "Мегерова Мегера Мегеровна"},
	{456384,"Раскольников Радион Романович"},
	{654738, "Губерниев Дмитрий Викторович"},
	{243567, "Каэдэхара Кадзуха Киригае"}
	};
	int k,i = 0;
	cout << "Введите ID: ";
	cin >> k;
	for (auto pair : scrable)
	{
		if (k <= pair.first)
		{
			cout << "Id :" << pair.first << "  Fio :" << pair.second << endl; i++;
		}
		
	}
	cout << "Всего людей удв условию: " << i;
	return(0);
}