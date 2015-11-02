using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Factory_Pattern
{
    class PepperoniPizza : Pizza
    {
        PizzaIngredientFactory ingredientFactory;

        public PepperoniPizza(PizzaIngredientFactory ingredientFactory)
        {
            this.ingredientFactory = ingredientFactory;
        }

        public override void Prepare()
        {
            Console.WriteLine("Preparing " + name);
            dough = ingredientFactory.CreateDough();
            sauce = ingredientFactory.CreateSauce();
            cheese = ingredientFactory.CreateCheese();
            pepperoni = ingredientFactory.CreatePepperoni();
        }



    }
}
