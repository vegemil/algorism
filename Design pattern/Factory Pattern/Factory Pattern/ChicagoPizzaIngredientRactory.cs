using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public class ChicagoPizzaIngredientRactory : PizzaIngredientFactory
    {
        public override Dough CreateDough()
        {
            return new ThickCrustDough();
        }

        public override Sauce CreateSauce()
        {
            return new PlumTomatoSauce();
        }

        public override Cheese CreateCheese()
        {
            return new MozzarellaCheese();
        }

        public override Veggies[] CreateVeggies()
        {
            Veggies[] veggies = {new BlackOlives(), new Spinach(), new EggPlant()};
            return veggies;

        }

        public override Pepperoni CreatePepperoni()
        {
            return new SlicedPepperoni();
        }

        public override Clams CreateClam()
        {
            return new FrozenClam();
        }
    }
}
