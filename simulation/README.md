# Blinky Project In Action

|ON|OFF|
|:--:|:--:|
|https://github.com/Saisanathpotnuru/Activity/blob/master/simulation/ON.png||

## Code 
```
	for(;;)
	{
        change_led_state(HIGH);
		delay_ms(LED_ON_TIME);
        change_led_state(LOW);
		delay_ms(LED_OFF_TIME);	
	}
```
