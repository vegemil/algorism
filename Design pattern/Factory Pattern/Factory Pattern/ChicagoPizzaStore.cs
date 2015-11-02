using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public class ChicagoPizzaStore : PizzaStore
    {
        public override Pizza CreatePizza(PIZZATYPE type)
        {
            Pizza pizza = null;
            PizzaIngredientFactory ingredientFactory = new ChicagoPizzaIngredientRactory();

            switch(type)
            {
                case PIZZATYPE.CHEESE:
                    pizza = new CheesePizza(ingredientFactory);
                    pizza.setName("Chicago Style Cheese Pizza");
                    break;
                    
                case PIZZATYPE.VEGGIE:
                    pizza = new VeggiePizza(ingredientFactory);
                    pizza.setName("Chicago Style Veggie Pizza");
                    break;

                case PIZZATYPE.CLAM:
                    pizza = new ClamPizza(ingredientFactory);
                    pizza.setName("Chicago Style Clam Pizza");
                    break;

                case PIZZATYPE.PEPPERONI:
                    pizza = new PepperoniPizza(ingredientFactory);
                    pizza.setName("Chicago Style Pepperoni Pizza");
                    break;
            }

            return pizza;
        }
    }
}
