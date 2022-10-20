/* Star Wars - Marcha Imperial*/

*/

int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, OUTPUT); // definimos la variable A0 como una salida.
  pinMode(A1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
 digitalWrite(A1, HIGH);   // turn the LED on (HIGH is the voltage level)
 starwars();
 distintiva();
 digitalWrite(A1, LOW);   // turn the LED on (HIGH is the voltage level)
  
 delay(60000);
}
void starwars()
{
   
    tone(A0, a, 500);
    delay(500+50);
    tone(A0, a, 500);
    delay(500+50);     
    tone(A0, a, 500); 
    delay(500+50);
    tone(A0, f, 350);  
    delay(350+50);
    tone(A0, cH, 150);
    delay(150+50); 
    tone(A0, a, 500);
    delay(500+50);
    tone(A0, f, 350);
    delay(350+50);
    tone(A0, cH, 150);
    delay(150+50);
    tone(A0, a, 1000);   
    delay(1000+50);
    
}
void distintiva()
{
  espacio();espacio();espacio();
punto();raya();punto();espacio();punto();raya();espacio();raya();punto();punto();espacio();punto();punto();espacio();raya();raya();raya();
espacio();espacio();espacio();
raya();punto();raya();punto();espacio();punto();raya();punto();punto();espacio();punto();punto();raya();espacio();raya();punto();punto();punto();
espacio();espacio();espacio();
raya();raya();raya();espacio();punto();raya();punto();punto();espacio();punto();raya();espacio();punto();punto();punto();raya();espacio();punto();raya();espacio();punto();raya();punto();espacio();punto();raya();punto();espacio();punto();punto();espacio();punto();raya();
espacio();espacio();espacio();
punto();raya();punto();punto();espacio();punto();punto();raya();espacio();punto();raya();raya();raya();raya();espacio();raya();punto();punto();espacio();punto();punto();punto();espacio();raya();raya();raya();
espacio();espacio();espacio();
raya();raya();punto();raya();espacio();raya();espacio();punto();punto();punto();punto();
espacio();espacio();espacio();
punto();punto();raya();punto();espacio();punto();punto();raya();punto();espacio();raya();raya();raya();raya();punto();espacio();punto();punto();punto();raya();raya();espacio();punto();punto();raya();espacio();raya();punto();raya();punto();
espacio();espacio();espacio();
punto();punto();punto();espacio();punto();espacio();raya();raya();punto();raya();raya();espacio();punto();raya();espacio();punto();raya();punto();punto();
espacio();espacio();espacio();
punto();espacio();raya();punto();punto();raya();espacio();punto();raya();raya();punto();espacio();punto();espacio();punto();raya();punto();espacio();punto();punto();espacio();raya();raya();espacio();punto();espacio();raya();punto();espacio();raya();espacio();punto();raya();espacio();punto();raya();punto();punto();espacio();punto();raya();raya();punto();espacio();punto();raya();punto();espacio();punto();punto();raya();espacio();punto();espacio();raya();punto();punto();punto();espacio();punto();raya();
espacio();espacio();espacio();
raya();raya();punto();raya();espacio();punto();raya();punto();espacio();raya();raya();punto();
espacio();espacio();espacio();
punto();raya();raya();raya();raya();espacio();punto();punto();punto();punto();raya();espacio();punto();punto();punto();punto();raya();espacio();punto();raya();punto();raya();punto();raya();espacio();raya();raya();raya();raya();raya();espacio();punto();punto();punto();punto();punto();espacio();punto();punto();punto();punto();punto();
espacio();espacio();espacio();
raya();raya();punto();raya();espacio();punto();raya();punto();espacio();punto();raya();raya();punto();
espacio();espacio();espacio();
punto();raya();raya();raya();raya();espacio();raya();raya();raya();raya();raya();

  }
void espacio()
{
  delay(150);                       // wait for a second  
}
void punto()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
 tone(A0,900);
  delay(50);                       // wait for a second  
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  noTone(A0);
  delay(50);                       // wait for a second  
}
void raya()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
 tone(A0,900);
  delay(150);                       // wait for a second  
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  noTone(A0);
  delay(50);
}
