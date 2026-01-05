import java.util.Stack;
public class StackImplementation {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<Integer>();
        stack.push(10);
        stack.push(20);
        stack.pop();
        System.out.println("Top: " + stack.peek());
    }
}
