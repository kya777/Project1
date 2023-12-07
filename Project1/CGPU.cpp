#include "CGPU.h"
#include <string>

std::string CGPU::ChangeStringType(EGCoreType type)
{
	std::string t;

	switch (type)
	{
	case G3_1289:
		t = "G3_1289";
		break;
	case G3_1689:
		t = "G3_1689";
		break;
	case G5_1595:
		t = "G5_1595";
		break;
	case G7_1595:
		t = "G7_1595";
		break;
	case G7_1850:
		t = "G7_1850";
		break;
	case G_Max:
		break;
	default:
		break;
	}

	return t;
}
