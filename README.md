# obstacle-clearance-bot

![4](https://user-images.githubusercontent.com/66383982/221443544-886f0c06-e393-49b0-b460-f94554d39209.png)

##### Coded in Arduino (C++) and designed in Solidworks for Roboknights at DPS RK Puram


This robot is designed to detect any obstacle in the form of small objects like cans, bottle, stones, and rod. Post detection, it picks up this object using its retractable arms and removes it from the path, which ensures its smooth movement along the path. 

## Specifications

- The car has been given 4 wheels and they have been designed keeping in mind the rough surface that they will roll on. 
- Center of mass has been maintained slightly behind  the geometric center. When it lifts up waste material it will align to the geometric center. 
- Two chassis(upper and lower) have been used to design the framework. 
- The pickup mechanism is carried out by a 4-DOF (Degree of freedom) servo system. 


## Circuit Design

![Screenshot 2023-02-26 152447](https://user-images.githubusercontent.com/66383982/221443722-1b03118d-3201-4493-b6f3-feb45fa24572.png)


- 2 9V batteries are sufficient to power this car.
- There are 4 micro servos which are separately connected to their potentiometers. 
- There are four hobby gearmotor on the right that are primarily used to increase the torque and also to supply more power to the car. Using this ensures that the speed and acceleration of the car is maintained. 
- Ultrasonic Distance sensor is connected to calculate the distance of the obstacle. It interprets the data sent by the SONAR to calculate the distance of the obstacle that helps to avoid them. 

## More Images
![5](https://user-images.githubusercontent.com/66383982/221444045-79895c01-b2bd-4d06-a146-6039a583742c.png)
![1](https://user-images.githubusercontent.com/66383982/221444037-73a77ad2-d1bf-4cbf-95c3-75f5ad8e4b13.png)
![7](https://user-images.githubusercontent.com/66383982/221444044-cb77596a-825b-480f-a8f2-37a970abd184.png)

