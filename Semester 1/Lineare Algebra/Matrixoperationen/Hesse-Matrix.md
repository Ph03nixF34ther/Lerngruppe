Die Hesse-Matrix ist ein Werkzeug aus der mehrdimensionalen Analysis. Sie sammelt alle zweiten partiellen Ableitungen einer Funktion in einer Matrix. Das bedeutet, dass mithilfe der Hesse-Matrix Aussagen über das Krümmungsverhalten einer Funktion getroffen werden können Damit ist sie wie folgt aufgebaut:

$$
H_{f(x,,y,z)}=

\begin{matrix}
\begin{matrix}
 & & & \colorbox{red}{x} \downarrow &  & \colorbox{green}{y} \downarrow & & \colorbox{blue}{z} \downarrow
\end{matrix}
\\
\begin{matrix}
\to \colorbox{red}{x} \\
\to \colorbox{green}{y} \\
\to \colorbox{blue}{z}
\end{matrix}
\left[
\begin{matrix}
f_{\colorbox{red}{x}\colorbox{red}{x}}^{''} & f_{\colorbox{red}{x}\colorbox{green}{y}}^{''} & f_{\colorbox{red}{x}\colorbox{blue}{z}}^{''} \\
f_{\colorbox{green}{y}\colorbox{red}{x}}^{''} & f_{\colorbox{green}{y}\colorbox{green}{y}}^{''} & f_{\colorbox{green}{y}\colorbox{blue}{z}}^{''} \\
f_{\colorbox{blue}{z}\colorbox{red}{x}}^{''} & f_{\colorbox{blue}{z}\colorbox{green}{y}}^{''} & f_{\colorbox{blue}{z}\colorbox{blue}{z}}^{''}
\end{matrix}
\right]
\end{matrix}
$$
Um sie zu bilden muss man also nur alle partiellen Ableitung der ausgangs Funktion $f(x,y,z)$ bilden. Dabei ist es Hilfreich zu wissen, dass $f^{''}_{xy}=f^{''}_{yx}$ ist. Das spart uns einige Berechnungen. Die Dimension der Hesse-Matrix ist immer gleich den Parametern der ausgangs Funktion. Im folgenden folgt ein Beispiel einer dreidimensionalen Hesse-Matrix:

$$
f(x,y,z)=x^2+2y^2+z^2-xy^2+12x+2z
$$
Im ersten Schritt wird die erste Ableitung nach jedem Parameter der Funktion gebildet:

$$
\begin{matrix}
f_x^{'}=2x-y^2+12 & f_y^{'}=4y-2xy & f_z^{'}=2z+2
\end{matrix}
$$
Nun folgen die zweiten Ableitungen. Wobei wir alle doppelten weglassen können _(da $f^{''}_{xy}=f^{''}_{yx}$)_.

$$
\begin{matrix}
f_{xx}^{''}=2 & f_{xz}^{''}=0 & f_{yz}^{''}=0 \\
f_{xy}^{''}=-2y & f_{yy}^{''}=4-2x & f_{zz}^{''}=2
\end{matrix}
$$
Daraus ergibt sich durch Einsetzen die Hesse-Matrix:

$$
H_f(x,y,z)=
\underline{ \underline {
\left[
\begin{matrix}
2 & -2y & 0 \\
-2y & 4-2x & 0 \\
0 & 0 & 2
\end{matrix}
\right]}}
$$