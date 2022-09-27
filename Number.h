
class Number
{
private:
	double first;
	double second;
	int mul;
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	int Getmul() const { return second; }
	bool Init(double f, double s, int m);
	void Read();
	double Multiply();
};

