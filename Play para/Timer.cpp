#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void main() {
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);

	int seconds; // ���������� ������ �� �������� ���������

	cout << "������� ������� ������ �� ������ ������: ";
	cin >> seconds;

	// �������� � ���������� ���������
	this_thread::sleep_for(chrono::seconds(seconds));

	cout << "������ �����. ��������� ����� �������." << endl;

	// �������� ���������
	exit(0);
}
