#include "Header.h"

class Worker
{
private:
	string surname;
	int age;
	string position;
public:
	Worker() {
		surname = "";
		age = 0;
		position = "";
	}
	Worker(string surname, int age, string position) {
		this->surname = surname;
		this->age = age;
		this->position = position;
	}
	~Worker() {
		surname = "";
		age = 0;
		position = "";
	}
	void SetSurname(string surname) {
		this->surname = surname;
	}
	void SetAge(int age) {
		this->age = age;
	}
	void SetPosition(string position) {
		this->position = position;
	}
	string GetSurname() {
		return surname;
	}
	int GetAge() {
		return age;
	}
	string GetPosition() {
		return position;
	}
	void Print() {
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << endl;
		cout << "Position: " << position << endl;
	}
};

int main() {
	setlocale(0, "");
	int n;
	cout << "Enter the number of workers: ";
	cin >> n;
	unique_ptr<Worker[]> workers(new Worker[n]);
	for (int i = 0; i < n; i++) {
		string surname;
		int age;
		string position;
		cout << "Enter the surname of the worker: ";
		cin >> surname;
		cout << "Enter the age of the worker: ";
		cin >> age;
		cout << "Enter the position of the worker: ";
		cin >> position;
		workers[i] = Worker(surname, age, position);
	}
	int first, second;
	cout << "Enter the first worker: ";
	cin >> first;
	cout << "Enter the second worker: ";
	cin >> second;
	Worker temp = workers[first - 1];
	workers[first - 1] = workers[second - 1];
	workers[second - 1] = temp;
	for (int i = 0; i < n; i++) {
		workers[i].Print();
	}
	return 0;
}