//                                                                               Kenozos
// aqui estamos dizendo o que o arduino deve fazer ao ligar 
void setup() 
{
  // definimos que o pino 3 do arduino vai mandar energia
  pinMode(3, OUTPUT);
}

// aqui criamos um loop fazendo o código de repitir infinitamente
void loop() 
{
  // ligamos o pino 3 a saida é de 5v  
  digitalWrite(3, HIGH);

  // estamos dando um delay de 50 milésimos de segundos
  delay(50);

  // Desligamos o pino 3
  digitalWrite(3, LOW);

  // estamos dando outro delay de 50 milésimos de segundos
  delay(50);

}
//                                                                               Kenozos

//https://www.tinkercad.com/things/akRBQaXeeVi-epic-snaget/editel?sharecode=yA8qHNIPskRhTnvktZEOMW0MKe2JCtyGW-izsnkrJqo
