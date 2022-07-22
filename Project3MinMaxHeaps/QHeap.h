#pragma once
#include "MMHeap.h"
#include <string>
using namespace std;

template <typename T>
class QHeap {
	

	public:
		QHeap() :heaps(nullptr) {};
		QHeap(const int& initialSize) {};
		void insert(T* px);
		T* getMin();
		T* getMax();
		T* get25();
		T* get50();
		T* get75();

	private:
		MMHeap<T>** heaps;

};
