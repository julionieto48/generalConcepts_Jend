import java.util.Scanner;
class Main {

  static void gr_to_kg(double gr){
    double kg =gr / 1000;
    System.out.println(gr + "gramos, equivalen a ... " + kg + "kg");
  }
  static void gr_to_lb(double gr){
    double lb =gr / 453;
    System.out.println(gr + "gramos, equivalen a ... " + lb + "libras");
  }


  public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);  
    System.out.println("¿Cual es su peso en gramos?");
    double entrada = sc.nextDouble();
    gr_to_kg(entrada);
    gr_to_lb(entrada);
    sc.close();
  }
}