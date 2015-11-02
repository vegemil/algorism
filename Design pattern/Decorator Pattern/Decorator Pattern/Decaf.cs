using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
    public class Decaf : Beverage
    {
        public Decaf()
        {
            description = "디카페인 커피";
        }


        public override double cost()
        {
            return 1.05;
        }
    }
}
