#include <iostream>

void FindOddNumbers()
{
	int N;
	bool x;
	std::cout << "Enter limit of numbers:\n";
	std::cin >> N;
	std::cout << "Enter 0(Even numbers) or 1(Odd Numbers)\n";
	std::cin >> x;
	std::cout << "Result:\n";

	for (int i = x; i <= N; i += 2)
	{
		std::cout << i << std::endl;
	}
}


int main()
{
	FindOddNumbers();

	return 0;
}