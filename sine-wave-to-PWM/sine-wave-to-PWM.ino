#define PI 3.14159265359

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  for(int i = 0; i < 360; i++){
    //Convert `i` to radians, then get the sine value.
    float radiansValue = (float)i * (PI / 360.0);
    float sineValue = sin(radiansValue);

    //Convert back to degrees
    sineValue = sineValue * (360.0 / PI);

    //PWM maximum value (brightness) is 255
    //Create a ratio of the sineValue(degrees) to maximum PWM value
    int pwmValue = (int)svalue * 360 / 255;

    //Set PWM value
    analogWrite(9, pwmValue);

    //Wait 5 milliseconds
    delay(5);
  }
}
