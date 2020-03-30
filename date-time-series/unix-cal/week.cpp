#include <QTextStream>
#include "week.hpp"
#include "day-names.hpp"
#include "konsole.hpp"

const char Week::DAY_UNSET = '\0';
const QString Week::SPACE = " ";

Week::Week() {

	days = new t_day[DayNames::DAY_COUNT];
	konsole = new Konsole;
	internalInit();
	
}

Week::~Week() {
	delete []days;
	delete konsole;

}

const Week::t_day Week::operator[](const unsigned int pos) const{
	return days[pos];
}

Week::t_day& Week::operator[](const unsigned int pos) {
	return days[pos];
}

void Week::internalInit() {
	for (unsigned int pos = 0; pos < DayNames::DAY_COUNT; pos++){
		days[pos] = DAY_UNSET;
	}
}

bool Week::daysAreValid() {
	bool valid = false;
	for (unsigned int pos = 0; pos < DayNames::DAY_COUNT && !valid; pos++){
		if ( days[pos] != DAY_UNSET) {
			valid = true;
		}
	}
	return valid;
}

void Week::printToConsole() {
	if (daysAreValid()){
		QTextStream& console = *konsole;
		for (unsigned int pos = 0; pos < DayNames::DAY_COUNT; pos++){
			if (pos > 0){
				console << ' ';
			}

			if (days[pos] != DAY_UNSET) {
				int value = (int) days[pos];
				if ( value < 10 ){
					console << 0;
				}
				console << value;
			} else {
				console << " " << " ";
			}


		}
		console << endl;
	}
}