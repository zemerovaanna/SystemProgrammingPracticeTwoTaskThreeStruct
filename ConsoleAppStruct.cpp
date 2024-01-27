#include <iostream>
using namespace std;

struct Contact {
	char name[12];
	char phone[20];
};

int main() {

	setlocale(LC_ALL, "ru");

	Contact contact1, contact2;

	cout << "Первый Контакт" << endl;
	cout << "Введите имя: ";
	cin >> contact1.name;
	cout << "Введите телефон: ";
	cin >> contact1.phone;

	cout << "\nДанные первого контакта:" << endl;
	cout << "Имя: " << contact1.name << endl;
	cout << "Телефон: " << contact1.phone << endl;

	cout << endl;
	cout << "\nОбновление первого контакта:" << endl;
	cout << "Введите имя: ";
	cin >> contact1.name;
	cout << "Введите телефон: ";
	cin >> contact1.phone;

	cout << endl;
	cout << "Второй контакт" << endl;
	cout << "Введите имя: ";
	cin >> contact2.name;
	cout << "Введите телефон: ";
	cin >> contact2.phone;

	Contact contacts1[2]
	{
		contact1, contact2
	};

	for (int i = 0; i < sizeof(contacts1) / sizeof(contacts1[0]); i++)
	{
		cout << endl;
		cout << "\nКонтакт " << i + 1 << endl;
		cout << "Имя: " << contacts1[i].name << endl;
		cout << "Телефон: " << contacts1[i].phone << endl;
	}

	cout << endl;
	cout << "\nУдаление первого контакта" << endl;

	Contact contacts2[sizeof(contacts1) / sizeof(contacts1[0])]{};

	for (int i = 1; i < sizeof(contacts1) / sizeof(contacts1[0]); i++)
	{
		contacts2[i] = contacts1[i];
	}

	for (int i = 0; i < sizeof(contacts2) / sizeof(contacts2[0]); i++)
	{
		cout << endl;
		cout << "\nКонтакт " << i + 1 << endl;
		cout << "Имя: " << contacts2[i].name << endl;
		cout << "Телефон: " << contacts2[i].phone;
	}

	return 0;
}