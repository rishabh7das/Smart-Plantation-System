
# SMART PLANTATION SYSTEM

It is an IOT based project made using various electrical and electronics component for taking care of exotic plants and it makes farming smart and effective.


## Components Used

- ###  ARDUINO UNO

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/Light%20sensor.jpg?raw=true)

The Arduino Uno is a popular and versatile microcontroller board that forms the cornerstone of the Arduino platform. Developed by Arduino LLC, the Arduino Uno is based on the ATmega328P microcontroller and provides a user-friendly and open-source platform for electronics enthusiasts, hobbyists, and professionals to develop a wide range of projects. The board features a set of digital and analog input/output pins, along with various communication interfaces like USB, UART, and I2C.

- ###  Soil Moisture Sensor

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/soil%20mosture%20sensor.jpg?raw=true)

A soil moisture sensor used in Arduino projects is a key component for monitoring and managing soil conditions in various applications. These sensors typically utilize a pair of probes that are inserted into the soil to measure its moisture content. As the soil's water content changes, it affects the electrical conductivity between the probes. Arduino-compatible soil moisture sensors leverage this principle to provide real-time data on soil moisture levels. 


- ###  Light Sensor

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/Light%20sensor.jpg?raw=true)

A light sensor used in Arduino projects is a device designed to measure the intensity of light in its surroundings. These sensors are integral to various applications, including home automation, robotics, and environmental monitoring. Arduino-compatible light sensors typically operate on the principle of photoresistors or photodiodes, where the electrical resistance changes in response to the amount of incident light. This change is then converted into a voltage signal that Arduino microcontrollers can interpret.


- ###  Temperature and Humidity Sensor(DHT11)

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/dht11.jpg?raw=true)

The DHT series temperature and humidity sensors, commonly used in Arduino projects, are compact and reliable devices that measure both temperature and humidity levels in their environment. Examples include sensors like the DHT11 and DHT22. These sensors utilize a combination of a thermistor and a humidity sensing element to provide accurate readings. Compatible with Arduino microcontrollers, DHT sensors offer a straightforward interface for collecting temperature and humidity data.

- ### OLED Screen

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/oled%20screen.jpg?raw=true)

OLED screens with I2C (Inter-Integrated Circuit) communication, commonly used in Arduino projects, offer a convenient and efficient way to integrate high-quality displays into electronic projects. I2C is a serial communication protocol that enables multiple devices to communicate with each other using only a few wires. OLED screens utilizing I2C in Arduino projects simplify the wiring and reduce the number of required pins, making the integration process more straightforward. Arduino users can easily connect I2C-enabled OLED screens to their projects, allowing for the seamless display of information with minimal effort.

- ### Single Channel Relay 

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/relay.jpg?raw=true)

A single-channel relay used in Arduino projects is a versatile electronic switch that allows the Arduino microcontroller to control high-power devices or circuits with lower voltage levels. The relay typically consists of a coil, an electromagnetically controlled switch, and a set of terminals. When an electrical signal is applied to the coil from the Arduino, it triggers the switch to open or close, thereby controlling the connected load.


- ### Buzzer

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/buzzer.png?raw=true)

A buzzer used in Arduino projects is an electronic component designed to produce audible sounds or tones when an electrical signal is applied. Buzzers are commonly employed to provide audio feedback in various Arduino applications, from simple alarms and notifications to more complex interactive projects

- ### Growth Light

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/light%20bulb.jpg?raw=true)

Growth lights used in Arduino projects refer to lighting systems designed to provide optimal conditions for plant growth and cultivation. These lights typically utilize specific wavelengths of light, such as red and blue, which are essential for photosynthesis. When integrated with Arduino microcontrollers, growth lights can be controlled to create customized lighting schedules for different plant species, growth stages, or environmental conditions. Arduino allows users to program and automate the intensity and duration of light exposure, promoting energy efficiency and precise control over the plant's growth environment.

- ### Water Pump

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/water%20pump.jpg?raw=true)

