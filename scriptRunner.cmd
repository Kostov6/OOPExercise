@ECHO ON

SET cmdtxt=%~1
SET cName=%~N1

if exist "%tmp%\%cName%.cmd" del /q /f "%tmp%\%cName%.cmd"
if not exist "%tmp%\%cName%.cmd" type "%cmdtxt%" >> "%tmp%\%cName%.cmd"
cmd /k "%tmp%\%cName%.cmd"

pause
exit