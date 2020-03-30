#include "day-names.hpp"


DayNames::DayNames(){
	names = new QString[DAY_COUNT];
	internalInit();
}

DayNames::~DayNames(){
	delete []names;
}


void DayNames::internalInit() {
	names[SUNDAY] = "Su";
	names[MONDAY] = "Mo";
	names[TUESDAY] = "Tu";
	names[WEDNESDAY] = "We";
	names[THURSDAY] = "Th";
	names[FRIDAY] = "Fr";
	names[SATURDAY] = "Sa";
}

const QString& DayNames::operator[](const unsigned int pos) const {
	if ( pos < 0 || pos >= DAY_COUNT)
		return "Unlucky day. Please use a value between 0 and 6";
	return names[pos];
}