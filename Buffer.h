#pragma once

class Buffer
{
private:
	std::vector<std::string> arr;
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

