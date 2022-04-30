//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int a,b,c=0,d=0,e=0,n=0;
bool check=false; // operator using
double aa,bb,cc;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}


//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn9Click(TObject *Sender )   // number 1
{
				if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="1";
				else
					lblOutput->Caption = lblOutput ->Caption +"1";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn10Click(TObject *Sender)    //number 2
{
				if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="2";
				else
					lblOutput->Caption = lblOutput ->Caption +"2";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn12Click(TObject *Sender)    // number 3
{
		if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="3";
				else
					lblOutput->Caption = lblOutput ->Caption +"3";
				 }
		
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn11Click(TObject *Sender)     // number -
{                n=0;
				check=true;
		//	a=lblOutput->Caption.ToInt();
				if(e=1){
					aa=lblOutput->Caption.ToDouble();
					}
				else{
					a=lblOutput->Caption.ToInt();
				}

				lblOutput->Caption=" ";
				d=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn7Click(TObject *Sender)        // number x
{                n=0;
		   //	a=lblOutput->Caption.ToInt();
				if(e=1){
					aa=lblOutput->Caption.ToDouble();
					}
				else{
					a=lblOutput->Caption.ToInt();
				}
				lblOutput->Caption=" ";
				d=3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn8Click(TObject *Sender)     // number 6
{
		if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
		else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="6";
				else
					lblOutput->Caption = lblOutput ->Caption +"6";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn6Click(TObject *Sender) // number 5
{
			if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="5";
				else
					lblOutput->Caption = lblOutput ->Caption +"5";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)     // number 4
{
			if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="4";
				else
					lblOutput->Caption = lblOutput ->Caption +"4";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)      // number divide
{               if(e=1){
					aa=lblOutput->Caption.ToDouble();
					}
				else{
					a=lblOutput->Caption.ToInt();
				}
				n=0;
			 //	a=lblOutput->Caption.ToInt();
				lblOutput->Caption=" ";
				d=4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)   // number 9
{		if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="9";
				else
					lblOutput->Caption = lblOutput ->Caption +"9";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)   // number 8
{
				if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="8";
				else
					lblOutput->Caption = lblOutput ->Caption +"8";
				 }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)     // number 7
{
				if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
					lblOutput ->Caption ="7";
				else
					lblOutput->Caption = lblOutput ->Caption +"7";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn13Click(TObject *Sender)   //number 0
{
			if(lblOutput ->Caption.Length()==8)
				{
					   return ;

				}
				 else{
					if(  lblOutput->Caption ==  "0" )
						return;
					else
					lblOutput->Caption = lblOutput ->Caption+ "0";
				 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn14Click(TObject *Sender)   // number point
{
			if(  lblOutput->Caption ==  "." ){
					return;
			}

			else{
			 if(n==0){
			lblOutput->Caption = lblOutput ->Caption + ".";
			n++;
			}
			else{

				return;
            }

					e=1;
			}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn16Click(TObject *Sender)      // number +
{
               n=0;
			   if(e==1){
			   aa=lblOutput->Caption.ToDouble();
			   }
			   else{
				   a=lblOutput->Caption.ToInt();
			   }
				lblOutput->Caption=" ";
				d=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn15Click(TObject *Sender) // number equal to
{               //double cc,aa,bb;
			  // b=lblOutput->Caption.ToInt();
				  if(e==1){
				 // aa=a;
				  //bb=b;
				  bb=lblOutput->Caption.ToDouble();
				  }
				  else{
					  b=lblOutput->Caption.ToInt();
                  }

				switch(d){
				case 1:       //addition
					if(e==1){
						cc=aa+bb;
					}
					else{
						c=a+b;
                    }
					   //	c=a+b;
						break;
				case 2:       // Subtraction
						   if(e==1){
						   cc=aa-bb;
						   }
						   else{
							   c=a-b;
                           }
							//c=a-b;
							 break;
				case 3:			 // multiplication
						if(e==1){
						cc=aa*bb;
						}
						else{
							c=a*b;
						}

							break;
				case 4:    // Division
					  //	c=a/b;
					   if(e==1){
					   cc=aa/bb;
					   }
					   else{
						 //c=a/b;
						aa=a;
						bb=b;
						cc=aa/bb;
					   }



						break;

				default:
						c=0;
						break;
				}
				String str,str1,str3;
				int num;
				  if( (a<b && d==2) || (aa<bb && d==2) ){
						   if(e==1)
					lblOutput->Caption=cc;
							else
					lblOutput->Caption=c;


					num=lblOutput->Caption.Length();
					str=lblOutput->Caption;
					str1=str.SubString0(1,num);
					str3=str1+"-";
					  lblOutput->Caption=str3;
				  }
				  else if( d==4 || e==1){
						lblOutput->Caption=cc;
				  }
				  else
				  {
						lblOutput ->Caption=c;
				  }



}
//---------------------------------------------------------------------------

void __fastcall TForm1::BItBtn17Click(TObject *Sender)      // number to c
{
		lblOutput ->Caption="0";
		a=0;
		b=0;
		c=0;
		d=0;
		e=0;
		n=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn18Click(TObject *Sender)        // number to del
{           String str;
			int num;
		  // a=lblOutput->Caption.ToInt();
		   //a=length(str);
		  if(lblOutput->Caption == "0"){
		  return;
		  }
		  else if(lblOutput->Caption =="."){
		  e=0;
		  }
		  else {
				 num=lblOutput->Caption.Length();
				 if(num==0){
					lblOutput->Caption="0";
				 }
				 else{
						str=lblOutput->Caption.SubString(0, num -1);
						lblOutput->Caption=str;
				 }

		  }



}
//---------------------------------------------------------------------------

