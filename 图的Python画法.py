
from matplotlib import pyplot as plt
import networkx as nx

nodes=[1,2,3,4,5,6]
edges=[(1,2),(1,3),(1,4),(2,3),(2,5),(3,4),(3,5),(3,6),(4,6),(5,6)]

G=nx.Graph()
G.add_nodes_from(nodes)
G.add_edges_from(edges)

'''
#加入边权值，求最短路径
G.add_weighted_edges_from(edges)
path=nx.single_source_dijkstra_path(G,4)
length=nx.single_source_dijkstra_path_length(G,4)
print(path)
print(length)
'''
color=[]
for i in G.nodes:
    if i%2==0:
      color.append('red')
    else:
      color.append('yellow')
nx.draw_networkx(G,node_color=color) #画图
plt.show()
