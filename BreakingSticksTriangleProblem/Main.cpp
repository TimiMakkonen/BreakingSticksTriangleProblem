#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;






int main() {

	srand(time(NULL));

	// Cout to make sure random seed has been seeded properly
	const int RandomsToPrint = 20; 
	for (int i = 0; i < RandomsToPrint; i++) {
		cout << rand() << ' ';
	}
	cout << endl;

	const unsigned int StickLength = 1000;
	unsigned int BreakPoint_1;
	unsigned int BreakPoint_2;
	const unsigned long long int NumOfCases = 1000000;
	unsigned long long int SumOfGood = 0;
	unsigned int StickLength_1;
	unsigned int StickLength_2;
	unsigned int StickLength_3;

	for (int i = 0; i < NumOfCases; i++) {

		BreakPoint_1 = (rand() % (StickLength - 1)) + 1;
		BreakPoint_2 = (rand() % (StickLength - 1)) + 1;

		while (BreakPoint_1 == BreakPoint_2) {
			BreakPoint_2 = (rand() % (StickLength - 1)) + 1;
			cout << "Same break point occurred." << endl;
		}

		// To make sure BreakPoint_1 < BreakPoint_2
		if (BreakPoint_2 < BreakPoint_1) {
			unsigned int BreakSwap = BreakPoint_1;
			BreakPoint_1 = BreakPoint_2;
			BreakPoint_2 = BreakSwap;
		}
		
		StickLength_1 = BreakPoint_1;
		StickLength_2 = BreakPoint_2 - BreakPoint_1;
		StickLength_3 = StickLength - BreakPoint_2;

		if (StickLength_1 < StickLength / 2 && StickLength_2 < StickLength / 2 && StickLength_3 < StickLength / 2) SumOfGood++;

		// cout << "Lengths of the 3 sticks are:" << setw(5) << StickLength_1 << setw(5) << StickLength_2 << setw(5) << StickLength_3 << "       Round:" << setw(4) << i+1 << endl;

	}
	
	// Final results
	cout << "The number of cases where we can form a triangle of the 3 stick is: " << SumOfGood << endl;
	cout << "Thus the probability of this case is roughly: " << static_cast<double>(SumOfGood) / NumOfCases << endl;


	system("pause");

	return 0;
}