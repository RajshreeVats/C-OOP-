public class Student {
   int roll_no;
   String stu_name;
   Student(int i, String n) { // Parameterized constructor
      roll_no = i;
      stu_name = n;
   }
   void display() {
      System.out.println(roll_no+" "+stu_name);
   }
   public static void main(String args[]) {
      Student s1 = new Student(1,"Adithya");
      Student s2 = new Student(2,"Jai");
      s1.display();
      s2.display();
   }
}