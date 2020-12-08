#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	int *ptr;
	int data[]= {8, 6, 9, 7, 10};
	int elemen, max;
	ptr=&data[0];
	max=*ptr;
	for(elemen=0; elemen<=4; elemen++)
	{
		if (*(ptr+elemen)>max) max=*(ptr+elemen);
		else max=max;
	}
	cout <<"Nilai Maksimumnya adalah : "<<max;
	
	return 0;
}
