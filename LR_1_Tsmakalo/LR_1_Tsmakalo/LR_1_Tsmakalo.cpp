#include "pch.h"

using namespace System;

void Zad_1()
{
    Console::WriteLine("Початок 1 завдання");
    array<String^>^ list_words = gcnew array<String^>(4);
    list_words[0] = "Viae";
    list_words[1] = "sunt";
    list_words[2] = "inscrutabiles";
    list_words[3] = "creatoris";

    for (int i = 0; i < list_words->Length; i++)
    {
        list_words[i] = " " + list_words[i];
    }
    for each (String ^ word in list_words)
    {
        Console::WriteLine(word);
    }
    Console::WriteLine("Кінець 1 завдання");
}

void Zad_2()
{
    Console::WriteLine("Початок 2 завдання");
    String^ str = "infinitum";
    String^ rstr = "";
    int length_str = str->Length;
    for (int i = length_str - 1; i >= 0; i--)
    {
        rstr += str[i];
    }
    Console::WriteLine(str);
    Console::WriteLine(rstr);
    Console::WriteLine("Кінець 2 завдання");
}

int main(array<System::String ^> ^args)
{
    Zad_1();
    Zad_2();
    return 0;
}
