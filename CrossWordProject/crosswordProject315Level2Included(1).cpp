#include<iostream>
#include<cstdlib>
#include<cstring>
#include<windows.h>
#include <fstream>
#include <stdio.h>
#include<algorithm>
#include<ctime>
#include<string>
#include<stdlib.h>
#include <bits/stdc++.h>

using namespace std;
void display();
void startWindow();
void startWindowLevelTwo();
void grid();
void gridLevelTwo();
void clues();
void cluesLevelTwo();
void updateGrid(string J);
void updateGridTwo(string entered);
int Score=0;

//TEMPLATE FUNCTION:
template<typename T>
T add(T num1, T num2){
    return (num1+num2);
}

template <class T, class U, class V = char>

//CLASS TEMPLATE
class ClassTemplate {
   private:
    T var1;
    U var2;
    V var3;

   public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}  // constructor

    void printVar() {
        cout << "If U Get: " << var1 << " Score Or :"<< endl;
        cout << "If U Get: " << var2 << " Then :"<<endl;
        cout << "U Passed With Symbol: " << var3 << endl;
        cout <<"       "<<endl;
        cout<<"               Therefore, Aim For Symbol A To Complete This Game"<<endl;
    }
};
//end class template

//DATA_STRUCTURE AND STRUCTURE:
struct dStRUCTURE{

};
void displayAnnouncement(dStRUCTURE);

//OPEARTOR OVERLOAD
class Count {
   private:
    int value;

   public
       :
    // Constructor to initialize count to 8
    Count() : value(8) {}
// Overload ++ when used as prefix
    Count operator ++ () {
        Count temp;
        // Here, value is the value attribute of the calling object
        temp.value = ++value;

        return temp;
    }
    // Overload ++ when used as postfix
    Count operator ++ (int) {
        Count temp;
        // Here, value is the value attribute of the calling object
        temp.value = value++;

        return temp;
    }

    void display() {
        cout << " NOTE THAT MAXIMUM SCORE FOR THIS LEVEL IS: " << value << endl;
    }
};
//STOP OPERATOR OVERLOAD
struct time{

    int sec;
};

struct myBanner{

};
void printBanner(myBanner);
struct myColor{

};
void backgroundColor(myColor);

struct gameClue{
};
void clues(gameClue);
struct gameClueLevelTwo{
};
void cluesLevelTwo(gameClueLevelTwo);
//CLASS:
class gameInstruction{

};

gameInstruction intructionsWindow()
{
    gameInstruction gameInstr;
    string play2;
    cout<<"\t********************Covid-19 CROSSWORD PUZZLE********************\n\n"<<endl;
    cout<<"\t\t\t***GAME INSTRUCTIONS***\n"<<endl;
    cout<<"\tThe Crossword Puzzle contains a Grid and Clues"<<endl;
    cout<<"\tThe clues help find the required word in the grid"<<endl;
    cout<<"\tThe player wins by completely filling in the empty grid with correct answers to the clues"<<endl;
    cout<<"\tEnter the word with the corresponding clue"<<endl;
    cout<<"\tThe first clue represents the first answer and so on in that order"<<endl;
    cout<<"\tThe game is restricted in such a way that you cannot move on to the 2nd answer without the first"<<endl;
    cout<<"\tPress ENTER to continue...";
    getline(cin,play2);
    cout<<endl;

    return gameInstr;

}

void startWindowLevelTwo()
{
    string play3;
	    cout<<"\t********************Covid-19 CROSSWORD PUZZLE********************\n\n"<<endl;
     cout<<"\tCONGRATULATIONS YOU HAVE COMPLETED LEVEL 1"<<endl;
    cout<<"\tYour score for round 1 is : "<<Score<<" POINTS"<<endl;
    cout<<"\tPress ENTER to continue...";
    getline(cin,play3);

}

