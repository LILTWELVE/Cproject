﻿// Cproject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Составить программу, которая будет считывать введённое пятизначное число. После чего, каждую цифру этого числа необходимо вывести в новой строке

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int num;

    cout << "Введите пязизначное число: ";
    cin >> num;

    if (num >= 10000 || num < 100000)
    {
        cout << "Первая цифра равна: " << num / 10000 << endl;
        cout << "Вторая цифра равна: " << (num / 1000) % 10 << endl;
        cout << "Третья цифра равна: " << (num / 100) % 10 << endl;
        cout << "Четвертая цифра равна: " << (num / 10) % 10 << endl;
        cout << "Пятая цифра равна: " << num % 10 << endl;
        
    }
    else
        exit(0);


    return 0;
}


