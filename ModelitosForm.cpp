// ---------------------------------------------------------------------------
#include <vcl.h>
#include <cmath>
#pragma hdrstop

#include "ModelitosForm.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
// Escribir una funcion que devuelva una cadena a partir de un numero
// Ej: Literal(n=132) -> "133322"
AnsiString Literal(Cardinal n) {
	AnsiString s = "";
	if (n < 10) {
		return ((pow(10, n) - 1) / 9) * n;
	}
	else {
		byte dig = n % 10;
		Cardinal formule = (pow(10, dig) - 1) / 9;
		return Literal(n / 10) + (formule * dig);
	}
}

void __fastcall TForm1::Modelito12Click(TObject *Sender) {
	Result1->Text = Literal(StrToInt(Edit1->Text));
}

// ---------------------------------------------------------------------------
AnsiString Generar(TStringGrid *v, byte n) {
	AnsiString s = "";
	if (n == 0) {
		// s = "";
	}
	else if (n == 1) {
		s = v->Cells[0][0][1];
	}
	else {
		s = Generar(v, n - 1) + v->Cells[n - 1][0][1];
	}
	return s;
}

void __fastcall TForm1::amaodelVector1Click(TObject *Sender) {
	StringGrid1->ColCount = StrToInt(Edit1->Text);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Primerasletras1Click(TObject *Sender) {
	Result1->Text = Generar(StringGrid1, StringGrid1->ColCount);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::est2Click(TObject *Sender) {
	Result1->Text = StringGrid1->Cells[0][0][1];
}
// ---------------------------------------------------------------------------

// Cargar una matriz de la siguiente forma:
// 1  2  3  4  5
// 10 9  8  7  6
// 11 12 13 14 15
// 20 19 18 17 16
void CargarMatriz(TStringGrid *A, Word k, byte f, byte c, bool sw) {
	if (k > 0) {
		A->Cells[c][f] = k;
		if ((c == A->ColCount - 1 && sw) || (c == 0 && !sw)) {
			f--;
			sw = !sw;
		}
		else
			c = sw ? c + 1 : c - 1;
		CargarMatriz(A, k - 1, f, c, sw);
	}
}

void __fastcall TForm1::amaodelVector2Click(TObject *Sender) {
	StringGrid2->RowCount = StrToInt(Edit1->Text);
	StringGrid2->ColCount = StrToInt(Edit2->Text);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::CargarMatriz1Click(TObject *Sender) {
	byte m = StringGrid2->RowCount;
	byte n = StringGrid2->ColCount;
	CargarMatriz(StringGrid2, m*n, m - 1, 0, true);
}

// ---------------------------------------------------------------------------
// Modelo de examen 2
// 1. Cargar un vector con digitos de un número de la siguiente forma
// x=2735 -> v[5, 3, 7, 2]
void SetVector(TStringGrid *v, Cardinal num, byte size) {
	if (num == 0) {
		// nada
	}
	else if (num < 10) {
		v->Cells[size][0] = num;
	}
	else {
		byte dig = num % 10;
		SetVector(v, num / 10, size + 1);
		v->Cells[size][0] = dig;
	}
}

void __fastcall TForm1::Cargarvectorconlosdigitos1Click(TObject *Sender) {
	byte size = Edit1->Text.Length();
	StringGrid1->ColCount = size;
	SetVector(StringGrid1, StrToInt(Edit1->Text), 0);
}
// ---------------------------------------------------------------------------
