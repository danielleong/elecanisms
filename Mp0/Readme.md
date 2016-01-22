Daniel Leong
MP0 Documentation
1/21/16

In order to run this, you need to have python, PIP, git, and homebrew installed. 

Part 1: Set up environment and get repository.
1. Download the Microchip Installer for your OS at: http://www.microchip.com/compilers 
2. Follow installation wizard, accepting all defaults. Check 'Add to Path' so you can use it from the command line
3. Download scons by typing "$ brew install scons" on your termnal
4. Fork and clone Daniel Leong's Elecanisms git repo at: https://github.com/danielleong/elecanisms
5. Download the pysub tarball (which allows you to communicate with the microcontroller) at: http://walac.github.io/pyusb/
6. Navigate to the /downloads/walac-pysub-c1544b0 folder in Terminal and run "python setup.py install"

Part 2: Compile and Run blink.c
1. Navigate to elecanisms/blink in the terminal.
2. While in the blink directory, type "scons" to compile the code. This will create a "blink.hex" file in the directory that will be needed later.
3. Naviate to elecanisms/site-scons in the terminal.
4. Launch the bootloader gui by typing "python bootloadergui.py" into the terminal.
5. The GUI will launch. To pair the computer with the PIC, hold down the black button and press/release the red button. After doing this, clicking "connect" on the GUI will pair the two.
6. Import your code to be written by clicking File->Import and selecting blink.hex from the blink directory. This is the compiled code.
7. Click "write" on the gui to write the code to the PIC and "Run/Disconnect" to run the code. 


This blink.c file does the following: First, it initializes the Red LED to flash every .6 seconds. When one button is pressed, the green LED toggles and the Red LED flashes every .2 seconds. When the other button is pressed, the blue LED toggles and the Red LED resumes flashing at its original frequency.


