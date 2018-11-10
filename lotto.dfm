object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Losowanie Lotto'
  ClientHeight = 355
  ClientWidth = 376
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 361
    Height = 339
    Caption = 'Losowanie'
    Color = clSkyBlue
    Font.Charset = ANSI_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Algerian'
    Font.Style = []
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 6
  end
  object Button1: TButton
    Left = 286
    Top = 29
    Width = 75
    Height = 25
    Caption = 'Wykonaj'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Algerian'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 22
    Top = 102
    Width = 339
    Height = 185
    Hint = 'Kliknij dwukrotnie myszk'#261', aby zmieni'#263' kolor i czcionk'#281' konsoli'
    Color = clMenuText
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Fixedsys'
    Font.Style = []
    Lines.Strings = (
      'Rozpocznij losowanie')
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ShowHint = True
    TabOrder = 5
    OnDblClick = Memo1DblClick
  end
  object Button2: TButton
    Left = 286
    Top = 309
    Width = 75
    Height = 25
    Caption = 'Koniec'
    Font.Charset = ANSI_CHARSET
    Font.Color = clTeal
    Font.Height = -13
    Font.Name = 'Algerian'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Button2Click
  end
  object RadioButton3: TRadioButton
    Left = 22
    Top = 79
    Width = 155
    Height = 17
    Caption = 'Selekcja'
    Color = clSkyBlue
    Enabled = False
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    TabOrder = 2
  end
  object RadioButton2: TRadioButton
    Left = 22
    Top = 56
    Width = 155
    Height = 17
    Caption = 'B'#261'belkowanie'
    Color = clSkyBlue
    Enabled = False
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    TabOrder = 1
  end
  object RadioButton1: TRadioButton
    Left = 22
    Top = 33
    Width = 155
    Height = 17
    Caption = 'Losuj'
    Checked = True
    Color = clSkyBlue
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    TabOrder = 0
    TabStop = True
  end
  object ColorDialog1: TColorDialog
    Left = 24
    Top = 304
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 64
    Top = 304
  end
end
