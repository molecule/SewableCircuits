# SewableCircuits

Here are some helpful instructions for working with your new sewn circuit!
* [Powerpoint introduction to Sewable Circuits](https://docs.google.com/presentation/d/14p3HbcLUWE8E2FS8ceg57LK_pjIwFioKY8-eXRUtqXw/edit?usp=sharing)

## Set up your computer to work with the Gemma boards
### 1. The first step is to download and install the drivers.
a. Go through "Getting Started" at codebender.cc. You will have to register at the site.

b. Create a new profile and just go through each of the steps. It will download and install the drivers.

c. When it asks you for the board, select the Adafruit Gemma 8MHz made by Adafruit. It will 
automatically select the correct programmer, which is USBTinyISP. NOTE: You can stop after the drivers
have installed, OR you can go all the way to the end of the "Getting Started" sequence, and load 
“blink” onto your Gemma as a test. Don't forget to put your Gemma into "Bootloader" mode by pressing
the "reset" button on the board.

<img style="float: center;" src="http://i.imgur.com/S5buZln.png">

### 2. Follow these instructions to download and install the IDE:
a. The last step you need to do on this list is adding the "Contributed boards" in the "Board Manager."

https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide

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

## Interesting links
Here is [Adafruit's Uberguide to the awesome Neopixel LEDs](https://learn.adafruit.com/adafruit-neopixel-uberguide/overview):

Here is more information about [Adafruit's Gemma](https://learn.adafruit.com/introducing-gemma), the microcontroller we used.

My [favorite Neopixel program ever](https://github.com/molecule/neopixelplasma) (works on the Gemma!):

Some [more Arduino projects](http://www.instructables.com/id/20-Unbelievable-Arduino-Projects/) (there are literally millions of tutorials out there!):


## Bill of Materials
| Component | Link | Quantity  | Cost | Description |
| ------------- | ------------- | ------------- | ------------- | ------------- |
| Gemma v.2  | https://www.adafruit.com/products/1222  | 1  | $9.95 | The microcontroller. For this version we used Adafruit's version of the Gemma |
| Micro Lipo Charger| https://www.adafruit.com/products/1304  | 1  | $5.95 | This is for recharging your LithiumIon battery. |
| Sewing needle | https://www.adafruit.com/products/615 | 1 | $1.95 | You really only need one needle, but they're usually sold in packs. Needles with eye sizes between 3 and 6 work well with the conductive thread. |
| Conductive thread | https://www.adafruit.com/products/640 | 1 | $5.95 | 2-ply thread that connects all of the components. |
| Smart Neopixels | https://www.adafruit.com/products/1260 | 4 | $7.95 | For this project, each person used 3 Neopixels |
| Sewable Snaps | https://www.adafruit.com/products/1126 | 6 | $3.95 | Optional. This is only necessary if you want to be able to remove your Gemma from your project. |
| Velcro | http://preview.tinyurl.com/he9psrd | 1 | $3.78 | Optional. This is to stick to your battery, and to your project, so you can hold the battery in place while you're wearing it, but easily remove it for washing. |
| Lithium Ion Polymer Battery | https://www.adafruit.com/products/1578 | 1 | $7.95 | The 3.7v 500mAh one will keep 3 LEDs lit for about 5 hours. You could also use this 3.7v 100mAh battery which should also last quite a while: https://www.adafruit.com/products/1570 |
| USB Micro-B Cable | https://www.sparkfun.com/products/13244 | 1 | $1.95 | This is used to connect your Gemma to your computer in order to upload the code. |
