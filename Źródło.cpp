#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <cstdlib>
using namespace std;

void newLine()
{
	std::cout << endl;
}


bool IsSorted(int *tab, int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (tab[i] < tab[i + 1])
		{
			return true;
		}
	}
	return false;
}

void printBackwards(int *tab, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << tab[i] << endl;
	}
}

int Sum(int *tab, int s)
{
	int suma = 0;

	for (int i = 0; i < s; i++)
	{
		suma = suma + tab[i];
	}
	cout << "Suma tablicy wynosi" << " " << suma << endl;
	return suma;
}

void printDots(int *tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int y = 0; y < tab[i]; y++)
		{
		cout << ".";
		}
		cout << endl;
	}
}

int getLenght(char *string)
{
		int i = 1;
		while (string[i] != '\0')
		{
			i++;
		}
		return i;
}

void Reverse(char *string)
{
	for (int i = getLenght(string); i >= 0; i--)
	{
		cout << string[i];
	}
}

bool containsDigits(char *string)
{
	for (int i = 1; i <=
		getLenght(string); i++)
	{
		if (isdigit(string[i]))
		{
			return true;
		}
	}
	return false;
}

bool AreArraysldentical(int  *a1, int s1, int *a2, int s2)
{
	if (s1 == s2)
	{
		for (int i = 0; i < s1; i++)
		{
			cout << i << " wartosc a1 jest rowna " << i << " wartosci tablicy a2" << endl;
		}
	}
	else
	{
		cout << " wartosci nie sa identyczne" << endl;
	}
	return 0;
}

char *reverseString(char *f)
{
	return 0;
}

