/*
github: sum of fibonacy

Break a number into sum of fibonary numbers

19 = 13 + 5 + 1

*/
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> input) {
	for (int value : input) {
		cout << value << ", ";
	}
	cout << "\n";
}
vector<int> make_number(int input) {
	vector<int> output;
	vector<int> fibonacci;
	fibonacci.push_back(1);
	fibonacci.push_back(1);
	int count = 1;
	int number = 1;
	while(number <= input){
		fibonacci.push_back(fibonacci[count] + fibonacci[count - 1]);
		count++;
		number = fibonacci[count] + fibonacci[count - 1];
	}
	for (int i = count; i >= 0; i--) {
		if (fibonacci[i] <= input) {
			input -= fibonacci[i];
			output.push_back(fibonacci[i]);
		}
	}
	
	return output;
}
int main()
{
	print(make_number(17));
	return 0;
}