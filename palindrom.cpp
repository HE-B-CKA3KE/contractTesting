#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

bool check_polindrom(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	SetConsoleOutputCP(1251);
	string str;
	cout << "Введіть слово: ";
	cin >> str;
	if (check_polindrom(str))
	{
		cout << "Слово є поліндромом.";
	}
	else
	{
		cout << "Слово не є поліндромом"<<endl;
	}
	return 0;
}