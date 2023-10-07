#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	string _name;
	int _group;
	int _ses[5];
public:
	string get_name();
	void set_name(string name);

	int get_group();
	void set_group(int group);

	int* get_ses();
	void set_ses(int ses[5]);
};

string student::get_name()
{
	return _name;
}
void student::set_name(string name)
{
	_name = name;
}

int student::get_group()
{
	return _group;
}
void student::set_group(int group)
{
	_group = group;
}

int* student::get_ses()
{
	return _ses;
}
void student::set_ses(int ses[5])
{
	for (int i = 0; i < 5; i++)
	{
		_ses[i] = ses[i];
	}
}



int main() {
	student students[10];
	float sum[10];
	for(int i = 0; i < 10; i++){
		cout << "student" << i + 1 << endl;
		cout << "Name: ";
		string namee;
		cin >> namee;
		students -> set_name(namee);
		
		cout << "Group: ";
		int gr;
		cin >> gr;
		students -> set_group(gr);
		
		cout << "SES: ";

		
		int sss[5];
		for(int j = 0; j < 5; j++){
			cin >> sss[j];
			sum[i] = sum[i] + sss[j];
		}
		sum[i] = sum[i] / 5;

		students -> set_ses(sss);
		cout << endl << endl;

		

	}
	int a = 0;
	for (int i = 0; i < 10; i++) {
		if (sum[i] > 4.0) {
			for (int j = 0; j < 10; j++) {
				
			}
		}
		else {
			a++;
		}

	}
	if (a == 10) {
		cout << "No one student with result higher than 4";
	}
}
