#pragma once
#include <string>
#include "ChangeTypeInterface.h"

enum EBetteryType : int
{
	B_10000,	
	B_15000,	
	B_20000,	
	B_25000,	
	B_30000,	
	B_Max
};
class CBettery : public CChangeType<EBetteryType>
{
public:
	void SetType(EBetteryType type) { B_Type = type; };
	EBetteryType GetType() const { return B_Type; }
	std::string ChangeStringType(EBetteryType type) override;
	
private:
	EBetteryType B_Type;
};

