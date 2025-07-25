h = {'0':1,'1':0,'2':0,'3':0,'4':1,'5':0,'6':1,'7':0,'8':2,'9':1}
n = int(input())
r = [str(i) for i in range(1, n+1) if sum(h[d] for d in str(i)) >= len(str(i))]
print(" ".join(r))