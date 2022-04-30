object Form1: TForm1
  Left = 384
  Top = 100
  Caption = 'Tik tak toe'
  ClientHeight = 391
  ClientWidth = 407
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lblWelcom: TLabel
    Left = 128
    Top = 24
    Width = 150
    Height = 37
    Caption = 'Tik Tak toe'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -29
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 8
    Top = 304
    Width = 116
    Height = 27
    Caption = 'Player 1:- O'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object TLabel
    Left = 8
    Top = 343
    Width = 114
    Height = 27
    Caption = 'Player 2:- X'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblWinner: TLabel
    Left = 159
    Top = 278
    Width = 156
    Height = 27
    Caption = 'Player 1 Winner'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 56
    Top = 104
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 176
    Top = 104
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 288
    Top = 104
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 56
    Top = 160
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 176
    Top = 160
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 288
    Top = 160
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 56
    Top = 216
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 176
    Top = 216
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 288
    Top = 216
    Width = 89
    Height = 41
    Caption = 'Button1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 159
    Top = 329
    Width = 89
    Height = 41
    Caption = 'Reset'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 254
    Top = 329
    Width = 89
    Height = 41
    Caption = 'Exit'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Trebuchet MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 10
    OnClick = Button11Click
  end
end
