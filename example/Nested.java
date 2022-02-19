class Nested {

   public abstract class Inner {
	 public Integer f1; 
	 abstract protected void call();
   }

   private static class Inner2 {
	 public volatile Integer f1;
	 protected transient String f2;
	
	 synchronized void call() {
	    throw new RuntimeException("why");	 
	 }
   }

   protected interface Inner3<T extends Comparable<? super T>> {
	void call(final String arg) throws IllegalArgumentException, ArrayIndexOutOfBoundsException;
   }
}
