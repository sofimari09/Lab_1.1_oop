#pragma once
class Number
{
private:
	double first;
	double second;
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(double value);

	bool Init(double x, double y);
	void Display() const;
	void Read();

	void multiply(double N);

};

