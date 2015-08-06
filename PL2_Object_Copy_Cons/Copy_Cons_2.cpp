/*#include<iostream>
using namespace std;
class time{
	int hr,min;
	public:
		time(){ hr = 12; min = 0; }
		time(int h,int m){ hr = h; min = m; }
		time(const time& obj){ hr = obj.hr + 10; min = obj.min + 10; }
		void display(){
			cout<<hr<<":"<<min<<endl;
			return;
		}
};
void main(){

	int hr,min;
	time obj1;
	obj1.display();
	cout<<"hour:";
	cin>>hr;
	cout<<"min:";
	cin>>min;
	time obj2(hr,min);
	obj2.display();
	time obj3(obj2);
	obj3.display();

	return;
}*/