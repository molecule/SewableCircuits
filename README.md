# SewableCircuits

Here are some helpful instructions for working with your new sewn circuit!

<img style="float: center;" src="http://i.imgur.com/ZUYhnt7.png">

## Set up your computer to work with the Gemma boards
### 1. The first step is to download and install the drivers.
a. Go through "Getting Started" at codebender.cc. You will have to register at the site.

b. Create a new profile and just go through each of the steps. It will download and install the drivers.

c. When it asks you for the board, select the Adafruit Gemma 8MHz made by Adafruit. 
<img style="float: center;" src="http://i.imgur.com/S5buZln.png">

d. You can go all the way to the end of the "Getting Started" sequence, and load “blink” 
onto your Gemma as a test, or you can stop after the drivers have downloaded.

### 2. Follow these instructions to download and install the IDE:
a. The last step you need to do on this list is adding the "Contributed boards" in the "Board Manager."

https://learn.adafruit.com/adafruit­arduino­ide­setup/arduino­1­dot­6­x­ide

b. NOTE: You don't need to download the drivers, or do the "Easy Installation." 
Once you've added the "Contributed boards" you are finished with this step.

### 3. You also need to install the Adafruit Neopixel library. Follow instructions here:
https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library


## Upload code to your Adafruit Gemma
### 1. Open the IDE. 
If you're using the Adafruit Gemma (with a black PCB board) select the Adafruit Gemma 8MHz
<img style="float: center;" src="http://i.imgur.com/3GkGfS3.gif">

Then, select USBtinyISP from the Tools->Programmer sub-menu
<img style="float: center;" src="http://i.imgur.com/Xevq4UI.gif">

### 2. Get Into Bootloader Mode
Plug in the Gemma, make sure you see the green LED lit (that means power is good) 
and the red LED pulsing. If the red LED is not pulsing, press the tiny "reset" button 
to get into bootloader mode. 

Click the Upload button (or select File->Upload)

<img style="float: center;" src="http://i.imgur.com/5tnWT6L.gif">

If everything goes smoothly you should see the following in the IDE (no red error 
messages in the black part of the window, and “Done uploading”). And of course, 
the red LED on the Gemma will blink on/off once a second:

<img style="float: center;" src="http://i.imgur.com/tG64X0A.gif">

## Troubleshooting
### 1. If you get the error message avrdude: Error: Could not find USBtiny device (0x1781/0xc9f)
That means the bootloader wasn't active. Make sure to press the button on the Gemma to 
activate the bootloader before clicking the Upload button.

<img style="float: center;" src="http://i.imgur.com/L84yl3p.gif">

