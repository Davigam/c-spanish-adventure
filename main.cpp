#include <iostream>

using namespace std;

void print(string message){
  cout << message << endl;
}

void capo(){
  string capo = "Al abrir el capo descubres una bomba casera, ves un pequeño contador y esta claro que no tienes opcion; es el FIN DEL JUEGO";

  print(capo);
}

void correr(){
  string correr1 = "Avanzas varios metros a pie hasta llegar al gigante baobab, entonces, escuchas una explosion ¿Deseas voltear a ver que sucedio o prefieres trepar el arbol?\n OPRIME LA TECLA b PARA ESCALAR EL BAOBAB O LA TECLA a PARA MIRAR ATRAS";

  string Baobab = "Cuando llegas a la cima puedes ver todo el pequeño asteroide que antes era tu casa y que ahora esta rompiendose en pedazos por las raices de este gran Baobab, pero al menos puedes ver un nuevo atadecer por ultima vez, este es un GAME OVER, pero no se siente asi. Buen viaje.";

  string Atras = "No creo que haya sido una buena decision, la explocion ocurrio a solo unos metros y al mirar atras perdiste tiempo importante que pudiste usar para ponerte a salvo, es GAME OVER amigo.";

  string muymal = "Me parece que alguien reprobo el kinder, por favor coloca una respuesta valida.\n";

  print(correr1);

  char correrespuesta;
  cin >> correrespuesta;

  if(correrespuesta == 'b'){
    cout << Baobab << endl;
  } else if(correrespuesta == 'a'){
    cout << Atras << endl;
  } else {
    cout << muymal << endl;
    correr();
  }
}

void autoDeJuguete(){
  
  string problema = "Al intentar encender el auto este no enciende sino que hace un extraño ruido en el capo\n ¿Lo revisas o continuas a pie?\n OPRIME r PARA REVISAR EL CAPO O LA LETRA c PARA CORRER A PIE";

  print(problema);

  char autorespuesta;
  cin >> autorespuesta;

  if (autorespuesta == 'r'){
    capo();
  } else if (autorespuesta == 'c'){
    correr();
  } else {
    cout << "\n\nMe estas tomando el pelo? Vamos viej@, coloca un digito valido.\n\n" << endl;
    autoDeJuguete();
  }
  
}

void dejardecorrer(){
  string FIN = "POOOR FAAVOOOR! Crei que te dije que no dejaras de correr, solo por eso: FIN DEL JUEGO.\n Ni siquiera me dan ganas de explicarte como moriste, esta vez si que metiste la pata amig@, pero esta bien, quiza te de otra oportunidad.";

  cout << FIN << endl;
  //iniciodelaaventura();
}

void calculadora(){
  
  float pi = 	3.141592653;
  
  string fincalproblem = "No se porque elegiste algo tan inutil ¿Se lo vas a lanzar a las naves o que? Pero bueno, me gusta como piensas y te voy a hacer un regalo por eso: Si eres capaz de escribir los primeros diez(10) digitos de PI de memoria te dejare en paz y podras ganar. No te preocupes, no hay trampa, solo quiero que lo intentes. Si te lo preguntas, si, si puedes hacer trampa, pero entonces ¿Donde estaria el honor de esa victoria? Digo, yo no perderia nada pero, piensa todo el lo que perderias tu, es igual. Espero que hayas disfrutado el juego. \n DIGITA AQUI TU RESPUESTA: ";
  
  string mal = "Bueno, supongo que no hiciste trampa, si me equivoco dejame decirte que eres muy tont@, digo ¿Hiciste trampa y aun asi perdiste? Pero estoy seguro que no hiciste eso, fuiste valiente y te enfrentaste al problema con decision, felicitaciones ERES UN(A) VERDADER@ GANADOR(A)";
  
  string bien = "¿De verdad lo lograste sin trampa? Si es asi dejame llamarte MONSTER, eso es lo que sos CRACK. Pero para ser sinceros, no creo que lo hayas logrado sin trampa, y aunque me jures que lo lograste solo con tu increible cerebro no puedo evitar sentirme decepcionado, pero bueno, eso lo que hay, ganar no siempre es lo mejor. De todas formas FELICITACIONES. No importa lo que haya pasado en el camino, siempre estare agradecido porque tomaras la decision de jugar este juego, QUE TENGAS UN GRAN DIA!";

  print(fincalproblem);

  float pirespuesta;
  cin >> pirespuesta;

  if (pirespuesta == pi){
    cout << bien << endl;
  } else {
    cout << mal << endl;
  }
}

void primeraparada(){
  string prproblema = "Hiciste bien en correr, cada vez estan mas cerca, que bien que te encontraste con este garaje.\nDespues de aseguraste que no hay nadie adentro encuentras algunos elementos que podrian favorecer tu huida:\n UN AUTO DE JUGUETE\n UNA CALCULADORA\n UN REACTOR NUCLEAR MINIATURA\n ¿Cual eliges?\n PULSA LA TECLA a PARA ELEGIR EL AUTO, LA TECLA c PARA LA CALCULADORA O LA TECLA r PARA EL REACTOR";

  string reactor = "La buena noticia es que lograste salir de esta, la mala es que fue en un ataud. Digo, ¿Enserio elegiste el reactor? ES ENERGIA NUCLEAR! Pero bueno, te sugiero que eches un ojo a la historia de la mejor cientifica de la historia: Marie Curie. De seguro eso resolvera tus dudas acerca de la radioactividad. Mientras tanto espero que no te moleste el tamano del ataud, no nos dio tiempo a encontrar uno mas grande.";

  string serio = "Estas buscando problemas bobos, pulsa una letra correcta y prometo olvidarme de este incidente";

  print(prproblema);

  char primerrespuesta;
  cin >> primerrespuesta;

  if (primerrespuesta == 'a'){
    autoDeJuguete();
  } else if (primerrespuesta == 'c'){
    calculadora();
  } else if (primerrespuesta == 'r'){
    cout << reactor << endl;
  } else {
    cout << serio << endl;
    primeraparada();
  }

}

void iniciodelaaventura(){
  string introduccion = "Hola menos mal que ya reaccionaste, dejame ponerte en contexto:\n Esas naves que vienen atras te buscan, y no precisamente para desearte un buen dia. Si quieres mi opinion: Corre! Sigue corriendo como lo has hecho la ultima media hora.\n PARA SEGUIR CORRIENDO INGRESA LA TECLA c, SI QUIERES DETENERTE PULSA LA TECLA p.";

  print(introduccion);

  char iniciorespuesta;
  cin >> iniciorespuesta;

  if(iniciorespuesta == 'c'){
    primeraparada();
  }else if (iniciorespuesta == 'p'){
    dejardecorrer();
  }
}

int main() {
  iniciodelaaventura();

  return 0;
}
