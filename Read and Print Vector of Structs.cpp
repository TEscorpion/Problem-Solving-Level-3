#include <iostream>
#include <vector>

struct stEmployee {
	std::string FirstName;
	std::string LastName;
	float salary; 
};

void ReadVector(std::vector <stEmployee> &vEmployees) {
	stEmployee tempEmployee;
	bool AddMore = 1;
	int counter = 0;

	while (AddMore) {
		counter++;
		std::cout << "Please enter the first name of employee #" << counter << ": ";
		std::cin >> tempEmployee.FirstName;
		std::cout << "Please enter the last name of employee #" << counter << ": ";
		std::cin >> tempEmployee.LastName;
		std::cout << "Please enter the salary of employee #" << counter << ": ";
		std::cin >> tempEmployee.salary;

		vEmployees.push_back(tempEmployee);
		
		std::cout << "\nDo you want to add more employee? [1]: Yes , [0]: No\n";
		std::cin >> AddMore; 
		std::cout << "\n";
	}
}

void PrintVector(std::vector <stEmployee> &vEmployees) {
	std::cout << "\n\nEmployees Vector:\n\n";
	for (stEmployee& employee : vEmployees) {
		std::cout << "First Name: " << employee.FirstName << "\n";
		std::cout << "Last Name: " << employee.LastName << "\n";
		std::cout << "Salary: " << employee.salary << "\n\n";
	}
}

int main() {
	std::vector <stEmployee> vEmployees;

	ReadVector(vEmployees);
	PrintVector(vEmployees);
}