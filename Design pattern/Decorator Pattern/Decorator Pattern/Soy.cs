using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
    public class Soy : CondimentDecorator
    {
        private Beverage beverage;
        public Soy(Beverage beverage)
        {
            this.beverage = beverage;
        }

        public override string getDescription()
        {
            return beverage.getDescription() + ",  두유";
        }

        public override double cost()
        {
            return beverage.cost() + .15;
        }
    }
}
