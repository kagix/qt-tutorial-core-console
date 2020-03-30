#ifndef DAY_NAMES_HPP
#define DAY_NAMES_HPP

#include <QString>

class DayNames {
public:
	DayNames();
	~DayNames();
	static const unsigned int DAY_COUNT;

	static const unsigned int SUNDAY;
	static const unsigned int MONDAY;
	static const unsigned int TUESDAY;
	static const unsigned int WEDNESDAY;
	static const unsigned int THURSDAY;
	static const unsigned int FRIDAY;
	static const unsigned int SATURDAY;

	const QString& operator[](const unsigned int pos) const;  
private:
	void internalInit();
	QString* names;
};

#endif
