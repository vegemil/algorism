using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
   public class Milk: CondimentDecorator
    {
       private Beverage beverage;

       public Milk(Beverage beverage)
       {
           this.beverage = beverage;
       }

       public override string getDescription()
       {
           return beverage.getDescription() + ", 스팀밀크";
       }

       public override double cost()
       {
           return beverage.cost() + .10;
       }
    }
}
