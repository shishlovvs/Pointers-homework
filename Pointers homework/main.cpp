#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//������ �� �������:
//1) ����� ������������ ����� ������ ����� ������������� ��������������� �������;
//4byte = 32 bit = 2^32 = 4�294�967�296 
//2)����� ������������ ����� ������ ����� ������������� �������������� �������;
//8byte = 64bit = 2^64 = 18�446�744�073�709�551�616


void main()
{
	setlocale(LC_ALL, "ru");

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << "������� ������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl;

	cout << "======================" << endl;

	cout << "�������������� ������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << '\t';
	} cout << endl;

	cout << "======================" << endl;

	cout << "������ ��������� �������: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << '\t';
	} cout << endl;
}