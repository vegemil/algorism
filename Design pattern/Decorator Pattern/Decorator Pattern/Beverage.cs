using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
    public abstract class Beverage
    {
        protected String description = "제목없음";

        public abstract double cost();

        public virtual string getDescription()
        {
            return description;
        }
    }
}
