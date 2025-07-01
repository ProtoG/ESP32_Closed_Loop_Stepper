// Proto G Engineering
//ESP32 Closed Loop Stepper Motor Test

int directionPin = 22;
int stepPin = 23;
int numberOfSteps = 800;
int ledPin = 2;
int pulseWidthMicros = 20;  // microseconds
int millisbetweenSteps = 1; // milliseconds - or try 1000 for slower steps


void setup() { 

  Serial.begin(9600);
  Serial.println("Starting StepperTest");
  digitalWrite(ledPin, LOW);
  
  delay(2000);

  pinMode(directionPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(2, OUTPUT);  
 
  digitalWrite(directionPin, HIGH);
  for(int n = 0; n < numberOfSteps; n++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(pulseWidthMicros); 
    digitalWrite(stepPin, LOW);
    delayMicroseconds(50);
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
  
  delay(500);

    digitalWrite(directionPin, HIGH);
  for(int n = 0; n < numberOfSteps; n++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(pulseWidthMicros); 
    digitalWrite(stepPin, LOW);
    delayMicroseconds(50);    
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
  
  delay(500);
    digitalWrite(directionPin, HIGH);
  for(int n = 0; n < numberOfSteps; n++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(pulseWidthMicros); // this line is probably unnecessary
    digitalWrite(stepPin, LOW);
    delayMicroseconds(50);
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
  
  delay(500);
    digitalWrite(directionPin, HIGH);
  for(int n = 0; n < numberOfSteps; n++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(pulseWidthMicros); // this line is probably unnecessary
    digitalWrite(stepPin, LOW);
    delayMicroseconds(50);
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
  
  delay(1000);
  

  digitalWrite(directionPin, LOW);
  for(int n = 0; n < (numberOfSteps*4); n++) {
    digitalWrite(stepPin, HIGH);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(20);    
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
}

void loop() { 
}