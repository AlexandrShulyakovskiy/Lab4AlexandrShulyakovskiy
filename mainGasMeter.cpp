#include "GasMeter.h"	 // � ".h" �� ���������, � � "cpp" �� ������� ����������
GasMeter::GasMeter()     // ����������� �� ������������((��� ���������� ������� ������))
{
	name = "CyberPunkLichilnyk";
	Qmax = 2.5;
	distance = 3;
	width = 2;
	length = 3;
	height = 2.5;
	releaseDay = 17;
	releaseMonth = 4;
	releaseYear = 2018;
	producerName = "Alex&Co";
}

GasMeter::GasMeter(string name, float Qmax, int distance, float width, float length, float height)  // ����������� � �����������(��� ���������� ������� ������)
{
	this->name = name;					//this - �� ��������� �� �������� ������
	this->Qmax = distance;
	this->distance = 3;
	this->width = 2;
	this->length = 3;
	this->height = 2.5;
}


GasMeter::~GasMeter()
{
}

string GasMeter::GetName()
{
	return name;
}

float GasMeter::GetQmax()
{
	return Qmax;
}

int GasMeter::GetDistance()
{
	return distance;
}

float GasMeter::GetWidth()
{
	return width;
}

float GasMeter::GetLength()
{
	return width;
}

float GasMeter::GetHeight()
{
	return height;
}
