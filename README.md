<h1>Jogo da Velha em Linguagem C</h1>
Este é um projeto de um jogo da velha desenvolvido em linguagem C. O jogo é implementado no console, permitindo que dois jogadores se enfrentem.

<h2>Como executar o jogo</h2>
Certifique-se de ter um compilador C instalado em seu sistema (como GCC).
Faça o download ou clone o repositório do projeto.
Abra o arquivo jogo_da_velha.c em seu editor de código preferido.
Compile o arquivo C usando o compilador C. Por exemplo, no terminal, execute o seguinte comando:
gcc jogo_da_velha.c -o jogo_da_velha
Após a compilação bem-sucedida, execute o jogo com o seguinte comando:
bash
./jogo_da_velha
<h2>Como jogar</h2>
Ao iniciar o jogo, você verá uma grade 3x3 numerada, representando as posições do jogo da velha.
Cada jogador deve inserir o número correspondente à posição em que deseja colocar seu símbolo (X ou O).
O jogador 1 usa o símbolo "X" e o jogador 2 usa o símbolo "O".
Os jogadores alternam suas jogadas até que um jogador vença ou ocorra um empate.
Um jogador vence quando consegue colocar três de seus símbolos em uma linha horizontal, vertical ou diagonal.
Se todas as posições forem preenchidas e nenhum jogador vencer, o jogo é considerado um empate.
