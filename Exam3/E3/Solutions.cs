using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection.Metadata.Ecma335;
using System.Threading;
using System.Threading.Tasks;

namespace E3;

public class Animal
{
    public virtual string MakeSound()
    {
        return "Some generic animal sound";
    }
}
public class Dog : Animal
{
    public override string MakeSound()
    {
        return "Woof";
    }
}

public class MyPointType1
{
    public int X;
    public int Y;
}

public struct MyPointType2
{
    public int X;
    public int Y;
}

public class Comparer<T> : IComparable<T>
{
    public T v1;
    public T v2;

    public Comparer(T v1, T v2)
    {
        this.v1 = v1;
        this.v2 = v2;
    }

    public int CompareTo(T other)
    {
        return this.CompareTo(other);
    }

    public T GetLarger()
    {
        return this.GetLarger();
    }
}
public class Product : IComparable<Product>
{
    public string Name { get; set; }
    public int Price { get; set; }

    public int CompareTo(Product obj)
    {
        return this.Price.CompareTo(obj.Price);
    }
}


public class ResourceManager : IDisposable
{
    public bool IsDisposed = false;

    public void Dispose()
    {
        IsDisposed = true;
    }
}

public class LinqProblems
{
    public static List<int> FilterAndDouble(List<int> numbers)
    {
        return numbers.Where(n => n > 5 && n % 2 == 0).Select(n => n = n * 2).ToList();
    }

    public static Dictionary<string, int> GetTotalAmountByCategory(List<Sale> sales)
    {
        var result = new Dictionary<string, int>();
        // result.Add(
        //     sales.Select(s => s.Category).ToString(), sales.Select(s => s.Amount));
        sales.ForEach(s =>
        {
            if (result.ContainsKey(s.Category))
            {
                result[s.Category] += s.Amount;
            }
            else
            {
                result.Add(s.Category, s.Amount);
            }
        });
        return result;
    }
}

public class Sale
{
    public string Category { get; set; }
    public int Amount { get; set; }
}

public class Money : IEquatable<Money>
{
    public int Amount;
    public string type;

    public Money(int v1, string v2)
    {
        this.Amount = v1;
        this.type = v2;
    }
    public static Money operator+(Money m1, Money m2)
    {
        return new Money(m1.Amount + m2.Amount, m1.type);
    }
    public bool Equals(Money obj)
    {
        if (this.Amount == obj.Amount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static bool operator ==(Money a, Money b) => a.Amount.CompareTo(b.Amount) == 0;
    public static bool operator !=(Money a, Money b) => a.Amount.CompareTo(b.Amount) != 0;

    public override bool Equals(object obj)
    {
        Money m2 = obj as Money;
        if (this.Amount == m2.Amount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public override int GetHashCode()
    {
        throw new NotImplementedException();
    }
}

public class DelegateProblems
{
    public static object ToUpper { get; set; }

    public static object ToLower { get; set; }

    public static string ProcessString(string input, object toUpper)
    {
        throw new NotImplementedException();
    }
}

public class LambdaProblems
{
    public static Func<string, int> GetStringLengthCalculator()
    {
        Func<string, int> f = new Func<string, int>(t => t.Length);
        return f;
    }
}

public class Publisher
{
    public void RaiseEvent(string v)
    {
        throw new NotImplementedException();
    }
}
public class Subscriber
{
    public Publisher publisher;
    public List<string> ReceivedMessages;

    public Subscriber(Publisher publisher)
    {
        this.publisher = publisher;
    }

    public void Unsubscribe()
    {
        throw new NotImplementedException();
    }
}

public class Closures
{
    public static Func<int> CreateCounter()
    {
        throw new NotImplementedException();
    }
}

public class SafeCounter
{
    public int Count;
    Stopwatch sw = new Stopwatch();
    public void Increment()
    {
        lock (sw)
        {
            Count++;
        }
    }
}

public class DataService
{
    public async Task<string> FetchDataAsync(string v)
    {
        await Task.Delay(1000);
        return $"Data for {v}";
    }
}

public class Repository<T> where T:new()
{
    public T CreateNew()
    {
        return new T();
    }
}
public class Customer
{
    public Guid Id { get; set; }
}
public class Order
{
    public Guid Id { get; set; }
}

public interface IStage<T>
{
    public string Handle(string sentence);
    IStage<string> SetNext(IStage<string> upper);
}
public class TrimStage : IStage<TrimStage>
{
    public string Handle(string sentence)
    {
        string result = "";
        foreach (char c in sentence)
        {
            if (c != ' ')
            {
                result += c + 42;
            }
        }
        return result;
    }

    public IStage<string> SetNext(IStage<string> upper)
    {
        throw new NotImplementedException();
    }
}
public class UpperStage : IStage<UpperStage>
{
    public string Handle(string sentence)
    {
        throw new NotImplementedException();
    }

    public IStage<string> SetNext(IStage<string> upper)
    {
        throw new NotImplementedException();
    }
}
public class SuffixStage : IStage<SuffixStage>
{
    public string v;

    public SuffixStage(string v)
    {
        this.v = v;
    }

    public string Handle(string sentence)
    {
        throw new NotImplementedException();
    }

    public IStage<string> SetNext(IStage<string> upper)
    {
        throw new NotImplementedException();
    }
}