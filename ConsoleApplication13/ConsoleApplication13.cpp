

#include <iostream>
using namespace std;
int main()
{
	/*for (int n = 1; n <= 10; n++)
	{
		for (int m = 1; m <= 10; m++)
		{
			cout << n * m << "	";
		}

		cout << endl << endl;
	}*/


	/*cout << "Eded daxil edin: ";
	int num;
	cin >> num;
	for (int n = 0; n < num; n++)
	{
		for (int m = 0; m < num; m++)
		{
			if (n == 0 || n == num - 1)
				cout << "*";
			else if (m == 0 || m == num - 1)
				cout << "*";
			else if (n < num /3 - 1&& m < num / 3 - 1)
				cout << "*";
			else if (n < num /3 - 1&& m > num - num / 3)
				cout << "*";
			else if (n > num - num/3 && m < num / 3 - 1)
				cout << "*";
			else if (n > num - num/3 && m > num - num / 3)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}cout << endl << endl;*/


	//cout << "Eded daxil edin: ";
	// 
	// 
	//int num;
	//cin >> num;
	//for (int n = 0; n < num; n++)
	//{
	//	for (int m = 0; m < num; m++)
	//	{
	//		if (n == num - m)
	//			cout << "*";
	//		else
	//			cout << " ";

	//	}
	//	for (int m = 0; m < num; m++)
	//	{
	//		if (n == m)
	//			cout << "*";
	//		else
	//			cout << " ";

	//	}

	//	cout << endl;
	//}
	//for (int n = 0; n < num * 2 + 1; n++)
	//{
	//	cout << "*";
	//}
	//cout << endl << endl;




	/*cout << "Eded daxil edin: ";
	int num;
	cin >> num;
	for (int n = 0; n < num; n++)
	{
		for (int m = 0; m < num; m++)
		{
			if (n >= num - m)
				cout << "*";
			else
				cout << " ";

		}
		for (int m = 0; m < num; m++)
		{
			if (n >= m)
				cout << "*";
			else
				cout << " ";

		}

		cout << endl;
	}
cout << endl << endl;*/


	cout << "Eded daxil edin:";
	int num;
	cin >> num;
	for (int n = 0; n < num; n++)
	{
		for (int m = 0; m < num; m++)
		{
			if (n == num - m)
				cout << "*";
			else
				cout << " ";

		}
		for (int m = 0; m < num; m++)
		{
			if (n == m)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	for (int n = 0; n < num + 2; n++)
	{
		for (int m = 0; m < num; m++)
		{
			if (n == m)
				cout << "*";
			else
				cout << " ";

		}

		for (int m = 0; m < num + 2; m++)
		{
			if (n == num - m)
				cout << "*";
			else
				cout << " ";

		}

cout << endl;
	}
cout << endl << endl;

