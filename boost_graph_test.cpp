#include "stdafx.h"
#include "boost_graph_test.h"
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/undirected_graph.hpp>
#include <fstream>
#include <boost/graph/graphviz.hpp>
#include <boost/graph/graph_utility.hpp>
void CBoostGraphTester::Test()
{
	typedef boost::adjacency_list<boost::setS, boost::vecS, boost::undirectedS, VertexProperty, EdgeProperty> TGraph;
	typedef boost::undirected_graph<VertexProperty, EdgeProperty> UGraph;
	typedef TGraph::vertex_descriptor TNode;
	TGraph test_graph;
	std::map<int, TGraph::vertex_descriptor> id_node_map;
	for (int i = 0; i < 5; i++)
	{
		auto vi = boost::add_vertex(test_graph);
		id_node_map[i] = vi;
		test_graph[vi].id_ = i;
	}
	//boost::add_edge(id_node_map[0], id_node_map[0], test_graph);
	//boost::add_edge(id_node_map[0], id_node_map[0], test_graph);
	boost::add_edge(id_node_map[0], id_node_map[1], test_graph);
	boost::add_edge(id_node_map[0], id_node_map[1], test_graph);
	boost::add_edge(id_node_map[0], id_node_map[1], test_graph);
	if (boost::edge(id_node_map[1], id_node_map[0], test_graph).second)
	{
		std::cout << boost::edge(id_node_map[1], id_node_map[0], test_graph).first << std::endl;
	}
	//boost::add_edge(id_node_map[1], id_node_map[0], test_graph);
	//boost::clear_vertex(id_node_map[0], test_graph);
	//boost::remove_vertex(id_node_map[0], test_graph);
	std::cout << boost::degree(id_node_map[0], test_graph) << std::endl;
	boost::print_graph(test_graph);
	//std::ofstream fout("test_graph.txt");
	//boost::write_graphviz(fout, test_graph);
}