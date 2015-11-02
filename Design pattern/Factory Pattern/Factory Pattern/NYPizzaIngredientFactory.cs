using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public class NYPizzaIngredientFactory : PizzaIngredientFactory
    {
        public override Dough CreateDough()
        {
            return new ThinCrustDough();
        }

        public override Sauce CreateSauce()
        {
            return new MarinaraSauce();
        }

        public override Cheese CreateCheese()
        {
            return new ReggianoCheese();
        }

        public override Veggies[] CreateVeggies()
        {
            Veggies[] veggies = { new Garlic(), new Onion(), new Mushroom(), new RedPepper() };
            return veggies;

        }

        public override Pepperoni CreatePepperoni()
        {
            return new SlicedPepperoni();
        }

        public override Clams CreateClam()
        {
            return new FreshClams();
        }
    }
}
