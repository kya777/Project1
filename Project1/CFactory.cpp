#include <iostream>
#include "CFactory.h"
#include "PhoneDESC.h"
#include "CBettery.h"
#include "CCamera.h"
#include "CCPU.h"
#include "CGPU.h"
#include "CPhone.h"

CPhone* CFactory::CreatePhone(PhoneDESC* Desc)
{
	CPhone* pone = new CPhone;
	if (pone->GetDesc() == nullptr)
	{
		pone->SetDesc(Desc);
	}

	if (pone)
	{
		std::cout << "Done Create Pone" << std::endl;
	}
	else
	{
		std::cout << "Failed Create Pone" << std::endl;

	}

	return pone;
}