int main()
{
	int zadanie = 1;
	while (zadanie != 0)
	{
		switch (zadanie)
		{
			//1.1 Utworzyæ 5-cio elementow¹ tablicê typu int. Pobrac od u¿ytkownika 5 elementów
			//i dodaæ je do tablicy. Nastêpnie wyœwietliæ najwiêksza liczbê z tablicy.
		case 1:
		{

			int tab[5];
			cout << "Wyswietlanie najwiekszej liczby z tablicy" << endl;
			cout << "Podaj 5 liczb do tablicy" << endl;
			int r, y, p, u, t;
			newLine();
			cin >> r;
			newLine();
			cin >> y;
			newLine();
			cin >> p;
			newLine();
			cin >> u;
			newLine();
			cin >> t;
			newLine();

			tab[0] = r;
			tab[1] = y;
			tab[2] = p;
			tab[3] = u;
			tab[4] = t;

			int najwiekszy;
			najwiekszy = tab[0];

			for (int i = 1; i < 5; i++)
				if (najwiekszy < tab[i])
					najwiekszy = tab[i];
			cout << "Najwieksza liczba w tablicy jest" << " " << najwiekszy;
			newLine();
			newLine();

			//1.2 Wyswietlic tablice od poczatku i od konca z zad. 1.1.
		case 2:
		{
			cout << "Wyswietlenie tablicy od poczatku" << endl;
			int tab[5];
			cout << "Podaj 5 liczb do tablicy";
			int r, y, p, u, t;
			newLine();
			cin >> r;
			newLine();
			cin >> y;
			newLine();
			cin >> p;
			newLine();
			cin >> u;
			newLine();
			cin >> t;
			newLine();

			tab[0] = r;
			tab[1] = y;
			tab[2] = p;
			tab[3] = u;
			tab[4] = t;

			cout << "Tablica od poczatku";
			newLine();
			for (int i = 0; i < 5; i++)
			{
				cout << tab[i] << ' ';
				newLine();
				newLine();
			}
		}

		case 3:
		{
			cout << "Wyswietelnie tablicy od konca" << endl;
			int tab[5];
			cout << "Podaj 5 liczb do tablicy";
			int r, y, p, u, t;
			newLine();
			cin >> r;
			newLine();
			cin >> y;
			newLine();
			cin >> p;
			newLine();
			cin >> u;
			newLine();
			cin >> t;
			newLine();

			tab[0] = r;
			tab[1] = y;
			tab[2] = p;
			tab[3] = u;
			tab[4] = t;

			cout << "Tablica od konca";
			newLine();
			for (int i = 4; i >= 0; i--)
			{

				cout << tab[i] << ' ';
				newLine();
				newLine();
			}
		}
		// 1.3 Napisac algorytm sprawdzajacy, czy tablica jest posortowana w kolejnosci niemalejacej.
		case 4:
		{
			cout << "Sprawdzenie, czy tablica jest niemalejaca" << endl;
			int tab[5];
			cout << "Podaj 5 liczb do tablicy";
			int r, y, p, u, t;
			newLine();
			cin >> r;
			newLine();
			cin >> y;
			newLine();
			cin >> p;
			newLine();
			cin >> u;
			newLine();
			cin >> t;
			newLine();

			tab[0] = r;
			tab[1] = y;
			tab[2] = p;
			tab[3] = u;
			tab[4] = t;


			int v = 0;
			for (int i = 0; i < sizeof(tab[5]); i++)
			{
				if (tab[i] < tab[i + 1])
				{
					v++;
				}
				else
				{
					cout << "Tablica nie jest niemalejaca" << endl;
					break;
				}
			}
			if (v == 4)
			{
				cout << "Tablica jest niemalejaca" << endl;
			}

			newLine();
			newLine();
		}
		}
		// 2.1 Utworzyc nowa metode bool isSorted realizujaca metode z zad. 1.3
		case 5:
		{
			cout << "Sprawdzenie tablicy metoda isSorted" << endl;
			int tab[5];
			cout << "Podaj 5 liczb do tablicy";
			int r, y, p, u, t;
			newLine();
			cin >> r;
			newLine();
			cin >> y;
			newLine();
			cin >> p;
			newLine();
			cin >> u;
			newLine();
			cin >> t;
			newLine();

			tab[0] = r;
			tab[1] = y;
			tab[2] = p;
			tab[3] = u;
			tab[4] = t;

			if (IsSorted(tab, sizeof(tab[5])))
			{
				cout << "Tablica jest niemalejca" << endl;
			}
			else
			{
				cout << "Tablica nie jest niemalejca" << endl;
			}
		}
		// 2.2 Utworzyc metode void printBackwards sluzaca do wypisania tablicy od konca
		case 6:
		{
			newLine();
			cout << "Wyswietlenie tablicy od konca metoda printBackwards" << endl;
			int tab[5];
			cout << "Podaj 5 liczb do tablicy";
			int r, y, p, u, t;
			newLine();
			cin >> r;
			newLine();
			cin >> y;
			newLine();
			cin >> p;
			newLine();
			cin >> u;
			newLine();
			cin >> t;
			newLine();

			tab[0] = r;
			tab[1] = y;
			tab[2] = p;
			tab[3] = u;
			tab[4] = t;

			cout << "Podana tablica od konca " << endl;
			printBackwards(tab, 5);
			newLine();
		}
		// 2.3 Utworzyc metode printDots wysiwetlajaca w nowych liniach tyle kropek, ile znajduje sie w danym elemencie
		// tablicy.
		case 7:
		{
			cout << "Wyswietlenie kropek metoda printDots" << endl;
			int tab[] = { 3,3,2,5 };
			printDots(tab, 4);
			newLine();
		}
		// 2.4 Utworzyc metode intSum liczaca sume elementow tablicy.
		case 8:
		{
			cout << "Wyswietlenie sumy elementow tablicy metoda intSum" << endl;
			int tab[] = { 2, 12, 15, 3 };
			Sum(tab, 4);
			newLine();
		}
		// 2.5 Zaimplementowac algorytm sortowania babelkowego w funkcji main. Algorytm powinien posrtowac dowolnie duza
		// tablice. Algorytm powinien posortowac dowolna duza tablice w kolejnosci niemalejacej
		case 9:
		{
			int *tab, n;
			cout << "Ile elementow ma miec tablica?" << endl;
			cin >> n;
			tab = new int[n];
			newLine();

			for (int i = 0; i < n; i++)
			{
				cout << "Podaj elementy tablicy" << endl;
				cin >> tab[i];
			}
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - 1; j++)
				{
					if (tab[j] > tab[j + 1])
					{
						swap(tab[j], tab[j + 1]);
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				cout << "Posortowana tablica:" << endl;
				cout << tab[i] << endl;
				break;
			}

			newLine();
		}

		// 3.1 Napisac metode getLenght, w ktorej wlasnorecznie zostanie przeliczony rozmiar lancucha. Dla przykladu 
		// dla "Hello!" powinien wynosic 6.
		case 10:
		{
			char string[] = "Hello!";
			newLine();
			cout << "Ilosc znakow w stringu Hello! wynosi:" << " " << getLenght(string) << endl;
			newLine();
		}

		// 3.2 Napisac metode void Reverse (char, *str), ktora wypisze lancuch znakow od konca.
		case 11:
		{
			char string[] = "Hello!";
			cout << "Lancuch od konca to" << endl;
			newLine();
			Reverse(string);
			newLine();
		}

		// 3.3 Napisac metode bool containsDigits (char *str), ktora zwroci informacje, czy w danym stringu znajduje
		// jakokolwiek cyfra.
		case 12:
		{
			char string[] = "gur5jol";
			if (containsDigits(string))
			{
				cout << "Dany wyraz posiada w sobie cyfry" << endl;
			}
			else
			{
				cout << "Wyraz posiada cyfry" << endl;
			}
			newLine();
		}

		// 3.4 Pobrac od uzytkownika lancuch znakow. Przekazac go do kazdej metody z zadania 3.
		case 13:
		{
			newLine();
			char string[] = " ";
			cout << "Podaj wyraz do lancuchu znakow" << endl;
			cin >> string;
			newLine();

			cout << "Rozmiar lancucha to:" << getLenght(string) << endl;
			newLine();

			cout << "Lancuch znakow od tylu to:" << endl;
			Reverse(string);
			newLine();

			cout << "Sprawdzenie, czy w danym lancuchu znajduja sie cyfry" << endl;
			if (containsDigits(string))
			{
				cout << "W lancuchu sa cyfry" << endl;
			}
			else
			{
				cout << "W lancuchu nie ma cyfr" << endl;
			}
			newLine();
		}

		// 4.1 Pobrac od ozytkownika liczbe n. Zaalokowac pamiec na n elementow int i pobrac je od uzytkownika. Wykonac na niej metode printBackwards
		// z zad 2.2

		case 14:
		{
			int *tab, n;
			cout << "Podaj liczbe n jako wielkosc tablicy" << endl;
			cin >> n;
			tab = (int*)malloc(5 * sizeof(int));
			newLine();

			for (int i = 0; i < n; i++)
			{
				cout << "Podaj " << i << " element tablicy" << endl;
				cin >> tab[i];
				newLine();
			}
			// Tu mam problem bo nie chce mi wyswietlic tablicy od tylu.
			printBackwards(tab, n);
			cout << "Tablica od tylu" << endl;
			free(tab);
		}

		// 4.2 Pobrac od uzytkownika liczbe n. Zaalokowac pamiec na n elementow int i pobrac je od uzytkownika. Zaalkowac pamiec i utowrzyc 
		// tablice, w ktorej beda tylko UJEMNE WARTOSCI z pierwszej tablicy. Na koniec zwolnic pamiec obu tablic
		case 15:
			// Gdzies mam bledy ktorych nie moge zlokalizowac.
		{
			int *tab, n;
			cout << "Podaj liczbe n jako wielkosc tablicy" << endl;
			cin >> n;
			tab = (int*)malloc(5 * sizeof(int));
			newLine();

			for (int i = 0; i < n; i++)
			{
				cout << "Podaj " << i << " elementow tablicy" << endl;
				cin >> tab[i];
				newLine();
			}

			int z = 0;
			for (int i = 0; i < n; i++)
			{
				if (tab[i] < 0)
				{
					z++;
				}
				cout << tab[i] << endl;
			}

			int *tabujemna;
			tabujemna = (int*)malloc(5 * sizeof(int)*z);

			for (int i = 0, j = 0; i < n; i++)
			{
				if (tab[i] < 0)
				{
					tabujemna[j] = tab[i];
					j++;
				}
			}

			cout << "Tablica liczb ujemnych to:" << endl;
			for (int i = 0; i < z; i++)
			{
				cout << tabujemna[i] << endl;
			}

			free(tab);
			free(tabujemna);
			newLine();
		}

		//4.3. Napisac metode bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracajac informacje, 
		//czy dwie tablice podane jako parametr sa identyczne, tj.czy maja taka sama dlugosc i czy na 
		//kazdym indeksie wystepuje taki sam element.

		// Nie potrafie rozwiazac tego zadania.
		case 16:
		{

		}
		}
		// 4.4 Napisac metode char * reverseString(char*s), która ZWROCI (a nie wypisze!) string, który jest odwroconym
		//stringiem przekazanym jako pierwszy parametr.Funkcja zaalokuje pamiec na nowy ³lancuch i go zwroci. (caly
		//algorytm nalezy zaimplementowac samodzielnie).Nalezy go nastepnie „przechwycic" w funkcji main, aby pamiec na
		//koniec wyczyscic

	   // To zadanie rowniez okazalo sie zbyt trudne dla mnie.
	}
}

		
	

	
	
	


		

