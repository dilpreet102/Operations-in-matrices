// #include <iostream>
// using namespace std;
// int main()
// {
//     int ts, m, s, h;
//     cout << "enter total seconds: ";
//     cin >> ts;
//     h = ts / 3600;  //3662/3600=1
//     ts = ts % 3600; //3662%3600=62
//     m = ts / 60;    //62/60=1
//     s = ts % 60;    //62%60=2
//     cout << "hours = " << h << endl
//        << "minutes = " << m << endl
//        << "seconds = " << s;
//     return 0;
// }

// ========================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     if (n > 0)
//     {
//         cout << "positive";
//     }
//     else if (n < 0)
//     {
//         cout << "negative";
//     }
//     else
//     {
//         cout << "zero";
//     }
//     return 0;
// }
// =============================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "even";
//     }
//     else
//     {
//         cout << "odd";
//     }
//     return 0;
// }

// ========================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter three numbers :";
//     cin >> a >> b >> c;
//     if (a > b && a > c)
//     {
//         cout << a << " is largest";
//     }
//     else if (b > c && b > a)
//     {
//         cout << b << " is largest";
//     }
//     else if (c > a && c > b)
//     {
//         cout << c << " is largest";
//     }
//     return 0;
// }
// ===========================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m1, m2, m3, m4, m5, total, percentage;
//     cout << "enter your marks in all five subjects :";
//     cin >> m1 >> m2 >> m3 >> m4 >> m5;
//     total = m1 + m2 + m3 + m4 + m5;
//     percentage = total / 5;
//     if (percentage >= 90)
//     {
//         cout << "A grade";
//     }
//     else if (percentage >= 70 && percentage < 90)
//     {
//         cout << "B grade";
//     }
//     else if (percentage >= 50 && percentage < 70)
//     {
//         cout << "C grade";
//     }
//     else if (percentage >= 33 && percentage < 50)
//     {
//         cout << "D grade";
//     }
//     else
//     {
//         cout << "Failed";
//     }
//     cout<<endl;
//     cout<<"Marks Obtained: "<<total<<endl;
//     cout<<"Percentage :"<<percentage;
//     return 0;
// }
// =========================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int month, year;
//     cout << "enter a month: ";
//     cin >> month;
//     cout << "enter a year :";
//     cin >> year;
//     if (year % 4 == 0 && year % 100 == 0 || year % 400)
//     {
//         switch (month)
//         {
//         case 1:
//             cout << "31 days";
//             break;
//         case 2:
//             cout << "29 days";
//             break;
//         case 3:
//             cout << "31 days";
//             break;
//         case 4:
//             cout << "30 days";
//             break;
//         case 5:
//             cout << "31 days";
//             break;
//         case 6:
//             cout << "30 days";
//             break;
//         case 7:
//             cout << "31 days";
//             break;
//         case 8:
//             cout << "31 days";
//             break;
//         case 9:
//             cout << "30 days";
//             break;
//         case 10:
//             cout << "31 days";
//             break;
//         case 11:
//             cout << "30 days";
//             break;
//         case 12:
//             cout << "31 days";
//             break;
//         }
//     }
//     else
//     {
//         switch (month)
//         {
//         case 1:
//             cout << "31 days";
//             break;
//         case 2:
//             cout << "28 days";
//             break;
//         case 3:
//             cout << "31 days";
//             break;
//         case 4:
//             cout << "30 days";
//             break;
//         case 5:
//             cout << "31 days";
//             break;
//         case 6:
//             cout << "30 days";
//             break;
//         case 7:
//             cout << "31 days";
//             break;
//         case 8:
//             cout << "31 days";
//             break;
//         case 9:
//             cout << "30 days";
//             break;
//         case 10:
//             cout << "31 days";
//             break;
//         case 11:
//             cout << "30 days";
//             break;
//         case 12:
//             cout << "31 days";
//             break;
//         }
//     }
//     return 0;
// }
// ===========================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int h1, h2, m1, m2, s1, s2, th, tm, ts;
//     cout << "enter first time :";
//     cin >> h1 >> m1 >> s1;
//     cout << "enter second time :";
//     cin >> h2 >> m2 >> s2;
//     th = h1 + h2;
//     tm = m1 + m2;
//     ts = s1 + s2;
//     if (ts > 59)
//     {
//         ts = ts - 60;
//         tm = tm + 1;
//     }
//     if (tm > 59)
//     {
//         tm = tm - 1;
//         th = th + 1;
//     }
//     cout << th << " hours " << tm << " minutes " << ts << " seconds ";
//     return 0;
// }
// =======================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int ch, a, b;
//     cout << "======CALCULATOR====" << endl;
//     cout << "1.Addition " << endl
//          << "2.Subtraction " << endl
//          << "3.Multiplication " << endl
//          << "4.Division " << endl;
//     cout << "Enter what you want to do? ";
//     cin >> ch;
//     cout << "Enter two numbers :";
//     cin >> a >> b;
//     if (ch == 1)
//     {
//         cout << a << " + " << b << " is = " << a + b;
//     }
//     else if (ch == 2)
//     {
//         cout << a << " - " << b << " is = " << a - b;
//     }
//     else if (ch == 3)
//     {
//         cout << a << " * " << b << " is = " << a * b;
//     }
//     else if (ch == 4)
//     {
//         cout << a << " / " << b << " is = " << (float)a / b;
//     }

