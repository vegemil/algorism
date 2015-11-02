using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
    public class DarkRoast : Beverage
    {
        public DarkRoast()
        {
            description = "다크로스트 커피";
        }


        public override double cost()
        {
            return .99;
        }
    }
}
