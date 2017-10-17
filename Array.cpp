#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

template <class T>
class Array
{
public: 
        Array(int size);
        ~Array();
        int & operator[](int i) const;
        int size() const;
        void fill(T k);
        int * begin(){
		return data;
	}      

	int * end(){
       		return data + len;
	} 

private:
        int len;
        int * data;
};
template <class T>
	Array<T>::Array(int size) {
		len = size;
		data = new int[len];
	}
template <class T>
	Array<T>::~Array()  {
		delete [] data;
	}
template <class T>
	int & Array<T>::operator[](int i) const {
		return data[i];
	}
template <class T>
	int Array<T>::size() const {
		return len;
	}
template <class T>	
	void Array<T>::fill(T k) {
		for(int i = 0; i < len; i++)
			data[i] = k;
	}

	
	class Animal {
	public:
    		virtual string speak() const = 0;
	};

	class Cat : public Animal {
	public: 
        	virtual string speak() const;
	};

	class Dog : public Animal {
	public: 
        	virtual string speak() const;
	};
	string Cat::speak() const {
		return "meow"; 
	}

	string Dog::speak() const {
		return "woof"; 
	}

	int main () {

	Array<Animal> a;
	cout << a[2]->speak() << endl;  // Prints "meow" or "woof"
	a.fill(speak());
return 0;
}
