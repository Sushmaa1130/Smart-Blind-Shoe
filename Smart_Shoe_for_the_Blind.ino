#define trigPin 9           // Trig Pin Of HC-SR04
#define echoPin 8        // Echo Pin Of HC-SR04
#define BUZ 13     //BUZZER
long duration, distance;

void setup() 
{
   pinMode(BUZ, OUTPUT);
   pinMode(trigPin, OUTPUT);       // Set Trig Pin As O/P To Transmit Waves
   pinMode(echoPin, INPUT);        //Set Echo Pin As I/P To Receive Reflected Waves
}

void loop() 
{
  Serial.begin(9600);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);   
  digitalWrite(trigPin, HIGH);       // Transmit Waves For 10us
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH);        // Receive Reflected Waves
  distance = duration / 58.2;                       // Get Distance
  Serial.println(distance);
  delay(10);
  if (distance < 30)               // Condition For Absence Of Obstacle            
  {
   // turn BUZZER ON & OFF 5 times:
    for (int i=0; i<5; i++)
    {
    digitalWrite(BUZ, HIGH);
    delay(50);
    digitalWrite(BUZ, LOW);
    delay(50);                                                 
  }
  
  }
}
