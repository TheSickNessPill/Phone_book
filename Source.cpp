#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;

class phone_book
{
private:
	string id; string f_name; string s_name; string patronymic; string email; string number; string year; string place; string about;
public:
	//phone_book();
	phone_book(string id1 = "0", string f_name1 = "#", string s_name1 = "##", string patronymic1 = "###", string email1= "None", string number1= "None", string year1 = "0", string place1 = "None", string about1= "None");
	void IN();
	void OUT();
	void sort();
	friend void find(phone_book& a, int pole, string str);
};

phone_book::phone_book(string id1, string f_name1, string s_name1, string patronymic1, string email1, string number1, string year1, string place1, string about1)
{
	id = id1; f_name = f_name1; s_name = s_name1; patronymic = patronymic1; email = email1; number = number1; year = year1; place = place1; about = about1;
}

void phone_book::IN()
{
	cout << "Ввод полей!" << endl;
	cin >> id >> f_name >> s_name >> patronymic >> email >> number >> year >> place >> about;
}

void phone_book::OUT()
{
	cout << id << " " << f_name << " " << s_name << " " << patronymic << " " << email << " " << number << " " << year << " " << place << " " << about << endl;
}

void find(phone_book &a, int pole,string str)
{
	switch (pole)
	{
	case 1:
		if (a.id == str) a.OUT();
		break;
	case 2:
		if (a.f_name == str) a.OUT();
		break;
	case 3:
		if (a.s_name == str) a.OUT();
		break;
	case 4:
		if (a.patronymic == str) a.OUT();
		break;
	case 5:
		if (a.email == str) a.OUT();
		break;
	case 6:
		if (a.s_name == str) a.OUT();
		break;
	case 7:
		if (a.year == str) a.OUT();
		break;
	case 8:
		if (a.place == str) a.OUT();
		break;
	case 9:
		if (a.about == str) a.OUT();
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	const int N = 2;
	phone_book *A = new phone_book[N];


	for (int i = 0; i < N; i++)
	{ 
		A[i].IN();
	}

	system("cls");

	for (int i = 0; i < N; i++)
	{
		A[i].OUT();
	}
	
	int pole; string str;


	cout << "Поле: "; cin >> pole;
	cout << "Введите запрос: " << endl;cin >> str;
	for (int i(0); i < N; i++)
	{
		find(A[i], pole, str);
	}


	delete []A;
	system("pause");
	return 0;
}