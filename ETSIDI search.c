#include <stdio.h>
#include <stdbool.h>

typedef struct{
    char nombre[75];
	int curso;
    int semestre;
	char tipo[15];
	float Ncreditos;
    int codigo;
}plan;

void planesdeestudio(int caso);
void grados();
void cursos(int n);
void cabecera();
void cabecera1();
void fintabla();
void fintabla1();
int main(){

	int opcion;
	char usuario[50];
	bool cerrar = false;
	printf("Bienvenido a ETSIDI search, introduzca su nombre de usuario:\n\n");

	gets(usuario);

	while(!cerrar){

		printf("\n\nPor favor seleccione una opcion: \n1) Buscar un plan de estudios\n2) Buscar asignaturas en funcion del curso\n3) Buscar informacion sobre una asignatura\n4) Comparador de asignaturas\n0)Salir\n");
		scanf("%d", &opcion);

		switch(opcion){
			case 1:
                printf("Bienvenido al menu de planes de estudio, por favor elija la carrera de la cual desea ver el plan de estudios. \n");
                grados();
                planesdeestudio (1);
				break;

			case 2:
			    printf("Bienvenido al menu de las asignaturas de una carrera por curso, por favor elija una carrera.\n");
			    grados();
			    planesdeestudio (2);
				break;

			case 3:
			    printf("Escriba la asignatura de la que desea que le proporcionemos informacion.\n");
				break;

            case 4:
			    printf("Bienvenido al comparador de asignaturas.\n");
				break;

			case 0:
				cerrar=true;
				printf("Gracias por haber usado ETSIDI search %s,\nHasta pronto!", usuario);
				break;
		}

	}

}
void grados()
{
	printf("1 - Grado en Ingenieria Electrica\n2 - Grado en Ingenieria Electronica Industrial y Automatica\n3 - Grado en Ingenieria Mecanica\n4 - Grado en Ingenieria Quimica\n");
	printf("5 - Grado en Ingenieria Dis. Industrial y Desarrollo de Producto\n6 - Doble Grado en Ingenieria Electrica y en Ingenieria Electronica Industrial y Automatica\n7 - Doble Grado en Ingenieria en Dis. Industrial y Desarrollo de Producto y en Ingenieria Mecanica\n");
}
void cursos(int n)
{
    printf("A continuacion elija el curso:\n");
    printf("1 - Primer curso\n2 - Segundo curso\n3 - Tercero curso\n4 - Cuarto curso\n");
    if (n==2){
        printf("5 - Quinto curso\n");
    }
}
void cabecera()
{
    printf("|============|==============================================================================|============|=================|============|============|\n");
    printf("| %10s | %76s | %10s | %15s | %10s | %10s |\n","Codigo","Asignaturas","Creditos","Tipo","Curso","Semestre");
    printf("|============|==============================================================================|============|=================|============|============|\n");
}
void fintabla()
{
    printf("|============|==============================================================================|============|=================|============|============|\n");
}
void cabecera1()
{
    printf("|============|==============================================================================|============|=================|============|\n");
    printf("| %10s | %76s | %10s | %15s | %10s |\n","Codigo","Asignaturas","Creditos","Tipo","Semestre");
    printf("|============|==============================================================================|============|=================|============|\n");
}
void fintabla1()
{
    printf("|============|==============================================================================|============|=================|============|\n");
}
void planesdeestudio(int caso)
{
    int i,g,opcion,op1;
    // Tabla de cada plan de estudios.
    plan tablaE[52];
    plan tablaA[48];
    plan tablaM[66];
    plan tablaQ[58];
    plan tablaD[58];
    plan tablaEE[55];
    plan tablaDM[72];
    //Eleccion de la carrera de busqueda
	scanf("%d",&opcion);
	//Asignamos un  fichero para cada plan de estudios de cada carrera y lo leemos.
    FILE * fichero1;
    fichero1=fopen("planE.txt","r");
    g=0;
    while (fscanf(fichero1,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaE[g].codigo, tablaE[g].nombre,&tablaE[g].Ncreditos,tablaE[g].tipo,&tablaE[g].curso,&tablaE[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero1);
	FILE * fichero2;
	fichero2=fopen("planA.txt","r");
	g=0;
	while (fscanf(fichero2,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaA[g].codigo, tablaA[g].nombre,&tablaA[g].Ncreditos,tablaA[g].tipo,&tablaA[g].curso,&tablaA[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero2);
	FILE * fichero3;
    fichero3=fopen("planM.txt","r");
    g=0;
    while (fscanf(fichero3,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaM[g].codigo, tablaM[g].nombre,&tablaM[g].Ncreditos,tablaM[g].tipo,&tablaM[g].curso,&tablaM[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero3);
	FILE * fichero4;
	fichero4=fopen("planQ.txt","r");
    g=0;
    while (fscanf(fichero4,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaQ[g].codigo, tablaQ[g].nombre,&tablaQ[g].Ncreditos,tablaQ[g].tipo,&tablaQ[g].curso,&tablaQ[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero4);
	FILE * fichero5;
	fichero5=fopen("planD.txt","r");
    g=0;
    while (fscanf(fichero5,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaD[g].codigo, tablaD[g].nombre,&tablaD[g].Ncreditos,tablaD[g].tipo,&tablaD[g].curso,&tablaD[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero5);
	FILE * fichero6;
	fichero6=fopen("planEE.txt","r");
    g=0;
    while (fscanf(fichero6,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaEE[g].codigo, tablaEE[g].nombre,&tablaEE[g].Ncreditos,tablaEE[g].tipo,&tablaEE[g].curso,&tablaEE[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero6);
	FILE * fichero7;
	fichero7=fopen("planDM.txt","r");
    g=0;
    while (fscanf(fichero7,"%d;%[^;];%f;%[^;];%d;%d\n",
               &tablaDM[g].codigo, tablaDM[g].nombre,&tablaDM[g].Ncreditos,tablaDM[g].tipo,&tablaDM[g].curso,&tablaDM[g].semestre)!=EOF){
				g++;
				}
    fclose(fichero7);
    //OPCION 1: cada "case" representa una carrera, se imprime en pantalla el nombre del grado y una tabla del plan de estudios
    //del grado
    if (caso==1){
    switch (opcion){
        case 1:
		    printf("GRADO EN INGENIERIA ELECTRICA\n");
		    cabecera();
            for(i=0;i<52;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaE[i].codigo, tablaE[i].nombre,tablaE[i].Ncreditos,tablaE[i].tipo,tablaE[i].curso,tablaE[i].semestre);
            }
            fintabla();
			break;
        case 2:
		    printf("GRADO EN INGENIERIA ELECTRONICA INDUSTRIAL Y AUTOMATICA\n");
		    cabecera();
            for(i=0;i<48;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaA[i].codigo, tablaA[i].nombre,tablaA[i].Ncreditos,tablaA[i].tipo,tablaA[i].curso,tablaA[i].semestre);
            }
            fintabla();
			break;
        case 3:
		    printf("GRADO EN INGENIERIA MECANICA\n");
		    cabecera();
            for(i=0;i<66;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaM[i].codigo, tablaM[i].nombre,tablaM[i].Ncreditos,tablaM[i].tipo,tablaM[i].curso,tablaM[i].semestre);
            }
            fintabla();
			break;
        case 4:
		    printf("GRADO EN INGENIERIA QUIMICA\n");
		    cabecera();
            for(i=0;i<58;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaQ[i].codigo, tablaQ[i].nombre,tablaQ[i].Ncreditos,tablaQ[i].tipo,tablaQ[i].curso,tablaQ[i].semestre);
            }
            fintabla();
			break;
		case 5:
		    printf("GRADO EN INGENIERIA EN DIS. INDUSTRIAL Y DESARROLLO DE PRODUCTO\n");
		    cabecera();
            for(i=0;i<58;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaD[i].codigo, tablaD[i].nombre,tablaD[i].Ncreditos,tablaD[i].tipo,tablaD[i].curso,tablaD[i].semestre);
            }
            fintabla();
			break;
        case 6:
		    printf("DOBLE GRADO EN INGENIERIA ELECTRICA Y EN INGENIERIA ELECTRONICA INDUSTRIAL Y AUTOMATICA\n");
		    cabecera();
            for(i=0;i<55;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaEE[i].codigo, tablaEE[i].nombre,tablaEE[i].Ncreditos,tablaEE[i].tipo,tablaEE[i].curso,tablaEE[i].semestre);
            }
            fintabla();
			break;
        case 7:
		    printf("DOBLE GRADO EN INGENIERIA EN DIS. INDUSTRIAL Y DESARROLLO DE PRODUCTO Y EN INGENIERIA MECANICA\n");
		    cabecera();
            for(i=0;i<58;i++){
                    printf("| %10d |  %75s | %10.1f | %15s | %10d | %10d |\n", tablaDM[i].codigo, tablaDM[i].nombre,tablaDM[i].Ncreditos,tablaDM[i].tipo,tablaDM[i].curso,tablaDM[i].semestre);
            }
            fintabla();
			break;

	}
	}
//OPCION 2: Para no tener que repetir la lectura de los mismos ficheros en otro función distinta, se ha implementado
// en esta. Una vez se elige la carrera de la que se quiere buscar el curso, se le pide al usuario que indique el curso
//en particular y se imprime en pantalla solo ese curso.
	else
	{
    switch (opcion){
        case 1:
            cursos(1);
            scanf("%d",&op1);
            cabecera1();
            for(i=0;i<52;i++)
                {
                    if(tablaE[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaE[i].codigo, tablaE[i].nombre,tablaE[i].Ncreditos,tablaE[i].tipo,tablaE[i].semestre);
                    }
                }
            fintabla1();
			break;
        case 2:
            cursos(1);
            scanf("%d",&op1);
            cabecera1();
            for(i=0;i<48;i++)
                {
                    if(tablaA[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaA[i].codigo, tablaA[i].nombre,tablaA[i].Ncreditos,tablaA[i].tipo,tablaA[i].semestre);
                    }
                }
            fintabla1();
            break;
        case 3:
            cursos(1);
            scanf("%d",&op1);
            cabecera1();
            for(i=0;i<66;i++)
                {
                    if(tablaM[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaM[i].codigo, tablaM[i].nombre,tablaM[i].Ncreditos,tablaM[i].tipo,tablaM[i].semestre);
                    }
                }
            fintabla1();
			break;
        case 4:
            cursos(1);
            scanf("%d",&op1);
            cabecera1();
            for(i=0;i<58;i++)
                {
                    if(tablaQ[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaQ[i].codigo, tablaQ[i].nombre,tablaQ[i].Ncreditos,tablaQ[i].tipo,tablaQ[i].semestre);
                    }
                }
            fintabla1();
			break;
        case 5:
            cursos(1);
            scanf("%d",&op1);
            cabecera1();
            for(i=0;i<58;i++)
                {
                    if(tablaD[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaD[i].codigo, tablaD[i].nombre,tablaD[i].Ncreditos,tablaD[i].tipo,tablaD[i].semestre);
                    }
                }
            fintabla1();
			break;
        case 6:
            cursos(2);
            scanf("%d",&op1);
            cabecera1();
            for(i=0;i<55;i++)
                {
                    if(tablaEE[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaEE[i].codigo, tablaEE[i].nombre,tablaEE[i].Ncreditos,tablaEE[i].tipo,tablaEE[i].semestre);
                    }
                }
            fintabla1();
			break;
		case 7:
		    cursos(2);
            scanf("%d",&op1);
		    cabecera1();
            for(i=0;i<58;i++)
                {
                    if(tablaDM[i].curso ==op1)
                    {
                        printf("| %10d |  %75s | %10.1f | %15s | %10d |\n", tablaDM[i].codigo, tablaDM[i].nombre,tablaDM[i].Ncreditos,tablaDM[i].tipo,tablaDM[i].semestre);
                    }
                }
            fintabla1();
            break;
            }

	}
}
