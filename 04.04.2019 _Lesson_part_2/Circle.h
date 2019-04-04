#pragma once
#include"Point.h"
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
#define pi 3.14
using namespace std;


//Разработать класс Circle(окружность).Центр окружности выражен объектом класса Point(точка).
//Класс должен содержать : конструктор по умолчанию, конструктор с параметрами, при необходимости реализовать деструктор и конструктор копирования.
//Добавить методы для :
//□	перемещения окружности вдоль осей
//□	изменения размера окружности(измене ее радиуса)
//□	определения длины окружности
//□	метод для проверки на равенство двух окружностей
//□	вывод на экран информации об объекте
//□	для копирования объектов
//□	остальные методы на усмотрение разработчика(методы set и get)
//Написать интерфейс для работы с классом.
//Реализовать динамический массив объектов класса с возможностью добавления, удаления объектов из массива.
//Реализовать возможность записи информации об объектах массива в текстовый файл, бинарный файл.

class Circle {
private:
	Point center;
	double R;
public:
	Circle():center(), R(0){}
	Circle(double x, double y, double R):center(x, y), R(R) {}
	Circle(const Circle&obj);
	void setR(double R);
	double getR();

	void move(double x, double y);
	void changeRadius(double value);
	double len();
	bool isEqual(Circle obj);
	void print();
};
