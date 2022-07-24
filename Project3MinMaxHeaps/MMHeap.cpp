#include "MMHeap.h"
#include <vector>
#include <cmath>
using namespace std;
	
	template <typename T>
	T** pData;
	size_t length;
	
	template <typename T>
	vector<T> arrayMMH;

	template <typename T>
	MMHeap<T>::MMHeap() :pData(nullptr), length(0) {};

	template <typename T>
	MMHeap<T>::MMHeap(const int& initialSize) :length(0) {};

	template <typename T>
	void MMHeap<T>::insert(T* px) {
	
	}
	
	template <typename T>
	void MMHeap<T>::pushDown(int index) {
		int height = floor(log2(index + 1.0));
		if (height % 2 == 0) {
			pushDownMin(index);
		}
		else {
			pushDownMax(index);
		}
	}

	template <typename T>
	void MMHeap<T>::pushDownMin(int index) {
		int smallestChildAndGrand;
		if (arrayMMH.size() > ((index+1)*2)) {
			int smallestChildAndGrand = (index + 1) * 2;
			if (arrayMMH.size() > ((index + 1) * 2 + 1)) {
				if (arrayMMH[(((index + 1) * 2 + 1)] < arrayMMH[smallestChildAndGrand]) {
					smallestChildAndGrand = ((index + 1) * 2 + 1);
				}
			}
			for (int i = 0; i < 4; i++) {
				if (arrayMMH.size() > ((index + 1) * 4 + i)) {
					if (arrayMMH[((index + 1) * 4 + i)] < arrayMMH[smallestChildAndGrand]) {
						smallestChildAndGrand = ((index + 1) * 4 + i);
					}
				}
			}
		}
		if (arrayMMH.size() >= ((index + 1) * 4)) {
			if (arrayMMH[smallestChildAndGrand] < arrayMMH[index]) {
				T temp = arrayMMH[index];
				arrayMMH[index] = arrayMMH[smallestChildAndGrand];
				arrayMMH[smallestChildAndGrand] = temp;
				if (array[smallestChildAndGrand] < array[floor((smallestChildAndGrand + 1) / 2)]) {
					T temp = arrayMMH[smallestChildAndGrand];
					arrayMMH[smallestChildAndGrand] = arrayMMH[floor((smallestChildAndGrand + 1) / 2)];
					arrayMMH[floor((smallestChildAndGrand + 1) / 2) = temp;
				}
				pushDownMin(smallestChildAndGrand);
			}
			else if (array[smallestChildAndGrand] < array[index]) {
				T temp = arrayMMH[smallestChildAndGrand];
				arrayMMH[smallestChildAndGrand] = arrayMMH[index];
				arrayMMH[index] = temp;
			}
		}
	}

	template <typename T>
	void MMHeap<T>::pushDownMax(int index) {
		int largestChildAndGrand;
		if (arrayMMH.size() > ((index + 1) * 2)) {
			int smallestChildAndGrand = (index + 1) * 2;
			if (arrayMMH.size() > ((index + 1) * 2 + 1)) {
				if (arrayMMH[(((index + 1) * 2 + 1)] > arrayMMH[smallestChildAndGrand]) {
					smallestChildAndGrand = ((index + 1) * 2 + 1);
				}
			}
			for (int i = 0; i < 4; i++) {
				if (arrayMMH.size() > ((index + 1) * 4 + i)) {
					if (arrayMMH[((index + 1) * 4 + i)] > arrayMMH[smallestChildAndGrand]) {
						smallestChildAndGrand = ((index + 1) * 4 + i);
					}
				}
			}
		}
		if (arrayMMH.size() >= ((index + 1) * 4)) {
			if (arrayMMH[largestChildAndGrand] > arrayMMH[index]) {
				T temp = arrayMMH[index];
				arrayMMH[index] = arrayMMH[largestChildAndGrand];
				arrayMMH[largestChildAndGrand] = temp;
				if (array[largestChildAndGrand] < array[floor((smallestChildAndGrand + 1) / 2)]) {
					T temp = arrayMMH[largestChildAndGrand];
					arrayMMH[largestChildAndGrand] = arrayMMH[floor((largestChildAndGrand + 1) / 2)];
					arrayMMH[floor((largestChildAndGrand + 1) / 2) = temp;
				}
				pushDownMin(largestChildAndGrand);
			}
			else if (array[largestChildAndGrand] > array[index]) {
				T temp = arrayMMH[largestChildAndGrand];
				arrayMMH[largestChildAndGrand] = arrayMMH[index];
				arrayMMH[index] = temp;
			}
		}
	}

	template <typename T>
	void MMHeap<T>::pushUp(int index) {
		if (index != 0) {
			int height = floor(log2(index + 1.0));
			if (height % 2 == 0) {
				
			}
		}
	}

	template <typename T>
	void MMHeap<T>::pushUpMin(int index) {
	
	}

	template <typename T>
	void MMHeap<T>::pushUpMax(int index) {
	
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