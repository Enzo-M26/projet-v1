//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TGroupBox *GBValeur;
	TLabel *LAmplitude;
	TEdit *L;
	TEdit *Edit6;
	TEdit *Edit7;
	TLabel *LDur�e;
	TLabel *Label7;
	TEdit *Edit8;
	TLabel *Label8;
private:	// D�clarations utilisateur
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
