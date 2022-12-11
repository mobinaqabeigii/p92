#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

int array[] = { 11,2,54,86,90,3,45,63,20,8 };
int temp;

for (int i = 0; i < 10; i++)
{
for (int j = i + 1; j < 10; j++)
{
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
}
cout<< "Dovvomin Onsore kochak : " << array[1] ;
}