package Graph;

import java.util.Vector;

public class Graph<T> {
    private Vector<Vertex<T>> vertexList;
    private int vertexNum;
    private int edgeNum;

    public Graph()
    {
        this.vertexList = new Vector<Vertex<T>>();
        this.vertexNum = 0;
        this.edgeNum = 0;
        System.out.println("Empty graph generated.");
    }

    public T getVertexKey(int index) {
        return vertexList.get(index).getKey();
    }

    public int getVertexNum() {
        return vertexNum;
    }

    public int getEdgeNum() {
        return edgeNum;
    }

    public void addVertex(T key)
    {
        this.vertexList.add(new Vertex<T>(key));
        this.vertexNum ++;
    }

    public void addEdge(int from, int to, int weight)
    {
        if(from >= this.vertexList.size() || to >= this.vertexList.size())
        {
            throw new ArrayIndexOutOfBoundsException();
        }
        else
        {
            if(this.vertexList.get(from).getNextEdge() == null)
            {
                this.vertexList.get(from).setNextEdge(new Edge<T>(to, weight));
            }
            else {
                Edge<T> temp = this.vertexList.get(from).getNextEdge();
                while (temp.getNextEdge() != null) {
                    temp = temp.getNextEdge();
                }
                temp.setNextEdge(new Edge<T>(to, weight));
            }
            this.edgeNum ++;
        }
    }

    public String toString()
    {
        StringBuilder s = new StringBuilder();
        for (Vertex<T> tVertex : this.vertexList) {
            Edge<T> e = tVertex.getNextEdge();
            s.append(tVertex.getKey());
            while (e != null) {
                s.append(" -");
                s.append(e.getWeight());
                s.append("-> ");
                s.append(this.vertexList.get(e.getIndex()).getKey());
                e = e.getNextEdge();
            }
            s.append("\n");
        }
        return String.valueOf(s);
    }
}
