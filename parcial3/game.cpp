#include "game.h"
#include <string.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>

#define MAX 100
#define VACIO -999

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace parcial3;

//Variables globales
typedef struct snodo
{
	char letra;
	struct snodo *hijos[28];
	int fin;
}tnodo;

tnodo *raiz = NULL;
int contWords = 0;
int arreglo[MAX];
int SIZE2 = 0;
string nombres[MAX] = {};



//Prototipo funciones
tnodo *crea(char letra);
int indice(char letra);
void ejemplo(void);
tnodo *buscar(char *llave, int *pos);
void insertar(char *palabra);
bool busca(char *palabra);
void eliminar(char *palabra);
int izq(int nodo);
int der(int nodo);
int padre(int nodo);
int inserta(int valor, string nombre);
void inicializar(void);
int minimo(void);
int elimina(void);
void intercambiar(int a, int b, string nombre);
void todo(void);



[STAThread]

void main() { //Funcion para abrir formulario y entorno visual
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	game form;
	Application::Run(%form);
	
	
}

void game::iniciar() { //Funcion Main
	ejemplo();
	insertar("BRIMSTONE");
	insertar("CYPHER");
	insertar("REYNA");
	insertar("VIPER");
	insertar("SOVA");
	insertar("SAGE");
	insertar("OMEN");
	insertar("PHOENIX");
	insertar("KILLJOY");
	insertar("SKYE");
	timer1->Interval = 1000;  //Los incrementos del reloj seran de un segundo
    timer1->Enabled = true;  //Empezamos la cuenta del cronometro

}

