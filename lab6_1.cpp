#include <iostream>
using namespace std;

class InventoryItems {
	char* name;
	float cost;
	int onhand;
public:
	InventoryItems() {
		cout << "Constructing...\n";
		int size = 5;
		name = new char[size];
		strcpy(name,"NULL");
		cost = 0.0;
		onhand = 0;
	}
	InventoryItems(char n[],float c,int oh) {
		cout << "Constructing...\n";
		int size = strlen(n) + 1;

		name = new char[size];
		strcpy(name,n);
		cost = c;
		onhand = oh;
	}
	void set(char n[],float c,int oh) {
		if(name != NULL) {
			delete[] name;	
		}
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy(name,n);
		cost = c;
		onhand = oh;
	}
	void show() {
		cout << "Name: " << name << endl;
		cout << "Cost: " << cost << endl;
		cout << "On Hand: " << onhand << endl;
	}
	~InventoryItems() {
		cout << "Destructing " << name << "...\n";
		if(name != NULL) {
			delete[] name;
		}
	}
};

int main() {
	InventoryItems i1,i2("PC",30000.45,45),i3("Computer",45000.25,20),*r;

	i1.show();
	i1.set("CPU",23500,12);
	i1.show();
	i2.show();
	i3.show();
	r = new InventoryItems;
	r -> set("Motherboard",13500.50,23);
	r -> show();
	delete r;
	return 0;
}