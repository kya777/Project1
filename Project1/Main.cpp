#include "iostream"
#include "string"
#include "CFactory.h"
#include "PhoneDESC.h"
#include "CCPU.h"
#include "CGPU.h"
#include "CBettery.h"
#include "CCamera.h"
#include "CPhone.h"
#include <random>

using namespace std;

int main()
{
	int cnum = 5;

	CFactory fac;
	PhoneDESC desc;
	
	CCPU* _cpu = new CCPU;
	CGPU* gpu = new CGPU;
	CCamera** cam = nullptr;
	CBettery* bet = new CBettery;

	_cpu->SetType(ECoreType::C7_1595);
	gpu->SetType(EGCoreType::G7_1595);
	bet->SetType(EBetteryType::B_30000);
	cam = new CCamera*[cnum];
	for (int i = 0; i < cnum; i++)
	{
		cam[i] = new CCamera;
		cam[i]->SetType(ECameraType(_Random_device()%5));
	}

	desc.val_Init(cnum, true, "G22");
	desc.Enum_Init(EOSType::Androide, EDataType::Data_5G, EPhoneType::Smart, EChargingType::C_Type);
	desc.Class_Init(_cpu, gpu, bet, cam);

	CPhone* Phone = fac.CreatePhone(&desc);

	Phone->GetDesc()->ShowInfo();

	return 0;
}