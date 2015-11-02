using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Factory_Pattern
{
    class VeggiePizza : Pizza
    {
        PizzaIngredientFactory ingredientFactory;

        public VeggiePizza(PizzaIngredientFactory ingredientFactory)
        {
            this.ingredientFactory = ingredientFactory;
        }

        public override void Prepare()
        {
            Console.WriteLine("Preparing " + name);
            dough = ingredientFactory.CreateDough();
            sauce = ingredientFactory.CreateSauce();
            cheese = ingredientFactory.CreateCheese();
            veggies = ingredientFactory.CreateVeggies();
        }
    }
}
