object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 454
  ClientWidth = 632
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = 'Consolas'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 18
  object Label1: TLabel
    Left = 91
    Top = 86
    Width = 80
    Height = 18
    Caption = 'Resultados'
  end
  object Edit1: TEdit
    Left = 159
    Top = 46
    Width = 105
    Height = 26
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 270
    Top = 46
    Width = 105
    Height = 26
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 381
    Top = 46
    Width = 105
    Height = 26
    TabOrder = 2
  end
  object Result1: TEdit
    Left = 91
    Top = 110
    Width = 449
    Height = 26
    TabOrder = 3
  end
  object StringGrid1: TStringGrid
    Left = 91
    Top = 170
    Width = 449
    Height = 38
    DefaultColWidth = 60
    DefaultRowHeight = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 4
  end
  object StringGrid2: TStringGrid
    Left = 91
    Top = 234
    Width = 449
    Height = 174
    DefaultColWidth = 25
    DefaultRowHeight = 25
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 5
    RowHeights = (
      25
      25
      25
      25
      25)
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
    object Modelito11: TMenuItem
      Caption = 'Modelito 1'
      object Modelito12: TMenuItem
        Caption = 'Repetir n'#250'meros'
        OnClick = Modelito12Click
      end
      object Primerasletras1: TMenuItem
        Caption = 'Primeras letras'
        OnClick = Primerasletras1Click
      end
      object CargarMatriz1: TMenuItem
        Caption = 'Cargar Matriz'
        OnClick = CargarMatriz1Click
      end
    end
    object Modelito21: TMenuItem
      Caption = 'Modelito 2'
      object Cargarvectorconlosdigitos1: TMenuItem
        Caption = 'Cargar vector con los digitos'
        OnClick = Cargarvectorconlosdigitos1Click
      end
    end
    object StringGrid3: TMenuItem
      Caption = 'StringGrid'
      object amaodelVector1: TMenuItem
        Caption = 'Tama'#241'o del vector'
        OnClick = amaodelVector1Click
      end
      object amaodelVector2: TMenuItem
        Caption = 'Tama'#241'o de la matriz'
        OnClick = amaodelVector2Click
      end
    end
    object est1: TMenuItem
      Caption = 'Test'
      object est2: TMenuItem
        Caption = 'test 1'
        OnClick = est2Click
      end
    end
  end
end
