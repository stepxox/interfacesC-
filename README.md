Vytvoř interfaces:

a) Area (virtuální funkce area()) 20b

b) Perimeter (vf perimeter()) 20b



Vytvoř třídu Shape, která implementuje výše zmíněná rozhraní (10b)



Vytvoř třídu Circle (s atributem poloměr - r), která bude reprezentovat kruh a bude dědit z třídy Shape (10b)



Vytvoř třídu Square (s atributem délka strany - a), která bude reprezentovat čtverec a budě dědit z třídy Shape (10b)



Implementuj metody, které udává rozhraní (10b)

Oběma třídám implementuj přetížený operátor výpisu



POVINNÉ:

Obě třídy otestuj (area, perimeter) pomocí google testu (20b)



nebo ukaž funkcionalitu v mainu (10b)



    cout << Square(5).perimeter() << endl; // 20

    cout << Circle(5).perimeter() << endl; // 31.4159

    cout << Square(5).area() << endl; // 25

    cout << Circle(5).area() << endl; // 78.53
