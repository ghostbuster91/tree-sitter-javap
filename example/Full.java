import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;
import java.lang.annotation.ElementType;

@SuppressWarnings({"unchecked", "deprecated"})
public class Full {

   @java.lang.SafeVarargs
   public static void hello(int...args) throws RuntimeException, IllegalArgumentException {
	   throw new RuntimeException("hello");
   }

   @Retention(RetentionPolicy.RUNTIME)
   @Target(value = {ElementType.TYPE, ElementType.METHOD})
   public static @interface Annotated {
	String[] names();
	String description();
   }

   @Retention(RetentionPolicy.RUNTIME)
   @Target(value = {ElementType.TYPE, ElementType.PARAMETER, ElementType.METHOD, ElementType.TYPE_PARAMETER, ElementType.TYPE_USE})
   public static @interface Marker {

   }
   @Annotated(names = {"n1", "n2"}, description= "desc")
   public static class Inner<@Marker T extends java.lang.Comparable<? extends T> & java.lang.Cloneable> {
	public final @Marker T call(@Marker final T t) throws @Marker RuntimeException {
            return t;
	}   
   }
   @Retention(RetentionPolicy.CLASS)
   public static @interface ClassMarker {

   }
   @Retention(RetentionPolicy.SOURCE)
   public static @interface SourceMarker {

   }
}
