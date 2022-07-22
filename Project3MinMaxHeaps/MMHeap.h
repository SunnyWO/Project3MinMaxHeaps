#pragma once
#include <string>
using namespace std;

template <typename T>
class MMHeap {
		
	
	public:
		MMHeap() :pData(nullptr), length(0) {};
		MMHeap(const int& initialSize) :length(0) {};
		size_t size() const { return length; };
		void insert(T* px) {};
		void dump();
		T* getMin();
		T* getMax();
		T deleteMin();
		T deleteMax();

	private:
		T** pData;
		size_t length;
};