#include "Array.hpp"
#include <iostream>

int main()
{
	// Test 1: Construction vide
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

	// Test 2: Construction avec n
	Array<int> arr(5);
	std::cout << "Array size: " << arr.size() << std::endl;

	// Test 3: Accès et écriture
	arr[0] = 10;
	arr[1] = 20;
	std::cout << "arr[0] = " << arr[0] << ", arr[1] = " << arr[1] << std::endl;

	// Test 4: Copie (deep copy)
	Array<int> copy = arr;
	copy[0] = 999;
	std::cout << "After copy modification - Original[0]: " << arr[0] << ", Copy[0]: " << copy[0] << std::endl;

	// Test 5: Assignment (deep copy)
	Array<int> assign;
	assign = arr;
	assign[1] = 888;
	std::cout << "After assignment modification - Original[1]: " << arr[1] << ", Assign[1]: " << assign[1] << std::endl;

	// Test 6: Exception out of bounds
	try
	{
		arr[100] = 5;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
