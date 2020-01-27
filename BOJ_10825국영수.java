import java.util.*;

public class BOJ_10825국영수 {

    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        ArrayList<Student> students = new ArrayList<>();
        for(int i = 0 ; i < N ; i++){
            String _name = s.next();
            int _ko = s.nextInt();
            int _en = s.nextInt();
            int _math = s.nextInt();
            students.add(new Student(_name, _ko, _en, _math));
        }
        Collections.sort(students, new Comparator<Student>() {
            @Override
            public int compare(Student s1, Student s2) {
                if (s1.ko > s2.ko) {
                    return -1;
                } else if (s1.ko < s2.ko) {
                    return 1;
                } else if (s1.ko == s2.ko && s1.en < s2.en) {
                    return -1;
                } else if (s1.ko == s2.ko && s1.en > s2.en) {
                    return 1;
                } else if (s1.ko == s2.ko && s1.en == s2.en && s1.math > s2.math) {
                    return -1;
                } else if (s1.ko == s2.ko && s1.en == s2.en && s1.math < s2.math) {
                    return 1;
                }
                else {
                    return s1.name.compareTo(s2.name);
                }
            }
        });

        Iterator<Student> iter = students.iterator();
        for(int i = 0 ; i < students.size() ; i++){
            System.out.println(iter.next().name);
        }
    }

}

class Student{
    String name;
    int ko;
    int en;
    int math;
    public Student(String _name, int _ko, int _en, int _math){
        this.name = _name;
        this.ko = _ko;
        this.en = _en;
        this.math = _math;
    }
}