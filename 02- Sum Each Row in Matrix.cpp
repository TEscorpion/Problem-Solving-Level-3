#include <iostream>
#include <iomanip>

/* GENERAL */
int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From; 
}

/* 3 x 3 Random Matrix */
void FillMatrixWithRandomNumbers(int Matrix[3][3]) {
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			Matrix[i][j] = GenerateRandomNumber(1, 100); 
		}
	}
}

void PrintMatrix(int Matrix[3][3]) {
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			std::cout << std::setw(3) << Matrix[i][j] << "\t";
		}
		std::cout << "\n"; 
	}
}

/* Sum Each Row in Matrix */
int SumMatrixRow(int Matrix[3][3], short RowNumber, short Cols) {
	int Sum = 0; 
	for (short i = 0; i < Cols; i++) {
		Sum += Matrix[RowNumber][i]; 
	}

	return Sum; 
}

void PrintSumOfMatrixRow(int Matrix[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++) {
		std::cout << " Row [" << i + 1 << "] Sum = " << SumMatrixRow(Matrix, i, Cols) << "\n";
	}
}

int main() {
	srand((unsigned)time(NULL));

	int Matrix[3][3]; 
	FillMatrixWithRandomNumbers(Matrix);
	std::cout << "The following is a 3x3 random matrix:\n";
	PrintMatrix(Matrix);

	std::cout << "\nThe following are the sum of each row in the matrix:\n";
	PrintSumOfMatrixRow(Matrix, 3, 3); 
}