//     return 0;
// }
// ====================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, n;
//     cout << "Enter a number between 1-100 :";
//     cin >> n;
//     a = n / 10;
//     b = n % 10;
//     switch (a)
//     {
//     case 1:
//         cout << "X";
//         break;
//     case 2:
//         cout << "XX";
//         break;
//     case 3:
//         cout << "XXX";
//         break;
//     case 4:
//         cout << "XL";
//         break;
//     case 5:
//         cout << "L";
//         break;
//     case 6:
//         cout << "LX";
//         break;
//     case 7:
//         cout << "LXX";
//         break;
//     case 8:
//         cout << "LXXX";
//         break;
//     case 9:
//         cout << "XC";
//         break;
//     case 10:
//         cout << "C";
//         break;
//     }
//     switch (b)
//     {
//     case 1:
//         cout << "I";
//         break;
//     case 2:
//         cout << "II";
//         break;
//     case 3:
//         cout << "III";
//         break;
//     case 4:
//         cout << "IV";
//         break;
//     case 5:
//         cout << "V";
//         break;
//     case 6:
//         cout << "VI";
//         break;
//     case 7:
//         cout << "VII";
//         break;
//     case 8:
//         cout << "VIII";
//         break;
//     case 9:
//         cout << "IX";
//         break;
//     case 10:
//         cout << "X";
//         break;
//     }

//     return 0;
// }
// =================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int units, bill;
//     cout << "Enter no. of units consumed :";
//     cin >> units;
//     cout << "===============================" << endl;
//     if (units <= 100)
//     {
//         bill = 1 * units;
//     }
//     else if (units > 100 && units <= 300)
//     {
//         bill = 100 + (units - 100) * 2;
//     }
//     else if (units > 300 && units <= 400)
//     {
//         bill = 100 + 400 + (units - 300) * 3;
//     }
//     else
//     {
//         bill = 100 + 400 + 300 + (units - 400) * 4;
//     }
//     cout << "No. of units consumed :" << units << endl;
//     cout << "Electricity Bill: " << bill;
//    return 0;
// }
// =======================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "Enter any character: ";
//     cin >> ch;
//     if (ch >= 65 && ch <= 90)
//     {
//         cout << "uppercase letter ";
//     }
//     else if (ch >= 97 && ch <= 122)
//     {
//         cout << "lowercase letter ";
//     }
//     else if (ch >= 48 && ch <= 57)
//     {
//         cout << " it is a digit";
//     }
//     else
//     {
//         cout << "special character ";
//     }

