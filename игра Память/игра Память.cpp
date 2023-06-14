#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include "TXLib.h"
#include <iostream>

#include <time.h>
#include "lists.h"
int counter = 0;
int True = 0;


void fon() 
{
	const COLORREF a = RGB(0, 102, 51);
	txSetFillColor(a);
	txClear();
	txSetColor(TX_BLACK);
	txSetFillColor(TX_BLACK);
	txRectangle(1350, 25, 1450, 110);
	txSetColor(TX_WHITE);
	txDrawText(1350, 25, 1450, 110, "Здесь могла\n бы быть \nваша реклама");
}

void sound(bool a) 
{
	if (a)
	{
		Beep(100, 500);
	}
	if (!a)
	{
		Beep(500, 400);
	}
}

inline bool control(int x1, int x2)
{
	
	Node* y1 = head;
	Node* y2 = head;
	for (int i = 1; i < x1; i++)
	{
		y1 = y1->next;
	}
	for (int i = 1; i < x2; i++)
	{
		y2 = y2->next;
	}
	if (y1->num == y2->num) {
		y1->value = -1;
		y1->value = -1;
		return false;
	}
	else if (y1->value == 1 || y2->value == 1 )
	{
		
		return false;
	}
	
	else {
		
		return true;
	}
}

inline bool control(int x1)
{
	if (x1 == 0)
	{
		return false;
	}
	Node* y1 = head;

	for (int i = 1; i < x1; i++)
	{
		y1 = y1->next;
	}
	if (y1->value == 1)
	{
		return false;
	}
	else if (y1->value == 0)
	{
		return false;
	}
	else if (y1->value == -1)
	{
		y1->value = 0;
		
	}
	
	return true;

}

inline bool TF(int x1, int x2)
{
	Node* y1 = head;
	Node* y2 = head;
	for (int i = 1; i < x1; i++)
	{
		y1 = y1->next;
	}
	for (int i = 1; i < x2; i++)
	{
		y2 = y2->next;
	}
	if (y1->card == y2->card)
	{
		y1->value = 1;
		y2->value = 1;
		sound(true);
		True += 1;
		return true;
	}
	sound(false);
	
	return false;
}

int mouse(int n)
{
	
	int a1 = 0, a2 = 0;
	

	switch (n) {
	case 12:
		while (n == 12)
		{
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >=35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 1;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 2;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 3;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 4;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 5;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 6;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 7;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 8;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 9;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 10;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 11;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 12;
				break;
			}
			break;
		}
	case 16:
		while (n == 16)
		{
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 1;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 2;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 3;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 4;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 5;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 6;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 7;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 8;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 9;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 10;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 11;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 12;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 13;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 14;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 15;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 16;
				break;
			}
			break;
		}

	case 20:
		while (n == 20) {
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 1;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 2;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 3;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 4;
				break;
			}
			if (txMouseX() >= 1100 && txMouseX() <= 1250 && txMouseY() >= 35 && txMouseY() <= 185 && txMouseButtons() & 1)
			{
				a1 = 5;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 6;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 7;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 8;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 9;
				break;
			}
			if (txMouseX() >= 1100 && txMouseX() <= 1250 && txMouseY() >= 210 && txMouseY() <= 360 && txMouseButtons() & 1)
			{
				a1 = 10;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 11;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 12;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 13;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 14;
				break;
			}
			if (txMouseX() >= 1100 && txMouseX() <= 1250 && txMouseY() >= 385 && txMouseY() <= 535 && txMouseButtons() & 1)
			{
				a1 = 15;
				break;
			}
			if (txMouseX() >= 100 && txMouseX() <= 250 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 16;
				break;
			}
			if (txMouseX() >= 350 && txMouseX() <= 500 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 17;
				break;
			}
			if (txMouseX() >= 600 && txMouseX() <= 750 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 18;
				break;
			}
			if (txMouseX() >= 850 && txMouseX() <= 1000 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 19;
				break;
			}
			if (txMouseX() >= 1100 && txMouseX() <= 1250 && txMouseY() >= 560 && txMouseY() <= 710 && txMouseButtons() & 1)
			{
				a1 = 20;
				break;
			}
			break;
		}

	}
		
	return a1;	
}

