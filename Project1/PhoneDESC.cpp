#include <iostream>
#include <string>
#include "PhoneDESC.h"
#include "CBettery.h"
#include "CCamera.h"
#include "CCPU.h"
#include "CGPU.h"

PhoneDESC::~PhoneDESC()
{
	delete[] Cameras;
	delete Bettery;
	delete Gpu;
	delete Cpu;
	Cameras = nullptr;
	Bettery = nullptr;
	Gpu = nullptr;
	Cpu = nullptr;
}

void PhoneDESC::Class_Init(CCPU* p_cpu, CGPU* p_gpu, CBettery* p_bett, CCamera** p_cam)
{
	Cpu = p_cpu;
	Gpu = p_gpu;
	Bettery = p_bett;
	Cameras = p_cam;
}

void PhoneDESC::Enum_Init(EOSType ost, EDataType dat, EPhoneType pht, EChargingType cht)
{
	OS_Type = ost;
	Data_Type = dat;
	Phone_Type = pht;
	Charging_Type = cht;
}

void PhoneDESC::val_Init(int cam_num, bool all_one, std::string name)
{
	Camera_Num = cam_num;
	bAll_in_one = all_one;
	Name = name;
}

void PhoneDESC::ShowInfo()
{
	std::cout << "Name : " << GetName() << std::endl;
	std::cout << "PhoneType : " << ChangeType(GetPhoneType()) << std::endl;
	std::cout << "OSType : " << ChangeType(GetOSType()) << std::endl;
	std::cout << "AllInOne : " << GetAllinone() << std::endl;
	std::cout << "DataType : " << ChangeType(GetDataType()) << std::endl;
	std::cout << "CPU : " << GetCPU()->ChangeStringType(GetCPU()->GetType()) << std::endl;
	std::cout << "GPU : " << GetGPU()->ChangeStringType(GetGPU()->GetType()) << std::endl;
	std::cout << "Bettery : " << GetBettery()->ChangeStringType(GetBettery()->GetType()) << std::endl;
	for (size_t i = 0; i < GetCamNum(); i++)
	{
		std::cout << "Camera[" << i << "]" << " : " << GetCameras()[i]->ChangeStringType(GetCameras()[i]->GetType()) << std::endl;
	}
	std::cout << "CameraNum : " << GetCamNum() << std::endl;
	std::cout << "ChargingType : " << ChangeType(GetChargingType()) << std::endl;
}

