/*
Electronics Studio
@file GSR_sensor.ino
@date  21-05-2025
@url https:https: https://github.com/electronicsstudio
@url YouTube: https://www.youtube.com/@ElectronicsStudio-v7o/featured
*/

const int GSR=A0;
int sensorValue=0;
int gsr_average=0;

void setup(){
  Serial.begin(9600);
}

void loop(){

  long sum=0;
  for(int i=0;i<10;i++)           //Average the 10 measurements to remove the glitch
      {
      sensorValue=analogRead(GSR);
      sum += sensorValue;
      delay(5);
      }
   gsr_average = sum/10;
   Serial.println(gsr_average);
}











