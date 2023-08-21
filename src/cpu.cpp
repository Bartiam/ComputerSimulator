#include "cpu.h"

void compute()
{
	int sum = 0;
	for (int i = 0; i < read_buffer().size(); ++i)
		sum += read_buffer()[i];

	std::cout << "Sum of all elements: " << sum << std::endl;
}
