/**
 * Vertex of graph
 * @param <T>
 */

public class Vertex<T> {
    private T val;
    public Vertex(T v)
    {
        this.val = v;
    }
    public T getVal() {
        return val;
    }
    public void setVal(T val) {
        this.val = val;
    }
}
