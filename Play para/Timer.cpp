#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

void main() {
	int seconds; // ���������� ������ �� �������� ���������

	cout << "������� ������� ������ �� ������ ������: ";
	cin >> seconds;

	// �������� � ���������� ���������
	this_thread::sleep_for(chrono::seconds(seconds));

	cout << "������ �����. ��������� ����� �������." << endl;

	// �������� ���������
	exit(0);
}
