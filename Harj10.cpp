/*
Eetu Salo

Harjoitus 10 (Palautus vko 43)

Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
sy�tt�m�ll� luku 0.

Tulostus:
Sy�tit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteens� 10 kpl 100.00%


*/



#include <iostream>
using namespace std;
int main()
{
	float pos = 0;
	float neg = 0;
	int luku=1;

	cout << "Anna kokonaislukuja, lopeta antamalla 0 " << endl;

	while (luku !=0)
	{
		cin >> luku;
		
		
		if (luku > 0)
		{
			pos = pos + 1;
		}
		if (luku < 0)
		{
			neg = neg + 1;
		}
	}
		
	

	if (luku == 0)
	{
		cout << "Syotit kokonaislukuja seuraavasti:"<<endl;
		cout << "----------------------------------" << endl;
		cout << "Positiiviset " << pos; cout << " kpl ";
		cout << (pos * 100) / (pos + neg); cout << " %" << endl;
		cout << "Negatiiviset " << neg; cout << " kpl ";
		cout << (neg * 100) / (pos + neg);cout<< " %" << endl;
		cout << "Yhteensa "; cout << pos + neg; cout << " kpl 100 %" << endl;

		
	}

}