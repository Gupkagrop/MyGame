#pragma once
#ifndef LISTS_H
#define LISTS_H
using namespace std;
#include "TXLib.h"
#include <iostream>
#include <random>
struct Node {
    Node* next = nullptr;
    int value = -1;
    int card = 0;
    int num = 0;
};

Node* head = nullptr;
Node* tail = nullptr;

void cards(int n)
{
    srand(time(NULL));
    Node* a = head;
    
    for (int i = 0; i < 2; i++) 
    {
        int mas[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
        int m = 0;
        int r = 0;
        for (int j = 0; j < n/2; j++) 
        {
            
            for (int k = 0; k <= 1 + rand() % (n); k++) 
            {
                a = a->next;
            }

            while(a->card != 0)
            { 
                if (a->num == n) 
                {
                    a = head;
                }
                else
                {
                    a = a->next;
                }
            }
            r = 1 + rand() % (n / 2);
            
            
            do{
                int tf = 0;
                for (int k = 0; k < n / 2; k++)
                {
                    if (mas[k] == r)
                    {
                        tf = 1;
                        break;
                    }
                }
                if (tf == 0) break;
                r = 1 + rand() % (n / 2);
            }while (true);
            
            a->card = r;
            mas[m] = r;
            m++;
            a = head;
        }
        
    }

}

int count_list()
{
    Node* a = head;
    int i = 0;
    while (a != nullptr)
    {
        a = a->next;
        i++;
    }
    return i;
}

inline bool empty()
{
    return head == nullptr;
}

void append(int n)
{
    for (int i = 1; i <= n; i++)
    {


        Node* new_element = new Node;

        new_element->num = i;
        new_element->value = -1;
        if (!empty())
        {
            tail->next = new_element;
            tail = new_element;
        }
        else {
            head = new_element;
            tail = new_element;
        }
    }
}

void print_list()
{
    Node* a = head;
    
    
    while (a != nullptr)
    {

        cout << a->num << "\t";

        a = a->next;
    }
    cout << endl;
    a = head;


    while (a != nullptr)
    {

        cout << a->value << "\t";

        a = a->next;
    }
    cout << endl;
    a = head;


    while (a != nullptr)
    {

        cout << a->card << "\t";

        a = a->next;
    }

}

void clear()
{
    Node* a = head;
    Node* b = head;

    while (a != nullptr && b != nullptr)
    {
        b = a->next;
        delete a;
        a = b;
    }

    head = nullptr;
    tail = nullptr;


}

void var1()
{
    
    txSetColor(TX_BLACK);
    txSetFillColor(TX_RED);

    txRectangle(100, 35, 250, 185);
    txRectangle(350, 35, 500, 185);
    txRectangle(600, 35, 750, 185);
    txRectangle(850, 35, 1000, 185);
    
    txRectangle(100, 210, 250, 360);
    txRectangle(350, 210, 500, 360);
    txRectangle(600, 210, 750, 360);
    txRectangle(850, 210, 1000, 360);
    
    txRectangle(100, 385, 250, 535);
    txRectangle(350, 385, 500, 535);
    txRectangle(600, 385, 750, 535);
    txRectangle(850, 385, 1000, 535);
}

void var2()
{

    txSetColor(TX_BLACK);
    txSetFillColor(TX_RED);

    txRectangle(100, 35, 250, 185);
    txRectangle(350, 35, 500, 185);
    txRectangle(600, 35, 750, 185);
    txRectangle(850, 35, 1000, 185);

    txRectangle(100, 210, 250, 360);
    txRectangle(350, 210, 500, 360);
    txRectangle(600, 210, 750, 360);
    txRectangle(850, 210, 1000, 360);

    txRectangle(100, 385, 250, 535);
    txRectangle(350, 385, 500, 535);
    txRectangle(600, 385, 750, 535);
    txRectangle(850, 385, 1000, 535);
    
    txRectangle(100, 560, 250, 710);
    txRectangle(350, 560, 500, 710);
    txRectangle(600, 560, 750, 710);
    txRectangle(850, 560, 1000, 710);
}

void var3()
{

    txSetColor(TX_BLACK);
    txSetFillColor(TX_RED);

    txRectangle(100, 35, 250, 185);
    txRectangle(350, 35, 500, 185);
    txRectangle(600, 35, 750, 185);
    txRectangle(850, 35, 1000, 185);
    txRectangle(1100, 35, 1250, 185);
    
    txRectangle(100, 210, 250, 360);
    txRectangle(350, 210, 500, 360);
    txRectangle(600, 210, 750, 360);
    txRectangle(850, 210, 1000, 360);
    txRectangle(1100, 210, 1250, 360);
    
    txRectangle(100, 385, 250, 535);
    txRectangle(350, 385, 500, 535);
    txRectangle(600, 385, 750, 535);
    txRectangle(850, 385, 1000, 535);
    txRectangle(1100, 385, 1250, 535);
    
    txRectangle(100, 560, 250, 710);
    txRectangle(350, 560, 500, 710);
    txRectangle(600, 560, 750, 710);
    txRectangle(850, 560, 1000, 710);
    txRectangle(1100, 560, 1250, 710);
    
}

void var(int n) 
{
    if (n == 12)
    {
        var1();
    }
    if (n == 16)
    {
        var2();
    }
    if (n == 20)
    {
        var3();
    }
}

void card_draw(int v,int x1,int y1,int x2,int y2) {
    x1 += 50;
    y1 += 50;
    x2 -= 50;
    y2 -= 50;


    if (v == 1)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_PINK);
        txEllipse(x1, y1, x2, y2);
    }
    if (v == 2)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_GREEN);
        txEllipse(x1, y1, x2, y2);
    }
    if (v == 3)
    {
        txSetColor(TX_RED);
        txSetFillColor(TX_RED);
        txRectangle(x1, y1,x2 ,y2);
    }
    if (v == 4)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_GREEN);
        txRectangle(x1, y1, x2, y2);
    }
    if (v == 5)
    {
        txSetColor(TX_PINK);
      
        txLine(x1, y1, x2, y2);
    }
    if (v == 6)
    {
        txSetColor(TX_GREEN);
        
        txLine(x1, y1, x2, y2);
    }
    if (v == 7)
    {
        txSetColor(TX_WHITE);

        txLine(x1, y1, x2, y2);
    }
    if (v == 8)
    {
        txSetColor(TX_BLUE);

        txLine(x1, y1, x2, y2);
    }
    if (v == 9)
    {
        
        txSetColor(TX_BLACK);
        txSetFillColor(TX_WHITE);
        txEllipse(x1, y1, x2, y2);
    }
    if (v == 10)
    {
        
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLUE);
        txEllipse(x1, y1, x2, y2);
        
    }
}

