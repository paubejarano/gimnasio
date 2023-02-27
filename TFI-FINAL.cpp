#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <string.h>

using namespace std;

struct recepcion
{
	char usuarioU[20];
	char passwordU[20];
	char nombreR[60];
};

struct gimnasio
{
	char entrenador[20];
	char passwordE[20];
	char nombre[60];
	int legajo;
	int sueldo;
};

struct fechaIng
{
	int dia;
	int mes;
	int anio;
};

struct actividad
{
	char nombre[20];
	int hora;
	char entrenador[20];
	char rutina[380];
};
struct cliente
{
	char nomAp[60];
	char domic[20];
	int dni;
	int edad;
	float peso;
	fechaIng fec;
	actividad activ;
};

// Prototipos de las funciones
void menuPrincipal();		
void recepcionDeClientes(); 
void gym();					
void admin();			

// Funciones del submenu de recepcion
void inicioSesion(); 
void menuRecep();	 
void nuevoCliente(); 
void listaCliente(); 
void listaFechaPago();

// Funciones del submenu GYM
void inicioSesion();  
void menuGym();		  
void listaCliente();  
void registroRutina();

// Funciones del submenu de administracion
void inicioSesion();	
void menuAdmin();			
void registroRecepcion();	
void registroEntrenador();	
void pagoEntrenadores();
void entrenadorMayorHora(); 

int main()
{

	menuPrincipal();
	return 0;
}

