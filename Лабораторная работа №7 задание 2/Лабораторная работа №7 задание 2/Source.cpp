#include <iostream>
#include <cstdarg>
#include <cstdlib>
#include <windows.h>
#include <locale>// ���������� ��� ���������

using namespace std;

int Sum(int n,...)//������� �����
{
    va_list al; //������ ����������, ���������� ����� ����������
    va_start(al, n);//va_start() - ������������� ������

    int r = 0;

    for (int i = 0; i < n/2; i++) //  ���� ��� ���������� �����     S=a1*a2+a3*a4+...
        r += va_arg(al, int) * va_arg(al, int); //va_arg() - ��������� ���������� �������� ���������� ����.

    va_end(al);  /* ���������� ����������� ������ */
    return r;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "���������� ����� ��� 5 ����������" << endl << Sum(5, 1, 2, 3, 4, 5) << endl;
    cout << "���������� ����� ��� 10 ����������" << endl << Sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    cout << "���������� ����� ��� 12 ����������" << endl << Sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12) << endl;
    system("pause");
    return 0;
}