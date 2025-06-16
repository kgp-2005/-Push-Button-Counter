// the digital pin connected to the push button
int togglePushbutton = 4; 
// Variable to keep track of how many times the button has been pressed
int toggleCount = 0;

void setup() {
   // Set the push button pin as input
  pinMode(togglePushbutton,INPUT);
  // Start the Serial Monitor at 9600 baud rate
  Serial.begin(9600);
  // Print a heading message to the Serial Monitor
  Serial.println("PUSH BUTTON COUNTER");
}

void loop() {
  // Read the current state of the button (HIGH or LOW)
  int currentToggle = digitalRead(togglePushbutton);
  // If the button is pressed (reads HIGH)
  if (currentToggle == HIGH ) {
    // Increment the counter
    toggleCount++;
     // Print the updated count to the Serial Monitor
    Serial.print("Count = ");
    Serial.println(toggleCount);
    // Small delay to debounce the button (prevent multiple counts)
    delay(200);
  }
  
    }