void card1(int num1)
{
    
    
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    switch (num1) {

    case 1:
        x1 = 100;
        x2 = 250;
        y1 = 35;
        y2 = 185;
        break;
    case 2:
        x1 = 350;
        x2 = 500;
        y1 = 35;
        y2 = 185;
        break;
    case 3:
        x1 = 600;
        x2 = 750;
        y1 = 35;
        y2 = 185;
        break;
    case 4:
        x1 = 850;
        x2 = 1000;
        y1 = 35;
        y2 = 185;
        break;
    case 5:
        x1 = 100;
        x2 = 250;
        y1 = 210;
        y2 = 360;
        break;
    case 6:
        x1 = 350;
        x2 = 500;
        y1 = 210;
        y2 = 360;
        break;
    case 7:
        x1 = 600;
        x2 = 750;
        y1 = 210;
        y2 = 360;
        break;
    case 8:
        x1 = 850;
        x2 = 1000;
        y1 = 210;
        y2 = 360;
        break;
    case 9:
        x1 = 100;
        x2 = 250;
        y1 = 385;
        y2 = 535;
        break;
    case 10:
        x1 = 350;
        x2 = 500;
        y1 = 385;
        y2 = 535;
        break;
    case 11:
        x1 = 600;
        x2 = 750;
        y1 = 385;
        y2 = 535;
        break;
    case 12:
        x1 = 850;
        x2 = 1000;
        y1 = 385;
        y2 = 535;
        break;
    }
    
   
    Node* F = head;
    

    for (int i = 1; i < num1; i++)
    {
        F = F->next;
    }

    
    
    if (F->value == 1)
    {
        const COLORREF a = RGB(0, 102, 51);
        txSetColor(a);
        txSetFillColor(a);
        txRectangle(x1, y1, x2, y2);
    }
    else if (F->value == -1)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_RED);
        txRectangle(x1, y1, x2, y2);
    }
    else {
        F->value = -1;
        txSetColor(TX_BLACK);
        txSetFillColor(TX_GRAY);
        txRectangle(x1, y1, x2, y2);
        card_draw(F->card, x1, y1, x2, y2);
    }
}

