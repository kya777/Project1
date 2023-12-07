#include "CPhone.h"
#include "PhoneDESC.h"
#include <memory>
CPhone::~CPhone()
{
	delete Desc;
}

void CPhone::SetDesc(PhoneDESC* desc)
{
	Desc = new PhoneDESC;
	memcpy(Desc, desc, sizeof(PhoneDESC));
}
