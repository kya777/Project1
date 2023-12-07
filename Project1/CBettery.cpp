#include "CBettery.h"

std::string CBettery::ChangeStringType(EBetteryType type)
{
	std::string t;
	switch (type)
	{
	case B_10000:
		t = "B_10000";
		break;
	case B_15000:
		t = "B_15000";
		break;
	case B_20000:
		t = "B_20000";
		break;
	case B_25000:
		t = "B_25000";
		break;
	case B_30000:
		t = "B_30000";
		break;
	case B_Max:
		break;
	default:
		break;
	}
    return t;
}
