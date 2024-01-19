// C++ code
// Version 1.0.0
#include<Keypad.h>
//teclado
const byte ROWS = 4;
const byte COLUMNS= 4;
char keys[ROWS][COLUMNS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
 };

byte rowsPins[ROWS] = {11,10,9,8};
byte columnsPins[COLUMNS] = {7,6,5,4};
Keypad teclado = Keypad(makeKeymap(keys), rowsPins,columnsPins,ROWS,COLUMNS);
char key;
//--
void setup()
{
  Serial.begin(9600);
}

void loop()
{
	key = teclado.getKey();//capta que boton se presiona y se guarda en key
  if (key){
  	Serial.println(key);//eyecta el boton en el log
  	}	
}
