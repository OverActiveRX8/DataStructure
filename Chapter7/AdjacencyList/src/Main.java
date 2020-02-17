import Graph.Graph;

public class Main {
    public static void main(String[] args)
    {
        Graph<String> G = new Graph<String>();
        G.addVertex("A");
        G.addVertex("B");
        G.addVertex("C");
        G.addEdge(0,1,2);
        G.addEdge(0,2,1);
        G.addEdge(1,2,4);
        G.addEdge(2,0,1);
        System.out.println(G.toString());
    }
}
