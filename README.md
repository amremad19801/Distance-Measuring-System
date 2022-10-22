<h1>Distance-Measuring-System</h1>
  <h2>Project Description</h2>
    <p>
     <br>The project is a system that measures the distance and displays it on LCD.</br>
    </p>
  <h2>Project Specifications</h2>
    <p>
     <br>The microcontroller needs to transmit at least 10 us trigger pulse to the HC-SR04 ultrasonic sensor Trig pin.</br>
     <br>After getting a trigger pulse, the HC-SR04 ultrasonic sensor automatically sends eight 40 KHz sound waves and the microcontroller waits for rising edge output          at the Echo pin.
     </br>
     <br>When the rising edge capture occurs at the Echo pin which is connected to an input of the microcontroller, the timer of the microcontroller starts and again            waits for a falling edge on the Echo pin.
     </br>
     <br>As soon as the falling edge is captured at the Echo pin, the microcontroller reads the count of the timer. This time count is used to calculate the distance            to an object.
     </br>
     <br>The LCD displays the distance value continuously.</br>
     <br>The project is designed and implemented based on the layered architecture model.</br>
    </p>
  <h2>Project Components</h2>
    <h3>Microcontroller</h3>
      <p>
       <br>- ATmega32</br>
      </p>
    <h3>Drivers</h3>
      <p>
       <br>- ICU</br>
       <br>- LCD</br>
       <br>- GPIO</br>
       <br>- Ultrasonic Sensor</br>
      </p>
    <h3>Hardware</h3>
      <p>
       <br>- 4x16 LCD</br>
       <br>- HC-SR04 Ultrasonic Sensor</br>
      </p>
  <h2>Files</h2>
    <p>
     <br>icu.h : Header file for the ICU driver.</br>
     <br>icu.c : Source file for the ICU driver.</br>
     <br>lcd.h : Header file for the LCD driver.</br>
     <br>lcd.c : Source file for the LCD driver.</br>
     <br>gpio.h : Header file for the GPIO driver.</br>
     <br>gpio.c : Source file for the GPIO driver.</br>
     <br>ultrasonic.h : Header file for the HC-SR04 Ultrasonic Sensor driver.</br>
     <br>ultrasonic.c : Source file for the HC-SR04 Ultrasonic Sensor driver.</br>
     <br>main.c : This file contains the code of the project.</br>
    </p>