//     return 0;
// }
// ========================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (ch >= 65 && ch <= 90)
//     {
//         ch = ch + 32;
//     }
//     else if (ch >= 97 && ch <= 122)
//     {
//         ch = ch - 32;
//     }
//     cout << "Changed case: " << ch;
//     return 0;
// }
// =====================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     switch (ch)
//     {
//     case 'a':
//         cout << "vowel";
//         break;
//     case 'e':
//         cout << "vowel";
//         break;
//     case 'i':
//         cout << "vowel";
//         break;
//     case 'o':
//         cout << "vowel";
//         break;
//     case 'u':
//         cout << "vowel";
//         break;
//     case 'A':
//         cout << "vowel";
//         break;
//     case 'E':
//         cout << "vowel";
//         break;
//     case 'I':
//         cout << "vowel";
//         break;
//     case 'O':
//         cout << "vowel";
//         break;
//     case 'U':
//         cout << "vowel";
//         break;

//     default:
//     cout << "consonant";
//     }
//     return 0;
// }
// ========================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter any number :";
//     cin >> n;
//     switch (n)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;

//     default:
//         cout << "Invalid";
//         break;
//     }
//     return 0;
// }
// =============================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int d1, m1, y1, d2, m2, y2;
//     cout << "Enter first date :";
//     cin >> d1 >> m1 >> y1;
//     cout << "Enter second date :";
//     cin >> d2 >> m2 >> y2;
//     if (y1 > y2)
//     {
//         cout << "First date is bigger";
//     }
//     else if (m1 > m2)
//     {
//         cout << "First date is bigger";
//     }
//     else if (d1 > d2)
//     {
//         cout << "First date is bigger";
//     }
//     else
//     {
//         cout << "Second date is bigger";
//     }
//     return 0;
// }
// ==========================================================================

// #include <iostream>
// using namespace std;
// void reverse(int n)
// {
//     for (int i = n; i >=0; i--)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << " ";
//         }

//     }
// }
// int main()
// {
//     int N,n;
//     cout << "Enter a number upto which you want even numbers: ";
//     cin >> N;
//     reverse(N);
//     return 0;
// }
// =====================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t, n;
//     cout << "Enter a number of which you want table :";
//     cin >> t;
//     cout << "Upto how many times? ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << t << " * " << i << " = " << t * i << endl;
//     }

//     return 0;
// }
// ====================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, N;
//     int e= 0, se= 0, o= 0, so = 0;
//     cout << "Enter how many numbers: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Enter numbers: ";
//         cin >> N;
//         if (N % 2 == 0)
//         {
//             e++;
//             se = se + N;
//         }
//         else
//         {
//             o++;
//             so = so + N;
//         }
//     }
//     cout << "No. of odd numbers =  " << o << endl;
//     cout << "No. of even numbers = " << e << endl;
//     cout << "Sum of odd numbers = " << so << endl;
//     cout << "Sum of even numbers = " << se << endl;
//     return 0;
// }
// // ===================================================================================
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, N, max = 0;
//     cout << "How many numbers you are giving?";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Enter numbers: ";
//         cin >> N;
//         if (N > max)
//         {
//             max = N;
//         }
//     }
//     cout << "Largest number: " << max;

//     return 0;
// }
// ====================================================================================
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number you want factorial of :";
//     cin >> n;
//     int f = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     cout << "Factorial of " << n << " is = " << f;
//     return 0;
// }
// ========================================================================
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter base: ";
//     cin >> a;
//     cout << "Enter power :";
//     cin >> b;
//     cout << a << " raise to power " << b << " is = " << pow(a, b);
//     return 0;
// }
// ============================================================================
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a = 0, b = 1, c = 0;
//     cout << "Enter a number upto which you want fibonacci series: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1)
//         {
//             cout << a << " ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << b << " ";
//             continue;
//         }

//         c = a + b;
//         a = b;
//         b = c;
//         cout << c << " ";
//     }
//     return 0;
// }
// ==================================================================================
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     bool flag = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not prime";
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "Prime number";
//     }
//     return 0;
// }
// ===============================================================================
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     long long x, n;
//     long long sum = 1;
//     cout << "Enter value of x: ";
//     cin >> x;
//     cout << "Enter value of n: ";
//     cin >> n;
//     for (int i = 2; i <= n; i++)
//     {
//         long long fac = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             fac *= j;
//         }
//         sum += (float)(pow(x, i) / fac);
//     }
//     cout << sum;
//     return 0;
// }
// ====================================================================================

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