void card2(int num1)
{


        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        switch (num1)
        {

        case 1:
            x1 = 100;
            x2 = 250;
            y1 = 35;
            y2 = 185;
            break;
        case 2:
            x1 = 350;
            x2 = 500;
            y1 = 35;
            y2 = 185;
            break;
        case 3:
            x1 = 600;
            x2 = 750;
            y1 = 35;
            y2 = 185;
            break;
        case 4:
            x1 = 850;
            x2 = 1000;
            y1 = 35;
            y2 = 185;
            break;
        case 5:
            x1 = 100;
            x2 = 250;
            y1 = 210;
            y2 = 360;
            break;
        case 6:
            x1 = 350;
            x2 = 500;
            y1 = 210;
            y2 = 360;
            break;
        case 7:
            x1 = 600;
            x2 = 750;
            y1 = 210;
            y2 = 360;
            break;
        case 8:
            x1 = 850;
            x2 = 1000;
            y1 = 210;
            y2 = 360;
            break;
        case 9:
            x1 = 100;
            x2 = 250;
            y1 = 385;
            y2 = 535;
            break;
        case 10:
            x1 = 350;
            x2 = 500;
            y1 = 385;
            y2 = 535;
            break;
        case 11:
            x1 = 600;
            x2 = 750;
            y1 = 385;
            y2 = 535;
            break;
        case 12:
            x1 = 850;
            x2 = 1000;
            y1 = 385;
            y2 = 535;
            break;
        case 13:
            x1 = 100;
            x2 = 250;
            y1 = 560;
            y2 = 710;
            break;
        case 14:
            x1 = 350;
            x2 = 500;
            y1 = 560;
            y2 = 710;
            break;
        case 15:
            x1 = 600;
            x2 = 750;
            y1 = 560;
            y2 = 710;
            break;
        case 16:
            x1 = 850;
            x2 = 1000;
            y1 = 560;
            y2 = 710;
            break;

        }
        
        Node* F = head;


        for (int i = 1; i < num1; i++)
        {
            F = F->next;
        }



        if (F->value == 1)
        {
            const COLORREF a = RGB(0, 102, 51);
            txSetColor(a);
            txSetFillColor(a);
            txRectangle(x1, y1, x2, y2);
        }
        else if (F->value == -1)
        {
            txSetColor(TX_BLACK);
            txSetFillColor(TX_RED);
            txRectangle(x1, y1, x2, y2);
        }
        else {
            F->value = -1;
            txSetColor(TX_BLACK);
            txSetFillColor(TX_GRAY);
            txRectangle(x1, y1, x2, y2);
            card_draw(F->card, x1, y1, x2, y2);
        }
}

void card3(int num1)
{
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    switch (num1)
    {
    case 1:
        x1 = 100;
        x2 = 250;
        y1 = 35;
        y2 = 185;
        break;
    case 2:
        x1 = 350;
        x2 = 500;
        y1 = 35;
        y2 = 185;
        break;
    case 3:
        x1 = 600;
        x2 = 750;
        y1 = 35;
        y2 = 185;
        break;
    case 4:
        x1 = 850;
        x2 = 1000;
        y1 = 35;
        y2 = 185;
        break;
    case 5:
        x1 = 1100;
        x2 = 1250;
        y1 = 35;
        y2 = 185;
        break;
    case 6:
        x1 = 100;
        x2 = 250;
        y1 = 210;
        y2 = 360;
        break;
    case 7:
        x1 = 350;
        x2 = 500;
        y1 = 210;
        y2 = 360;
        break;
    case 8:
        x1 = 600;
        x2 = 750;
        y1 = 210;
        y2 = 360;
        break;
    case 9:
        x1 = 850;
        x2 = 1000;
        y1 = 210;
        y2 = 360;
        break;
    case 10:
        x1 = 1100;
        x2 = 1250;
        y1 = 210;
        y2 = 360;
        break;
    case 11:
        x1 = 100;
        x2 = 250;
        y1 = 385;
        y2 = 535;
        break;
    case 12:
        x1 = 350;
        x2 = 500;
        y1 = 385;
        y2 = 535;
        break;
    case 13:
        x1 = 600;
        x2 = 750;
        y1 = 385;
        y2 = 535;
        break;
    case 14:
        x1 = 850;
        x2 = 1000;
        y1 = 385;
        y2 = 535;
        break;
    case 15:
        x1 = 1100;
        x2 = 1250;
        y1 = 385;
        y2 = 535;
        break;
    case 16:
        x1 = 100;
        x2 = 250;
        y1 = 560;
        y2 = 710;
        break;
    
    case 17:
        x1 = 350;
        x2 = 500;
        y1 = 560;
        y2 = 710;
        break;
    case 18:
        x1 = 600;
        x2 = 750;
        y1 = 560;
        y2 = 710;
        break;
    case 19:
        x1 = 850;
        x2 = 1000;
        y1 = 560;
        y2 = 710;
        break;
    case 20:
        x1 = 1100;
        x2 = 1250;
        y1 = 560;
        y2 = 710;
        break;
    }

    Node* F = head;


    for (int i = 1; i < num1; i++)
    {
        F = F->next;
    }



    if (F->value == 1)
    {
        const COLORREF a = RGB(0, 102, 51);
        txSetColor(a);
        txSetFillColor(a);
        txRectangle(x1, y1, x2, y2);
    }
    else if (F->value == -1)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_RED);
        txRectangle(x1, y1, x2, y2);
    }
    else {
        F->value = -1;
        txSetColor(TX_BLACK);
        txSetFillColor(TX_GRAY);
        txRectangle(x1, y1, x2, y2);
        card_draw(F->card, x1, y1, x2, y2);
    }
    
}

void card(int n,int num1)
{
    if (n == 12)
    {
       card1(num1);
    }
    if (n == 16)
    {
        card2(num1);
    }
    if (n == 20)
    {
        card3(num1);
    }
}


#endif