/* Date Class */
class Date {
	int day, month, year;
public:
	Date() {
		day = 1;
		month = 1;
		year = 1900;
	}
	Date(int d,int m,int y) {
		day = d;
		month = m;
		year = y;
	}
	Date(const Date &ob) {}
	~Date() {}
	void set(int d,int m,int y) {
		day = d;
		month = m;
		year = y;
	}
	void show() {
		cout << day << "/" << month << "/" << year << endl;
	}
};

/* User Class */
class User {
	int id;
	char* name;
	char* add;
	int pno;
public:
	User() {
		id = 0;
		int size = 5;
		name = new char[size];
		add = new char[size];
		strcpy(name, "NULL");
		strcpy(add, "NULL");
		pno = 0;
	}
	User(int i,char n[],char m[],int pn) {
		id = i;
		int size1 = strlen(n) + 1;
		int size2 = strlen(m) + 1;
		name = new char[size1];
		strcpy(name, n);
		add = new char[size2];
		strcpy(add, m);
		pno = pn;
	}
	~User() {
		if(name != NULL) {
			delete[] name;	
		}
		if(add != NULL) {
			delete[] add;	
		}
	}
	void set(int i,char n[],char m[],int pn) {
		if(name != NULL) {
			delete[] name;	
		}
		if(add != NULL) {
			delete[] add;	
		}
		id = i;
		int size1 = strlen(n) + 1;
		int size2 = strlen(m) + 1;
		name = new char[size1];
		strcpy(name, n);
		add = new char[size2];
		strcpy(add, m);
		pno = pn;
	}
	void show() {
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Address: " << add << endl;
		cout << "Phone Number: " << pno << endl;
	}
};

/* Author Class */
class Author {
	int id;
	char* name;
	char* add;
public:
	Author() {
		id = 0;
		int size = 5;
		name = new char[size];
		add = new char[size];
		strcpy(name, "NULL");
		strcpy(add, "NULL");
	}
	Author(int i,char n[],char m[]) {
		id = i;
		int size1 = strlen(n) + 1;
		int size2 = strlen(m) + 1;
		name = new char[size1];
		strcpy(name, n);
		add = new char[size2];
		strcpy(add, m);
	}
	Author(char n[]) {
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy(name, n);
	}
	~Author() {
		if(name != NULL) {
			delete[] name;	
		}
		if(add != NULL) {
			delete[] add;	
		}
	}
	void set(int i,char n[],char m[]) {
		if(name != NULL) {
			delete[] name;	
		}
		if(add != NULL) {
			delete[] add;	
		}
		id = i;
		int size1 = strlen(n) + 1;
		int size2 = strlen(m) + 1;
		name = new char[size1];
		strcpy(name, n);
		add = new char[size2];
		strcpy(add, m);
	}
	void set(char n[]) {
		if(name != NULL) {
			delete[] name;	
		}
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy(name, n);
	}
	void show() {
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Address: " << add << endl;
	}
};

/* Book Class */
class Book {
	int id;
	char* name;
	Author *auth;
	Date yop;
	int numa;
	float price;
	char stat[11];
public:
	Book() {
		id = 0;
		int size = 5;
		name = new char[size];
		strcpy(name, "NULL");
		price = 0.0;
		strcpy(stat, "NULL");
		yop.set(1,1,1900);
		numa = 0;
	}
	Book(int i,char n[],Author *ath,int noa,Date dt,float p,char st[]) {
		id = i;
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy(name, n);
		price = p;
		strcpy(stat, st);
		yop = dt;
	}
	~Book() {
		if(name != NULL) {
			delete[] name;	
		}
	}
	void set(int i,char n[],Author *ath,int noa,Date dt,float p,char st[]) {
	}
	void show() {
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Date of Publication: "; yop.show();
		cout << "Price: " << price << endl;
		cout << "Status: " << stat << endl;
	}
};

/* Publisher Class */
class Publisher {
	int id;
	char* name;
	char* add;
	int pubno;
public:
	Publisher() {
		id = 0;
		int size = 5;
		name = new char[size];
		add = new char[size];
		strcpy(name, "NULL");
		strcpy(add, "NULL");
		pubno = 0;
	}
	Publisher(int i,char n[],char m[],int pun) {
		id = i;
		int size1 = strlen(n) + 1;
		int size2 = strlen(m) + 1;
		name = new char[size1];
		strcpy(name, n);
		add = new char[size2];
		strcpy(add, m);
		pubno = pun;
	}
	~Publisher() {
		if(name != NULL) {
			delete[] name;	
		}
		if(add != NULL) {
			delete[] add;	
		}
	}
	void set(int i,char n[],char m[],int pun) {
		if(name != NULL) {
			delete[] name;	
		}
		if(add != NULL) {
			delete[] add;	
		}
		id = i;
		int size1 = strlen(n) + 1;
		int size2 = strlen(m) + 1;
		name = new char[size1];
		strcpy(name, n);
		add = new char[size2];
		strcpy(add, m);
		pubno = pun;
	}
	void show() {
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
		cout << "Address: " << add << endl;
		cout << "Publisher Number: " << pubno << endl;
	}
};