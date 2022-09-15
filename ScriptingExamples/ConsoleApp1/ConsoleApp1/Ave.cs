using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fauna
{
    internal class Ave : Animal
    {
        public float metroVolados;
        public float velocidadVuelo;
        public float maximaAlturaAlcanza;
        public Ave(float mVolados,float velVuelo,float maxAltura,
            bool esAdoptado, string alimentacionDelAnimal, string estadoDeAnimoActual, int años, string nombreAniaml)
            :base(esAdoptado, alimentacionDelAnimal, estadoDeAnimoActual, años, nombreAniaml)
        {
            metroVolados=mVolados;
            velocidadVuelo = velVuelo;
            maximaAlturaAlcanza=maxAltura;
        }
    }
}
