#include "kbd.h"
#include "gpu.h"
#include "cpu.h"
#include "disk.h"
#include <string>

bool is_correct_input_command(const char& command)
{
	if (command < '1' || command > '6') return false;

	return true;
}

int main()
{
	char command;
	while (true)
	{
		std::cout << "Enter the command: " <<
			"\n1 - input" <<
			"\n2 - display" <<
			"\n3 - sum" <<
			"\n4 - save" <<
			"\n5 - load" <<
			"\n6 - exit \n:";
		std::cin >> command;

		if (!is_correct_input_command(command))
		{
			std::cerr << "Incorrect input data! Try again. " << std::endl;
			continue;
		}

		if (command == '1')
		{
			int element;
			std::cout << "Enter 8 items into the memory buffer. " << std::endl;
			for (int i = 0; i < 8; ++i)
			{
				std::cout << "Element #" << i << "\n:";
				std::cin >> element;
				input_buffer(element, i);
			}
		}
		else if (command == '2')
			print();
		else if (command == '3')
			compute();
		else if (command == '4')
			save();
		else if (command == '5')
			load();
		else if (command == '6') return 0;
	}
}
