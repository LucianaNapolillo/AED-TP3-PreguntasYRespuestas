/*

*/

#include <iostream>
using namespace std;

int main() {
  int opcion, puntaje = 0, puntajeTotal=0;
  bool salir, correcto;
  char seguir, respuesta;
  string mensajeCorrecto = "\nRespuesta correcta!! :)";
  string mensajeIncorrecto = "\nRespuesta incorrecta!! :(";

  do {
  cout << "************************** Elegi una categoria! *************************";
  cout << "\n**                       1- Musica                                     **";
  cout << "\n**                       2- Ciencias                                   **";
  cout << "\n**                       3- Historia                                   **";
  cout << "\n**                                                                     **";
  cout << "\n**                       0- Salir                                      **";
  cout << "\n*************************************************************************";
  cout << "\n                         \u25B6 ";
  cin >> opcion;

    if (opcion == 1) {
    puntaje = 0;
      cout << "\n\nCual es el nombre de la quinta nota en la escala musical?";
      cout << "\nA- Si";
      cout << "\nB- Mi";
      cout << "\nC- Sol";
      cout << "\nD- Re";
      cout << "\n   \u25B6 ";
      cin >> respuesta;

      if (respuesta == 'c' || respuesta == 'C') {
          puntaje++;
          cout << mensajeCorrecto;
       } else {
          cout << mensajeIncorrecto;
       }
      cout << "\n\nA que banda pertenece el album OK Computer?";
      cout << "\nA- Radiohead";
      cout << "\nB- Metallica";
      cout << "\nC- Arctic Monkeys";
      cout << "\nD- Rammstein";
      cout << "\n   \u25B6 ";
      cin >> respuesta;
   
      if (respuesta == 'a' || respuesta == 'A') {
         puntaje++;
         cout << mensajeCorrecto;
      } else {
          cout << mensajeIncorrecto;
       }

      cout << "\n\nCuantos tiempos representa una redonda?";
      cout << "\nA- 6";
      cout << "\nB- 3";
      cout << "\nC- 4";
      cout << "\nD- 2";
      cout << "\n   \u25B6 ";
      cin >> respuesta;
 
      if (respuesta == 'c' || respuesta == 'C') {
         puntaje++;
         cout << mensajeCorrecto;
      } else {
          cout << mensajeIncorrecto;
       }
      puntajeTotal = puntajeTotal + puntaje;
      cout << "\nCategoria finalizada, puntaje: " << puntaje;
      cout << "\n\nQueres seguir jugando? S/N: ";
      cin >> seguir;
      salir = seguir == 'n' || seguir == 'N';
    }

    if (opcion == 2) {
    	puntaje = 0;
    	cout << "\n\nCuál de las siguientes enfermedades ataca al higado?";
		cout << "\nA- Hepatitis";
		cout << "\nB- Diabetes";
		cout << "\nC- Artrósis";
		cout << "\nD- Cifoescoliosis";
		cout << "\n   \u25B6 ";
		cin >> respuesta;

		if (respuesta == 'a' || respuesta == 'A') {
			puntaje++;
			cout << mensajeCorrecto;
		} else {
			cout << mensajeIncorrecto;
		}

		cout << "\n\nQué cambio de estado ocurre en la sublimación?";
		cout << "\nA- De sólido a líquido";
		cout << "\nB- De sólido a gaseoso";
		cout << "\nC- De gaseoso a líquido";
		cout << "\nD- De líquido a solido";
		cout << "\n   \u25B6 ";
		cin >> respuesta;

		if (respuesta == 'b' || respuesta == 'B') {
			puntaje++;
			cout << mensajeCorrecto;
		} else {
			cout << mensajeIncorrecto;
		}

		cout << "\n\nComo se llama el grafico que representa a una ecuación de segundo grado?";
		cout << "\nA- Recta";
		cout << "\nB- Parabola";
		cout << "\nC- Hiperbola";
		cout << "\nD- Vector";
		cout << "\n   \u25B6 ";
		cin >> respuesta;

		if (respuesta == 'b' || respuesta == 'B') {
			puntaje++;
			cout << mensajeCorrecto;
		} else {
			cout << mensajeIncorrecto;
		}

	  puntajeTotal = puntajeTotal + puntaje;
	  cout << "\nCategoria finalizada, puntaje: " << puntaje;
      cout << "\n\nQueres seguir jugando? S/N: ";
      cin >> seguir;
      salir = seguir == 'n' || seguir == 'N';
     }

    if (opcion == 3) {
    	puntaje = 0;
    	cout << "\n\nQuien fue Frederic Chopin?";
		cout << "\nA- Un cantante";
		cout << "\nB- Un pintor";
		cout << "\nC- Un cientifico";
		cout << "\nD- Un compositor";
		cout << "\n   \u25B6 ";
		cin >> respuesta;

		if (respuesta == 'd' || respuesta == 'D') {
			puntaje++;
			cout << mensajeCorrecto;
		} else {
			cout << mensajeIncorrecto;
		}

		cout << "\n\nCual fue la civilizacion que invento la escritura?";
		cout << "\nA- Egipcios";
		cout << "\nB- Griegos";
		cout << "\nC- Sumerios";
		cout << "\nD- Persas";
		cout << "\n   \u25B6 ";
		cin >> respuesta;
		if (respuesta == 'c' || respuesta == 'C') {
			puntaje++;
			cout << mensajeCorrecto;
		} else {
			cout << mensajeIncorrecto;
		}

		cout << "\n\nEn que año se fundo por primera vez la ciudad de Buenos Aires?";
		cout << "\nA- 1536";
		cout << "\nB- 1542";
		cout << "\nC- 1670";
		cout << "\nD- 1642";
		cout << "\n   \u25B6 ";
		cin >> respuesta;
		if (respuesta == 'a' || respuesta == 'A') {
			puntaje++;
			cout << mensajeCorrecto;
		} else {
			cout << mensajeIncorrecto;
		}

	  puntajeTotal = puntajeTotal + puntaje;
	  cout << "\nCategoria finalizada, puntaje: " << puntaje;
      cout << "\n\nQueres seguir jugando? S/N: ";
      cin >> seguir;
      salir = seguir == 'n' || seguir == 'N';
    }

    if (opcion == 0) salir = 1;

  } while (!salir);

  cout << "\n\nPuntaje total: " << puntajeTotal;
  cout << "\n\nChau!!" << endl;

}