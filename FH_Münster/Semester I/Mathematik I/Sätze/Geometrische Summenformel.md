Für jedes $q\in \mathbb{R}$ mit $q\neq 1$ und jedes $n\in \mathbb{N}_{0}$ gilt $\sum^n_{i=0}q^i=\frac{1-q^{n+1}}{1-q}$ (Geometrische Summenformel).
## Beweis
Induktionsanfang: $\sum^0_{i=0}q^i=q^0=1=\frac{1-q^1}{1-q}$
Induktionsschritt: $\sum^{n+1}_{i=0}q^1=\sum^n_{i=0}q^i+q^{n+1}=^{\text{Induktionsannahme}}\frac{1-q^{n+1}}{1-q}+q^{n+1}=\frac{1-q^{n+1}+q^{n+1}(1-q)}{1-q}=\frac{1-q^{n+2}}{1-q}\blacksquare$
## Folgerung
Es sei $a,\ b\in \mathbb{R}$ mit $a\neq b$ und $n\in \mathbb{N}_{0}$. Dann gilt: $\sum^n_{i=0}a^ib^{n-i}=\frac{a^{n+1}-b^{n+1}}{a-b}$ (verallgemeinerte geometrische Summenformel).
Dies folgt aus dem Satz mit $q=\frac{b}{a}$.