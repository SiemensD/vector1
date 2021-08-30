#include <iostream>
#include <vector>
#include <string>
using namespace std;

void main()
{
	vector<int>myVector(10);

	for (int i = 0; i < myVector.size(); i++)
	{
		myVector[i] = (i+1) * (i+1);
	}

	for (int i = 0; i < myVector.size(); i++)
	{
		cout<<myVector[i]<<endl;
	}
}
/*1.Заполнить вектор размером 10 квадратом целых чисел и вывести его ы выходной поток*/