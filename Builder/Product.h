#pragma once

class Product
{
private:
	int partA;
	double partB;
	char partC;
public:
	int GetPartA()const { return partA; }
	double GetPartB()const { return partB; }
	char GetPartC()const { return partC; }

	void SetPartA(int a) { partA = a; }
	void SetPartB(double b) { partB = b; }
	void SetPartC(char c) { partC = c; }
};