void game::check() { //Funcion que se invocará cada vez que se presione el botón CHECK
	string palabra="";
	bool band = false;
	char cadena[20];

	//Brimstone
	palabra.push_back(txt1->Text[0]);
	palabra.push_back(txt2->Text[0]);
	palabra.push_back(txt3->Text[0]);
	palabra.push_back(txt4->Text[0]);
	palabra.push_back(txt5->Text[0]);
	palabra.push_back(txt6->Text[0]);
	palabra.push_back(txt7->Text[0]);
	palabra.push_back(txt8->Text[0]);
	palabra.push_back(txt9->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt1->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt1->Enabled=false;
		txt2->Enabled = false;
		txt3->Enabled = false;
		txt4->Enabled = false;
		txt5->Enabled = false;
		txt6->Enabled = false;
		txt7->Enabled = false;
		txt8->Enabled = false;
		txt9->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste el agente Brimstone", "Agente encontrado", MessageBoxButtons::OK);
	}

	palabra="";
	memset(cadena, 0, 20);
	//Cypher
	palabra.push_back(txt10->Text[0]);
	palabra.push_back(txt11->Text[0]);
	palabra.push_back(txt12->Text[0]);
	palabra.push_back(txt13->Text[0]);
	palabra.push_back(txt14->Text[0]);
	palabra.push_back(txt2->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt10->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt10->Enabled = false;
		txt11->Enabled = false;
		txt12->Enabled = false;
		txt13->Enabled = false;
		txt14->Enabled = false;
		txt2->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste el agente Cypher", "Agente encontrado", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//Viper
	palabra.push_back(txt15->Text[0]);
	palabra.push_back(txt3->Text[0]);
	palabra.push_back(txt16->Text[0]);
	palabra.push_back(txt17->Text[0]);
	palabra.push_back(txt18->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt15->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt15->Enabled = false;
		txt3->Enabled = false;
		txt16->Enabled = false;
		txt17->Enabled = false;
		txt18->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste la agente Viper", "Agente encontrada", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//phoenix
	palabra.push_back(txt19->Text[0]);
	palabra.push_back(txt20->Text[0]);
	palabra.push_back(txt7->Text[0]);
	palabra.push_back(txt21->Text[0]);
	palabra.push_back(txt22->Text[0]);
	palabra.push_back(txt23->Text[0]);
	palabra.push_back(txt24->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt19->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt19->Enabled = false;
		txt20->Enabled = false;
		txt7->Enabled = false;
		txt21->Enabled = false;
		txt22->Enabled = false;
		txt23->Enabled = false;
		txt24->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste el agente Phoenix", "Agente encontrado", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//killjoy
	palabra.push_back(txt25->Text[0]);
	palabra.push_back(txt23->Text[0]);
	palabra.push_back(txt26->Text[0]);
	palabra.push_back(txt27->Text[0]);
	palabra.push_back(txt28->Text[0]);
	palabra.push_back(txt29->Text[0]);
	palabra.push_back(txt30->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt25->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt25->Enabled = false;
		txt23->Enabled = false;
		txt26->Enabled = false;
		txt27->Enabled = false;
		txt28->Enabled = false;
		txt29->Enabled = false;
		txt30->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste la agente Killjoy", "Agente encontrada", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//skye
	palabra.push_back(txt31->Text[0]);
	palabra.push_back(txt32->Text[0]);
	palabra.push_back(txt33->Text[0]);
	palabra.push_back(txt9->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt31->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt31->Enabled = false;
		txt32->Enabled = false;
		txt33->Enabled = false;
		txt9->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste la agente Skye", "Agente encontrada", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//reyna
	palabra.push_back(txt34->Text[0]);
	palabra.push_back(txt35->Text[0]);
	palabra.push_back(txt30->Text[0]);
	palabra.push_back(txt36->Text[0]);
	palabra.push_back(txt37->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt34->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt34->Enabled = false;
		txt35->Enabled = false;
		txt30->Enabled = false;
		txt36->Enabled = false;
		txt37->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste la agente mexicana Reyna", "Agente encontrada", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//sova
	palabra.push_back(txt38->Text[0]);
	palabra.push_back(txt39->Text[0]);
	palabra.push_back(txt40->Text[0]);
	palabra.push_back(txt37->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt39->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt38->Enabled = false;
		txt39->Enabled = false;
		txt40->Enabled = false;
		txt37->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste el agente Sova", "Agente encontrado", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//sage
	palabra.push_back(txt38->Text[0]);
	palabra.push_back(txt41->Text[0]);
	palabra.push_back(txt42->Text[0]);
	palabra.push_back(txt43->Text[0]);

	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt41->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt38->Enabled = false;
		txt41->Enabled = false;
		txt42->Enabled = false;
		txt43->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste la agente Sage", "Agente encontrada", MessageBoxButtons::OK);
	}

	palabra = "";
	memset(cadena, 0, 20);
	//omen
	palabra.push_back(txt44->Text[0]);
	palabra.push_back(txt4->Text[0]);
	palabra.push_back(txt45->Text[0]);
	palabra.push_back(txt46->Text[0]);
	strcpy(cadena, palabra.c_str());
	if (busca(cadena) && txt44->Enabled) { //ENCONTRO EL AGENTE
		contWords++;
		band = true;
		txt44->Enabled = false;
		txt4->Enabled = false;
		txt45->Enabled = false;
		txt46->Enabled = false;
		MessageBox::Show("Bien hecho! Encontraste el agente Omen", "Agente encontrado", MessageBoxButtons::OK);
	}



	//No existe ninguna coincidencia
	if (!band) {
		MessageBox::Show("No existe ningun agente llamado asi", "No existe coincidencia", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}


	//VICTORIA - Las 10 palabras fueron encontradas
	if (contWords == 10) {
		contWords = 0;
		timer1->Enabled = false;
		//Cuadro de mensaje avisando la victoria
		MessageBox::Show("Ganaste! Tiempo empleado: " + timer + " segundos." , "VICTORIA", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//Inputbox para capturar el nombre de la persona
		String^ str3 = gcnew String(Microsoft::VisualBasic::Interaction::InputBox(L"Ingresa tu nombre para registrar tu record", L"Datos de record", L"", 500, 500));
		std::string name = msclr::interop::marshal_as<std::string>(str3);
		//Inserta el nombre y el tiempo que duro en el MIN-HEAP
		inserta(timer, name);
		
		//Actualiza la tabla del mejor jugador
		System::Convert::ToString(arreglo[0]);
		String^ str1 = gcnew String(nombres[0].c_str());
		MessageBox::Show("RECORD GUARDADO!\n\nNombre: " + str3 + "\nTiempo: " + timer, "RECORD GUARDADO", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		lblPrimero->Text = "Mejor jugador: "+str1+ " - " +arreglo[0]+" segundos";
		reiniciar();
	}

}

void  game::reiniciar() {
	txt1 -> Text = "-";
	txt2->Text = "-";
	txt3->Text = "-";
	txt4->Text = "-";
	txt5->Text = "-";
	txt6->Text = "-";
	txt7->Text = "-";
	txt8->Text = "-";
	txt9->Text = "-";
	txt10->Text = "-";
	txt11->Text = "-";
	txt12->Text = "-";
	txt13->Text = "-";
	txt14->Text = "-";
	txt15->Text = "-";
	txt16->Text = "-";
	txt17->Text = "-";
	txt18->Text = "-";
	txt19->Text = "-";
	txt20->Text = "-";
	txt20->Text = "-";
	txt21->Text = "-";
	txt22->Text = "-";
	txt23->Text = "-";
	txt24->Text = "-";
	txt25->Text = "-";
	txt26->Text = "-";
	txt27->Text = "-";
	txt28->Text = "-";
	txt29->Text = "-";
	txt30->Text = "-";
	txt31->Text = "-";
	txt32->Text = "-";
	txt33->Text = "-";
	txt34->Text = "-";
	txt35->Text = "-";
	txt36->Text = "-";
	txt37->Text = "-";
	txt38->Text = "-";
	txt39->Text = "-";
	txt40->Text = "-";
	txt41->Text = "-";
	txt42->Text = "-";
	txt43->Text = "-";
	txt44->Text = "-";
	txt45->Text = "-";
	txt46->Text = "-";

	txt1->Enabled = true;
	txt2->Enabled = true;
	txt3->Enabled = true;
	txt4->Enabled = true;
	txt5->Enabled = true;
	txt6->Enabled = true;
	txt7->Enabled = true;
	txt8->Enabled = true;
	txt9->Enabled = true;
	txt10->Enabled = true;
	txt11->Enabled = true;
	txt12->Enabled = true;
	txt13->Enabled = true;
	txt14->Enabled = true;
	txt15->Enabled = true;
	txt16->Enabled = true;
	txt17->Enabled = true;
	txt18->Enabled = true;
	txt19->Enabled = true;
	txt20->Enabled = true;
	txt20->Enabled = true;
	txt21->Enabled = true;
	txt22->Enabled = true;
	txt23->Enabled = true;
	txt24->Enabled = true;
	txt25->Enabled = true;
	txt26->Enabled = true;
	txt27->Enabled = true;
	txt28->Enabled = true;
	txt29->Enabled = true;
	txt30->Enabled = true;
	txt31->Enabled = true;
	txt32->Enabled = true;
	txt33->Enabled = true;
	txt34->Enabled = true;
	txt35->Enabled = true;
	txt36->Enabled = true;
	txt37->Enabled = true;
	txt38->Enabled = true;
	txt39->Enabled = true;
	txt40->Enabled = true;
	txt41->Enabled = true;
	txt42->Enabled = true;
	txt43->Enabled = true;
	txt44->Enabled = true;
	txt45->Enabled = true;
	txt46->Enabled = true;
	timer = 0;
	timer1->Enabled = true;

}

void game::revelarResultados() {
	txt1->Text = "B";
	txt2->Text = "R";
	txt3->Text = "I";
	txt4->Text = "M";
	txt5->Text = "S";
	txt6->Text = "T";
	txt7->Text = "O";
	txt8->Text = "N";
	txt9->Text = "E";
	txt10->Text = "C";
	txt11->Text = "Y";
	txt12->Text = "P";
	txt13->Text = "H";
	txt14->Text = "E";
	txt15->Text = "V";
	txt16->Text = "P";
	txt17->Text = "E";
	txt18->Text = "R";
	txt19->Text = "P";
	txt20->Text = "H";
	txt21->Text = "E";
	txt22->Text = "N";
	txt23->Text = "I";
	txt24->Text = "X";
	txt25->Text = "K";
	txt26->Text = "L";
	txt27->Text = "L";
	txt28->Text = "J";
	txt29->Text = "O";
	txt30->Text = "Y";
	txt31->Text = "S";
	txt32->Text = "K";
	txt33->Text = "Y";
	txt34->Text = "R";
	txt35->Text = "E";
	txt36->Text = "N";
	txt37->Text = "A";
	txt38->Text = "S";
	txt39->Text = "O";
	txt40->Text = "V";
	txt41->Text = "A";
	txt42->Text = "G";
	txt43->Text = "E";
	txt44->Text = "O";
	txt45->Text = "E";
	txt46->Text = "N";

}

bool busca(char *palabra)
{

	tnodo *donde;
	int x;

	donde = buscar(palabra, &x);
	if (donde->fin && x == strlen(palabra))
		return 1;
	else
		return 0;


}
tnodo *buscar(char *llave, int *pos)
{
	int tam, i, letra;
	tnodo *aux;
	aux = raiz;
	tam = strlen(llave);
	for (i = 0; i <= tam; i++)
	{
		letra = indice(llave[i]);
		if (aux->hijos[letra] != NULL)
			aux = aux->hijos[letra];
		else
			break;
	}
	*pos = i;
	//1) se salio por el break-> la palabra no existe,
	//2) se salga por que se acabo la palabra, pero el nodo no sea fin de palabra


	return aux;
}
tnodo *crea(char letra)
{
	tnodo *nuevo;
	int i;
	nuevo = (tnodo *)malloc(sizeof(tnodo));
	if (nuevo != NULL)
	{
		nuevo->letra = letra;
		nuevo->fin = 0;
		for (i = 0; i < 28; i++)
			nuevo->hijos[i] = NULL;
	}
	return nuevo;
}

int indice(char letra) {
	int x = 26;
	if (letra >= 'a' && letra <= 'z')
		x = letra - 'a';
	if (letra >= 'A' && letra <= 'Z')
		x = letra - 'A';
	return x;
}

void ejemplo(void)
{ //rata, raton, rato, ratonera
	tnodo *p1, *p2, *p3;
	raiz = crea(0);

	p1 = crea('r');
	raiz->hijos[indice('r')] = p1;



}

void insertar(char *palabra)
{
	int p;
	tnodo *aux, *nuevo;
	aux = buscar(palabra, &p);
	for (; p < strlen(palabra); p++)
	{
		nuevo = crea(palabra[p]);
		aux->hijos[indice(palabra[p])] = nuevo;
		aux = nuevo;
	}
	aux->fin = 1;
	cout << "Palabra insertada correctamente" << endl;

}


void eliminar(char *palabra) {
	int x = 0, numHijos, tam = 0;
	tnodo *aux, *aux2;
	bool band = false;
	do {
		aux = buscar(palabra, &x);
		tam = strlen(palabra);
		if (aux->fin && x == tam) {
			numHijos = 0;
			//Revisa si tiene hijos
			for (int i = 0; i < 28; i++) {
				aux2 = aux->hijos[i];
				if (aux2 != NULL) {
					numHijos++;
				}
			}

			if (numHijos > 0) {//Si tiene hijos solo pone el fin como falso
				if (band == false) {
					aux->fin = 0;
				}
				cout << "Palabra eliminada correctamente" << endl;
				return;
			}
			else {
				band = true;//Si no tiene hijos borra el nodo
				palabra[tam - 1] = NULL;
				aux->fin = 0;
				delete aux;
			}


		}
		else {
			printf("\nLa palabra a eliminar NO existe");
		}
	} while (aux == raiz);//Si no tiene hijos y llega hasta la raiz se detiene
	cout << "Palabra eliminada correctamente" << endl;

}

int izq(int nodo)
{
	return 2 * nodo + 1;
}
int der(int nodo)
{
	return 2 * nodo + 2;
}
int padre(int nodo)
{
	int p = -1;
	if (nodo != 0)
		p = (nodo - 1) / 2;
	return p;
}



void inicializar(void)
{
	int i;
	for (i = 0; i < MAX; i++)
		arreglo[i] = VACIO;
}

int minimo(void)
{
	return arreglo[0];
}

int inserta(int valor, string nombre)
{

	int aux, b = 0;
	if (SIZE2 < MAX)
	{
		arreglo[SIZE2] = valor;
		nombres[SIZE2] = nombre;

		aux = SIZE2++;
		while (arreglo[aux] < arreglo[padre(aux)] && aux > 0)
		{
			intercambiar(aux, padre(aux), nombre);
			aux = padre(aux);
		}
		b = 1;
	}
	return b;
}

void intercambiar(int a, int b, string nombre)
{
	int x;
	string tempName = "";

	x = arreglo[a];
	tempName = nombres[a];

	arreglo[a] = arreglo[b];
	nombres[a] = nombres[b];

	arreglo[b] = x;
	nombres[b] = tempName;
}

void todo(void)
{
	int i;
	cout << endl << "LISTA PACIENTES:";
	for (i = 0; i < SIZE2; i++) {
		cout << "\n[#" << i << "] Prioridad: " << arreglo[i] << " - Nombre: " << nombres[i];
	}
	cout << endl;
}


int elimina(void)
{
	int x = 0;
	string tempName = "";
	if (SIZE2 > 0)
	{
		//Remplaza el max-heap por la ultima hoja del arbol
		x = arreglo[0];
		tempName = nombres[SIZE2 - 1];
		arreglo[0] = arreglo[SIZE2 - 1];
		nombres[0] = nombres[SIZE2 - 1];
		SIZE2--;
		arreglo[SIZE2] = VACIO;
		nombres[SIZE2] = VACIO;



		int aux = 0;
		//recorre por el lado izquierdo
		while (arreglo[aux] < arreglo[izq(aux)] && aux < SIZE2)
		{
			intercambiar(aux, izq(aux), tempName);
			aux = izq(aux);
		}
		//recorre por el lado derecho
		while (arreglo[aux] < arreglo[der(aux)] && aux < SIZE2)
		{
			intercambiar(aux, der(aux), tempName);
			aux = der(aux);
		}


	}
	todo();
	return x;
}
