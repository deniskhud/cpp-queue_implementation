#ifndef QUEUE_H
#define QUEUE_H
using namespace std;
#include<iostream>

template<typename T>
class Queue {
private:
	class Node {
	public:
		Node* next;
		T value;
		Node(T value = T(), Node* next = nullptr)
		{
			this->next = next;
			this->value = value;
		}
		
	};
	Node* front;
	Node* rear;
	int size;

public:
	Queue()
	{
		front = nullptr;
		rear = nullptr;
		size = 0;
	}
	~Queue() {
		clear();
	}
	void enqueue(T value);		//push method 
	void dequeue();				//pop method
	int Size() { return size; }
	bool isEmpty() {
		return size == 0;
	}
	T& frontElement();
	T& backElement();
	void clear();
	void print();
};
template<typename T>
void Queue<T>::enqueue(T value)
{
	Node* newNode = new Node(value);
	

	if (rear) {
		rear->next = newNode;
	}
	else {
		front = newNode;
	}
	rear = newNode;
	++size;
}
template<typename T>
void Queue<T>::dequeue()
{
	if (isEmpty()) {
		return;
	}
	Node* temp = front;
	front = front->next;
	if (!front) rear = nullptr;
	
	--size;
	delete temp;
}

template<typename T>
T& Queue<T>::frontElement()
{
	if (isEmpty()) {
		throw runtime_error("Queue is empty\n");

	}
	return front->value;
}

template<typename T>
T& Queue<T>::backElement()
{
	if (isEmpty()) {
		throw runtime_error("Queue is empty\n");
	}
	return rear->value;
}

template<typename T>
void Queue<T>::clear()
{
	while (!isEmpty()) {
		dequeue();
	}
}

template<typename T>
void Queue<T>::print()
{
	Node* current = front;
	while (current) {
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}

#endif // !QUEUE_H


