#include<iostream.h>
#include<conio.h>
#include<process.h>
void display(char s[][25])
{
 cout<<"\n-------------------------";
 for(int i=0;i<6;i++)
 {
  cout<<"\n";
  for(int j=0;j<25;j++)
  cout<<s[i][j];
  if(i==1||i==3)
  cout<<"\n-------------------------";
 }
 cout<<"\n-------------------------"<<endl;
 return;
}
void main()
{
 clrscr();
 char s[6][25]={"|  4  A  B  |  C  D  3  |", "|  E  3  1  |  F  G  H  |",
		"|  I  J  K  |  3  6  L  |", "|  M  2  N  |  5  O  P  |",
		"|  1  Q  R  |  S  T  5  |", "|  U  V  3  |  W  2  X  |"};
 char pos, ans;
 int count=24, life=3;
 char sol[24]={'6', '5', '2', '1', '2', '4', '5', '6', '5', '1', '4', '2', '3'
	                ,'6', '4', '1', '4', '2', '6', '3', '6', '5', '1', '4'};
 do
 {
  clrscr();
  cout<<"\n SUDOKU:";
  cout<<"\n RULES:\n 1. Positions must be entered in uppercase    only!";
  cout<<"\n 2. You have three lives which will decrease with a wrong answer.";
  cout<<"\n 3. Press enter to continue.";
  cout<<"\n 4. Enter 0 to quit.";
  cout<<"\n 5. ENJOY!";
  display(s);
  cout<<"Enter position: ";
  cin>>pos;
  if (pos=='0')
  {
   exit(0);
  }
  cout<<"Enter number: ";
  cin>>ans;
  switch(pos)
  {
   case 'A': if(ans==sol[0])
	     {
	      s[0][6]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'B': if(ans==sol[1])
	     {
	      s[0][9]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'C': if(ans==sol[2])
	     {
	      s[0][15]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'D': if(ans==sol[3])
	     {
	      s[0][18]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'E': if(ans==sol[4])
	     {
	      s[1][3]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'F': if(ans==sol[5])
	     {
	      s[1][15]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'G': if(ans==sol[6])
	     {
	      s[1][18]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'H': if(ans==sol[7])
	     {
	      s[1][21]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'I': if(ans==sol[8])
	     {
	      s[2][3]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'J': if(ans==sol[9])
	     {
	      s[2][6]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'K': if(ans==sol[10])
	     {
	      s[2][9]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'L': if(ans==sol[11])
	     {
	      s[2][21]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'M': if(ans==sol[12])
	     {
	      s[3][3]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'N': if(ans==sol[13])
	     {
	      s[3][9]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'O': if(ans==sol[14])
	     {
	      s[3][18]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'P': if(ans==sol[15])
	     {
	      s[3][21]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'Q': if(ans==sol[16])
	     {
	      s[4][6]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'R': if(ans==sol[17])
	     {
	      s[4][9]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'S': if(ans==sol[18])
	     {
	      s[4][15]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'T': if(ans==sol[19])
	     {
	      s[4][18]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'U': if(ans==sol[20])
	     {
	      s[5][3]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'V': if(ans==sol[21])
	     {
	      s[5][6]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'W': if(ans==sol[22])
	     {
	      s[5][15]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;
   case 'X': if(ans==sol[23])
	     {
	      s[5][21]=ans;
	      count--;
	     }
	     else
	     {
	      cout<<"Incorrect!";
	      life--;
	     }
	     break;

  }
  cout<<"\n Lives left: "<<life;
  getch();
 } while((count!=0)&&(life!=0));
 if (count==0)
 {
  clrscr();
  display(s);
  cout<<"\nCONGRATULATIONS!";
  cout<<"\nYou Did It!";
 }
 else
 cout<<"\n Better luck next time ";
 getch();
}
