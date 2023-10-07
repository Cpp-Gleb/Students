#include <iostream>
#include <string>
class student{
private:	
	string name;
	int group;
	int ses[5];
public:
	string get_name();
	void set_name( _name);
	
	int get_group();
	void set_group( _group);
	
	int* get_ses();
	void set_ses(int ses[5]);
};

string student::get_name(){
	return  _name;
}

string student::set_name(){
	name = _name;
}

int student::get_group(){
	return  _group;
}

int student::set_group(){
	group = _group;
}
int* student::get_ses(){
	return _ses;
}

void student::set_ses(int ses[5]){
	for(i = 0; i < 5; i ++) {
		_ses[i] = ses[i];
	}
}

int main() {
	student students[10];
	for(i = 0; i < 10; i++){
		cout << "student" << i + 1 << endl;
		cout << "Name: ";
		string namee
		cin >> namee;
		.set_name(namee);
		
		cout << "Group: ";
		int gr
		cin >> gr;
		.set_group(gr);
		
		cout << "SES: ";
		int sss[5]
		for(j = 0; j < 5; j++){
			cin >> sss[j] >> " ";
		}
		.set_ses;
		cout << endl << endl;
	}

}
