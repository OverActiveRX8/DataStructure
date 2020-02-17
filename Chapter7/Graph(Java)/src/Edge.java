/**
 * Edge of graph
 * @param <T>
 */

public class Edge<T> {
    private Vertex<T> from;
    private Vertex<T> to;
    private int weight;

    public Edge(Vertex<T> from, Vertex<T> to, int weight) {
        this.from = from;
        this.to = to;
        this.weight = weight;
    }

    public Vertex<T> getFrom() {
        return from;
    }
    public void setFrom(Vertex<T> from) {
        this.from = from;
    }

    public Vertex<T> getTo() {
        return to;
    }
    public void setTo(Vertex<T> to) {
        this.to = to;
    }

    public int getWeight() {
        return weight;
    }
    public void setWeight(int weight) {
        this.weight = weight;
    }
}
