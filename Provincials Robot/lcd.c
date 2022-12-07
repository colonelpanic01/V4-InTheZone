#pragma config(Sensor, in1,    LCD_POT,        sensorPotentiometer)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define lcd_toggle SensorValue[LCD_POT]

int resolution = 100;
task main(){
	bLCDBacklight = true;
	clearLCDLine(0);
	clearLCDLine(1);

	displayLCDCenteredString(0,"Welcome 356B");
	wait1Msec(1000);
	clearLCDLine(0);
	while(1){
		displayLCDString(0,1, "autonomous");
		displayLCDNumber(0, 12, lcd_toggle, 2);
		//displayLCDCenteredString(1, "Select auton");
		if(lcd_toggle > 0 && lcd_toggle < 99){
			clearLCDLine(1);
			displayLCDNumber(1, 8, 1);
		}else if(lcd_toggle > 99 && lcd_toggle < 199){
			clearLCDLine(1);
			displayLCDNumber(1, 8, 2);
		}else{
			displayLCDCenteredString(1, "Select auton");
		}

	}
}
