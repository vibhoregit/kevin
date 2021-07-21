//#include<AFMotor.h>
//AF_DCMotor motorA(2);
//AF_DCMotor motorB(3);

void setup() {
  Serial.begin(9600);
  Serial.println("line follower rover");
  delay(500);

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  //motorA.setSpeed(250);
  //motorA.run(RELEASE);
  //motorB.setSpeed(250);
  //motorB.run(RELEASE);

}

void loop() {
  int sensor1 = digitalRead(A1);//left sensor
  int sensor2 = digitalRead(A0);//right sensor
  
  Serial.print(sensor1);
  Serial.println(sensor2);
  //delay(50);

  
   if((sensor1 == 0)&&(sensor2 == 0)) 
  {
     Serial.println("Left sensor W right sensor W: forward");
    //motorA.setSpeed(200);
    //motorB.setSpeed(200);
    //motorA.run(FORWARD);
    //motorB.run(FORWARD);
  }  
  //car steered to right
  else if((sensor1 == 0)&&(sensor2 == 1)) 
  {
    Serial.println("Left sensor W right sensor B: right");
    //motorA.setSpeed(200);
    //motorB.setSpeed(100);
    //motorA.run(FORWARD);
    //motorB.run(FORWARD);
  }  

  else if((sensor2 == 0)&&(sensor1 == 1)) 
  {
    Serial.println("Left sensor B right sensor W: left");
    //motorB.setSpeed(200);
    //motorA.setSpeed(100);
    //motorB.run(FORWARD);
    //motorA.run(FORWARD);
  }  
  


}
