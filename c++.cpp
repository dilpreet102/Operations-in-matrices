#include <iostream>
using namespace std;
int main()
{
	int a[3][3], b[3][3], c[3][3], i, j, n;
	char ch;
	cout << "Enter first matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "=============================\n";
	cout << "Enter second matrix : \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> b[i][j];
		}
	}
	cout << "=================================\n";
	do
	{

		cout << "Choose from menu what you want to do: " << endl;
		cout << "1. Addition of two matrices. " << endl;
		cout << "2. Subtraction of two matrices. " << endl;
		cout << "3. Finding upper and lower triangular matrices. " << endl;
		cout << "4. Transpose of matrix. " << endl;
		cout << "5. Product of two matrices. " << endl;
		cout << "==========================================\n";
		cin >> n;
		cout << "=============================================\n";

		switch (n)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					c[i][j] = a[i][j] + b[i][j];
					cout << c[i][j] << "\t";
				}
				cout << "\n";
			}

			break;
		case 2:
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					c[i][j] = a[i][j] - b[i][j];
					cout << c[i][j] << "\t";
				}
				cout << "\n";
			}

			break;
		case 3:
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if (i < j)
					{
						cout << "0"<< " ";
							 
					}
					else
						cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout<<"================================\n"; 
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if (i > j)
					{
						cout << "0"<< " ";
							 
					}
					else
						cout << a[i][j] << " ";
				}
				cout << endl;
			}

			break;
		case 4:
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					b[i][j] = a[j][i];
					cout << b[i][j] << "\t";
				}
				cout << "\n";
			}

			break;

		case 5:
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					c[i][j] = a[i][j] * b[i][j];
					cout << c[i][j] << "\t";
				}
				cout << "\n";
			}

			break;
		}
		cout << "====================================\n";
		cout << "Wanna perform more operations(y/n): ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	return 0;
}
