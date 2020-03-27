// A variant of the fizzbuzz case
#include <QTextStream>

const int INTERVAL_START_VALUE = 0;
const int INTERVAL_STOP_VALUE = 100;

const int FIZZ_BUZZ_VALUE = 15;
const int FIZZ_VALUE = 3;
const int BUZZ_VALUE = 5;

QTextStream konsole(stdout);

// I prefer explicit if else instead of a simple return (a % b == 0)
const bool isFizzBuzz(int value) {
	if ((value % FIZZ_BUZZ_VALUE) == 0)
		return true;
	else
		return false;
} 

const bool isFizz(int value) {
	if ((value % FIZZ_VALUE) == 0)
		return true;
	else
		return false;
} 

const bool isBuzz(int value) {
	if ((value % BUZZ_VALUE) == 0)
		return true;
	else
		return false;
} 

int processFizzBuzz(int value) {
	konsole << value << " ===> ";

	if ( isFizzBuzz(value))
		konsole << "FB";
	else if (isFizz(value))
		konsole << "F";
	else if (isBuzz(value))
		konsole << "B";
	else
		konsole << value;

	konsole << endl;
}

int main(int argc, char**argv) {
	konsole.setFieldWidth(3);
	for ( 	int value = INTERVAL_START_VALUE;
		  	value < INTERVAL_STOP_VALUE;
		  	value++) {
		processFizzBuzz(value);
	}

	return 0;
}