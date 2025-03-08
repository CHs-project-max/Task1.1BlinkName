In this code I have created a array that contain every alphabet and it's morse code on the other array with respective position.
then we ask the user to input a name then we translate each character into morse code and output it with blinking LED.

The LED Blink with these rules:
For dots the LED with light up for 1 time unit. (here we set 200ms as 1 time unit)
For dashs the LED will ight up for 3 time units.(600ms in total)
the timeout between dots or dashes in the same character is 1 time unit.(200ms)
the timeout between characters in 3 time units.(600ms in total)
the timeout between words are 7 time units.(1400ms in total)

after the LED output the morse code we will ask the user to choose to repeat the morse code or enter a new name. 