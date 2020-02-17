package Graph;

public class Vertex<T>{
    private T key;
    private Edge<T> nextEdge;

    public Vertex(T key)
    {
        this.key = key;
        this.nextEdge = null;
    }

    public T getKey() {
        return key;
    }

    public void setKey(T key) {
        this.key = key;
    }

    public Edge<T> getNextEdge() {
        return nextEdge;
    }

    public void setNextEdge(Edge<T> nextEdge) {
        this.nextEdge = nextEdge;
    }
}
