// ---------------------------------------------------------------------------

#ifndef ModelitosFormH
#define ModelitosFormH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Modelito11;
	TMenuItem *Modelito12;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Result1;
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TStringGrid *StringGrid2;
	TMenuItem *amaodelVector1;
	TMenuItem *amaodelVector2;
	TMenuItem *StringGrid3;
	TMenuItem *Primerasletras1;
	TMenuItem *est1;
	TMenuItem *est2;
	TMenuItem *CargarMatriz1;
	TMenuItem *Modelito21;
	TMenuItem *Cargarvectorconlosdigitos1;

	void __fastcall Modelito12Click(TObject *Sender);
	void __fastcall amaodelVector1Click(TObject *Sender);
	void __fastcall Primerasletras1Click(TObject *Sender);
	void __fastcall est2Click(TObject *Sender);
	void __fastcall amaodelVector2Click(TObject *Sender);
	void __fastcall CargarMatriz1Click(TObject *Sender);
	void __fastcall Cargarvectorconlosdigitos1Click(TObject *Sender);

private: // User declarations
public: // User declarations
	__fastcall TForm1(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
