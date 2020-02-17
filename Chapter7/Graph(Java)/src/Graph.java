import java.util.Vector;

public class Graph<T> {
    private Vector<Vertex<T>> vertexList = new Vector<Vertex<T>>();
    private Vector<Edge<T>> edgeList = new Vector<Edge<T>>();

    public Graph()
    {
        System.out.println("Generated empty graph.");
    }

    public void addVertex(T val)
    {
        vertexList.add(new Vertex<T>(val));
    }

    public void addEdge(Vertex<T> from, Vertex<T> to, int weight)
    {
        edgeList.add(new Edge<T>(from, to, weight));
    }

    public void printVertex()
    {
        int i = 0;
        for(Vertex<T> e : this.vertexList)
        {
            System.out.print("Vertex " + i + ": ");
            System.out.println(e.getVal());
            i++;
        }
    }

    public void printEdge()
    {
        int i = 0;
        for(Edge<T> e : this.edgeList)
        {
            System.out.print("Edge " + i + ": ");
            System.out.print(e.getFrom().getVal() + " ");
            System.out.print("To ");
            System.out.print(e.getTo().getVal() + " ");
            System.out.print("with weight ");
            System.out.println(e.getWeight() + ".");
            i++;
        }
    }

    public Vertex<T> getVertex(int position)
    {
        return this.vertexList.get(position);
    }
}
