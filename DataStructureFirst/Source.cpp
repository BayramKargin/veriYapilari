#include<iostream>
#include<Windows.h>
#include<locale.h>
#include<iomanip>
using namespace std;
class �at� 
{
	
public :
	int geni�lik;
	int y�kseklik;
	int i;
	int j;
	int �at�_y�ksekli�i;
	int karakter='*';
	int x{};
	int y{};
	�at�()
	{
		cout << "geni�lik";
		cin >> geni�lik;
		cout << "�at� y�ksekli�i";
		cin >> �at�_y�ksekli�i;
		cout << "y�kseklik";
		cin >> y�kseklik;
		cout << "X";
		cin >> x;
		cout << "Y";
		cin >> y;
			
				void gotoxy(int x, int y);
				{
					COORD coord;
					coord.X = x;
					coord.Y = y;

					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				}
				for (geni�lik,�at�_y�ksekli�i; 0>=geni�lik-�at�_y�ksekli�i*2; �at�_y�ksekli�i--)
				{
					�at�_y�ksekli�i = �at�_y�ksekli�i - 1;
				}
					for ( j = 0, x,y,geni�lik; j < �at�_y�ksekli�i;geni�lik+=2, y++,x--,j++)
					{

						void gotoxy(int x);
						{
							COORD coord;
							coord.X = x;
							coord.Y = y;

							SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						}
						for (i = 0; i < (geni�lik-�at�_y�ksekli�i*2)+2; i++)
						{
							cout << "*";

						}
						
							


							
					}
		
		cout << endl;
	
	}
};

class kat:public �at�
{
public:
	int geni�lik;
	int y�kseklik;
	int i;
	int kap�_geni�li�i;
	int x{};
	int y{};
	int j;
	int b;
	int c;
	char a = (char)219;
	kat()
	{
		cout << " geni�lik : ";
		cin >> geni�lik;
		cout << " y�kseklik : ";
		cin >> y�kseklik;
		cout << " X : ";
		cin >> x;
		cout << " Y : ";
		cin >> y;
		cout << " kap� geni�li�i : ";
		cin >> kap�_geni�li�i;
		
		
			void gotoxy(int x, int y);
			{
				COORD coord;
				coord.X = x;
				coord.Y = y;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			}
			for (i = 0; i < geni�lik;i++)
			{
				cout << a;

			}			
		

			for (b = 0, x, y++, y�kseklik; b < y�kseklik;y++, y�kseklik--)
			{
				void gotoxy(int x, int y);
				{
					COORD coord;
					coord.X = x;
					coord.Y = y;

					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

				}
				cout << a << setw(geni�lik-1) << a;
			}
			x = x + 1;
			y = y - y�kseklik - 1;
			void gotoxy(int x, int y);
			{
				COORD coord;
				coord.X = x;
				coord.Y = y;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			}
					
			for (b=0;b<(geni�lik-kap�_geni�li�i)/2;b++)
			{
				
				cout << (char)219;
			}
			cout << setw(kap�_geni�li�i);
			
			for (b=0;b < (geni�lik - kap�_geni�li�i) / 2;b++)
 			{
				cout << a;
			}
		
	}
private:
};

class kap�{

public:
	int kap�_geni�li�i=5;
	int kap�_y�ksekli�i=5;
	int i;
	int a;
	int x=15, y=15;
	kap�() 
	{
		void gotoxy(int x, int y);
		{
			COORD coord;
			coord.X = x;
			coord.Y = y;

			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		}
		for (a=0,x,y;a<kap�_y�ksekli�i;a++,y++) 
		{
			void gotoxy(int x, int y);
			{
				COORD coord;
				coord.X = x;
				coord.Y = y;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			}
			for (i = 0;i < kap�_geni�li�i;i++)
			{
				cout << "#";
			}
			cout << endl;
		}

	}


};



int main()
{
	setlocale(LC_ALL, "Turkish");	
	
	�at� �at�1;
	cout << endl;
	system("pause");
}