// LoginPassword.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include "string"
#include <ctime>
#include<windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	string login_true = "King";
	string password_true = "King";

	string login_now;
	string password_now;
	int test_now;

	bool triger = false;
	int repeat = 0;

	do {
		repeat++;
		int test_true = rand() % 1000000;

		cout << "\nБудте добры ввести ваш священный логин: " << "\n";
		cin >> login_now;
		cout << "Будте добры ввести ваш священный пароль: " << "\n";
		cin >> password_now;
		cout << "Если ты человек введи число , которое ты видишь:";
		cout << test_true << "\n";
		cin >> test_now;
		if (test_now == test_true & login_now == login_true & password_now == password_true) {
			cout << "Кожаный ублюдок";
			repeat = 3;
			return 0;
		}
		else {
			cout << "НЕ ПРОЙДЕЕЕЕЕЕШЬ!!!!!!!" << "\n";
			if (repeat = 3) {
				cout << "ХАХАХА Я ТЕБЯ ПОЙМАЛ, жди теперь 30 секунд АХАХАХА\n";
				for (int time = 0; time <= 30; time++) {
					cout << "Осталось=" << 30 - time<<"\n";
					Sleep(1000);
					repeat = 0;
				}
			}
		}

	} while (repeat != 3);


	system("pause");
	return 0;
}



