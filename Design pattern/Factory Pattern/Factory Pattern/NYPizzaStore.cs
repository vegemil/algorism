using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public class NYPizzaStore : PizzaStore
    {
        public override Pizza CreatePizza(PIZZATYPE type)
        {
            Pizza pizza = null;
            PizzaIngredientFactory ingredientFactory = new NYPizzaIngredientFactory();

            switch(type)
            {
                case PIZZATYPE.CHEESE:
                    pizza = new CheesePizza(ingredientFactory);
                    pizza.setName("New York Style Cheese Pizza");
                    break;
                    
                case PIZZATYPE.VEGGIE:
                    pizza = new VeggiePizza(ingredientFactory);
                    pizza.setName("New York Style Veggie Pizza");
                    break;

                case PIZZATYPE.CLAM:
                    pizza = new ClamPizza(ingredientFactory);
                    pizza.setName("New York Style Clam Pizza");
                    break;

                case PIZZATYPE.PEPPERONI:
                    pizza = new PepperoniPizza(ingredientFactory);
                    pizza.setName("New York Style Pepperoni Pizza");
                    break;
            }

            return pizza;
        }
    }
}
