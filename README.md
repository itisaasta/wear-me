# wear-me

Wear me helps bring your wearables idea to life. You can create clothes and accessories that light up or make sound on loop, when you move, press a button, or receive a certain amount of light.

## You will need:
- Laptop with available USB port (Mac, Windows, or Linux)

## This kit contains:
|   |   |   |   |
|:---:|:---:|:---:|:---:|
| <img src="https://github.com/eaziware/wear-me/blob/master/images/flora.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/gemma.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/neopixel-24-ring.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/neopixel-12-ring.png" width="200px"/> |
| Adafruit FLORA | Adafruit Gemma | 24 Neopixel Ring | 12 Neopixel Ring |
| <img src="https://github.com/eaziware/wear-me/blob/master/images/neopixel-7-jewel.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/neopixel.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/neopixel-60-strip.png" width="200px"/> |   |
| 7 Neopixel Jewel | Neopixel | 60 Neopixel Strip | Red & Blue Sequins |
| <img src="https://github.com/eaziware/wear-me/blob/master/images/color-sensor.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/uv-light-sensor.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/accelerometer-compass.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/tilt-ball-switch.png" width="200px"/> |
| Color Sensor | UV Light Sensor | Accelerometer & Compass | Tilt Ball Switch |
| <img src="https://github.com/eaziware/wear-me/blob/master/images/force-sensor.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/soft-potentiometer.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/conductive-fabric.png" width="200px"/> |   |
| Force Sensor | Soft Potentiometer | Conductive Fabric | Conductive Rubber Cord |
| <img src="https://github.com/eaziware/wear-me/blob/master/images/on-off-switch.png" width="200px"/> | <img src="https://github.com/eaziware/wear-me/blob/master/images/conductive-thread.png" width="200px"/> |   | <img src="https://github.com/eaziware/wear-me/blob/master/images/alligator-clips.png" width="200px"/> |   |
| On/Off Switch | Conductive Thread | Needles | Alligator Cables |
| Wire | Micro-USB Cables | Electrical Tape | Wire Snips |
| Needlenose Pliers |

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

### Download this repository to your computer
1. From GitHub, click clone or download, then click download .zip, and save where you can easily reference
2. Each component folder has a code sample in a .ino file that can be opened in the Arduino IDE

## Building
You will build the circuits for your idea using alligator clips first, then when it is fully functional, you can sew the circuit into your finished product.

Each component has its own hardware connection diagrams and code samples. You will find detailed instructions for each component you can work with in the corresponding folder.

<img src="https://github.com/eaziware/wear-me/blob/master/images/flora_pinout.png"/>

### Components

- Boards
  - Adafruit FLORA
  - Adafruit Gemma
- Lights
  - Red sequins
  - Blue sequins
  - Neopixels
  - 7 Neopixel jewels
  - 12 Neopixel rings
  - 24 Neopixel rings
  - 60 Neopixel strips
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
