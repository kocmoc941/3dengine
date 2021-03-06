object ProcDumpDlg: TProcDumpDlg
  Left = 0
  Top = 0
  Caption = 'Process Memory Map Sample'
  ClientHeight = 537
  ClientWidth = 1016
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object lvMemoryMap: TListView
    Left = 0
    Top = 105
    Width = 1016
    Height = 432
    Align = alClient
    Columns = <
      item
        Caption = 'Address:'
        Width = 80
      end
      item
        Caption = 'Size:'
        Width = 80
      end
      item
        Caption = 'Owner:'
        Width = 100
      end
      item
        Caption = 'Section:'
        Width = 80
      end
      item
        Caption = 'Contains:'
        Width = 195
      end
      item
        Caption = 'Type:'
        Width = 80
      end
      item
        Caption = 'Access:'
        Width = 85
      end
      item
        Caption = 'Initial Access:'
        Width = 90
      end
      item
        Caption = 'Mapped as:'
        Width = 200
      end>
    ReadOnly = True
    RowSelect = True
    TabOrder = 0
    ViewStyle = vsReport
    OnCustomDrawItem = lvMemoryMapCustomDrawItem
  end
  object pnProcess: TPanel
    Left = 0
    Top = 0
    Width = 1016
    Height = 105
    Align = alTop
    TabOrder = 1
    DesignSize = (
      1016
      105)
    object lblHint: TLabel
      Left = 16
      Top = 8
      Width = 73
      Height = 13
      Caption = 'Select process:'
    end
    object cbProcess: TComboBox
      Left = 16
      Top = 21
      Width = 907
      Height = 21
      Style = csDropDownList
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 0
      OnChange = cbProcessChange
    end
    object cbShowFreeMem: TCheckBox
      Left = 16
      Top = 48
      Width = 121
      Height = 17
      Caption = 'Show Free Memory'
      TabOrder = 1
    end
    object cbShowReserve: TCheckBox
      Left = 16
      Top = 72
      Width = 185
      Height = 17
      Caption = 'Show Reserved Memory'
      TabOrder = 2
    end
    object btnRefresh: TButton
      Left = 929
      Top = 19
      Width = 75
      Height = 25
      Anchors = [akTop, akRight]
      Caption = 'Refresh'
      TabOrder = 3
      OnClick = btnRefreshClick
    end
  end
end
