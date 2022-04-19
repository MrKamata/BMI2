#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int STD_BMI = 22;
	double height;
	double weight;
	double bmi;
	double stdWeight;

	cout << "身長を入力(m):";
	cin >> height;

	cout << "体重を入力(kg):";
	cin >> weight;

	stdWeight = STD_BMI * height * height;

	bmi = weight / height / height;

	cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;
	cout << "あなたの標準体重は" << stdWeight << "kgになります。" << endl;
	if (bmi <= 18.5)
	{
		cout << "低体重です";
	}
	else if (bmi <= 25)
	{
		cout << "普通体重です";
	}
	else if (bmi <= 30)
	{
		cout << "あなたは肥満(1)です";
	}
	else if (bmi <= 35)
	{
		cout << "あなたは肥満(2)です";
	}
	else if (bmi <= 40)
	{
		cout << "あなたは肥満(3)です";
	}
	else
	{
		cout << "あなたは肥満(4)です";
	}
	return 0;
}