int main()
{
    myColor bc;
    backgroundColor(bc);

     myBanner b;
    printBanner(b);

     char a;
     startWindow();
	 char n;
     string Instructions;
     string Name;
     string* pointVar, var;
    cout<<"\tEnter Your Name: ";
    cin>>var;
// assign address of var to pointVar
    pointVar = &var;
//access value pointed by pointVar
     cout << "ENJOY THE GAME "<<*pointVar<<endl;

     getline(cin,var);
     cout<<endl;
    system("cls");
  // DATA STRUCTURE and STRUCTURE:
   dStRUCTURE d;
   displayAnnouncement(d);
  //intructionsWindow();
         gameInstruction gameInstr1;
    // Call function
    gameInstr1=intructionsWindow();
    system("cls");

       int numberWords=0;
        gameClue z;
        clues(z);
        string nn;
        auto start = std::chrono::system_clock::now();
        grid();
       cout<<" "<<endl;
     string D[5]={"NASAL","ANOSMIA","FALSE","FEVER","THREE"};
      cout<<"YOU HAVE TO ENTER THE MISSING WORD FROM FROM Q1 TO Q5."<<endl;
      cout<<"NOTE THAT IN Q4 YOU ANSWER 'TRUE' OR 'FALSE' AND IN Q5 YOU WRITE THE CORRECT NUMBER IN WORDS."<<endl;
     while(numberWords<5){
       // system("cls");
        string STR;
        cout<<"     "<<endl;
        if (numberWords==0){
        cout<<"1.______ congestion is the blockage of breathing usually due to membranes lining the nose becoming swollen from inflamed blood vessels."<<endl;
        }
     	     if (numberWords==1){
     	cout<<"2. ______ also known as smell blindness, is the loss of the ability to detect one or more smells."<<endl;
     	     }
     	   if (numberWords==2){
     	cout<<"3. True/False - All people have the same symptoms for covid 19"<<endl;
     	   }
     	      if (numberWords==3){
     	cout<<"4. ______ having a temperature above the normal range due to an increase in the body's temperature."<<endl;
     	      }
               if (numberWords==4){
     	cout<<"5. There are ______ stages in covid19 infection" <<endl;
               }
     	cout<<"       "<<endl;
     	 cout<<"Round 1 of 2"<<endl;
     	cout<<"Enter The Missing Word :";
     	cin>>STR;
     	cout<<""<<endl;
     	if(strcasecmp(STR.c_str(), D[numberWords].c_str()) ==  0  ){
               Score++;

            updateGrid(D[numberWords]);
            cout<<"       "<<endl;
            cout<<"YOU HAVE ENTERED THE CORRECT WORD AND YOUR SCORE IS : "<<Score<<endl;
            auto end = std::chrono::system_clock::now();

            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);

               std::cout << "Time taken: " << elapsed_seconds.count() << "s" <<
               std::endl;


              numberWords++;

     	}
     	else{
            cout<<"       "<<endl;
            cout<<"YOU HAVE ENTERED A WRONG WORD  and your score is still : ";
            cout<<Score<<endl;
            cout<<"     "<<endl;
            auto end = std::chrono::system_clock::now();

            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);

            std::cout << "Time taken: " << elapsed_seconds.count() << "s" <<
               std::endl;
     	}

     	//2nd word:
     }




        system("cls");


        startWindowLevelTwo();

        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        system("cls");
       cout<<"     "<<endl;
        cout<<"     "<<endl;
     //CLASS TEMPLATE:
  // create object with int, double and char types
    ClassTemplate<int, double> obj1(5, 4.5, 'A');
    obj1.printVar();
    cout<<"     "<<endl;
        cout<<"     "<<endl;

           //OPERATOR OVERLOAD:
    Count count1, result;

    // Call the "Count operator ++ ()" function
    result = ++count1;
    result.display();

    // Call the "Count operator ++ (int)" function
    result = count1++;
    result.display();
    //END OPERATOR OVERLOAD
        gameClueLevelTwo zz;
        cluesLevelTwo(zz);
        gridLevelTwo();
        cout<<"  "<<endl;
        //printind updated grid for level two
        int numberOfWords=0;
      cout<<"YOU HAVE TO ENTER THE MISSING WORD FROM FROM Q1 TO Q5."<<endl;
      cout<<"NOTE THAT IN Q4 YOU ANSWER 'TRUE' OR 'FALSE' AND IN Q5 YOU WRITE THE CORRECT NUMBER IN WORDS."<<endl;
          cout<<"      "<<endl;

         string levelTwoWords[9]={"FALSE","ASTRAZENECA","QUARANTINE","VACCINE","MASK","SANITIZER","MRNA","CROWN","ONE",};//added



        numberOfWords=0;
         while(numberOfWords<9){

            string STR;
            cout<<""<<endl;

        if (numberOfWords==7){
          cout<<"8.The 'corona' in coronavirus means: ___."<<endl;
        }
        if (numberOfWords==0){
        cout<<"1.True or False: A person who has no symptoms of COVID-19 is not a risk to others?"<<endl;
        }
        if (numberOfWords==4){
        cout<<"5.___ would one wear to prevent the spread of covid 19"<<endl;
        }
        if (numberOfWords==5){
        cout<<"6.___ is the liquid used to disinfect germs to prevent the spread of covid 19"<<endl;
        }
        if (numberOfWords==8){
        cout<<"9.the minimum distance between people to minimise the spread of the virus is ____ meter(s)."<<endl;
        }
        if (numberOfWords==2){
        cout<<"3.___ is a place of isolation in which people or animals that have arrived from elsewhere or been exposed to infectious or contagious disease are placed."<<endl;
        }
        if (numberOfWords==3){
        cout<<"4.___ is a biological preparation that provides active acquired immunity to a particular infectious disease."<<endl;
        }
     	if (numberOfWords==6){
     	cout<<"7.The Pfizer-BioNTech and Moderna COVID-19 vaccines are messenger RNA vaccines also called ___ vaccines."<<endl;
     	}
     	if (numberOfWords==1){
     	cout<<"2.___ uses a chimpanzee adenovirus vaccine vector. This is a harmless, weakened adenovirus that usually causes the common cold in chimpanzees"<<endl;
     	}
     	cout<<"           "<<endl;
     	cout<<"           "<<endl;
     	cout<<"Round 2 of 2"<<endl;
     	cout<<"Enter The Missing Word :";
     	cin>>STR;
     	cout<<""<<endl;

     	if(strcasecmp(STR.c_str(), levelTwoWords[numberOfWords].c_str()) ==  0  ){
               Score++;

            updateGridTwo(levelTwoWords[numberOfWords]);

            cout<<"you have entered the correct word and your score is : ";
            cout<<Score<<endl;
            auto end = std::chrono::system_clock::now();

            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);

            std::cout << "Time taken: " << elapsed_seconds.count() << "s" <<
               std::endl;


              numberOfWords++;

     	}
     	else{
            cout<<"  "<<endl;
            cout<<"YOU HAVE ENTERED A WRONG WORD  and your score is still : ";
            cout<<Score;
            cout<<"  "<<endl;
            auto end = std::chrono::system_clock::now();

            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);

            std::cout << "Time taken: " << elapsed_seconds.count() << "s" <<
               std::endl;
     	}

     	}
         cout<<"  "<<endl;
         cout<<"  "<<endl;

      cout<<"YOU HAVE WON LEVEL TWO... HURRAY!!!!!!!!!!!"<<endl;
}

