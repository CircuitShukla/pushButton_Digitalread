int button_pin = 2;

void setup() {
  
  pinMode(button_pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
 
  int status=digitalRead(button_pin);
  Serial.println("Button_Staus" );
  Serial.println(status);
  delay(500);
}
