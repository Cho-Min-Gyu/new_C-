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
	year = stoi(date.substr(0, 4));   // 문자열 date의 처음([0])부터 4개의 문자를 추출하는 함수
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
	cout << year << "년" << month << "월" << date << "일" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}