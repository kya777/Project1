#pragma once

#include<string>
#include "ChangeTypeInterface.h"


enum EGCoreType : int
{
	G3_1289,	//1200Core	//1300Clock
	G3_1689,	//1200Core	//1450Clock
	G5_1595,	//1700Core	//1500Clock
	G7_1595,	//1900Core	//1600Clock
	G7_1850,	//2200Core	//1700Clock
	G_Max
};

class CGPU : public CChangeType<EGCoreType>
{
public:
	void SetType(EGCoreType type) { G_Type = type; };
	EGCoreType GetType() const { return G_Type; }
	std::string ChangeStringType(EGCoreType type);
private:
	EGCoreType G_Type;
};

