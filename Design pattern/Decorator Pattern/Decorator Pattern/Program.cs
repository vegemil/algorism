using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator_Pattern
{
    class Program
    {
        static void Main(string[] args)
        {
            // 에스프레소 커피
                Beverage espresso = new Espresso();
               Console.WriteLine(espresso.getDescription() + " : $" + espresso.cost());
         
                // 다크로스트 커피 + 모카 + 모카 + 휘핑 크림
                Beverage darkRoast = new DarkRoast();
                darkRoast = new Mocha(darkRoast);       // 모카 추가
                darkRoast = new Mocha(darkRoast);       // 모카 한번 더 추가
                darkRoast = new Whip(darkRoast);        // 휘핑 크림 추가
               Console.WriteLine(darkRoast.getDescription() + " : $" + darkRoast.cost());
         
                // 하우스블렌드 커피 + 두유 + 모카 + 휘핑크림
                Beverage houseBlend = new HouseBlend();
                houseBlend = new Soy(houseBlend);
                houseBlend = new Mocha(houseBlend);
                houseBlend = new Whip(houseBlend);
                Console.WriteLine(houseBlend.getDescription() + " : $" + houseBlend.cost());
        }
    }
}