void startWindow()
{
    string play;
	    cout<<"\t********************Covid-19 CROSSWORD PUZZLE********************\n\n"<<endl;
     cout<<"\tWELCOME To The Covid-19 Crossword Puzzle"<<endl;
    cout<<"\tThis is an interactive crossword game that creates CoronaVirus awareness"<<endl;
    cout<<"\tThe game consists of different questions structured in a way that educates the player"<<endl;
    cout<<"\tPress ENTER to continue...";
    getline(cin,play);
    cout<<endl;

}



void grid()
{
    char array[8][8];
    string d[5]={"NASAL","ANOSMIA","FALSE","FEVER","THREE"};//added
    char coll[8];//added

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {

           strcpy(coll,d[0].c_str());//added

            array[i][j] = '0';
            for(int k = 3; k < 8; k++)
            {
                array[0][k] = '*';
            }

            for(int k = 0; k < 7; k++)
            {
                array[k][6] = '*';
            }
            for(int k = 3; k < 8; k++)
            {
                array[3][k] = '*';
            }
            for(int k = 3; k < 8; k++)
            {
                array[k][3] = '*';
            }
            for(int k = 0; k < 5; k++)
            {
                array[6][k] = '*';
            }

        }

    }

    for (int i = 0; i < 8; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<"  ";

    }
    cout << endl;


}

void gridLevelTwo()
{
    char array[14][14];
    string levelTwoWords[9]={"FALSE","ASTRAZENECA","QUARANTINE","VACCINE","MASK","SANITIZER","MRNA","CROWN","ONE",};//added
    char coll[14];//added

    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';
            for(int k = 7; k < 12; k++)
            {
                array[1][k] = '*';
            }

            for(int k = 0; k < 11; k++)
            {
                array[k][10] = '*';
            }

            for(int k = 2; k < 12; k++)
            {
                array[7][k] = '*';
            }

            for(int k = 6; k < 13; k++)
            {
                array[k][4] = '*';
            }

            for(int k = 6; k < 10; k++)
            {
                array[k][6] = '*';
            }

            for(int k = 3; k < 12; k++)
            {
                array[k][8] = '*';
            }
            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }
            for(int k = 0; k < 5; k++)
            {
                array[11][k] = '*';
            }
            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


}

