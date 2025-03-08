
char charactor[27]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's' , 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
String morse_code[27] = {"-..", "---...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
                          ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...",
                          "-", "..-", "...-", ".--", "-..-", "-.--", "--..", " "};
String name;
String code;
int find_index(char prompt){
  int i;
  for(i=0; i < strlen(charactor); i++){
    if(prompt == charactor[i]){
      return i;
    }
  }
}
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int index;
  char option = '1';
  delay(3000);
  Serial.println("What is your name?: ");
  while(Serial.available() == 0){}
  name=Serial.readString();
  name.toLowerCase();
  while(option == '1'){
  for(int i=0; i < name.length(); i++){
    index=find_index(name[i]);
    code= morse_code[index];
    Serial.println(code);
    for(int o=0; o < code.length(); o++){
      if(code[o] == '.'){
        digitalWrite(LED_BUILTIN, HIGH);
        delay(200);
        digitalWrite(LED_BUILTIN, LOW);
        delay(200);
        }
      else if(code[o] == '-'){
        digitalWrite(LED_BUILTIN, HIGH); 
        delay(600);                    
        digitalWrite(LED_BUILTIN, LOW);   
        delay(200);
      }
      else{
        delay(600); //this is for spaces between words one space is 7 times unit so 200+600+600=1400 if we define 200 as one time unit.
        }
      }
      delay(600);  
    }
    Serial.println("Enter 1 to repeat.");
    Serial.println("Enter any other key to enter a new name.");
    while(Serial.available()==0){}//wait for user input
    option = Serial.read();
    }
  }