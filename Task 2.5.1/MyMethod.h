#pragma once
#include <string>
#include "Container.h"
using namespace std;

class MyMethod : public Container
{
public:
	MyMethod(string name);
	~MyMethod();
	string get_name();
	void set_name(string name);
private:
	string name;
};