void updateGridTwo(string Entered){
    char array[14][14];
    string levelTwoWords[9]={"FALSE","ASTRAZENECA","QUARANTINE","VACCINE","MASK","SANITIZER","MRNA","CROWN","ONE",};//added
    char coll[14];//added

    string E=Entered;
    if(E.compare(levelTwoWords[0])==0){
        //if word entered is the same as False
        for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());

            array[i][j] = '0';

            int CharNum=0;
            for(int k = 7; k < 12; k++,CharNum++)
            {
                array[1][k] = coll[CharNum];
                coll[CharNum]={};
            }

            for(int k = 2; k < 11; k++)
            {
                array[k][10] = '*';
                array[0][10]='*';
            }

            for(int k = 2; k < 12; k++)
            {
                array[7][k] = '*';
            }

            for(int k = 6; k < 13; k++)
            {
                array[k][4] = '*';
            }

            for(int k = 6; k < 10; k++)
            {
                array[k][6] = '*';
            }

            for(int k = 3; k < 12; k++)
            {
                array[k][8] = '*';
            }

            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }

            for(int k = 0; k < 5; k++)
            {
                array[11][k] = '*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;
    }

    if(E.compare(levelTwoWords[1])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            for(int k = 2; k < 10; k++)
            {
                array[7][k] = '*';
                array[7][11]='*';
            }

            for(int k = 6; k < 13; k++)
            {
                array[k][4] = '*';
            }

            for(int k = 6; k < 10; k++)
            {
                array[k][6] = '*';
            }

            for(int k = 3; k < 12; k++)
            {
                array[k][8] = '*';
            }

            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }

            for(int k = 0; k < 5; k++)
            {
                array[11][k] = '*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }
    if(E.compare(levelTwoWords[2])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';
            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

            for(int k = 12; k > 7; k--)
            {
                array[k][4] = '*';
                array[6][4]='*';
            }

            for(int k = 9; k > 7; k--)
            {
                array[k][6] = '*';
                array[6][6]='*';
            }

            for(int k = 3; k < 7; k++)
            {
                array[k][8] = '*';
            }

             for(int k = 11; k > 7; k--)
            {
                array[k][8] = '*';
            }

            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }

            for(int k = 0; k < 5; k++)
            {
                array[11][k] = '*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {

         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }

      if(E.compare(levelTwoWords[3])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

             strcpy(coll,levelTwoWords[3].c_str());
            CharNum=0;
            for(int k =6; k<13; k++,CharNum++)
            {
                array[k][4] = coll[CharNum];
                coll[CharNum]={};
            }

            for(int k = 9; k > 7; k--)
            {
                array[k][6] = '*';
                array[6][6]='*';
            }

            for(int k = 3; k < 7; k++)
            {
                array[k][8] = '*';
            }

             for(int k = 11; k > 7; k--)
            {
                array[k][8] = '*';
            }

            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }

            for(int k = 0; k < 4; k++)
            {
                array[11][k] = '*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";
       for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }

       if(E.compare(levelTwoWords[4])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

             strcpy(coll,levelTwoWords[3].c_str());
            CharNum=0;
            for(int k =6; k<13; k++,CharNum++)
            {
                array[k][4] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[4].c_str());
            for(int k = 6; k <10; k++,CharNum++)
            {
                array[k][6] = coll[CharNum];
                coll[CharNum]={};

            }

            for(int k = 3; k < 7; k++)
            {
                array[k][8] = '*';
            }

             for(int k = 11; k > 7; k--)
            {
                array[k][8] = '*';
            }

            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }

            for(int k = 0; k < 4; k++)
            {
                array[11][k] = '*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }

      if(E.compare(levelTwoWords[5])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

             strcpy(coll,levelTwoWords[3].c_str());
            CharNum=0;
            for(int k =6; k<13; k++,CharNum++)
            {
                array[k][4] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[4].c_str());
            for(int k = 6; k <10; k++,CharNum++)
            {
                array[k][6] = coll[CharNum];
                coll[CharNum]={};

            }

            CharNum=0;
            strcpy(coll,levelTwoWords[5].c_str());
            for(int k = 3; k < 12; k++,CharNum++)
            {
                array[k][8] = coll[CharNum];
                coll[CharNum]={};
            }

            for(int k = 10; k < 14; k++)
            {
                array[k][1] = '*';
            }

            for(int k = 0; k < 4; k++)
            {
                array[11][k] = '*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
        cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }

      if(E.compare(levelTwoWords[6])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

             strcpy(coll,levelTwoWords[3].c_str());
            CharNum=0;
            for(int k =6; k<13; k++,CharNum++)
            {
                array[k][4] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[4].c_str());
            for(int k = 6; k <10; k++,CharNum++)
            {
                array[k][6] = coll[CharNum];
                coll[CharNum]={};

            }

            CharNum=0;
            strcpy(coll,levelTwoWords[5].c_str());
            for(int k = 3; k < 12; k++,CharNum++)
            {
                array[k][8] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[6].c_str());
            for(int k = 10; k < 14; k++,CharNum++)
            {
                array[k][1] = coll[CharNum];
                coll[CharNum]={};
            }

            for(int k =3 ; k > 1; k--)
            {
                array[11][k] = '*';
                array[11][0]='*';
            }

            for(int k = 11; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }
  if(E.compare(levelTwoWords[7])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());//added

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

             strcpy(coll,levelTwoWords[3].c_str());
            CharNum=0;
            for(int k =6; k<13; k++,CharNum++)
            {
                array[k][4] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[4].c_str());
            for(int k = 6; k <10; k++,CharNum++)
            {
                array[k][6] = coll[CharNum];
                coll[CharNum]={};

            }

            CharNum=0;
            strcpy(coll,levelTwoWords[5].c_str());
            for(int k = 3; k < 12; k++,CharNum++)
            {
                array[k][8] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[6].c_str());
            for(int k = 10; k < 14; k++,CharNum++)
            {
                array[k][1] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[7].c_str());
            for(int k =0 ; k <5; k++,CharNum++)
            {
                array[11][k] = coll[CharNum];
                coll[CharNum]={};

            }

            for(int k = 12; k < 14; k++)
            {
                array[k][2] = '*';
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {

        cout<<"  ";

    }
    cout << endl;


      }

     if(E.compare(levelTwoWords[8])==0){

     for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {

           strcpy(coll,levelTwoWords[0].c_str());

            array[i][j] = '0';

            int n=0;
            for(int k = 7; k < 12; k++,n++)
            {
                array[1][k] = coll[n];
                coll[n]={};
            }

            strcpy(coll,levelTwoWords[1].c_str());
            int CharNum=0;
            for(int k = 0; k < 11; k++,CharNum++)
            {
                array[k][10] = coll[CharNum];
                coll[CharNum]={};
            }

            strcpy(coll,levelTwoWords[2].c_str());
            CharNum=0;
            for(int k = 2; k < 12; k++,CharNum++)
            {
                array[7][k] = coll[CharNum];
                coll[CharNum]={};
            }

             strcpy(coll,levelTwoWords[3].c_str());
            CharNum=0;
            for(int k =6; k<13; k++,CharNum++)
            {
                array[k][4] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[4].c_str());
            for(int k = 6; k <10; k++,CharNum++)
            {
                array[k][6] = coll[CharNum];
                coll[CharNum]={};

            }

            CharNum=0;
            strcpy(coll,levelTwoWords[5].c_str());
            for(int k = 3; k < 12; k++,CharNum++)
            {
                array[k][8] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[6].c_str());
            for(int k = 10; k < 14; k++,CharNum++)
            {
                array[k][1] = coll[CharNum];
                coll[CharNum]={};
            }

            CharNum=0;
            strcpy(coll,levelTwoWords[7].c_str());
            for(int k =0 ; k <5; k++,CharNum++)
            {
                array[11][k] = coll[CharNum];
                coll[CharNum]={};

            }

            CharNum=0;
             strcpy(coll,levelTwoWords[8].c_str());
            for(int k = 11; k < 14; k++,CharNum++)
            {
                array[k][2] = coll[CharNum];
                coll[CharNum]={};
            }

        }

    }

    for (int i = 0; i < 14; i++)
    {
         cout<<"             ";

        for (int j = 0; j < 14; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 14; i++)
    {
        cout<<"  ";

    }
    cout << endl;


      }

}

void updateGrid(string Entered)
{
char array[8][8];
string d[5]={"NASAL","ANOSMIA","FALSE","FEVER","THREE"};

char coll[8];
string E=Entered;

    if(E.compare(d[0])==0){

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            strcpy(coll,d[0].c_str());

            array[i][j] = '0';

             int n=0;
            for(int k = 3; k < 8; k++,n++)
            {
                array[0][k] = coll[n];

                coll[n]={};

            }

            for(int k = 1; k < 7; k++)
            {
                array[k][6] = '*';
            }

            for(int k = 3; k < 8; k++)
            {
                array[3][k] = '*';
            }

            for(int k = 3; k < 8; k++)
            {
                array[k][3] = '*';
            }

            for(int k = 0; k < 5; k++)
            {
                array[6][k] = '*';
            }

        }

    }
          for (int i = 0; i < 8; i++)
    {
       cout<<"            ";
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<"          ";
    }
    cout << endl;
    }

    else if(E.compare(d[1])==0){

      for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            strcpy(coll,d[0].c_str());

            array[i][j] = '0';

            int n=0;

            for(int k = 3; k < 8; k++,n++)
            {
                array[0][k] = coll[n];

                coll[n]={};

            }

            n=0;
            strcpy(coll,d[1].c_str());
            for(int k = 0; k < 7; k++,n++)
            {
                array[k][6] = coll[n];
                coll[n]={};
            }

            for(int k = 3; k < 6; k++)
            {
                array[3][k] = '*';
                array[3][7]='*';
            }

            for(int k = 3; k < 8; k++)
            {
                array[k][3] = '*';
            }

            for(int k = 0; k < 5; k++)
            {
                array[6][k] = '*';
            }

        }

    }

    for (int i = 0; i < 8; i++)
    {
        cout<<"            ";
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<"           ";
    }
    cout << endl;



    }
    else if(E.compare(d[2])==0){
               for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            strcpy(coll,d[0].c_str());

            array[i][j] = '0';

             int n=0;

            for(int k = 3; k < 8; k++,n++)
            {
                array[0][k] = coll[n];

                coll[n]={};

            }

            n=0;
            strcpy(coll,d[1].c_str());
            for(int k = 0; k < 7; k++,n++)
            {
                array[k][6] = coll[n];
                coll[n]={};
            }

            n=0;
            strcpy(coll,d[2].c_str());
            for(int k = 3; k < 8; k++,n++)
            {
                array[3][k] = coll[n];
                coll[n]={};
            }

            for(int k = 4; k < 8; k++)
            {
                array[k][3] = '*';
            }

            for(int k = 0; k < 5; k++)
            {
                array[6][k] = '*';
            }

        }

    }

    for (int i = 0; i < 8; i++)
    {
        //cout << i+1 << "  ";
        cout<<"            ";
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<"           ";
    }
    cout << endl;

   }

   else if(E.compare(d[3])==0){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            strcpy(coll,d[0].c_str());

            array[i][j] = '0';

             int n=0;

            for(int k = 3; k < 8; k++,n++)
            {
                array[0][k] = coll[n];

                coll[n]={};

            }

            n=0;
            strcpy(coll,d[1].c_str());
            for(int k = 0; k < 7; k++,n++)
            {
                array[k][6] = coll[n];
                coll[n]={};
            }

            n=0;
            strcpy(coll,d[2].c_str());
            for(int k = 3; k < 8; k++,n++)
            {
                array[3][k] = coll[n];
                coll[n]={};
            }

            n=0;
            strcpy(coll,d[3].c_str());
            for(int k = 3; k < 8; k++,n++)
            {
                array[k][3] = coll[n];
                coll[n]={};
            }

            for(int k = 0; k < 3; k++)
            {
                array[6][k] = '*';
                array[6][4]='*';
            }

        }

    }

    for (int i = 0; i < 8; i++)
    {
        cout<<"            ";
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<"          ";
    }
    cout << endl;



     }

     else if(E.compare(d[4])==0){
            for (int i = 0; i < 8; i++)
           {
           for (int j = 0; j < 8; j++)
           {
            strcpy(coll,d[0].c_str());

            array[i][j] = '0';

             int n=0;

            for(int k = 3; k < 8; k++,n++)
            {
                array[0][k] = coll[n];

                coll[n]={};

            }

            n=0;
            strcpy(coll,d[1].c_str());
            for(int k = 0; k < 7; k++,n++)
            {
                array[k][6] = coll[n];
                coll[n]={};
            }

            n=0;
            strcpy(coll,d[2].c_str());
            for(int k = 3; k < 8; k++,n++)
            {
                array[3][k] = coll[n];
                coll[n]={};
            }

            n=0;
            strcpy(coll,d[3].c_str());
            for(int k = 3; k < 8; k++,n++)
            {
                array[k][3] = coll[n];
                coll[n]={};
            }

            n=0;
            strcpy(coll,d[4].c_str());
            for(int k = 0; k < 5; k++,n++)
            {
                array[6][k] = coll[n];
                coll[n]={};
            }

        }

    }

    for (int i = 0; i < 8; i++)
    {
        cout<<"            ";
        for (int j = 0; j < 8; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<"           ";
    }
    cout << endl;



     }
     else{
        cout<<"/n YOU HAVE TYPED WRONG WORD"<<endl;
     }



}

