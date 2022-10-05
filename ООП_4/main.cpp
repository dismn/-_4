//Copyright (c), Semeniuta Diana 202 TN, 2022

/*���������� �������������� �������� �� ����� ��������:
    ���������� ����� ������������ ����� ������ ����� (�, b), �� � � ����� �������, b � ����� �������. ���������� ���� Complex ��� ������ �
������������ �������. ����'������ ������ ���� �������� ��������:
��������� add(), (a, b) + (�, d) = (� + b, c + d);
�������� sub(), (a, b) - (c, d) = (� - b, c - d);
�������� mul(), (�, b) * (c, d) = (�� - bd, dd + bc);
������ div(), (�, b) / (c, d) = (�� + bd, b� - dd) / (c2 + d2);
��������� ����� conj(), conj(a, b) = (a, -b)
*/

#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
    Complex M1(5, 6), M2(4, 3), M3;
    M1.Display();
    M2.Display();


    cout << endl;
    M3 = M1 + M2;
    M3.Display();

    
    M1.Sub(M2);
    M1.Display();
    M1.Mul(M2);
    M1.Display();
    M1.Div(M2);
    M1.Display();





}