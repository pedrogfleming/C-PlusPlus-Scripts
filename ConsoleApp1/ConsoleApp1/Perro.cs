using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fauna
{
    internal class Perro : Animal
    {
        public bool salioAPasear;
        public string tipoLadrido;
        public Perro(bool sacadoAPasear,string ladrido, bool esAdoptado,string alimentacionDelAnimal, string estadoDeAnimoActual, int años, string nombreAniaml) 
                :base(esAdoptado, alimentacionDelAnimal, estadoDeAnimoActual, años,  nombreAniaml)
        {
            salioAPasear = sacadoAPasear;
            tipoLadrido = ladrido;
        }


    }
}

