#ifndef WEEK_HPP
#define WEEK_HPP

#include <QString>

class Konsole;


class Week {
public:
	Week();
	~Week();

	static const unsigned int DAY_COUNT;

	static const unsigned int SUNDAY;
	static const unsigned int MONDAY;
	static const unsigned int TUESDAY;
	static const unsigned int WEDNESDAY;
	static const unsigned int THURSDAY;
	static const unsigned int FRIDAY;
	static const unsigned int SATURDAY;

	

	static const char DAY_UNSET;
	typedef char t_day;

	const t_day operator[](const unsigned int pos) const;
	t_day& operator[](const unsigned int pos);

	void printToConsole();
private:
	void internalInit();
	bool daysAreValid();
	static const QString SPACE;

	t_day* days;
	Konsole* konsole;


};

#endif 
