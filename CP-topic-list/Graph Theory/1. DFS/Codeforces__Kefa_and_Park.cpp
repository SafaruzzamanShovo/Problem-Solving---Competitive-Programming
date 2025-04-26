#include <iostream>
using namespace std;

int main()
{
	string binaryNumber = "11A"; 
	
	cout << stoi(binaryNumber, nullptr, 16);

	return 0;
}
