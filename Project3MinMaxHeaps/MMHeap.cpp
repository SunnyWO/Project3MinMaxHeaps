#include "MMHeap.h"
#include <vector>
using namespace std;
	
	template <typename T>
	T** pData;
	size_t length;
	
	template <typename T>
	vector<T> initial;

	template <typename T>
	MMHeap<T>::MMHeap() :pData(nullptr), length(0) {};

	template <typename T>
	MMHeap<T>::MMHeap(const int& initialSize) :length(0) {};

	template <typename T>
	void MMHeap<T>::insert(T* px) {
	
	}

	template <typename T>
	void MMHeap<T>::dump() {

	}

	template <typename T>
	T* MMHeap<T>::getMin() {

	}

	template <typename T>
	T* MMHeap<T>::getMax() {

	}

	template <typename T>
	T MMHeap<T>::deleteMin() {

	}

	template <typename T>
	T MMHeap<T>::deleteMax() {

	}