#include "CCPU.h"
#include <string>

std::string CCPU::ChangeStringType(ECoreType type)
{
    std::string t;

	switch (type)
	{
	case C3_1289:
		t = "C3_1289";
		break;
	case C3_1689:
		t = "C3_1689";
		break;
	case C5_1595:
		t = "C5_1595";
		break;
	case C7_1595:
		t = "C7_1595";
		break;
	case C7_1850:
		t = "C7_1850";
		break;
	case Cpu_Max:
		break;
	default:
		break;
	}

    return t;
}
