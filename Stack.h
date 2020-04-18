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
	// 删除最后一个元素
	elems.pop_back();
}

template<class T>
inline T Stack<T>::top() const
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}
	// 返回最后一个元素的副本 
	return elems.back();
}
