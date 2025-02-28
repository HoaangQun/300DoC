#include <iostream>
#include <string>
using namespace std;

class Person {
	public:
		
		Person(const string &n, bool a=true)
				:name(n), alive(a) {}
		
		~Person() {
			cout << "delete object name " << name << endl;
		}

		void eating() {}
		void play_sport(string sport_name) {}

		void add_age(const int a) {
			age = a;
		}
		
		void add_w_h(const double h, const double w) {
			height = h;
			weight = w;
		}

	protected:
		string address;
		string name;
		int age;
		string date_of_birth;
		double height;
		double weight;
		bool alive;
};


class Men : public Person {
	public:	
		Men(const string &n, bool a=true)
				:Person(n, a) {}	
};


class Women : public Person {
	public:	
		Women(const string &n, bool a=true)
				:Person(n, a) {}	
};

int main() {
	
	Men *Qun = new Men("HoaangQun");
	delete Qun; 

	return 0;
}
