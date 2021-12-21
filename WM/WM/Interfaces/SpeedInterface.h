#ifndef __SPEED_INTERFACE_H__
#define __SPEED_INTERFACE_H__

#include "ConversionInterface.h"
#include "Speed.h"

class SpeedInterface : public ConversionInterface
{
public:
	int getValueCount() const;

	double getValue1() const;
	double getValue2() const;
	double getValue3() const;
	double getValue4() const;
	double getValue5() const;
	double getValue6() const;
	double getValue7() const;

	const wchar_t *getTitle(int i) const;
	const wchar_t *getAbbreviation(int i) const;

	void setValue1(double x);
	void setValue2(double x);
	void setValue3(double x);
	void setValue4(double x);
	void setValue5(double x);
	void setValue6(double x);
	void setValue7(double x);

private:
	Speed s;
};

#endif