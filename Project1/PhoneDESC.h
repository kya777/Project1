#pragma once

#include <string>
#include <iostream>
#include "ChangeTypeInterface.h"

enum EDataType : int
{
	Data_2G,
	Data_3G,
	Data_4G,
	Data_5G,
	Data_Max
};

enum EPhoneType : int
{
	Folder,
	Slide,
	Smart,
	Phone_Max
};

enum EChargingType : int
{
	Mic_5pin,
	App_8pin,
	C_Type,
	Charging_Max
};

enum EOSType : int
{
	Androide,
	iOS,
	OS_Max
};

class PhoneDESC
{
public:
	PhoneDESC() {}
	~PhoneDESC();

	void Class_Init(class CCPU* p_cpu, class CGPU* p_gpu, class CBettery* p_bett, class CCamera** p_cam);
	void Enum_Init(EOSType ost, EDataType dat, EPhoneType pht, EChargingType cht);
	void val_Init(int cam_num, bool all_one, std::string name);

	int GetCamNum() const { return Camera_Num; }
	bool GetAllinone() const { return bAll_in_one; }
	std::string GetName() const { return Name; }

	EOSType GetOSType() const { return OS_Type; };
	EDataType GetDataType() const { return Data_Type; }
	EPhoneType GetPhoneType() const  { return Phone_Type; }
	EChargingType GetChargingType() const { return Charging_Type; }

	class CCPU* GetCPU() const  { return Cpu; }
	class CGPU* GetGPU() const  { return Gpu; }
	class CBettery* GetBettery() const  { return Bettery; }
	class CCamera** GetCameras() const  { return Cameras; }

	template<typename T>
	std::string ChangeType(T type);

	template<>
	std::string ChangeType(EOSType type);

	template<>
	std::string ChangeType(EDataType type);

	template<>
	std::string ChangeType(EPhoneType type);

	template<>
	std::string ChangeType(EChargingType type);
	

	void ShowInfo();

protected:


private:

	class CCPU* Cpu = nullptr;
	class CGPU* Gpu = nullptr;
	class CBettery* Bettery = nullptr;
	class CCamera** Cameras = nullptr;

	EOSType OS_Type;
	EDataType Data_Type;
	EPhoneType Phone_Type;
	EChargingType Charging_Type;

	int Camera_Num;
	bool bAll_in_one;
	std::string Name;

	
};

template<typename T>
inline std::string PhoneDESC::ChangeType(T type)
{
	return std::string("DifferentType");
}

template<>
inline std::string PhoneDESC::ChangeType(EOSType type)
{
	std::string t;


	switch (type)
	{
	case Androide:
		t = "Androide";
		break;

	case iOS:
		t = "iOS";
		break;

	case OS_Max:
		break;
	default:
		break;
	}

	return t;
}

template<>
inline std::string PhoneDESC::ChangeType(EDataType type)
{
	std::string t;

	switch (type)
	{
	case Data_2G:
		t = "Data_2G";
		break;
	case Data_3G:
		t = "Data_3G";
		break;
	case Data_4G:
		t = "Data_4G";
		break;
	case Data_5G:
		t = "Data_5G";
		break;
	case Data_Max:
		break;
	default:
		break;
	}

	return t;
}

template<>
inline std::string PhoneDESC::ChangeType(EPhoneType type)
{
	std::string t;

	switch (type)
	{
	case Folder:
		t = "Folder";
		break;
	case Slide:
		t = "Slide";
		break;
	case Smart:
		t = "Smart";
		break;
	case Phone_Max:
		break;
	default:
		break;
	}

	return t;
}

template<>
inline std::string PhoneDESC::ChangeType(EChargingType type)
{
	std::string t;

	switch (type)
	{
	case Mic_5pin:
		t = "Mic_5pin";
		break;
	case App_8pin:
		t = "App_8pin";
		break;
	case C_Type:
		t = "C_Type";
		break;
	case Charging_Max:
		break;
	default:
		break;
	}
	

	return t;
}
