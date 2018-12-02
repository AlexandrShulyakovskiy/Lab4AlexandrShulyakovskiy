#pragma once
#include <iostream>   // в ".h" ми оголосили, а в "cpp" ми зробили реализацию
using namespace std;
class GasMeter
{
private:
	string name;
	float Qmax;      //метри на годину
	int distance;    //в мм
public:
	int releaseDay, releaseMonth, releaseYear;
	string producerName;
	GasMeter();
	GasMeter(string name, float Qmax, int distance, float width, float length, float height);
	~GasMeter();
	string GetName();
	float GetQmax();
	int GetDistance();
	float GetWidth();
	float GetLength();
	float GetHeight();
	
protected:
	float width;
	float length;
	float height;
};
