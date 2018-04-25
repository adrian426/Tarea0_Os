#ifndef EMBELLECER_H
#define EMBELLECER_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Embellecer{
public:
    /* 
     * EFE: Inicializa los valores necesarios para empezar a procesar el código.
     * REQ: Hilera de caracteres con el código a justificar, una hilera para el 
     * nombre del archivo de salida y un entero para la cantidad de espacios a 
     * usar como tabulador. 
     * MOD: N/A.
     */
    Embellecer(string content,int tabSize);
    
    /* 
     * EFE: Libera Espacio.
     * REQ: N/A.
     * MOD: Embellecer.
     */
    ~Embellecer();
	
    /* 
     * EFE: Aumenta en 1 el contador de la palabra ingresada en caso de existir en la lista de palabras reservadas.
     * REQ: Hilera válida.
     * MOD: used.
     */
    void updateCountReservedW(string reserved);
    
    /* 
     * EFE: Crea la hilera con la cuenta de palabras reservadas usadas y la retorna.
     * REQ: N/A.
     * MOD: N/A.
     */
    string createUsedWords();
	
	/* 
     * EFE: Agrega los "tabs" a la hilera.
     * REQ: cantidad actual de espacios a agregar.
     * MOD: prettyCode.
     */
    void indent(int tabs);
	
	/* 
     * EFE: Lee la hilera a justificar, la guarda en otra donde su resultado ya está justificado y la retorna.
     * REQ: N/A.
     * MOD: prettyCode.
     */
    string processContent();
    
private:
	int used[34];
	bool ignore;
	int tabSize;
	string uglyCode;
	string prettyCode;
	string RESERVED_WORDS[34] = {"template",
		  "catch","try","break","int","string","bool","#include","static","true","false","void","public","private","friendclass","extends","class","#define","for","if","else","while","long","double","unsigned","const","float","char","new","return","switch","case","namespace","default"};      
	};
#endif /* EMBELLECER_H */
