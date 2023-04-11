#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <random>
using namespace std;

int av_tar = 0;
string password(string n)
{
	string k, j, m;
	if (n.length() % 2 != 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) {
			k += " ";
		}
		for (int i = 0; i < n.length(); i++) { m += "*"; }
		j = k + m + k + " ";
		return j;
	}
	if (n.length() % 2 == 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) { k += " "; }
		for (int i = 0; i < n.length(); i++) { m += "*"; }
		j = k + m + k;
		return j;
	}
}
string password_f(string n)
{
	string k, j, m;
	if (n.length() % 2 != 0) {
		for (int i = 0; i < ((20 - n.length()) / 2); i++) {
			k += " ";
		}
		for (int i = 0; i < n.length(); i++) { m += "*"; }
		j = k + m + k + " ";
		return j;
	}
	if (n.length() % 2 == 0) {
		for (int i = 0; i < ((20 - n.length()) / 2); i++) { k += " "; }
		for (int i = 0; i < n.length(); i++) { m += "*"; }
		j = k + m + k;
		return j;
	}
}

string data(string n)
{
	string k, j;
	if (n.length() % 2 != 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) {
			k += " ";
		}
		j = k + n + k + " ";
		return j;
	}
	if (n.length() % 2 == 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) { k += " "; }
		j = k + n + k;
		return j;
	}
}
string data1(string n)
{
	string k, j;
	if (n.length() % 2 != 0) {
		for (int i = 0; i < ((20 - n.length()) / 2); i++) {
			k += " ";
		}
		j = k + n + k + " ";
		return j;
	}
	if (n.length() % 2 == 0) {
		for (int i = 0; i < ((20 - n.length()) / 2); i++) { k += " "; }
		j = k + n + k;
		return j;
	}
}
string num(string n)
{
	string k, j;
	if (n.length() % 2 != 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) {
			k += " ";
		}
		j = k + "+" + n + k;
		return j;
	}
	if (n.length() % 2 == 0) {
		for (int i = 0; i < (((30 - n.length()) / 2) - 1); i++) { k += " "; }
		j = (k + "+" + n + k + " ");
		return j;
	}
}

string data(string m, string l)
{
	string k, j, n;
	n = m + " " + l;
	if (n.length() % 2 != 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) {
			k += " ";
		}
		j = k + n + k + " ";
		return j;
	}
	if (n.length() % 2 == 0) {
		for (int i = 0; i < ((30 - n.length()) / 2); i++) { k += " "; }
		j = k + n + k;
		return j;
	}
}

string random_string()
{
	string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	random_device rd;
	mt19937 generator(rd());

	shuffle(str.begin(), str.end(), generator);

	return str.substr(0, 6);
}

