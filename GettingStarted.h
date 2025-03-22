class led {
public:
	void on(LedPin){
		digitalWrite(LedPin, HIGH);
	}
	
	void off(LedPin){
		digitalWrite(LedPin, LOW);
	}
	
	void set(LedPin, n){
		analogWrite(LedPin, n);
	}
};