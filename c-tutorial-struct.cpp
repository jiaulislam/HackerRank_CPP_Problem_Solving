#include <iostream>
using namespace std;

struct Student
{
	int age = 0;
	string first_name = nullptr;
	string last_name = nullptr;
	int standard = 0;
	
};
int main(){
	int age, standard;
	string first_name, last_name;
	cin >> age >> first_name >> last_name >> standard;
	Student s1 {age, first_name, last_name, standard};
	cout << s1.age << " " << s1.first_name << " " << s1.last_name << " " << s1.standard << endl;
	return 0;
}