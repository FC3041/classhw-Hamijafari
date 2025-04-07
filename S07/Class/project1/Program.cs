namespace project1;

class Program
{
    static void update(int[] num){
        for (int i = 0; i < num.Length; i++){
            num[i]++;
        }
    }

    static void update_int(ref int x){
        x++;
    }

    static void Main(string[] args)
    {
        int[] nums = new int[10] {1,2,3,4,5,6,7,8,9,10};
        update(nums);

        int num = 0;
        update_int(ref num);
        Console.WriteLine(num);
        // for (int i = 0; i < 1000000; i++){
        //     int[] nums = new int [1000*1000];
        //     Thread.Sleep(1);
        // }
        for (int i = 0; i < nums.Length; i++){
            Console.Write(nums[i] + ",");
        }
    }
}