void clues(gameClue c)
{
    cout<<"\t********************Covid-19 CROSSWORD PUZZLE********************\n\n"<<endl;
    cout<<"\t\t\t***LEVEL 1 GAME CLUES***\n"<<endl;
    cout<<"\t\t*DOWN*\n"<<endl;
    cout<<"\t2. also known as smell blindness, is the loss of the ability to detect one or more smells"<<endl;
    cout<<"\t3. having a temperature above the normal range due to an increase in the body's temperature"<<endl;
    cout<<"\n\t\t*ACROSS*\n"<<endl;
    cout<<"\t1. ____ congestion is the blockage of breathing usually due to membranes lining the nose becoming swollen from inflamed blood vessels\t"<<endl;
    cout<<"\t3. True/False : All people have the same symptoms for covid 19"<<endl;
    cout<<"\t4. having a temperature above the normal range due to an increase in the body's temperature"<<endl;
    cout<<endl<<endl;

}

void cluesLevelTwo(gameClueLevelTwo c)
{
    cout<<"\t********************Covid-19 CROSSWORD PUZZLE********************\n\n"<<endl;
    cout<<"\t\t\t***LEVEL 2 GAME CLUES***\n"<<endl;
    cout<<"\t\t*DOWN*\n"<<endl;
    cout<<"\t1. uses a chimpanzee adenovirus vaccine vector. This is a harmless, weakened adenovirus that usually causes the common cold in chimpanzees"<<endl;
    cout<<"\t3. liquid used to disinfect germs to prevent the spread of covid 19"<<endl;
    cout<<"\t4. is a biological preparation that provides active acquired immunity to a particular infectious disease"<<endl;
    cout<<"\t5. What would one wear to prevent the spread of covid 19"<<endl;
    cout<<"\t7. the minimum distance between people to minimise the spread of the virus is ____ meter(s)"<<endl;
    cout<<"\n\t\t*ACROSS*\n"<<endl;
    cout<<"\t2. True or False: A person who has no symptoms of COVID-19 is not a risk to others.\t"<<endl;
    cout<<"\t6. a place of isolation in which people or animals that have arrived from elsewhere or been exposed to infectious or contagious disease are placed"<<endl;
    cout<<"\t8. The “corona” in coronavirus means: ___. Spike proteins on these viruses’ outer coating give them the appearance of a crown or halo"<<endl;
    cout<<endl<<endl;
}

void backgroundColor(myColor bc){
   system("color 1f");
   cout<<"\n\n\n";
   cout<<"\n\t\t WELCOME TO CROSSWORD MENU SCREEN \n"<<endl;
}

void printBanner(myBanner b){
    std::ifstream myfile1;
    //ifstream myfile1;
    myfile1.open("banner.txt");

    string lines;

    while(getline(myfile1, lines)){cout << lines << "\n";}
    myfile1.close();
}

// DATA STRUCTURE AND STRUCTURE:
void displayAnnouncement(dStRUCTURE d){
   vector<string> m_vctr{ "Crossword ", " Puzzle "," Is "," Entertaining " };

   //DATA STRUCTURE:
m_vctr.push_back(" And Fun");
for (auto ptu = m_vctr.begin(); ptu != m_vctr.end(); ++ptu)

   //POINTER:
cout << ' ' << *ptu;
}

