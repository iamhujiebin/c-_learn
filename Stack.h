#pragma once
#include <vector>
#include <stdexcept>

using namespace std;

template <class T>
class Stack
{
private:
	vector<T> elems;
public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return this.elems.empty();
	}
};

template<class T>
inline void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);
}

template<class T>
inline void Stack<T>::pop()
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}
	// ɾ�����һ��Ԫ��
	elems.pop_back();
}

template<class T>
inline T Stack<T>::top() const
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}
	// �������һ��Ԫ�صĸ��� 
	return elems.back();
}
