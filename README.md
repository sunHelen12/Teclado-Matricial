﻿<h1>Teclado-Matricial-Embarcatech 💻</h1> 

<p>Este projeto foi desenvolvido como parte do programa Embarcatech e tem como objetivo a implementação de um sistema de controle de pinos GPIO utilizando um teclado matricial 4x4. O projeto foi simulado no ambiente online Wokwi e também com o Wokwi integrado ao Visual Studio Code.</p>

<h2>Componentes do Projeto</h2>

<ul>
  <li><strong>Teclado matricial 4x4: </strong>Utilizado para entrada de dados, com cada tecla mapeada para uma função específica.</li>
  <li><strong>LED RGB:</strong> Controlado para exibir diferentes cores ou combinações baseadas na entrada do teclado.</li>
  <li><strong>Buzzer: </strong>Emite sinais sonoros conforme a entrada recebida.</li>
  <li><strong>Microcontrolador Raspberry Pi Pico W: </strong>Central do projeto, que processa as entradas do teclado e controla os componentes conectados.</li>
</ul> 

<h2>Funcionalidades</h2>

<ul>
	<li><strong>Controle de LEDs RGB:  </strong>Cada tecla no 		teclado matricial está associada a uma ação específica, como 		ativar cores específicas do LED RGB ou todas as cores ao 		mesmo tempo.
	<ul>
      <li>LED Vermelho</li>
      <li>LED Verde</li>
	  <li>LED Azul</li>
	  <li>LED Magenta (LED Azul + LED Vermelho) </li>
	  <li>LED Ciano (LED Azul + LED Verde)</li>
	  <li>LED Amarelo (LED Verde + LED Vermelho)</li>
	  <li>LED Branco (LED Verde + LED Vermelho + LED Azul)</li>
    </ul>
	</li>
	<li><strong>Emissão de sinal sonoro pelo buzzer: </strong>Uma tecla específica ativa o buzzer, que pode emitir sinais com duração ou padrões ajustáveis.
	</li>
	<li><strong>Leitura de teclas: </strong>Implementada para identificar qual tecla foi pressionada, processando essa entrada para realizar a ação correspondente.</li>	
</ul>

<h2>Estrutura do Código</h2>

<ul>
	<li><strong>Inicialização de GPIOs: </strong>Configura os pinos para LEDs, teclado e buzzer.</li>
	<li><strong>Mapeamento de Teclas: </strong>Cada tecla no teclado matricial está associada a uma funcionalidade específica.</li>
	<li><strong>Função para controle de LEDs: </strong>Ajusta a ativação e desativação das cores do LED RGB.</li>
	<li><strong>Função do buzzer: </strong>Controla a ativação sonora por intervalos configuráveis.</li>
	<li><strong>Menu interativo: </strong>Apresenta opções para o usuário selecionar a funcionalidade desejada via teclado.</li>
</ul>

<h2>Funções e Membros</h2>

<h2>Imagem</h2>
   
  ![projeto](https://github.com/user-attachments/assets/be11d601-343a-49a1-b04c-38634f7452c8)

  <h2>Mapeamento das Teclas</h2>

  <table>
  <thead>
    <tr>
      <th>Tecla</th>
      <th>Função</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>A</td>
      <td>Liga o LED vermelho</td>
    </tr>
    <tr>
      <td>B</td>
      <td>Liga o LED azul</td>
    </tr>
    <tr>
      <td>C</td>
      <td>Liga o LED verde</td>
    </tr>
     <tr>
	<td>1</td>
        <td>Liga o LED magenta</td>
    </tr>
     <tr>
	 <td>2</td>
	 <td>Liga o LED ciano</td>
    </tr>
    <tr>
	<td>3</td>
	<td>Liga o LED amarelo</td>
   </tr>
    <tr>
      <td>D</td>
      <td>Liga todos os LEDs</td>
    </tr>   
	<tr>
      <td>*</td>
      <td>Desliga todos os LEDs</td>
    </tr>
	   <tr>
      <td>#</td>
      <td>Ativa o buzzer</td>
    </tr>
  </tbody>
</table>

  <h2>Link do Vídeo do Projeto</h2>

