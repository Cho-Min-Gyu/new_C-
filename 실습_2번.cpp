#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Date {
	int year;
	int month;
	int day;
	string date;
public:
	Date(int a, int b, int c);
	Date(string date);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};

Date::Date(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}

Date::Date(string date) {
	year = stoi(date.substr(0, 4));   // ���ڿ� date�� ó��([0])���� 4���� ���ڸ� �����ϴ� �Լ�
	month = stoi(date.substr(5, 1));
	day = stoi(date.substr(7, 2));
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::show() {
	cout << year << "��" << month << "��" << date << "��" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}