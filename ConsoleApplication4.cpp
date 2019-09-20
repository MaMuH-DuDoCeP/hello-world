/*
// ConsoleApplication4.cpp: 
//

#include "stdafx.h"


#include <iostream>
using namespace std;

int main()
{
	cout << "Anatoliy Leonov" << endl;
	system("pause");
	return 0;
}
*/
/*
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int farlong;
	int x;
	farlong = 220;
	cout << "Enter the distance in furlongs and convert it to yards:";
	cout << endl;
	cin >> x;
	system("cls");
	cout << x << " farlong=" << farlong * x << " yard";
	cin.get();
	cin.get();
	return 0;
}
*/
/*
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Three blind nice" << endl;
	cout << "Three blind nice" << endl;
	cout << "See how they run" << endl;
	cout << "See how they run" << endl;
	system("pause");
	return 0;
}
*/
/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double cels, fahr;
	cout << "Plase enter a celsius value: ";
	cin >> cels; 
	cout << cels << "degreees Celsius is" << cels * 1.8 + 32.0 << "degreees Fahrenhein\n";
	system("pause");
	return 0;
}
*/
/*
// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>;
using namespace std;
const double d = 2.54;
const double f = 30.48;

int main()
{
int ent;
cout << "please enter here:  ";
		cin >> ent;
		cout << "your height is" << ent << "d. or" << ent/f << "f." << endl;
		system("pause");
	return 0;
}
*/
/*
// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>;
using namespace std;
const double d = 0.0254;
const double f = 12;
const double pb = 2.2;
int main()
{
	double ftheight, dheight, mass;
	cout << "please enter your height (ft) here : ";
	cin >> ftheight;
	cout << "please enter your height (d) here : ";
		cin >> dheight;
	cout << "please enter your mass (pb) here : ";
	cin >> mass;
	mass = mass / pb; // pb in kg
	ftheight = ftheight * f; // ft in d
	dheight = (dheight + ftheight) * d;
	double BMI = mass / (dheight*dheight);
	cout << BMI << endl;
	system("pause");
	return 0;
}
*/
/*
// ConsoleApplication16.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double km, l;
	cout << "km: ";
	cin >> km;
	cout << "l: ";
	cin >> l;
	cout << "result: " << l / (km / 100) << endl;
	system("pause");
	return 0;
}
*/