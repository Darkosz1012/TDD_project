#pragma once
#include <vector>
#include <string>
#include <exception> 

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
		return write-read;
	}

	int getAllocatedSize() {
		return arr.size();
	}

	void add(std::string str) {
		arr[write % arr.size()] = str;
		write++;
	}


	std::string remove() {
		if (read >= write) {
			throw new std::exception();
		}
		std::string tmp = arr[read % arr.size()];
		arr[read % arr.size()] = "";
		read++;
		return tmp;
	}
};

