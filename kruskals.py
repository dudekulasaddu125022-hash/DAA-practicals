n = int(input("Enter number of vertices: "))
e = int(input("Enter number of edges: "))
edges = []

for i in range(e):
    u, v, w = map(int, input("Enter u v weight: ").split())
    edges.append((w, u, v))

edges.sort()
parent = list(range(n))

def find(x):
    if parent[x] != x:
        parent[x] = find(parent[x])
    return parent[x]

print("Minimum Spanning Tree:")
for w, u, v in edges:
    a, b = find(u), find(v)
    if a != b:
        parent[a] = b
        print(u, "-", v, ":", w)