class Registration {
protected:
	string i1;
	string login1, name, surname, email;
	string password1, password2, m_number;
public:
	void registration_page() {

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                        REGISTRATION                                          " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 0);
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;

		/////////////////////////////////////////////////NAME

		cout << "                         ";
		cout << char(218);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(194);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(191) << endl;
		cout << "                         ";
		cout << char(179) << "  Full Name    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << " Mobile Number " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "    Email      " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "   Password    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(192);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(193);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(217) << endl;

		cout << "\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field[ Name ]: ";
		cin >> name;
		system("cls");

		/////////////////////////////////////SURNAME

		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                        REGISTRATION                                          " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "                         ";
		cout << char(218);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(194);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(191) << endl;
		cout << "                         ";
		cout << char(179) << "  Full Name    " << char(179) << data(name) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << " Mobile Number " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "    Email      " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "   Password    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(192);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(193);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(217) << endl;

		cout << "\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field[ Surname ]: ";
		cin >> surname;
		system("cls");

		//////////////////////////////////////////MOBILE NUMBER

		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                        REGISTRATION                                          " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "                         ";
		cout << char(218);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(194);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(191) << endl;
		cout << "                         ";
		cout << char(179) << "  Full Name    " << char(179) << data(name, surname) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << " Mobile Number " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "    Email      " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "   Password    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(192);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(193);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(217) << endl;

		cout << "\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field[ Mobile Number ]: +";
		cin >> m_number;
		system("cls");

		///////////////////////////////////////////////////EMAIL

		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                        REGISTRATION                                          " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "                         ";
		cout << char(218);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(194);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(191) << endl;
		cout << "                         ";
		cout << char(179) << "  Full Name    " << char(179) << data(name, surname) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << " Mobile Number " << char(179) << num(m_number) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "    Email      " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "   Password    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(192);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(193);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(217) << endl;

		cout << "\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field[ Email ]: ";
		cin >> email;
		system("cls");
	line334:
		//////////////////////////////////////////////PASSWORD

		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                        REGISTRATION                                          " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 0);
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "                         ";
		cout << char(218);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(194);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(191) << endl;
		cout << "                         ";
		cout << char(179) << "  Full Name    " << char(179) << data(name, surname) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << " Mobile Number " << char(179) << num(m_number) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "    Email      " << char(179) << data(email) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "   Password    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(192);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(193);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(217) << endl;

		cout << "\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 0);
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << "Input Field[ Password ]: ";
		cin >> password1;
		system("cls");

		/////////////////////////////////////////////////////REENTER PASSWORD
	line566:
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                        REGISTRATION                                          " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "                         ";
		cout << char(218);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(194);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(191) << endl;
		cout << "                         ";
		cout << char(179) << "  Full Name    " << char(179) << data(name, surname) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << " Mobile Number " << char(179) << num(m_number) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "    Email      " << char(179) << data(email) << char(179) << endl;
		cout << "                         ";
		cout << char(195);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(197);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(180) << endl;
		cout << "                         ";
		cout << char(179) << "   Password    " << char(179) << "                              " << char(179) << endl;
		cout << "                         ";
		cout << char(192);
		for (int i = 0; i < 15; i++) {
			cout << char(452);
		}
		cout << char(193);
		for (int i = 0; i < 30; i++) {
			cout << char(452);
		}
		cout << char(217) << endl;

		cout << "\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field[ Reenter Password ]: ";
		cin >> password2;
		system("cls");
		if (password1 == password2) {
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "                                        REGISTRATION                                          " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 0);
			cout << endl;
			cout << endl;
			SetConsoleTextAttribute(h, 6);
			cout << endl;
			cout << "                         ";
			cout << char(218);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(194);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(191) << endl;
			cout << "                         ";
			cout << char(179) << "  Full Name    " << char(179) << data(name, surname) << char(179) << endl;
			cout << "                         ";
			cout << char(195);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                         ";
			cout << char(179) << " Mobile Number " << char(179) << num(m_number) << char(179) << endl;
			cout << "                         ";
			cout << char(195);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                         ";
			cout << char(179) << "    Email      " << char(179) << data(email) << char(179) << endl;
			cout << "                         ";
			cout << char(195);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                         ";
			cout << char(179) << "   Password    " << char(179) << password(password1) << char(179) << endl;
			cout << "                         ";
			cout << char(192);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(193);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(217) << endl;

			cout << "\n\n\n" << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 0);
			cout << endl;
			SetConsoleTextAttribute(h, 6);
			login1 = random_string();
			cout << "You have succesfully registered" << endl;
			cout << "Your login: " << login1 << endl;
			cout << "Any key to continue: ";
			cin.get();
			cin.get();
		}
		else {
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "                                        REGISTRATION                                          " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 0);
			cout << endl;
			cout << endl;
			SetConsoleTextAttribute(h, 6);
			cout << endl;
			cout << "                         ";
			cout << char(218);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(194);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(191) << endl;
			cout << "                         ";
			cout << char(179) << "  Full Name    " << char(179) << data(name, surname) << char(179) << endl;
			cout << "                         ";
			cout << char(195);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                         ";
			cout << char(179) << " Mobile Number " << char(179) << num(m_number) << char(179) << endl;
			cout << "                         ";
			cout << char(195);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                         ";
			cout << char(179) << "    Email      " << char(179) << data(m_number) << char(179) << endl;
			cout << "                         ";
			cout << char(195);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                         ";
			cout << char(179) << "   Password    " << char(179) << "       Wrong Password         " << char(179) << endl;
			cout << "                         ";
			cout << char(192);
			for (int i = 0; i < 15; i++) {
				cout << char(452);
			}
			cout << char(193);
			for (int i = 0; i < 30; i++) {
				cout << char(452);
			}
			cout << char(217) << endl;

			cout << "\n\n\n" << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << endl;
			cout << "The passwords doesn't match, please reenter passwords: ";
			cin >> password1;
			system("cls");
			goto line566;
		}
		system("cls");
	}
	void save_data() {
		ofstream outfile;
		outfile.open("User.txt", ios::app);
		outfile << login1 << endl;
		outfile << password1 << endl;
		outfile.close();
	}
	void admin() {
		ofstream out_admin;
		out_admin.open("Admin.txt", ios::app);
	}
};

