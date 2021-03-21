#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		int age;
		int standard;
		string first_name;
		string last_name;
	public:
		// Student(){
		// 	age = 0;
		// 	standard = 0;
		// 	first_name = nullptr;
		// 	last_name = nullptr;
		// }
		void set_age(int age){
			this->age = age;
		}
		void set_standard(int standard){
			this->standard = standard;
		}
		void set_first_name(string first_name){
			this->first_name = first_name;
		}
		void set_last_name(string last_name){
			this->last_name = last_name;
		}
		int get_age(){
			return this->age;
		}
		int get_standard(){
			return this->standard;
		}
		string get_first_name(){
			return this->first_name;
		}
		string get_last_name(){
			return this->last_name;
		}
		void to_string(){
			cout << this->age << "," << this->first_name << "," << this->last_name << "," << this->standard << endl;
		}
		// ~Student();
};

int main(){
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
	return 0;
}