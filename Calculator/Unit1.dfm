object Form1: TForm1
  Left = 0
  Top = 0
  BiDiMode = bdRightToLeftReadingOnly
  Caption = 'Calculator'
  ClientHeight = 483
  ClientWidth = 384
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  ParentBiDiMode = False
  PixelsPerInch = 96
  TextHeight = 23
  object lbljoker: TLabel
    Left = 104
    Top = 428
    Width = 107
    Height = 58
    Caption = 'Joker'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Segoe Script'
    Font.Style = []
    ParentFont = False
  end
  object lblOutput: TLabel
    Left = 318
    Top = 48
    Width = 11
    Height = 23
    Alignment = taRightJustify
    Caption = '0'
  end
  object BitBtn1: TBitBtn
    Left = 8
    Top = 173
    Width = 81
    Height = 57
    Caption = '7'
    TabOrder = 0
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 95
    Top = 173
    Width = 81
    Height = 57
    Caption = '8'
    TabOrder = 1
    OnClick = BitBtn2Click
  end
  object BitBtn3: TBitBtn
    Left = 269
    Top = 173
    Width = 81
    Height = 57
    Caption = #247
    TabOrder = 2
    OnClick = BitBtn3Click
  end
  object BitBtn4: TBitBtn
    Left = 182
    Top = 173
    Width = 81
    Height = 57
    Caption = '9'
    TabOrder = 3
    OnClick = BitBtn4Click
  end
  object BitBtn5: TBitBtn
    Left = 8
    Top = 236
    Width = 81
    Height = 57
    Caption = '4'
    TabOrder = 4
    OnClick = BitBtn5Click
  end
  object BitBtn6: TBitBtn
    Left = 95
    Top = 236
    Width = 81
    Height = 57
    Caption = '5'
    TabOrder = 5
    OnClick = BitBtn6Click
  end
  object BitBtn7: TBitBtn
    Left = 269
    Top = 236
    Width = 81
    Height = 57
    Caption = 'X'
    TabOrder = 6
    OnClick = BitBtn7Click
  end
  object BitBtn8: TBitBtn
    Left = 182
    Top = 236
    Width = 81
    Height = 57
    Caption = '6'
    TabOrder = 7
    OnClick = BitBtn8Click
  end
  object BitBtn9: TBitBtn
    Left = 8
    Top = 302
    Width = 81
    Height = 57
    Caption = '1'
    TabOrder = 8
    OnClick = BitBtn9Click
  end
  object BitBtn10: TBitBtn
    Left = 95
    Top = 302
    Width = 81
    Height = 57
    Caption = '2'
    TabOrder = 9
    OnClick = BitBtn10Click
  end
  object BitBtn11: TBitBtn
    Left = 269
    Top = 299
    Width = 81
    Height = 57
    Caption = '-'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -29
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = BitBtn11Click
  end
  object BitBtn12: TBitBtn
    Left = 182
    Top = 302
    Width = 81
    Height = 57
    Caption = '3'
    TabOrder = 11
    OnClick = BitBtn12Click
  end
  object BitBtn13: TBitBtn
    Left = 8
    Top = 367
    Width = 81
    Height = 57
    Caption = '0'
    TabOrder = 12
    OnClick = BitBtn13Click
  end
  object BitBtn14: TBitBtn
    Left = 95
    Top = 365
    Width = 81
    Height = 57
    Caption = '.'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
    OnClick = BitBtn14Click
  end
  object BitBtn15: TBitBtn
    Left = 269
    Top = 362
    Width = 81
    Height = 57
    Caption = '='
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -35
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    OnClick = BitBtn15Click
  end
  object BitBtn16: TBitBtn
    Left = 182
    Top = 365
    Width = 81
    Height = 57
    Caption = '+'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
    OnClick = BitBtn16Click
  end
  object BItBtn17: TButton
    Left = 182
    Top = 120
    Width = 168
    Height = 47
    Caption = 'C'
    TabOrder = 16
    OnClick = BItBtn17Click
  end
  object BitBtn18: TButton
    Left = 8
    Top = 120
    Width = 168
    Height = 47
    Caption = 'Del'
    TabOrder = 17
    OnClick = BitBtn18Click
  end
end
