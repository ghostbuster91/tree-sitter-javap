import java.util.List;

public class GenericMethod {

	public <T, Y> List<T> doSomething(List<Y> args) {
		throw new RuntimeException("x");
	} 
}
