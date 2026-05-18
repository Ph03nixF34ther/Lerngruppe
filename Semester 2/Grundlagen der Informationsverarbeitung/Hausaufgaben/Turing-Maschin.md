$I = \left\{ a, b \right\}$, $L \subset I^* = (a \lor b)^* abaab$ 

![[(a v b)_ abaab.svg#invert]]

$T = (I, B, Q, \delta, q_0, F)$

$I = \left\{ a, b \right\}$
$B = \left\{ \# \lor I \right\}$
$Q = \left\{ q_0, q_1, q_2, q_3, q_4, q_5 \right\}$
$F = \left\{ q_5 \right\}$
$\delta = \left\{ \begin{array}{c} (q_0, b, R, b, q_0) \\ (q_0, a, R, a, q_1) \\ (q_1, a, R, a, q_1) \\ (q_1, b, R, b, q_2) \\ (q_2, a, R, a, q_3) \\ (q_2, b, R, b, q_0) \\ (q_3, a, R, a, q_4) \\ (q_3, b, R, b, q_2) \\ (q_4, a, R, a, q_1) \\ (q_4, b, R, b, q_5) \\ (q_5, a, R, a, q_3) \\ (q_5, b, R, b, q_0) \end{array} \right\}$
