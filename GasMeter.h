#pragma once
#include <iostream>   // � ".h" �� ���������, � � "cpp" �� ������� ����������
using namespace std;
class GasMeter
{
private:
	string name;
	float Qmax;      //����� �� ������
	int distance;    //� ��
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
