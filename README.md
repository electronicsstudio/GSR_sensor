# GSR_sensor



GSR stands for galvanic skin response, is a method of measuring the electrical conductance of the skin. 
Strong emotion can cause stimulus to your sympathetic nervous system, resulting more sweat being secreted
by the sweat glands. Grove - GSR allows you to spot such strong emotions by simple attaching two 
electrodes to two fingers on one hand. It is an interesting to create emotion related projects like
sleep quality monitor.

Human Resistance = ((1024 + 2 x Serial_Port_Reading) x 10000)/(Serial_calibration - Serial_Port_Reading)

* Unit is ohm:
* Serial_Port_Reading is the value display on Serial Port(between 0~1023);
* Serial_calibration is from Step 4 (Use the screw driver to adjust resistor until the serial output is
  minimized. The serial port data at this point is noted as the Serial_calibration).
