using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public class Program
    {
        static void Main(string[] args)
        {
            Pizza order;
            PizzaStore nyPizzaStore = new NYPizzaStore();
            PizzaStore ccgPizzaStore = new ChicagoPizzaStore();


            order =  nyPizzaStore.OrderPizza(PIZZATYPE.CHEESE);
            Console.WriteLine("Order1 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = nyPizzaStore.OrderPizza(PIZZATYPE.CLAM);
            Console.WriteLine("Order2 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = nyPizzaStore.OrderPizza(PIZZATYPE.PEPPERONI);
            Console.WriteLine("Order3 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = nyPizzaStore.OrderPizza(PIZZATYPE.VEGGIE);
            Console.WriteLine("Order4 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = ccgPizzaStore.OrderPizza(PIZZATYPE.CHEESE);
            Console.WriteLine("Order1 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = ccgPizzaStore.OrderPizza(PIZZATYPE.CLAM);
            Console.WriteLine("Order2 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = ccgPizzaStore.OrderPizza(PIZZATYPE.PEPPERONI);
            Console.WriteLine("Order3 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();

            order = ccgPizzaStore.OrderPizza(PIZZATYPE.VEGGIE);
            Console.WriteLine("Order4 is " + order.getName());
            Console.WriteLine(order.toString());
            Console.WriteLine();



        }
    }
}
