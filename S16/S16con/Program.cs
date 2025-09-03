namespace S16con;

class Program
{
    static void print_citizen(Citizen[] cs){
        foreach (var c in cs){
            System.Console.WriteLine(c);
        }
    }
    static void Main(string[] args)
    {
        Citizen k = new Citizen("Kane", "Dave", 1, true);
        Student s = new Student("Zari", "Kiani", 2, false, "Math", 403522, true);
        Student gs = new GradStudent("Hami", "Jafari", 3, true, "CE", 403522, false, "AI", "AI implementation in daily life");
        Citizen[] sss = new Citizen[]{k,s,gs};
        System.Console.WriteLine(k);
        System.Console.WriteLine(s);
        System.Console.WriteLine(gs);
        System.Console.WriteLine("---------------------");
        print_citizen(sss);
    }
}
