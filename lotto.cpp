/* Jêdrzej Piasecki grupa E4Y3S1 26.05.2015
Program losuj¹cy 10 liczb powtarzalnych, z zakresu <1;60>
Sortuj¹cy wylosowane liczby b¹belkowo oraz przez selekcjê
*/

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "lotto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int losowa, liczby[10],temp;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
srand (time(NULL));
}
//---------------------------------------------------------------------------
void TForm1::losuj()
{
   RadioButton1->Caption="Losuj ponownie";
   Memo1->Lines->Clear();
	Memo1->Lines->Add("Wylosowane 10 liczb:");
   RadioButton2->Enabled=true;
   for(int i=0;i<10;i++)
   {
   losowa = rand() % 60;
   liczby[i]=losowa;
   Memo1->Text=(Memo1->Text)+IntToStr(liczby[i])+"  ";
   }
   RadioButton1->Enabled=false;
   RadioButton3->Enabled=true;
   RadioButton1->Checked=false;
   RadioButton2->Checked=true;
}

void TForm1::babelkowe()
{
	   for( int i = 0; i < 10; i++ )
	{
		for( int j = 0; j < 10 - 1; j++ )
		{
			if( liczby[ j ] > liczby[ j + 1 ] )
			{
			   //swap( liczby[ j ], liczby[ j + 1 ] );
			   temp=liczby[j];
			   liczby[j]=liczby[j+1];
			   liczby[j+1]=temp;
			}


		}
	}
	Memo1->Lines->Add("Sortowanie b¹belkowe:");
	Memo1->Lines->Add("");
	for(int i=0;i<10;i++)
	{
		Memo1->Text=(Memo1->Text)+IntToStr(liczby[i])+"  ";
	}
	RadioButton2->Enabled=false;
	RadioButton2->Checked=false;
	RadioButton3->Enabled=false;
	RadioButton1->Checked=true;
	RadioButton1->Enabled=true;
}

void TForm1::selekcja()
{
 int min;
 Memo1->Lines->Add("Sortowanie przez selekcjê:");
 Memo1->Lines->Add("");
	 for (int i = 0; i < 10; i++)
	 {
	 min=i;
		 for( int j=i+1; j<10; j++)
		 {
			 if(liczby[j]<liczby[min])
			 {
				 min=j;
             }
		 }
		 int temp;
		 temp=liczby[i];
		 liczby[i]=liczby[min];
		 liczby[min]=temp;
		 Memo1->Text=(Memo1->Text)+IntToStr(liczby[i])+"  ";
	 }
	RadioButton2->Enabled=false;
	RadioButton3->Checked=false;
	RadioButton3->Enabled=false;
	RadioButton1->Checked=true;
	RadioButton1->Enabled=true;
}


void __fastcall TForm1::Button1Click(TObject *Sender)
{

if(RadioButton1->Checked==true)
losuj();
else if(RadioButton2->Checked==true)
babelkowe();
else if(RadioButton3->Checked==true)
selekcja();


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Close();	
}

void __fastcall TForm1::Memo1DblClick(TObject *Sender)
{
  if (ColorDialog1->Execute())
	Memo1->Color = ColorDialog1->Color;

  if (FontDialog1->Execute())
  Memo1->Font=FontDialog1->Font;

  if (Memo1->Color==Memo1->Font->Color)
  {
	  Memo1->Color=clBlack;
	  Memo1->Font->Color=clWhite;
  }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

