using System.Numerics;

namespace S27Con;

public static class Basic
{
    public static void Swap<T>(ref T a, ref T b)
    {
        T temp = b;
        b = a;
        a = temp;

    }
}
public class ComplexNumber<T> where T : INumber<T>
{
    public T Real;
    public T Img;
    public ComplexNumber(T real, T img)
    {
        this.Real = real;
        this.Img = img;
    }
    public override string ToString()
    {
        return $"{Real}+{Img}i";
    }
    public static ComplexNumber<T> operator +(ComplexNumber<T> a, ComplexNumber<T> b)
    {
        return new ComplexNumber<T>(a.Real + b.Real, a.Img + b.Img);
    }
}

public abstract class Developer
{
    public string name;
    public bool IsFemale;
    public Developer(string n, bool isFemale)
    {
        this.name = n;
        this.IsFemale = isFemale;
    }
    public virtual string Name
    {
        get
        {
            return (IsFemale ? "خانم " : "آقای ") + this.name;
        }
        set
        {
            this.name = value;
        }
    }
    public virtual int Salary { get; }
}

public class SeniorDeveloper : Developer
{
    public SeniorDeveloper(string n, bool isFemale) : base(n, isFemale)
    {
    }
    public override int Salary
    {
        get
        {
            return 4_500_000;
        }
    }

    public virtual int CalculateSalary(int x)
    {
        return 5_000_000;
    }
}

public class JuniorDeveloper : Developer
{
    public JuniorDeveloper(string n, bool isFemale) : base(n, isFemale)
    {
    }
    public override int Salary
    {
        get
        {
            return 2_800_000;
        }
    }
}

public class FullStackDeveloper : SeniorDeveloper
{
    public FullStackDeveloper(string n, bool isFemale) : base(n, isFemale)
    {
    }
    public override int Salary
    {
        get
        {
            return 7_500_000;
        }
    }
    public override int CalculateSalary(int x)
    {
        return 8_200_000;
    }
    public override string Name
    {
        get
        {
            return "دکتر " + name;
        }
        set
        {
            this.name = value;
        }
    }
}

public class InflationStat
{
    public static Tuple<string,int,int,int> Parse(string s1, string s2)
    {
        return new Tuple<string, int, int, int>(Country,);
    }
}

class Program
{
    static void Main(string[] args)
    {
    }
}
