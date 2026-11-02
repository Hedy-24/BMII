#include <iostream>
#include <cmath>
#include <iomanip>  
#include <string>

using namespace std;

int main()
{
	double weight, height;

	cout << "Selamat datang di Kalkulator BMI" << endl;
	cout << "Masukkan berat badan Anda (kg): ";
	cin >> weight;
	cout << "Masukkan tinggi badan Anda (m) : ";
	cin >> height;

	if (height <= 0 || weight <= 0)
	{
		cout << "Berat dan Tinggi badan harus lebih dari 0." << endl;
	}
	else
	{
		double bmi = weight / pow(height, 2);
		string category;

		if (bmi < 18.5)
		{
			category = "underweight";
		}
		else if (bmi < 23)
		{
			category = "normal";
		}
		else if (bmi < 25)
		{
			category = "overweight";
		}
		else
		{
			category = "obesity";
		}

		cout << "\nBMI Calculator" << endl;
		cout << "--------------------------------------" << endl;

		cout << fixed << setprecision(2);
		cout << "Weight: " << setprecision(0) << weight << " kg" << endl;

		cout << setprecision(2);
		cout << "Height: " << height << " m" << endl;
		cout << "Result:" << endl;
		cout << "- BMI " << bmi << endl;

		cout << "- You are '" << category << "'" << endl;
	}
	system("PAUSE");
	return 0;
}