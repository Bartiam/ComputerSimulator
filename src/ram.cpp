#include "ram.h"

std::vector<int> buffer(8);

std::vector<int> read_buffer()
{
	return buffer;
}

void write_buffer(const int& element, const int& it)
{
	buffer[it] = element;
}