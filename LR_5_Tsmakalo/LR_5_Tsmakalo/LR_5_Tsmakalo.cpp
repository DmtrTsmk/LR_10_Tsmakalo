#include "pch.h"
#include <cmath>

using namespace System;

void Zad_1()
{
    double A, B;
    Console::Write("������ ���������� A (X �����): ");
    A = Convert::ToDouble(Console::ReadLine());
    Console::Write("������ ���������� B (Y �����): ");
    B = Convert::ToDouble(Console::ReadLine());
    int n;
    Console::Write("������ ������� �������: ");
    n = Convert::ToInt32(Console::ReadLine());
    array<double>^ X = gcnew array<double>(n);
    array<double>^ Y = gcnew array<double>(n);
    for (int i = 0; i < n; ++i) {
        Console::Write("������ ���������� X ��� ������� {0}: ", (i + 1));
        X[i] = Convert::ToDouble(Console::ReadLine());
        Console::Write("������ ���������� Y ��� ������� {0}: ", (i + 1));
        Y[i] = Convert::ToDouble(Console::ReadLine());
    }
    Console::WriteLine("\n������� �������� �� ������� �� �����:");
    Console::WriteLine("{0,-15}{1,-25}", "����� �������", "³������ �� �����");
    for (int i = 0; i < n; ++i) {
        double distance = sqrt(pow(X[i] - A, 2) + pow(Y[i] - B, 2));
        Console::WriteLine("{0,-15}{1,-25:F2}", (i + 1), distance);
    }
}

void Zad_2()
{
    int n;

    Console::Write("������ ����� ��������� ������� (n): ");
    n = Convert::ToInt32(Console::ReadLine());

    array<array<int>^>^ X = gcnew array<array<int>^>(n);
    for (int i = 0; i < n; i++) {
        X[i] = gcnew array<int>(n);
    }

    Random^ random = gcnew Random();
    Console::WriteLine("������� ��������� ����������� ����������:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            X[i][j] = random->Next(1, 101);
            Console::Write(X[i][j] + " ");
        }
        Console::WriteLine();
    }

    for (int i = 0; i < n; i++) {
        int temp = X[i][i];
        X[i][i] = X[i][n - i - 1];
        X[i][n - i - 1] = temp;
    }

    Console::WriteLine("\n����������� �������:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Console::Write(X[i][j] + " ");
        }
        Console::WriteLine();
    }
}

int main(array<System::String ^> ^args)
{
    Zad_1();
    Zad_2();
    return 0;
}
