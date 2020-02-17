package Graph;

public class Edge<T> {
    private int index;
    private int weight;
    private Edge<T> nextEdge;

    public Edge(int index, int weight)
    {
        this.index = index;
        this.nextEdge = null;
        this.weight = weight;
    }

    public int getIndex() {
        return index;
    }

    public void setIndex(int index) {
        this.index = index;
    }

    public Edge<T> getNextEdge() {
        return nextEdge;
    }

    public void setNextEdge(Edge<T> nextEdge) {
        this.nextEdge = nextEdge;
    }

    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }
}
