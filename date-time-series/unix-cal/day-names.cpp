#include "day-names.hpp"

const unsigned int DayNames::DAY_COUNT = 7;

const unsigned int DayNames::SUNDAY = 0;
const unsigned int DayNames::MONDAY = 1;
const unsigned int DayNames::TUESDAY = 2;
const unsigned int DayNames::WEDNESDAY = 3;
const unsigned int DayNames::THURSDAY =4;
const unsigned int DayNames::FRIDAY = 5;
const unsigned int DayNames::SATURDAY = 6; 

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