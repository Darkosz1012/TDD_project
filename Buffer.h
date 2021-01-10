#pragma once
#include <vector>
#include <string>


class Buffer
{
public:
	std::vector<std::string> arr;
	int read = 0;
	int write = 0;
public:
	Buffer(int size) {
		arr.resize(size, "");
	}

	int getSize() {
		return 0;
	}

	int getAllocatedSize() {
		return 0;
	}

	void add(std::string str) {

	}


	std::string remove() {
		return "";
	}
};

