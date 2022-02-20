import java.lang.annotation.*;
import java.lang.annotation.ElementType;

@Retention(RetentionPolicy.RUNTIME)
public @interface Annotated {

	@SuppressWarnings("deprecation")
	@Deprecated
	int explode() default 1;

}
