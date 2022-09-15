using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fauna
{
    internal class Animal
    {
        public bool adoptado;
        public string alimentacion;
        public string pelaje;
        public string estadoDeAnimo;
        public int edad;
        public string nombre;
        public Animal(bool esAdoptado,string alimentacionDelAnimal, string estadoDeAnimoActual,int años,string nombreAniaml)
        {
            adoptado = esAdoptado;

            if (string.IsNullOrEmpty(alimentacionDelAnimal))
            {
                alimentacion = "Cualquier cosa";
            }
            else
            {
                alimentacion = alimentacionDelAnimal;
            }

            alimentacion = alimentacionDelAnimal;
            ValidarEstadoAnimo(estadoDeAnimoActual);
            pelaje = "Sin pelo";
            edad = años;
            nombre = nombreAniaml;
        }

        private void ValidarEstadoAnimo(string estadoDeAnimoAnimal)
        {
            switch (estadoDeAnimoAnimal)
            {
                case "Feliz":
                    estadoDeAnimo = estadoDeAnimoAnimal;
                    break;
                case "Triste":
                    estadoDeAnimo = estadoDeAnimoAnimal;
                    break;
                case "Cansado":
                    estadoDeAnimo = estadoDeAnimoAnimal;
                    break;
                default:
                    estadoDeAnimo = "Indiferente";
                    break;
            }
        }

        public void AdoptarAnimal()
        {
            adoptado = true;
        }
        public void AsignarPelaje(string tipoPelaje)
        {
            pelaje = tipoPelaje;
        }

        public void DefinirEstadoDeAnimo(string estadoAnimo)
        {
            estadoDeAnimo = estadoAnimo;
        }
    }
}
