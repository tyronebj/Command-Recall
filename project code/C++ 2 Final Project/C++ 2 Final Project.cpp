// C++ 2 Final Project.cpp : Defines the entry point for the console application.

/*Some Notes:
Use the tree command for a map effect later on*/

#include "Room.h"
#include "Challenge.h"
#include "orderedLinkedList.h"
#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>    //multi media 
#include "searchSortAlgorithms.h"
#include <wincon.h>
#include <string>
#include <cmath>
#include <fstream>
#include <conio.h>
#include <amp_graphics.h>
#include <amp.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void setcolor(unsigned short color);
int rFibNum(int a, int b, int n);
void vectorFunction(int a);
void vectorFunction(float f);
void vectorFunction(double d);
void binarysearch();
int main()

{
	PlaySoundA("Totalrecall.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	//Also used PlaySound(TEXT("Totalrecall.wav"), NULL, SND_FILENAME|SND_LOOP); 

	char enter;
	string u;



	// Code for setting Dimensions
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the consoles currrent dimensions
	MoveWindow(console, r.left, r.top, 800, 500, TRUE);  // Width = 800, Height = 500
														 // End Code for Dimensions




														 /*int gd = DETECT;
														 int gm;
														 initgraph(&gd, &gm, "C:\\TC\\BGI");*/







														 /*settextstyle(BOLD_FONT, HORIZ_DIR, 8);
														 outtextxy(10, 10, "Text");
														 getch();
														 closegraph();*/

	setcolor(15);

	for (int i = 0; i<2; i++)
	{

		cout << "                                        o ";
		Sleep(350);
		cout << "                                             - ";
		Sleep(350);
		cout << "                                                          o ";
		Sleep(350);
		cout << "                                       - ";
		Sleep(350);
		cout << "                                                o ";
		Sleep(350);
		cout << "                                                         - ";
		Sleep(350);
		cout << "                                                    o ";
		Sleep(350);
		cout << "                                                         - ";
		Sleep(350);
		cout << "                                               o ";
		Sleep(350);
		cout << "                                                       - ";
		Sleep(350);

	}
	setcolor(14);
	cout << endl;
	cout << "----------------------------------------COMMAND RECALL-----------------------------------------" << endl;
	setcolor(15);
	for (int i = 0; i<2; i++)
	{

		cout << "                          o ";
		Sleep(350);
		cout << "                                                        - ";
		Sleep(350);
		cout << "                                         o ";
		Sleep(350);
		cout << "                                                           - ";
		Sleep(350);
		cout << "                                                o ";
		Sleep(350);
		cout << "                                                         - ";
		Sleep(350);
		cout << "                                                    o ";
		Sleep(350);
		cout << "                                                         - ";
		Sleep(350);
		cout << "                                               o ";
		Sleep(350);
		cout << "                                                       - ";
		Sleep(350);
		cout << "                                                                      o ";
		Sleep(350);
		cout << "                                       -                           o ";
		Sleep(350);
		cout << "                             o                      - ";
		Sleep(350);

	}



	getch();
	system("cls");

	cout << " \nEnter the  name of your player: \n ";
	getline(cin, u);
	system("cls");

	setcolor(15); // Better method for coloring text, Numbers give you 15 different options
	cout << " \nClock: Tick Tock Tic Toc\n\n";

	Sleep(2000);

	setcolor(10);
	cout << " Aaaaaahh\n\n";

	Sleep(1500);


	setcolor(15);
	cout << " You awake from a nightmare and are on the floor\n of an unknown room \n\n";
	Sleep(3000);

	setcolor(10);

	cout << " I was just a factory worker yesterday\n";
	Sleep(2000);
	cout << " ...I dispersed nine people, people who were after me" << endl;
	Sleep(2500);
	cout << " I was able to use magical spells...\n";
	Sleep(2000);
	cout << " Strange meomories keep flashing on me\n";
	Sleep(2000);
	cout << " I need to find who I am...my origin\n\n";
	Sleep(3500);

	setcolor(15);
	cout << " It's time to get up and move.\n\n";
	Sleep(2000);

	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "Type ";
	setcolor(14);
	cout << "dir";
	setcolor(15);
	cout << " and press ";
	setcolor(13);
	cout << "Enter ";
	setcolor(15);
	cout << "to ";
	setcolor(8);
	cout << "look around\n\n";
	Sleep(2000);

	string ut = " C:Users\\";
	string dirinput;

	bool done = true;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << ">";

		try {
			setcolor(15);
			cin >> dirinput;
			if (dirinput != "dir")
				throw 99;
			if (dirinput == "dir")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << dirinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();

			done = false;

		}

	} while (done == false); //End do while loop


	cout << "       Computer\n <DIR> Door\n       Chair\n <DIR> Bag\n\n";
	Sleep(2000);
	cout << " Great, now you can see the objects around you.\n There's the ";
	setcolor(5);
	cout << "door "; setcolor(15); cout << "and a large ";
	setcolor(5);
	cout << "computer\n\n";
	Sleep(2500);
	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "examine ";
	setcolor(15);
	cout << "objects, use ";
	setcolor(14);
	cout << "type ";
	setcolor(15);
	cout << "and the object's name.\n\n";
	Sleep(2500);
	cout << " Use ";
	setcolor(14);
	cout << "type computer ";
	setcolor(15);
	cout << " to examine the ";
	setcolor(5);
	cout << "computer\n\n";


	string typeinput = "3";

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << ">";

		try {
			setcolor(15);
			
			getline(cin, typeinput);
			if (typeinput != "type computer")
				throw 99;
			if (typeinput == "type computer")
				done = true;
			cout << endl;

		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << " \"" << typeinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop

	cout << " hhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhh" << endl;
	cout << " ds                                              sd" << endl;
	cout << " ds                                              sd" << endl;
	cout << " ds                                              sd" << endl;
	cout << " ds                                              sd" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhdd" << endl;
	cout << "                      dssssssh" << endl;
	cout << "                      d++++++y" << endl;
	cout << "                hyyso////////osyyhhd" << endl << endl;
	Sleep(2000);
	cout << " Awesome. You can now examine the computer\n\n";
	Sleep(2000);
	setcolor(10);
	cout << " Ok... looks like it says \"Rekall Station\" \n\n";
	Sleep(2000);
	cout << " hmmmm... Rekall\n I just remembered, this is where I was yesterday\n";
	Sleep(2000);
	cout << " I was strapped into a chair with wires on my brain\n";
	Sleep(2000);
	cout << " I see a memory profiles folder. This computer must have my lost memories...\n";
	Sleep(2000);
	cout << " I need to get them back.\n\n";
	Sleep(2000);
	setcolor(15);

	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "move ";
	setcolor(15);
	cout << "to places and objects, use ";
	setcolor(14);
	cout << "cd ";
	setcolor(15);
	cout << "and the place you want to move into.\n\n";
	Sleep(2500);


	cout << " Use ";
	setcolor(14);
	cout << "cd \"memory profiles\" ";
	setcolor(15);
	cout << "to ";
	setcolor(8);
	cout << "move to the ";
	setcolor(15);
	cout << "the memory profiles\n\n";
	Sleep(2000);
	cout << " Notice: Put the name of the object in quotations when it is longer than one word \n\n";
	Sleep(2000);
	string profileinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << ">";

		try {
			setcolor(15);
			getline(cin, profileinput);
			if (profileinput != "cd \"memory profiles\"")
				throw 99;
			if (profileinput == "cd \"memory profiles\"")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << profileinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop


	cout << " Janet Stevano \n";
	cout << " Donald Michalyk \n";
	cout << " Doris Chakie \n";
	cout << " Krystyna Mussat \n";
	cout << " Timothy Hussler \n";
	cout << " Jeanette Racic \n";
	cout << " Albert Rosenzweig \n";
	cout << " Alain Mcleod \n";
	cout << " Angela Shawna \n";
	cout << " Vernon Miao \n";
	cout << " Rowena Aeschlimann \n";
	cout << " Shanice Wilke \n";
	cout << " Magdi Iwanow \n";
	cout << " Susan Rogers \n";
	cout << " Stefan Cristea \n";
	cout << " " << u << endl;
	cout << " Lucretia Nechita \n";
	cout << " Petru Antonescu \n";
	cout << " Gligor Andrei \n";
	cout << " Marieta Surcel \n";
	cout << " Dorinel Moricz \n";
	cout << " James Powell \n";
	cout << " Sean Swierkot \n";
	cout << " John Larouche \n\n";
	Sleep(2000);

	cout << " Find your name and examine that information\n\n";

	string examineprofile;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\memory profiles>";

		try {
			setcolor(15);
			getline(cin, examineprofile);

			if (examineprofile != "type " + u)
				throw 99;
			if (examineprofile == "type " + u)
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << examineprofile << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop


	cout << " hhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhh" << endl;
	cout << " ds                                              sd" << endl;
	cout << " ds            ____________________              sd" << endl;
	cout << " ds           |     File Locked    |             sd" << endl;
	cout << " ds           |  _       ?         |             sd" << endl;
	cout << " ms           |  d(4,6)            |             sm" << endl;
	cout << " ms           |          _         |             sm" << endl;
	cout << " ms           |          a(8,2)    |             sm" << endl;
	cout << " ms           |     _              |             sm" << endl;
	cout << " ms           |     D(1,5.2)       |             sm" << endl;
	cout << " ms           |                    |             sm" << endl;
	cout << " ms           |     **********     |             sm" << endl;
	cout << " ms           |____________________|             sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ms                                              sm" << endl;
	cout << " ddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhdd" << endl;
	cout << "                      dssssssh" << endl;
	cout << "                      d++++++y" << endl;
	cout << "                hyyso////////osyyhhd" << endl << endl;
	Sleep(2000);
	cout << " File is locked...\n\n";
	Sleep(2000);
	setcolor(10);
	cout << " I need to crack the code...\n There must be a meaning to those numbers and variables\n";
	Sleep(2000);
	cout << " hmmm...\n ....\n ....\n a vector?\n Three vectors of d a and D...\n";
	Sleep(2000);
	cout << " Got it! Vectors a d D, adD\n I just need to add them\n\n";
	Sleep(2000);

	cout << " To add vectors, sum their components by using (a1+a2+a3)i,(b1+b2+b3)j \n\n";

	int vectori;
	double vectorj;


	do {//Begin of do statement

		setcolor(15);


		cout << " What is the calculation of i. Express answer in numeric form only\n\n";
		cout << " Answer to i is : ";
		cin >> vectori;
		cout << endl;
		cout << " What is the calculation of j. Express answer in numeric form only\n\n";
		cout << " Answer to j is : ";
		cin >> vectorj;
		cout << endl;

		if (vectori != 13)
		{
			setcolor(12);
			cout << "Input is not recognized. Check your calculation again\n\n";
			cin.clear();
			done = false;
		}
		if (vectorj != 13.2)
		{
			setcolor(12);
			cout << "Input is not recognized. Check your calculation again\n\n";
			cin.clear();
			done = false;
		}

		if ((vectori == 13) && (vectorj == 13.2))

			done == true;








	} while (done == false); //End do while loop

	cout << " Great, I passed the code\n Vector i was equal to : ";
	vectorFunction(13);
	cout << " and vector j was equal to : ";
	vectorFunction(13.2);
	cout << endl << endl;

	Sleep(2000);
	setcolor(15);


	// Overloading Functions


	cout << "Memory Dump of " << u << ", victim 420" <<endl;


	for (int i = 0; i < 201; i++)
	{
		int *profpointer; // This is the pointer variable profileinfo
		profpointer = &i;  // This assignd the address of profileinfo to profpointer
						   // Inserts the address of profileo into profpointer
		cout << profpointer;

	}
	Sleep(2000);
	setcolor(10);
	cout << "\n\n The information seems to be encrypted\n";
	Sleep(2000);
	cout << " I will have to decript these numbers and addresses\n\n";
	Sleep(2000);
	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "copy ";
	setcolor(15);
	cout << "objects, use ";
	setcolor(14);
	cout << "copy";
	setcolor(15);
	cout << ", the object's name\n and the place where you want to paste it to.\n\n";
	Sleep(2500);
	cout << " Use ";
	setcolor(14);
	cout << "copy " + u + ".txt e:";
	setcolor(15);
	cout << " to copy the text file to your flash drive e to decode later\n\n";

	string copyinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\memory profiles>";

		try {
			setcolor(15);
			getline(cin, copyinput);

			if (copyinput != "copy " + u + ".txt e:")
				throw 99;
			if (copyinput == "copy " + u + ".txt e:")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << copyinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop
	Sleep(2000);
	cout << " Success! File was copied.\n\n";


	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "go back to the relative path ";
	setcolor(15);
	cout << "use ";
	setcolor(14);
	cout << "cd..\n\n";

	Sleep(2500);
	setcolor(15);
	cout << " Use ";
	setcolor(14);
	cout << "cd..";
	setcolor(15);
	cout << " to get out of the memory profiles from the computer \n\n";

	string cdinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\memory profiles>";

		try {
			setcolor(15);
			getline(cin, cdinput);

			if (cdinput != "cd..")
				throw 99;
			if (cdinput == "cd..")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << cdinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop

	cout << "       Computer\n <DIR> Door\n       Chair\n <DIR> Bag\n\n";
	Sleep(2000);
	cout << " Good. Now lets ";
	setcolor(8);
	cout << "move ";
	setcolor(15);
	cout << " out of this room by going to the door\n\n";
	Sleep(2000);

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << ">";
		string doorinput;
		try {
			setcolor(15);
			getline(cin, doorinput);
			if (doorinput != "cd door")
				throw 99;
			if (doorinput == "cd door")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << doorinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;
		}
	} while (done == false); //End do while loop


							 // Creating a random integer
	int randomint;   // initializing random integer
	srand(time(NULL));  //initialize random seed
	randomint = rand() % 40 + 9;  // from 9 to 40



	cout << "  ________________\n";
	cout << " |       " << randomint << "?      |\n";
	cout << " |================|\n";
	cout << " |0 1 1 2 3 5 8 13|\n";
	cout << " |================|\n";
	cout << " |                |\n";
	cout << " |           o    |\n";
	cout << " |         o o o  |\n";
	cout << " |           o    |\n";
	cout << " |                |\n";
	cout << " |                |\n";
	cout << " |                |\n";
	cout << " |________________|\n\n";

	Sleep(2000);
	setcolor(12);
	cout << " Access is denied\n\n";
	Sleep(2000);
	setcolor(10);
	cout << " The door is locked and seems to have a strange display\n";
	Sleep(2000);
	cout << " ...The numbers in that order... what does that mean\n";
	Sleep(2000);
	cout << " A number " << randomint << " with a ? mark...\n";
	Sleep(2000);
	cout << " hmmmm... hmmmm... hmmm...\n";
	Sleep(2000);
	cout << " Got it, that order, its the Fibonacci Sequence\n";
	Sleep(2000);
	cout << " I just need to know the " << randomint << "th number\n\n";
	Sleep(2000);

	setcolor(15);
	cout << " There might be something that can help you solve this\n"
		" Get out of the door and back to your ";
	setcolor(8);
	cout << "relative path\n\n";

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Door>";

		try {
			setcolor(15);
			getline(cin, cdinput);

			if (cdinput != "cd..")
				throw 99;
			if (cdinput == "cd..")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << cdinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop

	setcolor(15);
	cout << " There is a bag, go to it,\n There might be something that can help you solve this\n\n";



	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << ">";

		string baginput;
		try {
			setcolor(15);
			getline(cin, baginput);
			if (baginput != "cd bag")
				throw 99;
			if (baginput == "cd bag")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << baginput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			//cin.ignore(100, '\n');
			done = false;

		}
	} while (done == false); //End do while loop

	cout << " Clothes\n Pencil\n Pens\n EmptyNotebook\n Calc\n\n";
	Sleep(2000);
	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "execute ";
	setcolor(15);
	cout << "programs and devices use ";
	setcolor(14);
	cout << "start";
	setcolor(15);
	cout << " and the program's name.\n\n";
	Sleep(2500);
	cout << " Use ";
	setcolor(14);
	cout << "start calc";
	setcolor(15);
	cout << " to execute the calculator and help you solve\n the 25th number in the sequence\n\n";


	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Bag>";

		string calcinput;
		try {
			setcolor(15);
			getline(cin, calcinput);
			if (calcinput != "start calc")
				throw 99;
			if (calcinput == "start calc")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << calcinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop

	cout << "  _______________________\n";
	cout << " |  ___________________  |\n";
	cout << " | | 0000000000000000  | |\n";
	cout << " | |___________________| |\n";
	cout << " |                       |\n";
	cout << " | |____| |____| |____|  |\n";
	cout << " |                       |\n";
	cout << " | |____| |____| |____|  |\n";
	cout << " |                       |\n";
	cout << " | |____| |____| |____|  |\n";
	cout << " |                       |\n";
	cout << " | |____| |____| |____|  |\n";
	cout << " |_______________________|\n\n";

	Sleep(2000);
	cout << " Nice, it has battery power.\n I can now calculate the passcode\n\n";

	int firstFibNum;
	int secondFibNum;
	int nth;

	do { //Begin of do statement


		cout << " Enter the first Fibonacci number: ";
		cin >> firstFibNum;
		cout << endl;

		cout << " Enter the second Fibonacci number: ";
		cin >> secondFibNum;
		cout << endl;

		cout << " Enter the desired position: ";
		cin >> nth;
		cout << endl;

		cout << " The Fibonacci number at the " << nth << "th position"
			<< " is: " << rFibNum(firstFibNum, secondFibNum, nth)
			<< endl << endl;


		if (nth != randomint)
		{
			setcolor(12);
			cout << " Make sure the desired position of the sequence\n meets the number indicated on the door.\n\n";
			Sleep(2000);
			setcolor(15);
		}


	} while (nth != randomint); //End of do statement

	Sleep(2000);
	cout << " Awesome, you have calculated the passcode\n now go back to your";
	setcolor(8);
	cout << " relative path\n";
	setcolor(15);
	cout << " and then ";
	setcolor(8);
	cout << "move ";
	setcolor(15);
	cout << " to the door again.\n\n";
	Sleep(2000);
	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "You can ";
	setcolor(8);
	cout << "perform more than one command ";
	setcolor(15);
	cout << "by using ";
	setcolor(14);
	cout << " && ";
	setcolor(15);
	cout << "between each command\n\n";
	Sleep(2500);

	cout << " First use the command to get back to the  ";
	setcolor(8);
	cout << "relative path\n";
	setcolor(15);
	cout << " following a space with ";
	setcolor(14);
	cout << "&&";
	setcolor(15);
	cout << "\n and then including the command to\n";
	setcolor(8);
	cout << " move to the door\n\n";

	string cdandinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Bag>";

		try {
			setcolor(15);
			getline(cin, cdandinput);

			if (cdandinput != "cd.. && cd door")
				throw 99;
			if (cdandinput == "cd.. && cd door")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << cdandinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop


	/*Challenge phaseone;
	phaseone.setnumberoftechs(8);
	phaseone.setnumberofspells(16);

	cout << " Number of commands learned: " << phaseone.getnumberoftechs() << endl;
	Sleep(2000);
	cout << " Number of spells used: " << phaseone.getnumerofspells() << endl << endl;
	Sleep(2000);
*/

	setcolor(10);
	cout << " Yes! the door unlocked.\n\n";
	Sleep(2000);

	setcolor(15);
	cout << "You have successfully found a way out\n and have found a new room.\nGo ahead and";
	setcolor(8);
	cout << " clear";
	setcolor(15);
	cout << " your tracks so you can have a fresh take on what's next\n\n";
	Sleep(2000);

	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "clear ";
	setcolor(15);
	cout << "the contents displayed, use ";
	setcolor(14);
	cout << "cls\n\n";
	
	string clsinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Room2>";

		try {
			setcolor(15);
			getline(cin, clsinput);

			if (clsinput != "cls")
				throw 99;
			if (clsinput == "cls")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << clsinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop
	
	system("cls");

	cout << " Great. You have now cleared the prevoius contents\n" 
		" and can focus on the next challenge\n\n";
	Sleep(2500);
	
	setcolor(10);
	cout << "Its dark in here, lets look at whats around us \n\n";
	

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "Room2>";

		try {
			setcolor(15);
			cin >> dirinput;
			if (dirinput != "dir")
				throw 99;
			if (dirinput == "dir")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << dirinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();

			done = false;

		}

	} while (done == false); //End do while loop

	setcolor(15);
	cout << "       Person\n <DIR> AI\n       Suit Case\n\n";
	Sleep(2000);

	setcolor(15);
	cout << " Person:";
	setcolor(10);
	cout << " Well.. Well.. Well. We finally tracked you down\n You know I'm quite impressed with your abilities, how about you come with me and we can talk\n\n";
	Sleep(3000);
	setcolor(15);
	cout << " Me:";
	setcolor(10);
	cout << " Talk, yeah right...\n";
	Sleep(2000);
	cout << " I do not remember everything but I can see a face of a liar\n and the face of a criminal\n";
	Sleep(2000);
	cout <<" tell me... who are you!\n";
	Sleep(2000);
	setcolor(15);
	cout << "Stranger:";
	setcolor(10);
	cout << "Your Predator\n\n";
	Sleep(4000);

	cout << " The stranger appears to draw out a knife and is ready to attack you.\Quick, protect your self!\n";
	Sleep(3000);
	cout << " You can ";
	setcolor(8);
	cout << "create ";
	setcolor(15);
	cout << "objects out of thin air. Use your spells!\n\n";
		Sleep(3000);

	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "create objects ";
	setcolor(15);
	cout << "use the spell ";
	setcolor(14);
	cout << "fsutil file createnew <filename> <length>\n\n";
	Sleep(4000);
	setcolor(8);
	cout << " Create ";
	setcolor(15);
	cout << "a sword by using ";
	setcolor(14);
	cout << "fsutil file createnew C:\Sword.txt 10240000\n\n";
	
	string createinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Room2>";

		try {
			setcolor(15);
			getline(cin, createinput);

			if (createinput != "fsutil file createnew C:\Sword.txt 10240000")
				throw 99;
			if (createinput == "fsutil file createnew C:\Sword.txt 10240000")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << createinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop
	Sleep(2000);
	setcolor(10);
	cout << " Wow.. Such Power\n\n";
	setcolor(15);
	Sleep(500);
	cout << " Quick, take him out right now!\n\n";
	Sleep(2000);

	setcolor(9);
	cout << " New Spell: ";
	setcolor(15);
	cout << "To ";
	setcolor(8);
	cout << "delete  ";
	setcolor(15);
	cout << "his body out this misery, use the spell ";
	setcolor(14);
	cout << "RD /S \"C:\Stranger\" \n\n";
	
	string deleteinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Room2>";

		try {
			setcolor(15);
			getline(cin, deleteinput);

			if (deleteinput != "RD /S \"C:\Stranger\"")
				throw 99;
			if (deleteinput == "RD /S \"C:\Stranger\"")
				done = true;
			cout << endl;
		} //End of Try 

		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << deleteinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop
	Sleep(2000);
	setcolor(10);
	cout << " Wuuu...\n That was close. I need to find out who these guys are\n and my origin\n\n";
	Sleep(1000);
	setcolor(15);
	cout << " There is an AI in the room, go to it\n\n";

	string aiinput;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Room2>";

		try {
			setcolor(15);
			getline(cin, aiinput);

			if (aiinput != "cd AI")
				throw 99;
			if (aiinput == "cd AI")
				done = true;
			cout << endl;
		} //End of Try 



		catch (int x)
		{
			cout << endl;
			setcolor(12);
			cout << "\"" << aiinput << "\"" << " is not a recognized. Check your spell again.\n\n";
			cin.clear();
			done = false;

		}
	} while (done == false); //End do while loop
	Sleep(2000);
	setcolor(10);

	cout << " This AI could have access to my life \n\n";
	Sleep(4000);
	 cout << " AI: Hello I am Angie, what can I do for you today\n\n";
	 Sleep(4000);
	cout << " Me: Angie... Strange name\n Give me the files and inforamtion of any possible contacts and victims\n\n ";
	Sleep(4000);
	cout << " Angie: Here are a list of the closest results\n\n";
	Sleep(4000);
	setcolor(15);
	cout << " Contacts" << endl;
	cout << " Operations" << endl;
	cout << " Test Subjects" << endl << endl;
	Sleep(5000);
	setcolor(10);
	cout << " Me: Test Subjects...\n Open Test Subjects\n\n";
	Sleep(4000);
	cout << " Angie: As you wish\n\n";
	Sleep(4000);
	setcolor(15);
	int intList[37] = { 005, 015, 120, 125, 152,153,159,213,232,235,253,343,354,365,366,374,394,420,440,455,458,459,488,546,569,666,673,684,695,
		696,745,748,897,978,985,989,666 };
	cout << " 232	159	  005	420	  989	666\n" <<
		" 343	458	  015	365	  152	374\n" <<
		" 153	695	  235	985	  394	354\n" <<
		" 546	488	  569	748	  684	455\n" <<
		" 213	440	  745	120	  978	897\n" <<
		" 458	695	  125	366	  253	673\n\n";
	int pos;
	int searchint;
	Sleep(3000);
	setcolor(10);
	cout << "\n Angie: Enter the profile you wish to search\n\n";
	Sleep(2000);
	cout << " Me: hmmm...seems as if the names are encoded by their numbers.\n Lets try any number and see if I can find myself.\n\n";
	setcolor(15);
	Sleep(2000);
	done = true;
	do
	{
		cin >> searchint;
		cout << "\n";
		pos = binarySearch(intList, 37, searchint);

		if (pos != -1)
		{
			setcolor(10);
			cout << " Angie: Profile " << searchint
				<< " is found with Lab ID "
				<< pos << ".\n\n" << endl;
			done = true;
		}
		else
		{
			cout << searchint
				<< " is not in intList. Try again." << endl;
			done = false;
		}
	} while (done == false);
	Sleep(2000);
	setcolor(15);
	cout << " Go ahead and open the file to ID: " << pos << " see what is inside.\n\n";
	
	string profileinput1;
	int profileinput2;

	do {//Begin of do statement

		setcolor(11);
		cout << ut << u << "\\Room2\AI>";

		cin >> profileinput1;
		cin >> profileinput2;

		if (profileinput1 != "type" || profileinput2 != pos)
		{
			cout << "\"" << profileinput1 << " " << profileinput2 << "\"" << " is not a recognized. Check your spell again.\n\n";
			done = false;
		}

		if (profileinput1 == "type" && profileinput2 == pos)
		{
			done = true;
			cout << endl;
		}


	} while (done == false);
	Sleep(2000);
	setcolor(15);
		cout << " Timmothy 	Estes" << endl;
		cout << " Abilities : Create chocolate hearts of thin air | Read books at lighting pace | Make lovely connections."<< endl;
		cout << " Description: Strange bright and pale individual with cutish abilites that promote the act of true love." << endl;
		cout << " Sex : Other" << endl;
		cout << " Hair : Blonde" << endl;
		cout << " Height : 5'-08''" << endl;
		cout << " Eyes : Rainbow" << endl;
		cout << " Weight : 75 lb" << endl;
		cout << " Date of Arrival : Aug - 14" << endl<< endl;
		Sleep(6000);
		setcolor(10);
		cout << " Whoa, that is definitely not me\n Strange guy." << endl<< endl;
		Sleep(3000);
		setcolor(15);
		cout << " You have the ability to ";
		setcolor(8);
		cout << "edit ";
		setcolor(15);
		cout << "objects and change them\n Go change Tim's info to your desire\n\n";
		
		Sleep(2000);
		setcolor(9);
		cout << " New Spell: ";
		setcolor(15);
		cout << "To ";
		setcolor(8);
		cout << "edit  ";
		setcolor(15);
		cout << "objects and files, use ";
		setcolor(14);
		cout << "write tim.txt\n\n";

		string timinput;
		do {//Begin of do statement

			setcolor(11);
			cout << ut << u << "\\Room2\AI>";

			try {
				setcolor(15);
				getline(cin, timinput);

				if (timinput != "write tim.txt")
					throw 99;
				if (timinput == "write tim.txt")
					done = true;
				cout << endl;
			} //End of Try 



			catch (int x)
			{
				cout << endl;
				setcolor(12);
				cout << "\"" << timinput << "\"" << " is not a recognized. Check your spell again.\n\n";
				cin.clear();
				done = false;

			}
		} while (done == false); //End do while loop
		Sleep(2000);
		system("write tim.txt");
		getch();
		setcolor(15);
		cout << " You need to find your profile.\n The profile number was listed somewhere earlier.\n It is a three digit number "
			<< "representing a popular day in April .\n\n";
		
			string userprofinput;
		do {//Begin of do statement

			setcolor(11);
			cout << ut << u << "\\Room2\AI>";

			try {
				setcolor(15);
				getline(cin, userprofinput);

				if (userprofinput != "420")
					throw 99;
				if (userprofinput == "420")
					done = true;
				cout << endl;
			} //End of Try 



			catch (int x)
			{
				cout << endl;
				setcolor(12);
				cout << "\"" << userprofinput << "\"" << " is not a recognized. Check your spell again.\n\n";
				cin.clear();
				done = false;

			}
		} while (done == false); //End do while loop
		Sleep(2000);
		setcolor(12);
		cout << " Profile 420 is " << u << ". This file is locked.\n\n";
		setcolor(10);
		Sleep(1000);
		cout << " Noooo. Not again!\n Looks like I need to copy this once more.\n\n";
		Sleep(2000);
		cout << " Go and copy the entire folder of profiles\n";
		Sleep(500);
		cout << " Use ";
		setcolor(14);
		cout << "copy \"Test Subjects.txt\" e:";
		setcolor(15);
		cout << " to copy the text file to your flash drive e to look at later\n\n";

		string subjectsinput;
		do {//Begin of do statement

			setcolor(11);
			cout << ut << u << "\\Room2\AI>";

			try {
				setcolor(15);
				getline(cin, subjectsinput);

				if (subjectsinput != "copy \"Test Subjects.txt\" e:")
					throw 99;
				if (subjectsinput == "copy \"Test Subjects.txt\" e:")
					done = true;
				cout << endl;
			} //End of Try 



			catch (int x)
			{
				cout << endl;
				setcolor(12);
				cout << "\"" << subjectsinput << "\"" << " is not a recognized. Check your spell again.\n\n";
				cin.clear();
				done = false;

			}
		} while (done == false); //End do while loop
		Sleep(1000);
		setcolor(10);
		cout << " Ok good.\n Now I need to delete my file\n\n";
		Sleep(1000);
		cout << " Me: Angie, I want to delete these files\n\n";
		Sleep(2000);
		//Modified for Final Project
		orderedLinkedList<int> list1, list2;
		int num;
		setcolor(10);
		cout << " Angie: The file numbers are 420 " << " 125 586 946 347 988\n Enter the file numbers you want to configure and end with -999\n\n ";
		setcolor(15);
		cin >> num;

		while (num != -999)
		{
			list1.insert(num);
			cin >> num;
		}

		cout << endl;
		setcolor(10);
		cout << " Angie: Here is the lists of files you have asked to configure.\n";
		setcolor(15);
		cout << "List 1: ";
		list1.print();
		cout << endl;

		list2 = list1;

		cout << " List 2: ";
		list2.print();
		cout << endl;

		setcolor(10);
		cout << " Angie: Enter the file numbers you wish to delete\n\n ";
		setcolor(15);

		cin >> num;
		cout << endl;

		list2.deleteNode(num);

		setcolor(10);
		cout << " Angie: After deleting: ";
		setcolor(10);
		cout << num << "\n Remaining files left are: \n ";
		list2.print();
		cout << endl << endl;
		Sleep(2000);
		setcolor(10);
		cout << " Me: Good, now these guys do not have my information anymore and I have access to an AI.\n I will find the person who has caged me this long...\n\n";
		Sleep(1000);
		setcolor(15);
		cout << " Lets get out of this mess\n ";
		Sleep(2000);

		setcolor(9);
		cout << " New Spell: ";
		setcolor(15);
		cout << "To ";
		setcolor(8);
		cout << " exit ";
		setcolor(15);
		cout << " and escape this building, use ";
		setcolor(14);
		cout << "exit\n\n";

		string exitinput;

		do {//Begin of do statement

			setcolor(11);
			cout << ut << u << "\\Room2\AI>";

			try {
				setcolor(15);
				getline(cin, exitinput);

				if (exitinput != "exit")
					throw 99;
				if (exitinput == "exit")
					done = true;
				cout << endl;
			} //End of Try 

			catch (int x)
			{
				cout << endl;
				setcolor(12);
				cout << "\"" << exitinput << "\"" << " is not a recognized. Check your spell again.\n\n";
				cin.clear();
				done = false;

			}
		} while (done == false); //End do while loop
		Sleep(800);
		setcolor(15);
		cout << " You will be exiting this room shortly. \n You have successfully completed your challenge\n\n";
		Sleep(1500);
		Challenge phaseone;
		phaseone.setnumberoftechs(13);
		phaseone.setnumberofspells(28);

		cout << " Number of commands learned: " << phaseone.getnumberoftechs() << endl;
		Sleep(2000);
		cout << " Number of spells used: " << phaseone.getnumerofspells() << endl << endl;
		Sleep(2000);

		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);
		cout << " .";
		Sleep(500);

		system("exit");





	

	system("pause>nul");
	cout << endl;
	return 0;


}


void setcolor(unsigned short color)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);   // Stores Color Settings for Text, h is just the name of the Handle, could be anything though; 
												  //a different way is system("color xy);

	SetConsoleTextAttribute(h, color); // Better method for coloring text, Numbers give different color options

									   //SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); // Changes Color of Text
}

int rFibNum(int a, int b, int n)
{
	if (n == 1)
		return a;
	else if (n == 2)
		return b;
	else
		return rFibNum(a, b, n - 1) + rFibNum(a, b, n - 2);
}

void vectorFunction(int a)
{
	cout << a;
}

void vectorFunction(float f)
{
	cout << f;
}
void vectorFunction(double d)
{
	cout << d;
}