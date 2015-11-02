using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
    public class HouseBlend: Beverage
    {
        public HouseBlend()
        {
            description = "하우스블랜드 커피";
        }

        public override double cost()
        {
            return .89;
        }
    }
}
