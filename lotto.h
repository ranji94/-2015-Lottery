//---------------------------------------------------------------------------

#ifndef lottoH
#define lottoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <cstdlib.h>
#include <time.h>
#include <ActnColorMaps.hpp>
#include <ActnMan.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TButton *Button1;
	TButton *Button2;
	TMemo *Memo1;
	TGroupBox *GroupBox1;
	TColorDialog *ColorDialog1;
	TFontDialog *FontDialog1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Memo1DblClick(TObject *Sender);
private:	// User declarations
public:
void losuj();
void babelkowe();
void selekcja();// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
