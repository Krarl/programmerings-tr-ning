#include <iostream>

int main()
{
	int N, L, a;
	std::cin >> N >> L;
	int sum = -4; // -4 Eftersom jag tar bort det tomrumet jag l�gger p� de sista bilarna i varje k�
	L *= 4; // Vi �r bara intresserade av den totala l�ngden
	for (int i = 0; i < N;i++)
	{
		std::cin >> a;
		sum += a + 1;

		if (sum > L )
		{
			std::cout << i; break;
		}
	}
	return 0;
}