A water pump used in Arduino projects is an electronic device designed to move water efficiently based on the commands received from an Arduino microcontroller. These pumps are widely employed in various applications, such as irrigation systems, hydroponics, and aquariums. By connecting the water pump to an Arduino, users can automate and control the water flow in their projects. Arduino's programmability allows for precise management of watering schedules, ensuring plants receive the right amount of water at specific intervals.


## PIN Diagram

![Logo](https://github.com/rishabh7das/Smart-Plantation-System/blob/main/smart%20plantation%20system/circuit%20diagram.png?raw=true)

🟥 RED STANDS FOR VCC        
⬛ BLACK STANDS FOR GND  
🟩 GREEN STANDS FOR ANALOG DATA   
🟧 ORANGE STANDS FOR DIGITAL DATA   

### Working
All the black connections are ground in the circuit diagram.
There are 3 GND pins in the Arduino and we can connect to any one of the 3                                    GND pins. GND is connected to each and every sensor in the circuit. All the red connections means the VCC which means the power supply.
All the sensors used in the circuit require only 5 volts of current to function and that 5 volt of current will be provided by the Arduino itself through the medium of VCC. Rest all the connections, made in the circuit diagram responds to all the data pins in the circuit. Either we will Provide/Fetch analog data or we will Fetch/Provide digital data. And data will be in form of electric signals.
Now we need to understand why we have connected some sensors to Analog pins and some sensors to Digital pins.
#### ANALOG PINS
Soil moisture sensor will give a range of value so it is connected to analog pin. Light sensor will also give a range of values so it is connected to analog pin.
Now we have connected Oled screen to two analog pins. Basically, Oled screen has 4 pins VCC, GND, SCL and SDA. SCL is the clock pin over here. As Oled screen is based on an old technology so the function of SCL is to synchronize the pixels on the screen. SDA is the data pin where the corresponding pixels which have received the signal will light up. and both the pins has to be analog pins as said by the manufacturer of Arduino and that two pins will be A4 and A5. The Arduino has a data bus of 10 bits and it provides 10 bits corresponding analog value to the Arduino. 



#### DIGITAL PINS
Buzzer is connected to digital pins because a buzzer can perform only two operations either it will ring or it won’t just like a digital signal giving output either 0 or 1. Similarly for water pump if the plant does not have adequate moisture, it will pump water through the help of motor in the soil or else if the plant has enough moisture for the plant to survive it won’t pump water. So basically, it also works as a digital device. Similarly for relay if there is enough grow light the bulb will not go on and if there is not enough light the bulb will go on now comes the interesting fact that why we have connected temperature and humidity sensor to the digital pins. A question may arise that it can also give a range of values and it must also be connected to analog pin set of the Arduino. So, we have used DHT 11 sensor over here if we closely look at the sensor there are 3 pins on the sensor. basically GND, DATA, VCC. Here the data pin works in a different manner. There is a chip inserted in the data pin of the sensor. ADC chip which converts analog signals to digital signals and therefore gives output in the form of digital signals. No other sensor has an ADC in built inside the sensor. Connection of light bulb in the project. GND and VCC is required, GND is connected to 240V main GND but the VCC of the light bulb is connected to the relay and one end of the relay is connected to the 240 main power supply and the digital pin which is connected to the relay is defining to either make or break the connection in the relay.
When all the sensors are in position and the connection is turned on the sensors will function according to the code burned in the Arduino. The sensors will detect the moisture, light, temperature, humidity respectively and will display the collected data in the OLED Screen. If the moisture in the soil will be less the soil moisture sensor will detect it and the water will get pumped in the soil. If the water supply gets exhausted then the buzzer will go on indicating that the plant needs more water. In that case we need to fill the water supply again or if the plant has received enough moisture the water supply will cut off. Same goes for the light sensor, if the plant has received enough GROW light to survive the bulb will go off. The entire code is written in such a way that the plant will get all the required elements to survive in the right amount and as soon as it reaches the maximum level the supply will go off so that there is no harm to the plant. 

## REAL LIFE APPLICATIONS OF THE PROJECT

The smart plant care system using Arduino finds practical applications in various real-life scenarios, enhancing the efficiency and health of plants through intelligent monitoring and automation. Some notable applications include:

- ### Smart Agriculture
In large-scale farming, the smart plant care system can be employed to monitor soil moisture levels, temperature, and light conditions. This data can be used to automate irrigation systems, ensuring crops receive the right amount of water and creating an optimized environment for plant growth. Smart agriculture, facilitated by the smart plant care system using Arduino, represents a transformative approach to farming that leverages technology to enhance efficiency, optimize resource usage, and improve overall crop yield. By integrating sensors and automation, the system enables precise monitoring of crucial factors such as soil moisture, temperature, and light conditions. Arduino microcontrollers play a central role in processing this data and triggering responsive actions, such as automated irrigation, nutrient delivery, and climate control. In essence, the smart plant care system using Arduino serves as a key enabler of precision agriculture, ushering in a new era of intelligent and sustainable farming practices.

- ### Indoor Gardening
In indoor environments, the system can be utilized to create ideal conditions for potted plants or hydroponic setups. Arduino can control grow lights, regulate water pumps, and manage ventilation systems, providing precise environmental control for optimal plant health. Indoor gardening is revolutionized by the implementation of the smart plant care system using Arduino, creating an intelligent and automated environment for optimal plant growth. With Arduino's capabilities, this system monitors and manages critical variables such as light intensity, humidity, and soil moisture levels in indoor settings. This innovative application of Arduino technology transforms indoor gardening into a more accessible and efficient endeavor, catering to hobbyists and plant enthusiasts seeking to cultivate thriving greenery within their homes.

- ### Urban Farming 
In urban settings or limited spaces, the smart plant care system allows for efficient cultivation on rooftops, balconies, or small gardens. Arduino-based automation helps overcome space constraints by maximizing the use of available resources. This innovative application of Arduino technology transforms indoor gardening into a more accessible and efficient endeavor, catering to hobbyists and plant enthusiasts seeking to cultivate thriving greenery within their homes. Urban farming undergoes a paradigm shift with the integration of the smart plant care system using Arduino, bringing advanced technology to the forefront of agriculture in city environments. Arduino microcontrollers, coupled with sensors, enable precise monitoring and control of crucial factors like soil moisture, temperature, and light conditions. This technology facilitates efficient resource utilization, allowing urban farmers to optimize their limited space for maximum crop yield. The result is a transformative approach to farming that aligns with the growing trend of sustainable and locally sourced food production in urban settings.

- ### Home Gardens
For individuals with home gardens, the system can be implemented to automate watering schedules, monitor soil conditions, and adjust lighting. This ensures that even hobbyist gardeners can maintain healthy plants without constant manual intervention. Home gardening experiences a technological upgrade with the implementation of the smart plant care system using Arduino, offering an intelligent and user-friendly approach to nurturing plants. The Arduino microcontroller, in conjunction with sensors, enables homeowners to monitor key parameters like soil moisture, light levels, and temperature in real-time. By processing this data, Arduino triggers automated actions such as precise watering schedules, optimal light exposure through LED controls, and climate adjustments. Overall, the smart plant care system using Arduino transforms home gardening into a tech-savvy and rewarding experience, ensuring that plants receive personalized attention for flourishing in a domestic environment.


## Conclusion
The smart plant care system built with Arduino and various sensors represents a revolutionary approach to plant cultivation, combining technology and agriculture for optimal growth. By integrating sensors that monitor critical environmental factors like soil moisture, temperature, and light levels, the Arduino microcontroller processes real-time data to facilitate intelligent decision-making. This system enables automated and precise control over essential parameters, triggering actions such as irrigation, nutrient delivery, and climate adjustments. Whether deployed in smart agriculture for large-scale farming, indoor gardening setups, urban farming initiatives, or home gardens, the versatility of this Arduino-based system empowers users to create tailored solutions for diverse plant care needs. With its user-friendly interface and adaptability, the smart plant care system epitomizes the intersection of innovation and horticulture, ushering in an era of efficient, data-driven, and sustainable plant cultivation practices.



