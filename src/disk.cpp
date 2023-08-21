#include "disk.h"

void save()
{
	std::ofstream save("../data.txt", std::ios::binary);

	for (int i = 0; i < read_buffer().size(); ++i)
		save << read_buffer()[i] << " ";

	std::cout << "Saving completed. " << std::endl;

	save.close();
}

void load()
{
	std::ifstream load("../data.txt", std::ios::binary);

	if (!load.is_open())
	{
		std::cout << "The save file does not exist. " << std::endl;
		return;
	}

	for (int i = 0; i < read_buffer().size(); ++i)
	{
		int temp;
		load >> temp;
		write_buffer(temp, i);
	}

	std::cout << "Loading completed. " << std::endl;

	load.close();
}