class Login :public Registration {
protected:
	int i;
	string login;
	string password;
	string password3;
	string line, line1;

public:
	void display() {
		ifstream infile, infile1, in_admin;
		infile.open("User.txt", ios::app);
		infile1.open("User.txt", ios::app);
		in_admin.open("Admin.txt", ios::app);
		string temp;
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "  LOGIN                                                                                       " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 6);

		cout << "\n\n" << endl;
		cout << "                     ";
		cout << char(218);
		for (int i = 0; i < 9; i++) { cout << char(452); }
		cout << char(191) << "                        ";
		cout << char(218);
		for (int i = 0; i < 9; i++) { cout << char(452); }
		cout << char(191) << endl;
		cout << "                     ";
		cout << char(179) << " 1.Admin " << char(179) << "                        " << char(179) << " 2.User  " << char(179) << endl;
		cout << "                     ";
		cout << char(448);
		for (int i = 0; i < 9; i++) { cout << char(452); }
		cout << char(217);
		cout << "                        ";
		cout << char(448);
		for (int i = 0; i < 9; i++) { cout << char(452); }
		cout << char(217) << endl;
		cout << "\n\n\n\n\n\n\n" << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field: ";
		cin >> i;
		system("cls");
		switch (i) {
		case 1:

			//////////////////////////////////////////////////////////////LOGIN

			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "  LOGIN " << char(26) << " Admin                                                                               " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;

			cout << "\n\n\n\n" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << "                             ";
			cout << char(218);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(194);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(191) << endl;
			cout << "                             ";
			cout << char(179) << "  Login   " << char(179) << "                    " << char(179) << endl;
			cout << "                             ";
			cout << char(195);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                             ";
			cout << char(179) << " Password " << char(179) << "                    " << char(179) << endl;
			cout << "                             ";
			cout << char(192);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(193);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(217) << endl;

			cout << "\n\n\n\n\n" << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << endl;
			cout << "Input Field[ Login ]: ";
			cin >> login;

			while (in_admin) {
				getline(in_admin, line);
				if (login == line) {
					getline(in_admin, line);
				line908:
					system("cls");
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;
					SetConsoleTextAttribute(h, 96);
					cout << "  LOGIN " << char(26) << " Admin                                                                               " << endl;
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;

					cout << "\n\n\n\n" << endl;
					SetConsoleTextAttribute(h, 6);
					cout << "                             ";
					cout << char(218);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(194);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(191) << endl;
					cout << "                             ";
					cout << char(179) << "  Login   " << char(179) << data1(login) << char(179) << endl;
					cout << "                             ";
					cout << char(195);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(197);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(180) << endl;
					cout << "                             ";
					cout << char(179) << " Password " << char(179) << "                    " << char(179) << endl;
					cout << "                             ";
					cout << char(192);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(193);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(217) << endl;

					cout << "\n\n\n\n\n" << endl;
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;
					SetConsoleTextAttribute(h, 6);
					cout << endl;
					cout << "Input Field[ Password ]: ";
					cin >> password;
					if (password == line) {
						system("cls");
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;
						SetConsoleTextAttribute(h, 96);
						cout << "  LOGIN " << char(26) << " Admin                                                                               " << endl;
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;

						cout << "\n\n\n\n" << endl;
						SetConsoleTextAttribute(h, 6);
						cout << "                             ";
						cout << char(218);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(194);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(191) << endl;
						cout << "                             ";
						cout << char(179) << "  Login   " << char(179) << data1(login) << char(179) << endl;
						cout << "                             ";
						cout << char(195);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(197);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(180) << endl;
						cout << "                             ";
						cout << char(179) << " Password " << char(179) << password_f(password) << char(179) << endl;
						cout << "                             ";
						cout << char(192);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(193);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(217) << endl;

						cout << "\n\n\n\n\n" << endl;
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;
						SetConsoleTextAttribute(h, 6);
						cout << endl;
						cout << "You have succesfully logged in, press enter to continue: ";
						cin.get();
						goto line1206;
					}
					else {
						cout << "You have entered wrong password, press enter to reenter password: ";
						cin.get();
						cin.get();
						goto line908;

					}

				}
			}

		case 2:

			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "  LOGIN " << char(26) << " User                                                                                " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;

			cout << "\n\n\n\n" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << "                             ";
			cout << char(218);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(194);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(191) << endl;
			cout << "                             ";
			cout << char(179) << "  Login   " << char(179) << "                    " << char(179) << endl;
			cout << "                             ";
			cout << char(195);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                             ";
			cout << char(179) << " Password " << char(179) << "                    " << char(179) << endl;
			cout << "                             ";
			cout << char(192);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(193);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(217) << endl;

			cout << "\n\n\n\n\n" << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << endl;
			cout << "Input Field[ Login ]: ";
			cin >> login;

			while (infile) {
				getline(infile, line);
				if (login == line) {
					getline(infile, line);
				line1034:
					system("cls");
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;
					SetConsoleTextAttribute(h, 96);
					cout << "  LOGIN " << char(26) << " User                                                                                " << endl;
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;

					cout << "\n\n\n\n" << endl;
					SetConsoleTextAttribute(h, 6);
					cout << "                             ";
					cout << char(218);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(194);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(191) << endl;
					cout << "                             ";
					cout << char(179) << "  Login   " << char(179) << data1(login) << char(179) << endl;
					cout << "                             ";
					cout << char(195);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(197);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(180) << endl;
					cout << "                             ";
					cout << char(179) << " Password " << char(179) << "                    " << char(179) << endl;
					cout << "                             ";
					cout << char(192);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(193);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(217) << endl;

					cout << "\n\n\n\n\n" << endl;
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;
					SetConsoleTextAttribute(h, 6);
					cout << endl;
					cout << "Input Field[ Password ]: ";
					cin >> password;
					if (password == line) {
						system("cls");
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;
						SetConsoleTextAttribute(h, 96);
						cout << "  LOGIN " << char(26) << " User                                                                                " << endl;
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;

						cout << "\n\n\n\n" << endl;
						SetConsoleTextAttribute(h, 6);
						cout << "                             ";
						cout << char(218);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(194);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(191) << endl;
						cout << "                             ";
						cout << char(179) << "  Login   " << char(179) << data1(login) << char(179) << endl;
						cout << "                             ";
						cout << char(195);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(197);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(180) << endl;
						cout << "                             ";
						cout << char(179) << " Password " << char(179) << password_f(password) << char(179) << endl;
						cout << "                             ";
						cout << char(192);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(193);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(217) << endl;

						cout << "\n\n\n\n\n" << endl;
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;
						SetConsoleTextAttribute(h, 6);
						cout << endl;
						cout << "You have succesfully logged in, press enter to continue: ";
						cin.get();
						goto line1206;
					}
					else {
						cout << "You have entered wrong password, press enter to reenter password: ";
						cin.get();
						cin.get();
						goto line1034;

					}

				}
			}
			system("cls");
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "  LOGIN " << char(26) << " User                                                                                " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;

			cout << "\n\n\n\n" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << "                             ";
			cout << char(218);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(194);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(191) << endl;
			cout << "                             ";
			cout << char(179) << "  Login   " << char(179) << "                    " << char(179) << endl;
			cout << "                             ";
			cout << char(195);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(197);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(180) << endl;
			cout << "                             ";
			cout << char(179) << " Password " << char(179) << "                    " << char(179) << endl;
			cout << "                             ";
			cout << char(192);
			for (int i = 0; i < 10; i++) {
				cout << char(452);
			}
			cout << char(193);
			for (int i = 0; i < 20; i++) {
				cout << char(452);
			}
			cout << char(217) << endl;

			cout << "\n\n\n\n\n" << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << endl;
			cout << "Account with this name doesn't exist, please try again: ";
			cin >> login;
			while (infile1) {
				getline(infile1, line1);
				if (login == line1) {
					getline(infile1, line1);
				line1240:
					system("cls");
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;
					SetConsoleTextAttribute(h, 96);
					cout << "  LOGIN " << char(26) << " User                                                                                " << endl;
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;

					cout << "\n\n\n\n" << endl;
					SetConsoleTextAttribute(h, 6);
					cout << "                             ";
					cout << char(218);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(194);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(191) << endl;
					cout << "                             ";
					cout << char(179) << "  Login   " << char(179) << data1(login) << char(179) << endl;
					cout << "                             ";
					cout << char(195);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(197);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(180) << endl;
					cout << "                             ";
					cout << char(179) << " Password " << char(179) << "                    " << char(179) << endl;
					cout << "                             ";
					cout << char(192);
					for (int i = 0; i < 10; i++) {
						cout << char(452);
					}
					cout << char(193);
					for (int i = 0; i < 20; i++) {
						cout << char(452);
					}
					cout << char(217) << endl;

					cout << "\n\n\n\n\n" << endl;
					SetConsoleTextAttribute(h, 102);
					cout << "______________________________________________________________________________________________" << endl;
					SetConsoleTextAttribute(h, 6);
					cout << endl;
					cout << "Input Field[ Password ]: ";
					cin >> password;
					if (password == line1) {
						system("cls");
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;
						SetConsoleTextAttribute(h, 96);
						cout << "  LOGIN " << char(26) << " User                                                                                " << endl;
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;

						cout << "\n\n\n\n" << endl;
						SetConsoleTextAttribute(h, 6);
						cout << "                             ";
						cout << char(218);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(194);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(191) << endl;
						cout << "                             ";
						cout << char(179) << "  Login   " << char(179) << data1(login) << char(179) << endl;
						cout << "                             ";
						cout << char(195);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(197);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(180) << endl;
						cout << "                             ";
						cout << char(179) << " Password " << char(179) << password_f(password) << char(179) << endl;
						cout << "                             ";
						cout << char(192);
						for (int i = 0; i < 10; i++) {
							cout << char(452);
						}
						cout << char(193);
						for (int i = 0; i < 20; i++) {
							cout << char(452);
						}
						cout << char(217) << endl;

						cout << "\n\n\n\n\n" << endl;
						SetConsoleTextAttribute(h, 102);
						cout << "______________________________________________________________________________________________" << endl;
						SetConsoleTextAttribute(h, 6);
						cout << endl;
						cout << "You have succesfully logged in, press enter to continue: ";
						cin.get();
						goto line1206;
					}
					else {
						cout << "You have entered wrong password, press enter to reenter password: ";
						cin.get();
						cin.get();
						getline(infile1, line1);
						goto line1240;

					}

				}
			}



			break;
		default:
			return display();
		}
	line1206:
		in_admin.close();
		infile.close();
		infile1.close();

	}
};

