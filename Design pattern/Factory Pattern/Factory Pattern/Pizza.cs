using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Factory_Pattern
{
    public abstract class Pizza
    {
        public string name;
        public Dough dough;
        public Sauce sauce;
        public Veggies[] veggies;
        public Cheese cheese;
        public Pepperoni pepperoni;
        public Clams clam;

       public abstract void Prepare();

       public void Bake()
        {
            Console.WriteLine("Bake for 25 minutes at 350");
        }

       public void Cut()
        {
            Console.WriteLine("Cutting the pizza into diagonal slices");
        }

       public void Box()
        {
            Console.WriteLine("Place pizza in official PizzaStore box");
        }

        public void setName(string name)
        {
            this.name = name;
        }

        public string getName()
        {
            return name;
        }

        public string toString()
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("Dough: " + dough.name);
            sb.AppendLine("Sauce: " + sauce.name);
            sb.AppendLine("Cheese: " + cheese.name);

            if (pepperoni != null)
                sb.AppendLine("Pepperoni: " + pepperoni.name);

            if (clam != null)
                sb.AppendLine("Clams: " + clam.name);

            if (veggies != null)
            {
                sb.Append("Veggie: ");

                sb.Append(veggies[0].name);

                for(int i = 1; i<veggies.Length; ++i)
                {
                    sb.Append(", "+ veggies[i].name);
                }
            }

            return sb.ToString();
        }

    }

    public enum PIZZATYPE
    {
        NONE,
        CHEESE,
        VEGGIE,
        CLAM,
        PEPPERONI,
        COUNT
    };
}
