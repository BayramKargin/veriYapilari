#include<iostream>
#include<Windows.h>
#include<locale.h>
#include<iomanip>
using namespace std;
class çatý 
{
	
public :
	int geniþlik;
	int yükseklik;
	int i;
	int j;
	int çatý_yüksekliði;
	int karakter='*';
	int x{};
	int y{};
	çatý()
	{
		cout << "geniþlik";
		cin >> geniþlik;
		cout << "çatý yüksekliði";
		cin >> çatý_yüksekliði;
		cout << "yükseklik";
		cin >> yükseklik;
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
				for (geniþlik,çatý_yüksekliði; 0>=geniþlik-çatý_yüksekliði*2; çatý_yüksekliði--)
				{
					çatý_yüksekliði = çatý_yüksekliði - 1;
				}
					for ( j = 0, x,y,geniþlik; j < çatý_yüksekliði;geniþlik+=2, y++,x--,j++)
					{

						void gotoxy(int x);
						{
							COORD coord;
							coord.X = x;
							coord.Y = y;

							SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						}
						for (i = 0; i < (geniþlik-çatý_yüksekliði*2)+2; i++)
						{
							cout << "*";

						}
						
							


							
					}
		
		cout << endl;
	
	}
};

class kat:public çatý
{
public:
	int geniþlik;
	int yükseklik;
	int i;
	int kapý_geniþliði;
	int x{};
	int y{};
	int j;
	int b;
	int c;
	char a = (char)219;
	kat()
	{
		cout << " geniþlik : ";
		cin >> geniþlik;
		cout << " yükseklik : ";
		cin >> yükseklik;
		cout << " X : ";
		cin >> x;
		cout << " Y : ";
		cin >> y;
		cout << " kapý geniþliði : ";
		cin >> kapý_geniþliði;
		
		
			void gotoxy(int x, int y);
			{
				COORD coord;
				coord.X = x;
				coord.Y = y;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			}
			for (i = 0; i < geniþlik;i++)
			{
				cout << a;

			}			
		

			for (b = 0, x, y++, yükseklik; b < yükseklik;y++, yükseklik--)
			{
				void gotoxy(int x, int y);
				{
					COORD coord;
					coord.X = x;
					coord.Y = y;

					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

				}
				cout << a << setw(geniþlik-1) << a;
			}
			x = x + 1;
			y = y - yükseklik - 1;
			void gotoxy(int x, int y);
			{
				COORD coord;
				coord.X = x;
				coord.Y = y;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			}
					
			for (b=0;b<(geniþlik-kapý_geniþliði)/2;b++)
			{
				
				cout << (char)219;
			}
			cout << setw(kapý_geniþliði);
			
			for (b=0;b < (geniþlik - kapý_geniþliði) / 2;b++)
 			{
				cout << a;
			}
		
	}
private:
};

class kapý{

public:
	int kapý_geniþliði=5;
	int kapý_yüksekliði=5;
	int i;
	int a;
	int x=15, y=15;
	kapý() 
	{
		void gotoxy(int x, int y);
		{
			COORD coord;
			coord.X = x;
			coord.Y = y;

			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		}
		for (a=0,x,y;a<kapý_yüksekliði;a++,y++) 
		{
			void gotoxy(int x, int y);
			{
				COORD coord;
				coord.X = x;
				coord.Y = y;

				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			}
			for (i = 0;i < kapý_geniþliði;i++)
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
	
	çatý çatý1;
	cout << endl;
	system("pause");
}