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





/*
void main()
{

}*/