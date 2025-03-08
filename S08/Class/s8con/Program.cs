namespace s8con;

public class Program
{
    public static int add(int a, int b){
        return a+b;
    }
    public static void prepend_user(string s, out string sout){
        sout = "user: " + s;
    }
    public static void reverse_string(string s, out string sout){
        sout = "";
        foreach (char c in s){
            sout = c + sout;
        }
    }
    //TODO ! below
    public static void reverse_setnence(string[] s, out string[] sout){
        sout = [];
        for (int i = s.Length-1; i <= 0; i++){
            sout[s.Length-i-1] = s[i]; 
        }
    }
    static void Main(string[] args){
        Student s1 = new Student("hami", 1234);
        Console.WriteLine(s1.name);
        Console.WriteLine(Student.StudentCount);
    }
    static void Main3(string[] args){
        //string[] set = "salam chetori";
    }
    static void Main2(string[] args){
        string name = "hami";
        string srev;
        reverse_string(name, out srev);
        Console.WriteLine(srev);

    }
    static void Main1(string[] args)
    {
        int sum = 0;
        while (true){
            System.Console.WriteLine("Nums?");
            string s = Console.ReadLine();
            if (string.IsNullOrEmpty(s)){
                break;
            }
            int n;
            if (! int.TryParse(s, out n)){
                Console.WriteLine("Wrong! Try Again");
                continue;
            }
            string sout;
            prepend_user(s, out sout);
            Console.WriteLine(sout);
            sum += int.Parse(s);
        }
        Console.WriteLine(sum);
    }
}
