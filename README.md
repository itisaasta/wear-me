# wear-me

Wear me helps bring your wearables idea to life. You can create clothes and accessories that light up or make sound on loop, when you move, press a button, or receive a certain amount of light.

## You will need:
- Laptop with available USB port (Mac, Windows, or Linux)

## This kit contains:
- Boards
  - Adafruit FLORA
  - Adafruit Gemma
- Lights
  - Neopixels
  - Red sequins
  - Blue sequins
  - Neopixel jewels
  - Neopixel 12 rings
  - Neopixel 24 rings
  - Neopixel 60 strips
- Inputs
  - Tilt ball switches
  - Soft potentiometers
  - On/Off switches
  - Color sensors
  - UV light sensors
  - Accelerometer + compass
  - Force sensor
  - Conductive fabric
  - Conductive rubber cord stretch sensor
- Utilities
  - Conductive thread
  - Needles
  - Alligator cables
  - Wire
  - Micro-USB cables
- Tools
  - Electrical tape
  - Wire snips
  - Needlenose pliers

## Getting started
### Install Arduino integrated development environment
In order to program software code for your wearable, you will need to install the Arduino Integrated Development Environment (IDE) on your computer. Please install the Arduino IDE using the link appropriate for your operating system below.
- [Mac](https://www.arduino.cc/download_handler.php?f=/arduino-1.8.5-macosx.zip)
- [Windows](https://www.arduino.cc/download_handler.php?f=https://www.microsoft.com/store/apps/9nblggh4rsd8?ocid=badge)
- [Other](https://www.arduino.cc/en/Main/Software)

### Install Adafruit boards in Arduino IDE
Each of the Adafruit wearables boards needs a support package to run in the Arduino IDE. To add the support package:
1. From the Arduino IDE menu, navigate to Arduino --> Preferences (Mac) or File --> Preferences (PC)
2. Paste the following link into the additional board manager URLs field: https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
3. Click OK to save

### Install Adafruit libraries in Arduino IDE
Each of the Adafruit wearables components requires a library in the Arduino IDE to function. From within the Arduino IDE:
1. From the Arduino IDE menu, Sketch --> Include Library --> Manage Libraries
2. In Library Manager, type the library name in the Filter Your Search field (you do not need to type in the words in parentheses):
- Adafruit Neopixel (lights)
- Adafruit TCS34725 (color sensor)
- Adafruit LSM303DLHC (accelerometer + compass)
- Adafruit SI1145 Library (UV light sensor)
- Capacitive Sensor (conductive fabric)

## Building
You will build the circuits for your idea using alligator clips first, then when it is fully functional, you can sew the circuit into your finished product.

Each component has its own hardware connection diagrams and code samples. You will find detailed instructions for each component you can work with in the corresponding folder.

<img src="https://github.com/eaziware/wear-me/blob/master/images/flora_pinout.png"/>

|   |   |   |   |
|---|---|---|---|
| <img src="https://github.com/eaziware/wear-me/blob/master/images/flora.png" width="200"/> | ![](https://github.com/eaziware/wear-me/blob/master/images/gemma.png) | ![](https://github.com/eaziware/wear-me/blob/master/images/neopixel-24-ring.png) | ![](https://github.com/eaziware/wear-me/blob/master/images/neopixel-12-ring.png) |
|   |   |   |
|   |   |   |
