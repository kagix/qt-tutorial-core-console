#ifndef DAY_NAMES_HPP
#define DAY_NAMES_HPP

#include <QString>

class DayNames {
public:
	DayNames();
	~DayNames();

	enum {
		SUNDAY,
		MONDAY,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		DAY_COUNT
	};


	const QString& operator[](const unsigned int pos) const;  
private:
	void internalInit();
	QString* names;
};

#endif
