#pragma once
#include <string>

//�� ��ǰ�� Ÿ������ ��� �ް� �ش� Ÿ���� ���ڿ��� ����ϱ� ���� ���� interface
template<typename T>
class CChangeType
{
public:
	CChangeType() = default;

	virtual std::string ChangeStringType(T type) = 0;

private:
};