void play()
{
		
	while(true){
		unsigned int start_time;
		unsigned int end_time;
		unsigned int search_time;
		
		
		txSetColor(TX_WHITE);
		txDrawText(50, 700, 350, 750, "Начать игру? Y/N");
		txRectangle(350, 700, 375, 750);
		txDrawText(350, 700, 375, 750, "Y");
		txRectangle(400, 700, 425, 750);
		txDrawText(400, 700, 425, 750, "N");
		do {
			if (txMouseX() >= 350 && txMouseX() <= 375 && txMouseY() >= 700 && txMouseY() <= 750 && txMouseButtons() & 1) {
				fon();
				break;
				
			}
			else if (txMouseX() >= 400 && txMouseX() <= 425 && txMouseY() >= 700 && txMouseY() <= 750 && txMouseButtons() & 1) {
				
				exit(0);
				
			}
			
		} while (true);
		txSetColor(TX_WHITE);
		txDrawText(50, 800, 350, 890, "Выбери 1 из 3 вариантов предложенных мной.\n 1 = 6 пар карт,\n 2 = 8 пар карт,\n 3 = 10 пар карт.\n");

		txRectangle(350, 840, 375, 865);
		txDrawText(350, 840, 375, 865, "1");
		txRectangle(400, 840, 425, 865);
		txDrawText(400, 840, 425, 865, "2");
		txRectangle(450, 840, 475, 865);
		txDrawText(450, 840, 475, 865, "3");
		int n = 0;
		
		do {
			if (txMouseX() >= 350 && txMouseX() <= 375 && txMouseY() >= 840 && txMouseY() <= 865 && txMouseButtons() & 1) 
			{
				fon();
				n = 12;
				var(n);
				append(n);
				cards(n);
				break;
			}
			else if (txMouseX() >= 400 && txMouseX() <= 425 && txMouseY() >= 840 && txMouseY() <= 865 && txMouseButtons() & 1) 
			{
				fon();
				n = 16;
				var(n);
				append(n);
				cards(n);
				break;
			}
			else if (txMouseX() >= 450 && txMouseX() <= 475 && txMouseY() >= 840 && txMouseY() <= 865 && txMouseButtons() & 1) 
			{
				fon();
				n = 20;
				var(n);
				append(n);
				cards(n);
				break;
			}

		} while (true);
		
		time_t start, end;
		time(&start);
		while(True != (n/2)){
			int a1 = 0, a2 = 0;
			do {
				do {
					a1 = mouse(n);
				} while (!control(a1));
				card(n, a1);
				
				if (a2 == 0)
				{
					a2 = a1;
					a1 = 0;
				}
				do {
					a1 = mouse(n);
				} while (!control(a1));
				card(n, a1);
				;
			} while (!control(a1, a2));
			TF(a1, a2);
			counter += 2;
			
			card(n, a1);
			card(n, a2);
			
		
			

		}

		time(&end);
		int seconds = difftime(end, start);
		
		
		
		
		
		
	
		
		
		char str1[(((sizeof counter) * CHAR_BIT) + 2) / 3 + 2];
		sprintf(str1, "%d", counter);

		char str2[(((sizeof seconds) * CHAR_BIT) + 2) / 3 + 2];
		sprintf(str2, "%d", seconds);
		txSetColor(TX_WHITE);

		txDrawText(50, 800, 380, 820, "Всего переворотов карт:");
		txRectangle(380, 800, 440, 820);
		txDrawText(380, 800, 440, 820, str1);

		txDrawText(50, 830, 380, 850, "Времени было потрачено(в сек):");
		txRectangle(380, 830, 440, 850);
		txDrawText(380, 830, 440, 850, str2);

		counter = 0;
		True = 0;
		clear();
		
	}

		

		
		
	
	

}



int main()
{
	txCreateWindow(1500, 950);
	setlocale(LC_ALL, "Russian");
	fon();
	play();
	
	
	
	

	
	

}