//////////////////////////////////////////////

class Balance {

public:
	double balance;
	int mb;
	int sms;
	int minut;
	
};

class Packages :public Balance {

};

class Services :public Balance {

};

class Tariffs : public Balance {
public:
	bool a_tarif = false;
	string s_tarif;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	float price;
	char choose;
	void tarif() {
		begin:
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 96);
		cout << "                                         TARIFFS                                              " << endl;
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << "\n\n\n\n";
		cout << "1.Just 10" << endl;
		cout << "2.Street" << endl;
		cout << "3.Flash" << endl;
		cout << "4.Royal" << endl;
		cout << "Any keys to go back" << endl;

		cout << "\n\n\n\n\n\n\n";
		SetConsoleTextAttribute(h, 102);
		cout << "______________________________________________________________________________________________" << endl;
		SetConsoleTextAttribute(h, 6);
		cout << endl;
		cout << "Input Field: ";
		cin >> choose;
		system("cls");
		switch (choose) {
		case '1':

			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "  TARIFFS " << char(26) << " Just 10                                                                           " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << "\n\n\n";
			cout << "  \t\t\t10000 soums /month" << endl;
			cout << char(4) << " 10 minutes of outgoing calls within Uzbekistan" << endl;
			cout << char(4) << " 10 SMS included SMS within Uzbekistan" << endl;
			cout << char(4) << " 10 Mb of internet traffic" << endl;
			cout << char(4) << " Calls over the limit 10 soums SMS" << endl;
			cout << char(4) << " Within Uzbekistan 10 soums 1 Mb of traffic over 10 soums limit" << endl;
			cout << char(16) << " 1 - for activation" << endl;
			cout << char(16) << " Any keys to go back " << endl;

			cout << "\n\n\n\n\n";
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 0);
			cout << "\n";
			SetConsoleTextAttribute(h, 6);
			cout << "Input Field: ";
			cin >> choose;
			if (::av_tar != 1) {
				if (choose == '1') {
					cout << "The tariff 'Just 10' has been succesfully activated" << endl;
					s_tarif = "Just 10";
					::av_tar = 1;
					a_tarif = true;
					mb = 10;
					sms = 10;
					minut = 10;
					cout << "Enter any keys to continue: ";
					cin.get();
					cin.get();
				}
				else {
					goto begin;
				}
			}
			else {
				cout << "!!!You have already choose tariff, you can change it from next month" << endl;
				cout << "Press any key to go back: ";
				cin.get();
				cin.get();
				goto begin;

			}
			system("cls");
			break;


