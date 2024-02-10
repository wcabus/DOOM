#include <print>

typedef struct {
	char name[100];
	int age;
} Person;

void sample2() {
	const Person *person = new Person();

	int age = person->age;
	std::print("Less weird = {}", age);

	delete person;
}

