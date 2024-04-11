
# Water sensor with LCD using Arduino
- This is a very simple project that measures the water level and prints that in the LCD display.
- The Arduino was programmed by me for certain levels of water (Of course you can edit the code for your specific needs), at each level the water reaches it will be a certain LED color, The LCD display will print two different information 1. the water level by %, 2. The led color and each color what means.
- At level 98% -> 99% it will turn the LED red color, and the BUZZER will start sound (warning sound) for the water level is full. 
![Water sensor   arduino](https://github.com/yahiaBSK/Water-sensor_and_LCD_Arduino/assets/51094855/f0c647c7-5cd5-433b-bb3b-3ed5ef394286)


 ## Used Components

- Arduino Uno (or ESP32 can be used, both have the same C++ code).
- Proteus simulation software.
- Water sensor chip.
- All other components are built-in with the software itself (Buttons, resistors, LEDs, Buzzer, LCD, ex...).
- For the LCD I've used the one built-in with Proteus (without an I2C chip), if you want to use I2C lCDs you can download the library of it proteus.

## How to install & what you need
This is a simulation project, And the circuit design, the source code, and the result are completely the same as a real project. so in case you want to try it in a real version, you can use the same steps above (except the potentiometer as I told you it just acts like an object distance in this case).
- You need to:
    - install the simulation software (Proteus in this case) from [here](https://filecr.com/windows/proteus/?id=394206745600).
    - Download the Arduino Library for Proteus from [Here](https://www.theengineeringprojects.com/2015/12/arduino-uno-library-proteus.html), then copy all the files inside the downloaded ZIP to: `C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY`.
    - Download the Water-sensor library from [here](https://www.theengineeringprojects.com/2020/07/water-sensor-library-for-proteus.html), Then do the same steps above, NOTE!: the water-sensor chip comes with its own firmware file with (.hex) extension, you have to link it with the water-sensor by double clicking on it and selecting that .hex file (You'll find it alongside with the library file you've downloaded).
        ![](https://i.ibb.co/tLck7m5/Screenshot-2024-04-11-184217.png)

## How to run
- Download this project file (Proteus file alongside the Arduino .ino source code).
- then open the file with (.pdsprj) extension with Proteus software.
- Double-click on the Arduino component and go to 'Upload Hex file' and select the (.hex) file from the files above.
    ![](https://i.ibb.co/tLck7m5/Screenshot-2024-04-11-184217.png)
- then run the code!

## License and usage
- The files above including the Arduino source code are free to use, share, and edit.
- All this is for the sake of spreading knowledge! 🧑‍🎓😎🎓.
