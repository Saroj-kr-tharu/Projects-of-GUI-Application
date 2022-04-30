//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
bool choice=false;
bool click[8]={false,false,false,false,false,false,false,false};
int answer=0;   // 99=winner , 0
int logic();
int num=0;
String a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
			Button1->Caption="";
			Button2->Caption="";
			Button3->Caption="";
			Button4->Caption="";
			Button5->Caption="";
			Button6->Caption="";
			Button7->Caption="";
			Button8->Caption="";
			Button9->Caption="";
			lblWinner->Caption="";
			choice=false;
			fflush(stdin);
			num=0;
			answer=0;
			click[0]=false;
			click[1]=false;
			click[2]=false;
			click[3]=false;
			click[4]=false;
			click[5]=false;
			click[6]=false;
			click[7]=false;
			click[8]=false;
		  //	click[9]=false;



}
//---------------------------------------------------------------------------

int logic(){

if( a1=='X' && a2=='X' && a3=='X' && num>=3 )
		{
		   a10="Player 1 Winner";
		   return 99;
		}
else if(  a4=='X' && a5=='X' && a6=='X' && num>=3)
	{
		  a10="Player 1 Winner";
		   return 99;
	}
else if(  a7=='X' && a8=='X' && a9=='X' && num>=3)
	{
		 a10="Player 1 Winner";
		  return 99;
	}
else if(  a1=='X' && a4=='X' && a7=='X' && num>=3)
	{
			a10="Player 1 Winner";
			 return 99;
	}
else if(  a2=='X' && a5=='X' && a8=='X' && num>=3)
	{
			a10="Player 1 Winner";
			 return 99;
	}
else if(  a3=='X' && a6=='X' && a9=='X' && num>=3)
	{
			a10="Player 1 Winner";
			 return 99;
	}
else if(  a1=='X' && a5=='X' && a9=='X' && num>=3)
	{
			a10="Player 1 Winner";
			 return 99;
	}
else if(  a3=='X' && a5=='X' && a7=='X' && num>=3)
	{
			a10="Player 2 Winner";
			 return 99;
	}

else if( a1=='O' && a2=='O' && a3=='O' && num>=3 )
		{
			a10="Player 1 Winner";
			 return 99;
		}

else if(  a4=='O' && a5=='O' && a6=='O' && num>=3)
	{
		  a10="Player 2 Winner";
		   return 99;
	}
else if(  a7=='O' && a8=='O' && a9=='O' && num>=3)
	{
		 a10="Player 2 Winner";
		  return 99;
	}
else if(  a1=='O' && a4=='O' && a7=='O' && num>=3)
	{
			a10="Player 2 Winner";
			 return 99;
	}
else if(  a2=='O' && a5=='O' && a8=='O' && num>=3)
	{
			a10="Player 2 Winner";
			 return 99;
	}
else if(  a3=='O' && a6=='O' && a9=='O' && num>=3)
	{
			a10="Player 2 Winner";
			 return 99;
	}
else if(  a1=='O' && a5=='O' && a9=='O' && num>=3)
	{
			a10="Player 2 Winner";
			 return 99;
	}
else if(  a3=='O' && a5=='O' && a7=='O' && num>=3)
	{
			a10="Player 2 Winner";
			 return 99;
	}
else if( num>=9 ){
		a10="Game Draw";
		answer=9;
		return 10;
}
else{
	return 0;
}

}
void __fastcall TForm1::Button11Click(TObject *Sender)
{
		exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{   if(click[0]==false){

	if(answer==0){
		 if(choice==true){
			Button1->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button1->Caption="O";
			  choice=true;
			  num++;
		}
		click[0]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {

}


}
else{
	if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}

}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{if(click[1]==false){

	if(answer==0){
		 if(choice==true){
			Button2->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button2->Caption="O";
			  choice=true;
			  num++;
		}
		click[1]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}


}
else{
		if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if(click[2]==false){

	if(answer==0){
		 if(choice==true){
			Button3->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button3->Caption="O";
			  choice=true;
			  num++;
		}
		click[2]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}


}
else{
	if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if(click[3]==false){

	if(answer==0){
		 if(choice==true){
			Button4->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button4->Caption="O";
			  choice=true;
			  num++;
		}
		click[3]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}


}
else{
		if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{

	if(click[4]==false){

	if(answer==0){
		 if(choice==true){
			Button5->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button5->Caption="O";
			  choice=true;
			  num++;
		}
		click[4]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}


}
else{
	if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}





}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
		if(click[5]==false){

	if(answer==0){
		 if(choice==true){
			Button6->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button6->Caption="O";
			  choice=true;
			  num++;
		}
		click[5]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}


}
else{
		if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
	Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);
	}
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	if(click[6]==false){

	if(answer==0){
		 if(choice==true){
			Button7->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button7->Caption="O";
			  choice=true;
			  num++;
		}
		click[6]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {

}


}
else{
	if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	if(click[7]==false){

	if(answer==0){
		 if(choice==true){
			Button8->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button8->Caption="O";
			  choice=true;
			  num++;
		}
		click[7]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {

}


}
else{
		if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	if(click[8]==false){

	if(answer==0){
		 if(choice==true){
			Button9->Caption="X";
		  choice=false;
		  num++;
		}
		else{
			  Button9->Caption="O";
			  choice=true;
			  num++;
		}
		click[8]=True;
		a1= Button1->Caption;
		a2=	Button2->Caption;
		a3=	Button3->Caption;
		a4=	Button4->Caption;
		a5=	Button5->Caption;
		a6=	Button6->Caption;
		a7=	Button7->Caption;
		a8=	Button8->Caption;
		a9=	Button9->Caption;

	   int ch= logic();
	   if(ch==99 ){
		 answer=99;
		 lblWinner->Caption=a10;
	   }
	   else  if( ch==10){   // draw back
		lblWinner->Caption=a10;
	   }
	   else   {
		lblWinner->Caption="Game started";
	   }

}
else if( answer==99){
	   Application->MessageBox(L"Winner is declared .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

}
else {

}


}
else{
		if(answer==9 ){
	Application->MessageBox(L"Game is draw .. please reset",L"Error",MB_OK|MB_ICONASTERISK);

	}
	else{
		Application->MessageBox(L"Already located .. please chosse another",L"Error",MB_OK|MB_ICONASTERISK);

	}
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerTimer(TObject *Sender)
{
		 // lblWinner->Caption="check";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Button1->Caption="";
			Button2->Caption="";
			Button3->Caption="";
			Button4->Caption="";
			Button5->Caption="";
			Button6->Caption="";
			Button7->Caption="";
			Button8->Caption="";
			Button9->Caption="";
			lblWinner->Caption="";
			choice=false;
			fflush(stdin);
			num=0;
			answer=0;
			click[0]=false;
			click[1]=false;
			click[2]=false;
			click[3]=false;
			click[4]=false;
			click[5]=false;
			click[6]=false;
			click[7]=false;
			click[8]=false;
}
//---------------------------------------------------------------------------

