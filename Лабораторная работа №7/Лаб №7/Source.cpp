#include <iostream> // ���������� ������������ ����� ������.

using namespace std; //������������� ������������ ���� std

//��������� ����������� �����.
//����������� ����� ������� �� ������ � �������������� ������
struct Complex
{
    float Real; //�������������� ����� ������������ �����
    float Mnim; //������ ����� ������������ �����
};
// ������� �������� ������������ �����
float Summ(float a, float b)
{
    float Summa = a * b;
    cout << "\n\n����� ������������ ����� ����� = " << Summa << endl;
    return Summa;
};

// ������� �������� ����������� �����
Complex Summ(Complex a, Complex b){

    Complex Summa;
    Summa.Real = a.Real * b.Real;
    Summa.Mnim = a.Mnim * b.Mnim;
    cout << "\n\n����� ����������� ����� ����� = " << Summa.Real << "+i" << Summa.Mnim << endl;
    return Summa;
}

int main()
{
    //������� ���� � ������� (�����)
    setlocale(LC_ALL, "RUS");

    //���� ������������ ����� 1
    Complex CompChislo1;
    cout << "\n������� �������������� ����� ������� ������������ ����� ";
    cin >> CompChislo1.Real;
    cout << "\n������� ������ ����� ������� ������������ ����� ";
    cin >> CompChislo1.Mnim;

    //���� ������������ ����� 2
    Complex CompChislo2;
    cout << "\n������� �������������� ����� ������� ������������ ����� ";
    cin >> CompChislo2.Real;
    cout << "\n������� ������ ����� ������� ������������ ����� ";
    cin >> CompChislo2.Mnim;

    //���� ������������ �����

    float fChislo1;
    float fChislo2;

    cout << "\n������� ������ ������������ ����� ";
    cin >> fChislo1;

    cout << "\n������� ������ ������������ ����� ";
    cin >> fChislo2;

    //���������� ���������� �������.

    Summ(fChislo1, fChislo2);
    Summ(CompChislo1, CompChislo2);
    system("Pause");
    return 0;

}