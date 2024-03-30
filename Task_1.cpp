#include <iostream>
using namespace std;

class Faculty
{
public:

	virtual void print()
	{
		cout << "Faculty Class "<< endl;
	}
};

class Administrator : public virtual Faculty
{
public:

	void print()
	{
		cout << "Administrator Class "<< endl;
	}
};

class Teacher : public virtual Faculty
{
public:

	void print()
	{
		cout << "Teacher Class" << endl;
	}
};

class AdministratorTeacher : public Teacher, public Administrator
{
public:

	void print()
	{
		cout << "Administration Teacher Class" << endl;
	}
};


int main()
{
	Faculty** arr = NULL;
	arr = new Faculty*[3];
	arr[0] = new Teacher;
	arr[1] = new Administrator;
	arr[2] = new AdministratorTeacher;

	for(int i=0; i<3; i++)
	{
		arr[i] -> print();
	}
	cout << endl;
	
	system("pause");
	return 0;
}

