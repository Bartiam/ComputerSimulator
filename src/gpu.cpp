#include "gpu.h"

void print()
{
	for (int i = 0; i < read_buffer().size(); ++i)
		std::cout << "Element " << i << "\t" << 
		read_buffer()[i] << std::endl;
}