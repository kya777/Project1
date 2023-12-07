#pragma once
#include<string>
#include "ChangeTypeInterface.h"

enum ECameraType : int
{
	C_100,	
	C_1000,	
	C_3000,	
	C_7000,	
	C_10000,	
	Cam_Max
};


class CCamera : public CChangeType<ECameraType>
{
public:
	void SetType(ECameraType type) { C_Type = type; };
	ECameraType GetType() const { return C_Type; }
	std::string ChangeStringType(ECameraType type) override;

private:
	ECameraType C_Type;
};

