#include "CCamera.h"
#include <string>

std::string CCamera::ChangeStringType(ECameraType type)
{
    std::string t;

	switch (type)
	{
	case C_100:
		t = "C_100";
		break;
	case C_1000:
		t = "C_1000";
		break;
	case C_3000:
		t = "C_3000";
		break;
	case C_7000:
		t = "C_7000";
		break;
	case C_10000:
		t = "C_10000";
		break;
	case Cam_Max:
		break;
	default:
		break;
	}

    return t;
}
