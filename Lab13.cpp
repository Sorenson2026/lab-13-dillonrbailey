// Dillon Bailey
// Lab 13
// 4/14/2026
// Garth Sorensen

//The driver should create a vector of size 25.
//It should fill the vector with random integers by calling the fillVector function.
//Finally it should sort the vector by calling the bubbleSort function.

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void fillVector(vector<int>&);
void bubbleSort(vector<int>&);


//Main driver, contract out to everyone else
int main()
{
	cout << "Thank you for bubble sorting your random numbers! :)" << endl << endl;

	vector <int> num(25);

	fillVector(num);

	bubbleSort(num);

	return 0;
}

//Driver to fill the vector and output the origional numbers.
void fillVector(vector<int>& num)
{
	for (int count = 0; count < 25; ++count)
	{
		num[count] = rand() % 100;
	}

	cout << "Original: ";

	for (auto count : num)
	{
		cout << count << " ";
	}

	cout << endl << endl;
}

//Driver to bubblesort everything
void bubbleSort(vector<int>& num)
{
	int size = 25;

	for (int pass = 0; pass < size; pass++)
	{
		for (int index = 0; index < size-1; index++)
		{
			if (num[index] > num[index + 1])
			{
				swap(num[index], num[index + 1]);
			}
		}
		cout << "Pass " << pass +1 << ": ";

		for (int i = 0; i < size; i++)
			cout << setw(3) << num[i];
		cout << endl;
	}
}

/*Print Sorted Lines
cout << endl << "The sorted values are: " << endl;
for (auto element : num)
cout << element << " ";
cout << endl;
}*/
