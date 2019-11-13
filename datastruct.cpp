#include <iostream>
#include <vector>
#include <fstream>
#include <string>

struct student
{
  std::string nombre;
  std::string id;
  std::vector <double> notas;
};

const int Nestd = 3;
const int Nnotas = 4;
  
void dimensionar_notas(student & e, int Nest);
void imprimir_curso(std::vector <student> course);

int main (void)
{
  std::vector <student> curso(Nestd);

  // Este ciclo toma a cada estudiante en el arreglo curso y asigna un tamaño a su arreglo de notas a traves de la función dimensionarnotas()

  
  /*for (int ii=0; ii<Nest, ii++)
    {
      dimensionarnotas(curso[ii], Nnotas);
      }*/
  
  // El ciclo anterior hace exactamente lo mismo al siguiente ciclo
  
  for (auto & est: curso)
    {
      dimensionar_notas(est,Nnotas);
    }
  
  curso[0].nombre = "Diego Forero";
  curso[0].id = "23478";
  curso[0].notas[0] = 3.0;
  curso[0].notas[1] = 2.0;
  curso[0].notas[2] = 5.0;
  curso[0].notas[3] = 4.0;

  curso[1].nombre = "Andres Guerrero";
  curso[1].id = "6782";
  curso[1].notas[0] = 5.0;
  curso[1].notas[1] = 3.0;
  curso[1].notas[2] = 4.0;
  curso[1].notas[3] = 3.5;

  curso[2].nombre = "Maria Silva";
  curso[2].id = "987324";
  curso[2].notas[0] = 5.0;
  curso[2].notas[1] = 4.0;
  curso[2].notas[2] = 1.0;
  curso[2].notas[3] = 2.5;

  imprimir_curso(curso);

return 0;
}

//Se pasa como referencia la variable student para modificar la memoria interna
void dimensionar_notas(student & e, int N_notas)
{
  //Esta funcion recibe a un estudiante y da un tamaño a su arreglo de notas..
  e.notas.resize(N_notas);  
}
  
void imprimir_curso(std::vector <student> course)
{
  std::ofstream fout ("cursoanalitica.txt");
  fout<<course.size()<<"\n";
  fout<<course[0].notas.size()<<"\n";
				for (auto & est: course)
				  {
				    fout<<est.nombre<<"\n";
				    fout<<est.id<<"\n";

				    for (auto & calificaciones: est.notas)
				      {
					fout<<calificaciones<<"\t";
				      }
				    fout<<"\n";
				  }
				

  fout.close();
  
}