void menuPrincipal()
{
	int opcion;
	bool repetir = true;

	do
	{
		system("cls");

		cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
		cout << "\t\t\t--------------" << endl;
		cout << "\n\t1. Recepcion" << endl;
		cout << "\t2. GYM" << endl;
		cout << "\t3. Administracion" << endl;
		cout << "\t0. SALIR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			recepcionDeClientes();
			break;

		case 2:
			gym();
			break;

		case 3:
			admin();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}

// Definiciones de las funciones

void recepcionDeClientes()
{
	int opcion;
	bool repetir = true;

	cliente cli;

	do
	{
		system("cls");

		cout << "\n\n\t\t\tMENU DE RECEPCION" << endl;
		cout << "\t\t\t-----------------" << endl;
		cout << "\n\t1. Iniciar sesion" << endl;
		cout << "\t0. REGRESAR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			inicioSesion();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}

void menuRecep()
{
	int opcion;
	bool repetir = true;

	cliente cli;

	do
	{
		system("cls");
		cout << "\t\t\t-------------------------" << endl;
		cout << "\t1. Crear usuarios de clientes" << endl;
		cout << "\t2. Listado de clientes y actividad que desarrollan" << endl;
		cout << "\t3. Listado de fechas de pagos" << endl;
		cout << "\t0. REGRESAR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			nuevoCliente();
			break;

		case 2:
			listaCliente();
			break;

		case 3:
			listaFechaPago();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}

void gym()
{
	int opcion;
	bool repetir = true;

	do
	{
		system("cls");

		cout << "\n\n\t\t\tMENU DE GYM" << endl;
		cout << "\t\t\t---------------" << endl;
		cout << "\n\t1. Iniciar Sesion" << endl;
		cout << "\t0. REGRESAR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			inicioSesion();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}

void menuGym()
{
	int opcion;
	bool repetir = true;

	do
	{
		system("cls");
		cout << "\t\t\t-------------------------" << endl;
		cout << "\t1. Lista de clientes y actividad que desarrollan" << endl;
		cout << "\t2. Registrar rutinas de gimnasia" << endl;
		cout << "\t0. REGRESAR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			listaCliente();
			break;

		case 2:
			registroRutina();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}

void admin()
{
	int opcion;
	bool repetir = true;

	do
	{
		system("cls");

		cout << "\n\n\t\t\tMENU DE ADMINISTRACION" << endl;
		cout << "\t\t\t-------------------------" << endl;
		cout << "\n\t1. Iniciar Sesion" << endl;
		cout << "\t0. REGRESAR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			inicioSesion();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}

void menuAdmin()
{
	int opcion;
	bool repetir = true;

	do
	{

		system("cls");
		cout << "\t\t\t-------------------------" << endl;
		cout << "\t1. Registrar usuario de recepcion" << endl;
		cout << "\t2. Registrar entrenador" << endl;
		cout << "\t3. Calcular pagos a entrenadores" << endl;
		cout << "\t4. Entrenador con mayor carga horaria" << endl;
		cout << "\t0. REGRESAR" << endl;

		cout << "\n\tIngrese una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			registroRecepcion();
			break;

		case 2:
			registroEntrenador();
			break;

		case 3:
			pagoEntrenadores();
			break;

		case 4:
			entrenadorMayorHora();
			break;

		case 0:
			repetir = false;
			break;
		}
	} while (repetir);
}
// FUNCIONES EN COMUN
void inicioSesion()
{
	FILE *arch;
	FILE *arch1;

	recepcion recep;
	gimnasio entre;

	arch = fopen("usuarios.dat", "a+b");
	arch1 = fopen("entrenadores.dat", "a+b");

	if (arch == NULL && arch1 == NULL)
	{
		exit(1);
	}

	char usuario1[20];
	char password1[20];
	bool b = false;

	printf("\n\n\n\t\t\t********** Ingreso al Sistema **********\n\n");
	printf("\t\t\t Ingrese Nombre de Usuario: \t\t");
	_flushall();
	gets(usuario1);
	printf("\t\t\t Ingrese Password: \t\t");
	_flushall();
	gets(password1);

	if (strcmp(usuario1, "admin") == 0 && strcmp(password1, "hola") == 0)
	{
		// administracion
		b = true;
		menuAdmin();
	}
	else
	{
		// lee usuarios de usuarios.dat
		fread(&recep, sizeof(recepcion), 1, arch);
		while (!feof(arch))
		{
			if (strcmp(recep.usuarioU, usuario1) == 0 && strcmp(recep.passwordU, password1) == 0)
			{
				// recepcion
				b = true;
				menuRecep();
			}
			fread(&recep, sizeof(recepcion), 1, arch);
		}
		fclose(arch);

		// lee entrenadores de entrenadores.dat
		fread(&entre, sizeof(gimnasio), 1, arch1);
		while (!feof(arch1))
		{
			if (strcmp(entre.entrenador, usuario1) == 0 && strcmp(entre.passwordE, password1) == 0)
			{
				// gym
				b = true;
				menuGym();
			}
			fread(&entre, sizeof(gimnasio), 1, arch1);
		}
		fclose(arch1);

		if (b == false)
		{
			printf("EL USUARIO NO EXISTE...");
			system("pause>nul");
		}
	}
}

void listaCliente()
{
	cliente cli;
	FILE *arch2;

	arch2 = fopen("clientes.dat", "rb");

	if (arch2 == NULL)
	{
		exit(1);
	}

	fread(&cli, sizeof(cliente), 1, arch2);
	while (!feof(arch2))
	{
		printf("Nombre y Apellido: %s\n", cli.nomAp);
		printf("DNI: %d\n", cli.dni);
		printf("EDAD: %d\n", cli.edad);
		printf("PESO: %.2fkg\n", cli.peso);
		printf("DOMICILIO: %s\n", cli.domic);
		printf("FECHA DE INGRESO: %d/%d/%d\n", cli.fec.dia, cli.fec.mes, cli.fec.anio);
		printf("Actividad elegida: %s\n", cli.activ.nombre);
		printf("Horario en el cual realiza dicha actividad: %dhs\n", cli.activ.hora);
		printf("Entrenador asignado: %s\n", cli.activ.entrenador);
		printf("Rutina: %s\n", cli.activ.rutina);
		printf("\n------------------------------------\n");

		fread(&cli, sizeof(cliente), 1, arch2);
	}
	fclose(arch2);
	system("pause>nul");
}

// ADMINISTRACION
void registroRecepcion()
{
	int b1 = 0, b2 = 0, b = 0, c = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

	recepcion recep;
	FILE *arch;

	arch = fopen("usuarios.dat", "a+b");

	if (arch == NULL)
	{
		exit(1);
	}
	do
	{

		system("PAUSE");
		system("cls");
		printf("\n\n\n\t\t\t********** Crear Cuenta **********\n\n");
		printf("Nombre y Apellido: ");
		_flushall();
		gets(recep.nombreR);
		printf("Ingrese Nombre de Usuario: \t\t");
		_flushall();
		gets(recep.usuarioU);
		printf("Ingrese password: \t\t");
		_flushall();
		gets(recep.passwordU);

		if (strlen(recep.usuarioU) >= 6 && strlen(recep.usuarioU) <= 8)
		{
			b1 = 1;
		}
		if (b1 == 0)
		{
			printf("ERROR: Usuario debe contener como minimo 6 y como maximo 8 caracteres");
		}

		for (int i = 0; i < strlen(recep.usuarioU); i++)
		{
			switch (recep.usuarioU[0])
			{
			case 'a':
				b = 1;
				break;
			case 'b':
				b = 1;
				break;
			case 'c':
				b = 1;
				break;
			case 'd':
				b = 1;
				break;
			case 'e':
				b = 1;
				break;
			case 'f':
				b = 1;
				break;
			case 'g':
				b = 1;
				break;
			case 'h':
				b = 1;
				break;
			case 'i':
				b = 1;
				break;
			case 'j':
				b = 1;
				break;
			case 'k':
				b = 1;
				break;
			case 'l':
				b = 1;
				break;
			case 'm':
				b = 1;
				break;
			case 'n':
				b = 1;
				break;
			case 'o':
				b = 1;
				break;
			case 'p':
				b = 1;
				break;
			case 'q':
				b = 1;
				break;
			case 'r':
				b = 1;
				break;
			case 's':
				b = 1;
				break;
			case 't':
				b = 1;
				break;
			case 'u':
				b = 1;
				break;
			case 'v':
				b = 1;
				break;
			case 'w':
				b = 1;
				break;
			case 'x':
				b = 1;
				break;
			case 'y':
				b = 1;
				break;
			case 'z':
				b = 1;
				break;
			}
		}

		if (b == 0)
		{
			printf("ERROR: Usuario debe comenzar con minuscula\n\n");
		}

		for (int i = 0; i < strlen(recep.usuarioU); i++)
		{
			switch (recep.usuarioU[i])

			{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				c++;
				break;
			}
		}
		if (c < 2)
		{
			printf("ERROR: Usuario debe contener como minimo 2 mayusculas\n");
		}

		c1 = 0;
		for (int i = 0; i < strlen(recep.usuarioU); i++)
		{
			switch (recep.usuarioU[i])

			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '+':
			case '-':
			case '/':
			case '*':
			case '?':
			case '�':
			case '�':
			case '!':
				c1++;
				break;
			}
		}
		if (c1 > 3)
		{
			printf("ERROR: Usuario debe contener como maximo 3 digitos \n");
		}

		if (strlen(recep.passwordU) >= 6 && strlen(recep.passwordU) <= 32)
		{
			b2 = 1;
		}
		if (b2 == 0)
		{
			printf("ERROR: La contrase�a debe contener como minimo 6 y como maximo 32 caracteres \n");
		}

		for (int i = 0; i < strlen(recep.passwordU); i++)
		{
			switch (recep.passwordU[i])

			{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				c2++;
				break;
			}
		}

		if (c2 == 0)
		{
			printf("ERROR: La contrase�a debe contener al menos una mayuscula\n");
		}

		for (int i = 0; i < strlen(recep.passwordU); i++)
		{
			switch (recep.passwordU[i])
			{
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				c3++;
				break;
			}
		}
		if (c3 == 0)
		{
			printf("***********ERROR**********\n\n");
			printf("La contrasenia debe contener al menos una letra minuscula\n");
		}

		for (int i = 0; i < strlen(recep.passwordU); i++)
		{
			switch (recep.passwordU[i])

			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				c4++;
				break;
			}
		}

		if (c4 == 0)
		{
			printf("ERROR: La contrasenia debe contener al menos un numero\n");
		}
		int c5 = 0;

		for (int i = 0; i < strlen(recep.passwordU); i++)
		{
			switch (recep.passwordU[i])

			{
			case ',':
			case '.':
			case ';':
			case ':':
			case '�':
			case '?':
			case '�':
			case '!':
			case '[':
			case ']':
			case '"':
			case '-':
			case '_':
			case '(':
			case ')':
				c5++;
				break;
			}
		}

		if (c5 != 0)
		{
			printf("ERROR: La contrase�a no debe contener signos de puntuacion %d\n", c5);
		}
		c6 = 0;
		for (int i = 0; i < strlen(recep.passwordU); i++)
		{
			if (recep.passwordU[i + 1] - recep.passwordU[i] == 1)
			{
				c6++;
			}
		}
		if (c6 >= 3)
		{
			printf("ERROR: La contrase�a no debe contener 3 numeros consecutivos");
		}

	} while (b1 == 0 || b2 == 0 || b == 0 || c < 2 || c1 > 3 || c2 == 0 || c3 == 0 || c4 == 0 || c5 != 0 || c6 >= 3);

	fwrite(&recep, sizeof(recepcion), 1, arch);
	fclose(arch);
	printf("RECEPCIONISTA CREADO CON EXITO...");
	system("pause>nul");
}
void registroEntrenador()
{
	int b1 = 0, b2 = 0, b = 0, c = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
	gimnasio entre;

	FILE *arch1;

	arch1 = fopen("entrenadores.dat", "a+b");

	if (arch1 == NULL)
	{
		exit(1);
	}
	do
	{

		system("PAUSE");
		system("cls");
		printf("\n\n\n\t\t\t********** Crear Cuenta **********\n\n");
		printf("Nombre y Apellido: ");
		_flushall();
		gets(entre.nombre);
		printf("Legajo: ");
		scanf("%d", &entre.legajo);
		printf("Ingrese Nombre de Usuario: \t\t");
		_flushall();
		gets(entre.entrenador);
		printf("Ingrese Password: \t\t");
		_flushall();
		gets(entre.passwordE);

		if (strlen(entre.entrenador) >= 6 && strlen(entre.entrenador) <= 8)
		{
			b1 = 1;
		}
		if (b1 == 0)
		{
			printf("ERROR: Usuario debe contener como minimo 6 y como maximo 8 caracteres\n");
		}

		for (int i = 0; i < strlen(entre.entrenador); i++)
		{
			switch (entre.entrenador[0])
			{
			case 'a':
				b = 1;
				break;
			case 'b':
				b = 1;
				break;
			case 'c':
				b = 1;
				break;
			case 'd':
				b = 1;
				break;
			case 'e':
				b = 1;
				break;
			case 'f':
				b = 1;
				break;
			case 'g':
				b = 1;
				break;
			case 'h':
				b = 1;
				break;
			case 'i':
				b = 1;
				break;
			case 'j':
				b = 1;
				break;
			case 'k':
				b = 1;
				break;
			case 'l':
				b = 1;
				break;
			case 'm':
				b = 1;
				break;
			case 'n':
				b = 1;
				break;
			case 'o':
				b = 1;
				break;
			case 'p':
				b = 1;
				break;
			case 'q':
				b = 1;
				break;
			case 'r':
				b = 1;
				break;
			case 's':
				b = 1;
				break;
			case 't':
				b = 1;
				break;
			case 'u':
				b = 1;
				break;
			case 'v':
				b = 1;
				break;
			case 'w':
				b = 1;
				break;
			case 'x':
				b = 1;
				break;
			case 'y':
				b = 1;
				break;
			case 'z':
				b = 1;
				break;
			}
		}

		if (b == 0)
		{
			printf("ERROR: Usuario debe comenzar con minuscula\n\n");
		}

		for (int i = 0; i < strlen(entre.entrenador); i++)
		{
			switch (entre.entrenador[i])

			{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				c++;
				break;
			}
		}
		if (c < 2)
		{
			printf("ERROR: Usuario debe contener como minimo 2 mayusculas\n");
		}

		c1 = 0;
		for (int i = 0; i < strlen(entre.entrenador); i++)
		{
			switch (entre.entrenador[i])

			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '+':
			case '-':
			case '/':
			case '*':
			case '?':
			case '�':
			case '�':
			case '!':
				c1++;
				break;
			}
		}
		if (c1 > 3)
		{
			printf("ERROR: Usuario debe contener como maximo 3 digitos \n");
		}

		if (strlen(entre.passwordE) >= 6 && strlen(entre.passwordE) <= 32)
		{
			b2 = 1;
		}
		if (b2 == 0)
		{
			printf("ERROR: La contrase�a debe contener como minimo 6 y como maximo 32 caracteres \n");
		}

		for (int i = 0; i < strlen(entre.passwordE); i++)
		{
			switch (entre.passwordE[i])

			{
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				c2++;
				break;
			}
		}

		if (c2 == 0)
		{
			printf("ERROR: La contrase�a debe contener al menos una mayuscula\n");
		}

		for (int i = 0; i < strlen(entre.passwordE); i++)
		{
			switch (entre.passwordE[i])
			{
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				c3++;
				break;
			}
		}
		if (c3 == 0)
		{
			printf("***********ERROR**********\n\n");
			printf("La contrase�a debe contener al menos una letra minuscula\n");
		}

		for (int i = 0; i < strlen(entre.passwordE); i++)
		{
			switch (entre.passwordE[i])

			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				c4++;
				break;
			}
		}

		if (c4 == 0)
		{
			printf("ERROR: La contrasenia debe contener al menos un numero\n");
		}
		int c5 = 0;

		for (int i = 0; i < strlen(entre.passwordE); i++)
		{
			switch (entre.passwordE[i])

			{
			case ',':
			case '.':
			case ';':
			case ':':
			case '�':
			case '?':
			case '�':
			case '!':
			case '[':
			case ']':
			case '"':
			case '-':
			case '_':
			case '(':
			case ')':
				c5++;
				break;
			}
		}

		if (c5 != 0)
		{
			printf("ERROR: La contrasenia no debe contener signos de puntuacion %d\n", c5);
		}
		c6 = 0;
		for (int i = 0; i < strlen(entre.passwordE); i++)
		{
			if (entre.passwordE[i + 1] - entre.passwordE[i] == 1)
			{
				c6++;
			}
		}
		if (c6 >= 3)
		{
			printf("ERROR: La contrasenia no debe contener 3 numeros consecutivos");
		}

	} while (b1 == 0 || b2 == 0 || b == 0 || c < 2 || c1 > 3 || c2 == 0 || c3 == 0 || c4 == 0 || c5 != 0 || c6 >= 3);
	fwrite(&entre, sizeof(gimnasio), 1, arch1);
	fclose(arch1);

	printf("ENTRENADOR CREADO CON EXITO...");
	system("pause>nul");
}

// RECEPCION
void nuevoCliente()
{
	FILE *arch2;

	arch2 = fopen("clientes.dat", "a+b");

	if (arch2 == NULL)
	{
		exit(1);
	}

	cliente cli;

	printf("Nombre y Apellido: ");
	_flushall();
	gets(cli.nomAp);
	printf("DNI: ");
	scanf("%d", &cli.dni);
	printf("EDAD: ");
	scanf("%d", &cli.edad);
	printf("PESO: ");
	scanf("%f", &cli.peso);
	printf("DOMICILIO: ");
	_flushall();
	gets(cli.domic);
	printf("Fecha de ingreso: \n");
	printf("Dia: ");
	scanf("%d", &cli.fec.dia);
	printf("Mes: ");
	scanf("%d", &cli.fec.mes);
	printf("Anio: ");
	scanf("%d", &cli.fec.anio);
	printf("Actividad?: ");
	_flushall();
	gets(cli.activ.nombre);
	printf("Horario a realizar: ");
	scanf("%d", &cli.activ.hora);
	printf("Entrenador elegido: ");
	_flushall();
	gets(cli.activ.entrenador);

	fwrite(&cli, sizeof(cliente), 1, arch2);

	fclose(arch2);

	printf("NUEVO CLIENTE REGISTRADO...");
	system("pause>nul");
	menuRecep();
}

void listaFechaPago()
{

	int d, m, a, ingreso, actual, cuota = 3500, meses, total;
	char nombre[60];
	bool b = false;

	FILE *arch2;

	arch2 = fopen("clientes.dat", "a+b");

	if (arch2 == NULL)
	{
		exit(1);
	}

	cliente cli;

	printf("\n\nCUOTA MENSUAL: $3500 \n\n");

	printf("Ingrese nombre y apellido del cliente: ");
	_flushall();
	gets(nombre);

	fread(&cli, sizeof(cliente), 1, arch2);

	while (!feof(arch2))
	{
		if (strcmp(cli.nomAp, nombre) == 0)
		{
			b = true;
			printf("Ingrese fecha actual DD/MM/AAAA\n");
			printf("dia: ");
			scanf("%d", &d);
			printf("mes: ");
			scanf("%d", &m);
			printf("anio: ");
			scanf("%d", &a);

			ingreso = (cli.fec.anio * 365) + (cli.fec.mes - 1) * 30 + cli.fec.dia;
			actual = (a * 365) + (m - 1) * 30 + d;

			meses = round((actual - ingreso) / 30);
			total = meses * cuota;

			break;
		}
		fread(&cli, sizeof(cliente), 1, arch2);
	}

	fclose(arch2);

	if (b == false)
	{
		printf("ERROR: NO EXISTE EL CLIENTE...");
		system("pause>nul");
		menuRecep();
	}
	else
	{
		printf("Total a pagar: $%d\n", total);
		system("pause>nul");
		menuRecep();
	}
}

// GYM

void registroRutina()
{
	char nombreC[60];
	bool band = false;

	FILE *arch2;

	arch2 = fopen("clientes.dat", "a+b");

	if (arch2 == NULL)
	{
		exit(1);
	}

	cliente cli;

	printf("Ingrese nombre del cliente: ");
	_flushall();
	gets(nombreC);

	fread(&cli, sizeof(cliente), 1, arch2);

	while (!feof(arch2))
	{
		if (strcmp(nombreC, cli.nomAp) == 0)
		{
			band = true;
			printf("Ingrese rutina: ");
			_flushall();
			gets(cli.activ.rutina);
			fwrite(&cli, sizeof(cliente), 1, arch2);
			break;
		}
		fread(&cli, sizeof(cliente), 1, arch2);
	}

	fclose(arch2);

	if (band == false)
	{
		printf("\nERROR: No existe el cliente buscado..");
		system("pause>nul");
		menuGym();
	}
	else
	{
		printf("\nRUTINA GUARDADA CON EXITO...");
		system("pause>nul");
		menuGym();
	}
}

void pagoEntrenadores()
{
	gimnasio entre;
	int leg, tarifa = 300, horas;
	bool band = false;

	FILE *arch1;

	arch1 = fopen("entrenadores.dat", "r+b");

	if (arch1 == NULL)
	{
		exit(1);
	}

	printf("Legajo a buscar: ");
	scanf("%d", &leg);

	printf("RECUERDE QUE LA TARIFA POR HORA ES $300\n");

	fread(&entre, sizeof(gimnasio), 1, arch1);

	while (!feof(arch1))
	{
		if (leg == entre.legajo)
		{
			band = true;
			printf("Horas trabajadas: \n");
			scanf("%d", &horas);

			entre.sueldo = tarifa * horas;
			fwrite(&entre, sizeof(gimnasio), 1, arch1);
			break;
		}
		fread(&entre, sizeof(gimnasio), 1, arch1);
	}

	fclose(arch1);

	if (band == false)
	{
		printf("ERROR: No existe el legajo buscado..");
		system("pause>nul");
		menuAdmin();
	}
	else
	{
		printf("SUELDO: $ %d\n", entre.sueldo);
		system("pause>nul");
		menuAdmin();
	}
}
void entrenadorMayorHora()
{
	gimnasio entre;
	FILE *arch1;
	int mayor = 0;

	arch1 = fopen("entrenadores.dat", "rb");

	if (arch1 == NULL)
	{
		exit(1);
	}

	fread(&entre, sizeof(gimnasio), 1, arch1);
	while (!feof(arch1))
	{
		if (entre.sueldo > mayor)
		{
			mayor = entre.sueldo;
			entre.nombre;
		}
		fread(&entre, sizeof(gimnasio), 1, arch1);
	}

	printf("El entrenador con mas carga horaria es: %s", entre.nombre);

	fclose(arch1);
	system("pause>nul");
	admin();
}
