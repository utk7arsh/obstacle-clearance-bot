#include <Servo.h>

int sonar=6, en1=3, en2=5, in1=2, in2=4, in3=7, in4=8, cm=0;
int run_button=13, servo1=12, servo2=11, servo3=10, servo4=9;
int angle1=0, angle2=0, angle3=0, angle4=0;
long duration=0;
short run_button_count=1;
Servo dof1, dof2, dof3, dof4;

void setup()
{
  for(int i=2;i<9;i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, 0);
   }
  pinMode(run_button, INPUT);
  
  dof1.attach(servo1);
  dof2.attach(servo2);
  dof3.attach(servo3);
  dof4.attach(servo4);
  
  dof1.write(90);
  dof2.write(90);
  dof3.write(90);
  dof4.write(90);
  //Serial.begin(9600);
}

void loop()
{
  // RUN BUTTON CHECK:
  if(digitalRead(run_button)==1){
    run_button_count++;
    ;;
  }
  
  // SONAR CODE:
  pinMode(sonar, OUTPUT);
  digitalWrite(sonar, 0);
  delayMicroseconds(2);
  digitalWrite(sonar, 1);
  delayMicroseconds(5);
  digitalWrite(sonar, 0);
  
  pinMode(sonar, INPUT);
  duration = pulseIn(sonar, 1);
  cm = duration*0.034/2; //distance in centimeters...
  
  // MOTOR OPERATION CODE:
  if(cm>20 && run_button_count%2==0){
    digitalWrite(in1, 0);
    digitalWrite(in2, 1);
    digitalWrite(in3, 0);
    digitalWrite(in4, 1);
    analogWrite(en1, 255);
    analogWrite(en2, 255);
  }
  else{
    run_button_count++;
    digitalWrite(in1, 0);
    digitalWrite(in2, 0);
    digitalWrite(in3, 0);
    digitalWrite(in4, 0);
    analogWrite(en1, 0);
    analogWrite(en2, 0);
    
    angle1=map(analogRead(A2),0,1023,-45,45);
    angle2=map(analogRead(A3),0,1023,-45,45);
    angle3=map(analogRead(A4),0,1023,-45,45);
    angle4=map(analogRead(A5),0,1023,-45,45);
    
    dof1.write(90+angle1);
    dof2.write(90+angle2);
    dof3.write(90+angle3);
    dof4.write(90+angle4);
  }
}
