#pragma once
#include <string>

template<typename T>
class CChangeType
{
public:
	CChangeType() = default;

	virtual std::string ChangeStringType(T type) = 0;

private:
};
