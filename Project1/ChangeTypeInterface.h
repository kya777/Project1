#pragma once
#include <string>

//각 부품의 타입으로 상속 받고 해당 타입을 문자열로 출력하기 위해 만든 interface
template<typename T>
class CChangeType
{
public:
	CChangeType() = default;

	virtual std::string ChangeStringType(T type) = 0;

private:
};
