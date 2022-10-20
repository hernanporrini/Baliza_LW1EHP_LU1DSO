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

void setup() 
  {
  pinMode(LED_BUILTIN, OUTPUT);   // definimos al LED_BUILTIN como salida, es el testigo de TX.
  pinMode(A0, OUTPUT);            // definimos A0 como salida, sera por donde sale el tono de audio.
  pinMode(A1, OUTPUT);            // definimos A1 como salida, sera para controlar un relay que hace de PTT.
  }

void loop() 
  {
  digitalWrite(A1, HIGH);   // encendemos el relay de PTT
  starwars();               // melodia de inicio "StarWars"
  distintiva();             // transmision de la Distintiva LU1DSO en telegrafia
  digitalWrite(A1, LOW);    // apagamos el relay de PTT
  delay(60000);             //esperamos 60Segundos y empieza de nuevo en bucle
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
  delay(150);                     
  }

void punto()
  {
  digitalWrite(LED_BUILTIN, HIGH);   
  tone(A0,900);
  delay(50);             
  digitalWrite(LED_BUILTIN, LOW);  
  noTone(A0);
  delay(50);                     
  }

void raya()
  {
  digitalWrite(LED_BUILTIN, HIGH);   
  tone(A0,900);
  delay(150);                       
  digitalWrite(LED_BUILTIN, LOW);   
  noTone(A0);
  delay(50);
  }
