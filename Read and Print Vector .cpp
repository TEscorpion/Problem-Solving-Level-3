#include <iostream>
#include <vector>

void ReadVector(std::vector <int> &vNumbers) {
	bool AddMore = 1;

	while (AddMore) {
		int number; 
		std::cout << "Please enter a number: ";
		std::cin >> number;
		vNumbers.push_back(number);
		std::cout << "\nDo you want to add more number? [1]: Yes , [0]: No\n";
		std::cin >> AddMore; 
		std::cout << "\n";
	}

	std::cout << "\n";
}

void PrintVector(std::vector<int> vNumbers) {
	std::cout << "Vectors elements:\n";

	for (int i = 0; i < vNumbers.size(); i++) {
		std::cout << vNumbers[i] << " ";
	}

	std::cout << "\n";
}

int main() {
	std::vector <int> vNumbers;

	ReadVector(vNumbers);
	PrintVector(vNumbers);
}
