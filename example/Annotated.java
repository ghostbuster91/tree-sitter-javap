import java.lang.annotation.*;
import java.lang.annotation.ElementType;

@Retention(RetentionPolicy.RUNTIME)
@Target(value = {ElementType.TYPE, ElementType.METHOD})
public @interface Annotated {

	@SuppressWarnings("deprecation")
	@Deprecated
	int explode() default 1;

}
