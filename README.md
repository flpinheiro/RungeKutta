# RungeKutta
Descrição dos arquivos de entrada, localizados na pasta /in, nome do arquivo com as variaveis listadas em sequência de leitura, sendo que são todas double e devem ser separados por espaço e devem ser colocados um comjunto de dados de entrada por linha. 
entrada.in >> x >> y >> a >> b
entrada2.in >> x >> y >> a >> b >> epsilon >> omega
entrada3.in >> x >> y >> a >> b >> epsilon >> omega >> teta
entrada4.in >> x >> y >> a >> b >> epsilon >> omega >> epsilon2

Os arquivos de saída mostram o tempo (x) e o valor da massa (y) e são utilizados para plotar os gráficos no gnuplot usando o arquivo script 'gnuplot.plt' gerado dinamicamente.

Descrição dos trabalhos calculados: 

* função double maxMass() de Growth.h calcula a massa máxima do animal na vida aldulta. 

\begin{equation}
    M = (\frac{b}{a}) ^ {\frac{1}{\alpha - 1}}
    \label{eq:massa_max}
\end{equation}

(\ref{eq:massa_max}) massa máxima final do animal.

* Growth.h, calcula o sistema padrão

\begin{equation}
    \frac{dm}{dt} = a m^ \alpha - b m
    \label{eq:growth}
\end{equation}

Equação (\ref{eq:growth}) é a equação de crescimento de um animal, padrão a ser estudada, onde vemos $\alpha =  \frac34$

* GrowthCosA.h calcula o crescimento com a variação no termo a.

\begin{equation}
    \frac{dm}{dt} = a (1 + \epsilon \cos(2 \pi \omega t) ) m^ \alpha - b m
    \label{eq:growth_cos_a}
\end{equation}

Equação (\ref{eq:growth_cos_a}) é a equação de crescimento com o metabolismo variando no tempo, provavelmente devido as estações do ano. 

* GrowthCosB.h calcula o crescimento de um animal com a variação no termo b.

\begin{equation}
    \frac{dm}{dt} = a m^ \alpha - b (1 + \epsilon \cos(2 \pi \omega t) ) m
    \label{eq:growth_cos_b}
\end{equation}

Equação (\ref{eq:growth_cos_b}) é a equação de crescimento com a taxa de crescimento variando no tempo, precisa melhorar a explicação.

* GrowthCosAB.h calcula o crescimento de um animal com a variação no termo a e no termo b, sendo que tem um termo \teta que serve como constante de fase. 

\begin{equation}
    \frac{dm}{dt} = a (1 + \epsilon \cos(2 \pi \omega t) ) m^ \alpha - b (1 + \epsilon \cos(2 \pi \omega t) + 2 \pi \teta ) m
    \label{eq:growth_cos_ab}
\end{equation}

Equação (\ref{eq:growth_cos_ab}) é a equação de crescimento com o metabolismo e a taxa de crescimento variando no tempo, o termo teta serve constante de fase para que o crescimento e o metabolismo ocorram em epocas diferentes. 

Classe Util Função eta() gera um número ateatório entre -1 e 1.

* GrowthCosARand.h calcula o crescimento de um animal com o metabolismo variando no tempo e com variação aleatória no tempo.

\begin{equation}
    \frac{dm}{dt} = a (1 + \epsilon \cos(2 \pi \omega t) + \epsilon_2 \eta) m^ \alpha - b m
    \label{eq:growth_cos_a_rand}
/end{equation}

Equação (\ref{eq:growth_cos_a_rand}) é a equação de crescimento de um animal com o metabolismo variando no tempo de acordo com o estação sazional e uma variaçào aleatória.

* GrowthCosBRand. calcula o crescimento de um animal com a taxa de crescimento variando no tempo de forma sazional e aleatória

\begin{equation}
    \frac{dm}{dt} = a m^ \alpha - b (1 + \epsilon \cos(2 \pi \omega t) + \epsilon_2 \eta ) m
    \label{eq:growth_cos_b_rand}
\end{equation}

Equação (\ref{eq:growth_cos_b_rand}) calcula o crescimento de um animal com a taxa de cresccimento variando no tempo de forma sazional e aleatória
