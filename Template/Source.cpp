#include <iostream>

template <typename T>
T compare(T a, T b, bool(*f)(T,T))
{
	return f(a, b) ? a : b;
}

bool someFunction(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 7, b = 8;
	std::cout << compare(a, b, someFunction);
	return 0;
}