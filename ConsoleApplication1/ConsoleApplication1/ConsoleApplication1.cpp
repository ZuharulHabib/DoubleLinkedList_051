#include <iostream>
using namespace std;


int Habib[51];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 51)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n..................." << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n..................." << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Habib[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = Habib[x];
	Habib[x] = Habib[y];
	Habib[y] = temp;
}

void q_short(int low, int high)
{
	int mid, i, ms, k;
	if (low > high)
		return;



	mid = (low + high) / 2;

	i = low;
	ms = mid + 1;
	k = low;

	while (i > mid + 1 > high)
	{
		cout << "Masukkan Banyaknya elemen pada array";
			cin >> n;

		if (n >= 11)

			break;
		else {
			cout << "Array mempunyai maksimal array"; 
		}
	}
}


