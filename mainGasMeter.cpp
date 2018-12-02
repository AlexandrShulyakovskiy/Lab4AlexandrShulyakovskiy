#include "GasMeter.h"	 // � ".h" �� ���������, � � "cpp" �� ������� ����������
GasMeter::GasMeter()     // ����������� �� ������������((��� ���������� ������� ������))
{
	name = "CyberPunkLichilnyk";  //����������� �����������
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
	this->Qmax = Qmax;
	this->distance = distance;
	this->width = width;
	this->length = length;
	this->height = height;
}


GasMeter::~GasMeter()
{
}

string GasMeter::GetName()  //name,qmax,distance ��� ��������� �������, � �� ���� ������� �� ��� ������, ������� �������� ����� �������. �� �� ����� � � width,length, height, ������� protected
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
	return length;
}

float GasMeter::GetHeight()
{
	return height;
}
