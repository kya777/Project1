#pragma once
#include<string>
#include "ChangeTypeInterface.h"

enum ECoreType : int
{
	C3_1289,	//2/4	//2.3Clock
	C3_1689,	//2/4	//2.5Clock
	C5_1595,	//4/8	//2.4Clock
	C7_1595,	//4/8	//2.7Clock
	C7_1850,	//6/12	//2.7Clock
	Cpu_Max
};

class CCPU : public CChangeType<ECoreType>
{
public:
	void SetType(ECoreType type) { C_Type = type; };
	ECoreType GetType() const { return C_Type; }
	std::string ChangeStringType(ECoreType type);
private:
	ECoreType C_Type;
};

