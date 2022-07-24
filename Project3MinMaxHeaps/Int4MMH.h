#pragma once
#include <iostream>
#include <string>

class Int4MMH
{
	int data;

public:
	Int4MMH() :data(0) {};
	Int4MMH(const int& n) :data(n) {};
	~Int4MMH() {};

	friend std::ostream& operator<<(std::ostream& os, const Int4MMH& i);

	friend bool operator<(const Int4MMH& n1, const Int4MMH& n2);
	friend bool operator>(const Int4MMH& n1, const Int4MMH& n2);
	friend bool operator==(const Int4MMH& n1, const Int4MMH& n2);
};

std::ostream& operator<<(std::ostream& os, const Int4MMH& i)
{
	return os << i.data;
}

bool operator<(const Int4MMH& n1, const Int4MMH& n2)
{
	return n1.data < n2.data;
}

bool operator>(const Int4MMH& n1, const Int4MMH& n2)
{
	return n1.data > n2.data;
}

bool operator==(const Int4MMH& n1, const Int4MMH& n2)
{
	return n1.data == n2.data;
}