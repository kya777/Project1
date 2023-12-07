#pragma once
class CPhone
{
public:

	~CPhone();

	void SetDesc(class PhoneDESC* desc);
	class PhoneDESC* GetDesc() const { return Desc; }
private:
	class PhoneDESC* Desc;
};

