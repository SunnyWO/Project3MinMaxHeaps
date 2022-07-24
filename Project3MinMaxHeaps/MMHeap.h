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

		void pushDown(int index) {};
		void pushDownMin(int index) {};
		void pushDownMax(int index) {};
		void pushUp(int index) {};
		void pushUpMin(int index) {};
		void pushUpMax(int index) {};

	private:
		T** pData;
		size_t length;
};