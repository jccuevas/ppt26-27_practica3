/*******************************************************
 * Protocolos de Transporte
 * Grado en Ingeniería Telemática
 * Dpto. de Ingeníería de Telecomunicación
 * Escuela Politécnia Superior de Linares
 * Universidad de Jaén
 *
 *******************************************************
 * Práctica 1
 *******************************************************
 * Fichero: protocol.h
 * Versión: 4.1
 * Curso: 2026/2027
 * Descripción: Fichero de encabezado para práctica 3
 * Autor: Juan Carlos Cuevas Martínez
 *
 *******************************************************
 * PONGA SU NOMBRE AQUÍ:
 * Estudiante 1: Juan Carlos Cuevas Martínez
 * Estudiante 2 [si lo hubiera]:
 *
 ******************************************************/
#ifndef protocolostpte_practicas_headerfile
#define protocolostpte_practicas_headerfile
#endif

// COMANDOS DE APLICACION
#define HELO "HELO"
#define PASS "PASS"
#define QUIT "QUIT"
#define ECHO "ECHO"
#define ROOM "ROOM" //Comando creado para Tarea 4


// RESPUESTAS A COMANDOS DE APLICACION
#define ST220  "220"
#define ST250  "250"

//FIN DE RESPUESTA
#define CRLF "\r\n"

//ESTADOS
#define S_INIT 0
#define S_HELO 1
#define S_MAIL 2
#define S_RCPT 3
#define S_DATA 4
#define S_WRITE 5
#define S_QUIT 6


//PUERTO DEL SERVICIO
#define TCP_SERVICE_PORT	25

