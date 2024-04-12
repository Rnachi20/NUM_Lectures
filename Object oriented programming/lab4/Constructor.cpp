#include <iostream>
#include <cstring>
using namespace std;

class employee /*Ajilchin nertei class todorhoiloh*/
{
private: /*Private buyu nuutslaltai handaltiin tuvshind gishuun ugugdul
bolon zahirliin tsalin gishuun functsiig todorhoilson*/
	char *name; /*Char buyu temdegt ugugdliin turultei 
	ner haygan huvisagch zarlasan*/
	int number;/*Integer buyu buhel toon ugugdliin turultei 
	dugaar huvisagch zarlasan*/
	float time;/*Float buyu rational toon ugugdliin turultei 
	tsag huvisagch zarlasan*/
	char *position;/*Char buyu temdegt ugugdliin turultei 
	alban tushaal haygan huvisagch zarlasan*/
	float directorSalary(void) /*Zahirliin tsalin bodoh  functiong todorhoilson*/
	{
		return time * 10000;
	}

public:
	// primary constructor
	employee()
	{
		cout << "Anhdagch baiguulagch function ajillaa" << endl;
		name = new char[10];
		strcpy(name, " ");
		time = 0;
		number = 0;
		position = new char[10];
		strcpy(position, " ");
	}
	// parameter constructor
	employee(int number, char *name, float time, char *position)
	{
		cout << "Para baiguulagch function ajillaa" << endl;
		this->number = number;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->time = time;
		this->position = new char[strlen(position) + 1];
		strcpy(this->position, position);
	}
	// destructor function
	~employee()
	{
		cout << "ustgagch function ajillaa" << endl;
		delete[] name;
		delete[] position;
	}
	//copy constructor
	employee(employee &emp ){
		strcpy(name, emp.name);
	}

	// getter setter functions
	char *getName()
	{
		return name;
	}
	int getNumber()
	{
		return number;
	}
	float getTime()
	{
		return time;
	}
	char *getPosition()
	{
		return position;
	}
	char setName(char *name)
	{
		delete this->name;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	void setNumber(int number)
	{
		this->number = number;
	}
	void setPosition(char *position)
	{
		delete this->position;
		this->name = new char[strlen(position) + 1];
		strcpy(this->position, position);
	}
	void setTime(float time)
	{
		this->time = time;
	}

	// other functions
	void getValue(void);
	void showData(void);
	float getSalary(void);
	bool workedTime(float);
};

void employee::getValue()
{
	cout << "number oruul: ";
	cin >> number;
	name = new char[20];
	cout << "ner oruul: ";
	cin >> name;
	cout << "tsag oruul: ";
	cin >> time;
	cout << "position oruul: ";
	position = new char[10];
	cin >> position;
}

float employee::getSalary()
{
	if (strcmp(position, "zahiral") == 0)
	{
		return 3500 * time + directorSalary();
	}
	return 3500 * time;
}

void employee::showData()
{
	cout << number << " " << name << " " << position << " " << time << endl;
}

bool employee::workedTime(float time)
{
	if (time >= 0 && time <= 24)
	{
		this->time += time;
		return 1;
	}
	return 0;
}

int main()
{
	int n;
	cout << "ajilchdiin toogoo oruulna uu" << endl;
	cin >> n;
	employee arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i].getValue();
	}
	for (int i = 0; i < n; i++)
	{
		arr[i].showData();
		cout << arr[i].getSalary() << endl;
		arr[i].workedTime(12);
		cout << arr[i].getSalary() << endl;
	}
	int j;
	for (int i = 0; i < n; i++)
	{
		employee temp = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j].employee() < temp.getSalary())
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = temp;
		arr[i].showData();
		cout << "tsalin: " << arr[i].getSalary() << endl;
	}
}