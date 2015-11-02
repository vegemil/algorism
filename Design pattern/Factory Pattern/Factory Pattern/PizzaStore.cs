using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public abstract class PizzaStore
    {
        public Pizza OrderPizza(PIZZATYPE type)
        {
            Pizza pizza;

            pizza = CreatePizza(type);

            pizza.Prepare();
            pizza.Bake();
            pizza.Cut();
            pizza.Box();

            return pizza;
        }

        public abstract Pizza CreatePizza(PIZZATYPE type);
    }
}
