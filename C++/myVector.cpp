#include<iostream>

template<typename T>
class Vector
{
	public:
		Vector():m_size(100),m_length(0){}
	private:
		size_t m_size;
		size_t m_length;
};


int main(void)
{
	 Vector<int> iObj;
}