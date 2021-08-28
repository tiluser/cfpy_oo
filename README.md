# cfpy_oo
Creole Forth for Python example with OpenOffice (turns on and off an Arduino LED)

1. The 	APSO plugin https://extensions.libreoffice.org/en/extensions/show/apso-alternative-script-organizer-for-python is strongly recommended. It allows the user to open a Python shell in LibreOffice.  

2. Once it's installed the menu path Tools-->Macros-->Organize Python Scripts is available. To determine
   the Python specific to LibreOffice, you can open Menu-->Python Shell.
   
3. From there type the following to get your python executable path:
   import os
   import sys
   print(sys.executable)
   
4. pyserial must be available in order for the Arduino example to run. If it isn't installed, already,
   install it.

   {python-path} -m pip install pyserial
