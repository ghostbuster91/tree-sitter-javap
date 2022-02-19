public final class ArgClass {
   public int f1;
   private boolean f2;
   private static double f3 = 3.0;
   public final Integer f4;

   public ArgClass(int a) {
	this(a, false, 4.0, 11);
   }

   private ArgClass(int a, boolean b, double c, Integer d) {
	this.f1 = a;
	this.f2 = b;
	f3 = c;
	this.f4 = d;
   }
}
