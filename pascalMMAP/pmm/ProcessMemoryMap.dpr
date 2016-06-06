program ProcessMemoryMap;

uses
  Forms,
  uProcessMMapDlg in 'Sources\uProcessMMapDlg.pas' {ProcDumpDlg};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TProcDumpDlg, ProcDumpDlg);
  Application.Run;
end.
