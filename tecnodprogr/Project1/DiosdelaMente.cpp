#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

const int NUM_CLASES = 10;
const int NUM_STUDENTS = 50;

struct students
{
	int id;
	string name;
	int age;
};

struct Class
{
	string className;
	students student[NUM_STUDENTS];
};

struct school
{
	string schoolname;
	Class* classes[NUM_CLASES];
};


//void main()
//{
//	students a;
//	students b;
//
//	Class c; 
//
//	school s;
//	school s1;
//
//	school enti;
//	enti.schoolname = "ENTI-UB";
//
//	Class tecnologiesprogramacio;
//	tecnologiesprogramacio.className = "Tecnologiesdeprogramacio";
//	tecnologiesprogramacio.student[0].name = "PACO GERTE";
//	tecnologiesprogramacio.student[0].age = 33;
//	tecnologiesprogramacio.student[0].id = 33333;
//
//	tecnologiesprogramacio.student[1].name = "ANA BOHUELES";
//	tecnologiesprogramacio.student[1].age = 32;
//	tecnologiesprogramacio.student[1].id = 33332;
//
//	tecnologiesprogramacio.student[2].name = "DIXON MAYASS";
//	tecnologiesprogramacio.student[2].age = 18;
//	tecnologiesprogramacio.student[2].id = 33331;
//
//	tecnologiesprogramacio.student[3].name = "ELVER GON";
//	tecnologiesprogramacio.student[3].age = 30;
//	tecnologiesprogramacio.student[3].id = 33330;
//
//	for (int i = 0; i < NUM_CLASES; ++i)
//	{
//		enti.classes[i] = nullptr;
//	}
//
//	enti.classes[0] = &tecnologiesprogramacio;
//
//	//print all the class names of the school
//
//	for (int i = 0; i < NUM_CLASES; ++i)
//	{
//		if (enti.classes[i] != nullptr)
//		{
//			cout << enti.classes[i]->className << endl;
//			cout << (*enti.classes[i]).className << endl; //estas dos lineas son lo mismo pero de formas diferentes de hacerlo
//			Class& c = (*enti.classes[i]);
//		}
//	}
//
//	for (int j = 0; j < NUM_CLASES; ++j)
//	{
//		if (enti.classes[j] != nullptr)
//		{
//			for (int i = 0; i < NUM_STUDENTS; ++i)
//			{
//				if (enti.classes[j]->student[i].name[0] == 'A')
//				{
//					//cout << tecnologiesprogramacio.student[i].name << endl;
//					cout << enti.classes[j]->student[i].name << endl;
//				}
//			}
//		}
//	} cout << endl; 
//
//	
//	for (int j = 0; j < NUM_CLASES; ++j)
//	{
//		if (enti.classes[j] != nullptr)
//		{
//			for (int i = 0; i < NUM_STUDENTS; ++i)
//			{
//				if (enti.classes[j]->student[i].age < 19)
//				{
//					cout << enti.classes[j]->student[i].name << endl;
//				}
//			}
//		}
//	} cout << endl; 
//}