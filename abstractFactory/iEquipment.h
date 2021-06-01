#ifndef __IEQUIPMENT_H__
#define __IEQUIPMENT_H__

#include <string>

using namespace std;

class IEquipment {
private:
	string name;

protected:
	void setName(string);

public:
	IEquipment();
	string getName();
};

#endif

