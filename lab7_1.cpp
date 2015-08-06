#include <iostream>
using namespace std;

class Date {
	int day, month, year;
public:
	Date() { // default constructor
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int d,int m,int y) { // parameterised constructor
		day = d;
		month = m;
		year = y;
	}
	Date(const Date &ob) { // copy constructor
		day = ob.day;
		month = ob.month;
		year = ob.year;
	}
	~Date() { // destructor
	}
	void set(Date ob) {
		day = ob.day;
		month = ob.month;
		year = ob.year;
	}
	void set(int d,int m,int y) {
		day = d;
		month = m;
		year = y;
	}
	void print() {
		cout << day << "/" << month << "/" << year << endl;
	}
};

class Account {
	int acc_id;
	char *acc_name;
	float balance;
	Date dob, acc_created;
public:
	Account() { // default constructor
		acc_name = new char[5];
		strcpy(acc_name, "N/A");

		balance = 0.0;
		acc_id = 0;
		dob.set(0,0,0);
		acc_created.set(0,0,0);
	}
	Account(int id,char *name,Date d1,Date d2,float bal) { // parameterised constructor
		int size;
		size = strlen(name) + 1;

		acc_name = new char[size];
		strcpy(acc_name, name);

		balance = bal;
		acc_id = id;
		dob.set(d1);
		acc_created.set(d2);
	}
	~Account() { // destructor
		cout << "Destroying Data\n";
		delete[] acc_name;
	}
	void set(int id,char *name,Date d1,Date d2,float bal) { // copy constructor
		int size;
		size = strlen(name) + 1;

		acc_name = new char[size];
		if(!acc_name) {
			cout << "Allocation error\n";
			exit(1);
		}
		strcpy(acc_name, name);

		balance = bal;
		acc_id = id;
		dob.set(d1);
		acc_created.set(d2);
	}
	void print() {
		cout << "Account Name: " << acc_name << endl;
		cout << "Account ID: " << acc_id << endl;
		cout << "DOB: "; dob.print();
		cout << "Balance: " << balance << endl;
		cout << "Account Created On: "; acc_created.print(); 
		cout << endl;
	}
};

int main() {
	Date d1(15,10,1990),d2(23,02,2005),d3(24,05,1954),d4(14,04,1996);
	Account acc1(1234,"Riyadh Al Nur",d1,d2,43500.50), acc2, acc3;

	acc2.set(3489,"Afro man",d3,d4,547500.70);
	acc1.print();
	acc2.print();
	acc3.print();

	return 0;
}