		case '2':

			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 96);
			cout << "  TARIFFS " << char(26) << " Street                                                                            " << endl;
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 6);
			cout << "\n\n\n";
			cout << "  \t\t\t39900 sum / month" << endl;
			cout << char(4) << " 750 minutes of outgoing calls in Uzbekistan" << endl;
			cout << char(4) << " 1500 minutes of outgoing calls inside the network" << endl;
			cout << char(4) << " 750 SMS included SMS in Uzbekistan" << endl;
			cout << char(4) << " 6500 MB Internet in all directions" << endl;
			cout << char(4) << " Calls over the limit 126 soum" << endl;
			cout << char(4) << " 1MB traffic over limit 160 soum" << endl;
			cout << char(16) << " 1 - for activation" << endl;
			cout << char(16) << " Any keys to go back " << endl;


			cout << "\n\n\n\n";
			SetConsoleTextAttribute(h, 102);
			cout << "______________________________________________________________________________________________" << endl;
			SetConsoleTextAttribute(h, 0);
			cout << "\n";
			SetConsoleTextAttribute(h, 6);
			cout << "Input Field: ";
			cin >> choose;
			if (::av_tar != 1) {
				if (choose == '1') {
					cout << "The tariff 'Street' has been succesfully activated" << endl;
					s_tarif = "Street";
					::av_tar = 1;
					a_tarif = true;
					mb = 10;
					sms = 10;
					minut = 10;
					cout << "Enter any keys to continue: ";
					cin.get();
					cin.get();
				}
				else {
					goto begin;
				}
			}
			else {
				cout << "!!!You have already choose tariff, you can change it from next month" << endl;
				cout << "Press any key to go back: ";
				cin.get();
				cin.get();
				goto begin;

			}
			system("cls");
			break;
		}

	}

};








int main() {

	Login l;
	//l.admin();
	//l.registration_page();
	//l.save_data();
	l.display();
	Tariffs t;
	//t.tarif();









	cin.clear();
	cin.ignore();
	/*for (int i = 0; i < 255; i++) {
		SetConsoleTextAttribute(h, i);
		cout << i << ".Hello" << endl;

	}*/
	 /*for (int i = 0; i < 256; i++)
	 {
		 cout << i << "." << static_cast<char>(i) << endl;
	 }*/
	return 0;
}