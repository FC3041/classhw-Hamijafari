class Citizen{
    public string FirstName{get;set;}
    public string LastName{get;set;}
    public int NID{get;set;}
    public bool IsMale{get;set;}
    public int PostalCode{get;set;} = 0;
    public Citizen(string fname, string lname, int id, bool male, int postcode){
        this.FirstName = fname; this.LastName = lname; this.NID = id; this.IsMale = male; this.PostalCode = postcode;
    }
    public Citizen(string fname, string lname, int id, bool male): this(fname, lname, id, male, 0){

    }
    public override string ToString()
    {
        return $"{base.ToString()}({this.FirstName},{this.LastName})";
    }
}
class Student:Citizen{
    public int StdID{get;set;}
    public string Major{get;set;}
    public bool IsPaying{get;set;}
    public Student(string fname, string lname, int id, bool male, string major, int SID, bool pays) : base(fname, lname, id, male){
        this.FirstName = fname; this.LastName = lname; this.NID = id; this.IsMale = male;
        this.StdID = SID; this.Major = major; this.IsPaying = pays;
    }
    public override string ToString()
    {
        return $"{base.ToString()}({this.Major})";
    }
}
// class Teacher : Citizen{
//     // TODO : salary, rating, employid, 
// }
class GradStudent : Student{
    public string Minor;
    public string ThesisTitle;
    public GradStudent(string fname, string lname, int id, bool male, string major, int SID, bool pays, string minor, string thesis) : base(fname, lname, id, male, major, SID, pays){
        this.FirstName = fname; this.LastName = lname; this.NID = id; this.IsMale = male;
        this.StdID = SID; this.Major = major; this.IsPaying = pays; this.Minor = minor; this.ThesisTitle = thesis;
    }
    public override string ToString()
    {
        return $"{base.ToString()}({this.Minor})({this.ThesisTitle})";
    }

}