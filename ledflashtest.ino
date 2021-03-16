// -------------------------
// Blink an LED IN MORSECODE
// -------------------------


int led1 = D6; // D6 is the port the led light is connected to.

int led2 = D7; // D7 is the port the inbuilt led light connects to.

int dot = 100; // The time it takes for a dot.

int line = 300; // The time it takes for a line.

int betweenLetters = 300;   // The time it takes for a space between the letters.

int betweenSymbols = 100;   // The time it takes for the space between symbols.


void setup() {

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}

// Function to light up the LED for a morsecode dot.
void Dot()
{
    // Turn it on the LED.
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	// Leave it on for the time it takes for a dot.
	delay(dot);

	// Turn off the LED.
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

}

// Function to light up the LED for a morsecode line.
void Line()
{
    // Turn it on the LED.
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	// Leave it on for the time it takes for a dot.
	delay(line);

	// Turn off the LED.
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

}


// Loop through and send the correct sequence of morse code to light up the LED.
void loop() {

// Letter S.
Dot();
delay(betweenSymbols);
Dot();
delay(betweenSymbols);
Dot();
// Space between letters.
delay(betweenLetters);

// Letter A.
Dot();
delay(betweenSymbols);
Line();
// Space between letters.
delay(betweenLetters);

// Letter R.
Dot();
delay(betweenSymbols);
Line();
delay(betweenSymbols);
Dot();
// Space between letters.
delay(betweenLetters);

// Letter A.
Dot();
delay(betweenSymbols);
Line();
// Space between letters.
delay(betweenLetters);

// Letter H.
Dot();
delay(betweenSymbols);
Dot();
delay(betweenSymbols);
Dot();
delay(betweenSymbols);
Dot();
// Space between letters.
delay(betweenLetters);
    
}
