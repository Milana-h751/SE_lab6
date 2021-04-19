#include <iostream>
#include "mycomplex.h"					//���������� ���� ���� �3

using namespace std;

int main()						//������� �������
{
    Complex A, B(-4), C(23.0, 45.9);			//���������� ����������� ����������: �-������ ���������; �=-4; �=23.0+45.9*i

    cout << A << "," << B << "," << C << endl;		//����� ������ �,�,� �� �����
    A = B + C;						//������ ���������� �
    cout << "A = B + C, A = " << A << endl; 		//����� ���������� � ����� �������
    Complex M = B - C;					//������ � ���������� ����������� ���������� �
    cout << "M = B - C, M = " << M << endl;		//����� ���������� � ����� �������
    cout << " M * A = " << M * A << endl;		//����� ������������ ���������� � � �
    cout << " M / 4.45= " << M / 4.45 << endl;		//����� �������� �� ������� � �� 4.45

    Complex D;						//���������� ����������� ���������� D
    cout << "Enter complex number D = ";		//������ ������ ���������� ���������� D
    cin >> D;						//��������� ���������� D
    A += C + D;						//���������� � ����� ����������� ���������� � ����� ���������� � � D
    cout << "D = " << D << "\nA = " << A << endl;	//����� ���������� D � �
    return 0;						//���������� 0
}
