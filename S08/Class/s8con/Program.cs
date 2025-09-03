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
    public static void reverse_setnence_reverse_words(string sentence, out string rev_sen){
        string[] words = sentence.Split(" ");
        for (int i = 0; i < words.Length/2; i++){
            string temp = words[i];
            words[i] = words[words.Length-1-i];
            words[words.Length-1-i] = temp;
        }
        for (int i = 0; i < words.Length; i++){
            reverse_string(words[i], out words[i]);
        }
        rev_sen = string.Join(" ", words);
    }
    public static void reverse_setnence(string sentence, out string rev_sen){
        string[] words = sentence.Split(" ");
        for (int i = 0; i < words.Length/2; i++){
            string temp = words[i];
            words[i] = words[words.Length-1-i];
            words[words.Length-1-i] = temp;
        }
        rev_sen = string.Join(" ", words);
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
