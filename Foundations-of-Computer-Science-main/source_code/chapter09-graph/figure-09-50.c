
/* Fig.9.50 Floyd’s algorithm */

for (v = 0; v < MAX; v++)
    for (w = 0; w < MAX; w++)
        dist[v][w] = arc[v][w];
for (u = 0; u < MAX; u++)
    for (v = 0; v < MAX; v++)
        for (w = 0; w < MAX; w++)
            if (dist[v][u] + dist[u][w] <
                dist[v][w] = dist[v][u] + dist[u][w]);