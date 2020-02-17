public class Main {
    public static void main(String[] args)
    {
        Graph<String> G1 = new Graph<String>();
        G1.addVertex("A");
        G1.addVertex("B");
        G1.addVertex("C");
        G1.addEdge(G1.getVertex(1), G1.getVertex(2), 2);
        G1.addEdge(G1.getVertex(1), G1.getVertex(0), 1);
        G1.printVertex();
        G1.printEdge();
    }
}
