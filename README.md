<h1>Teclado-Matricial-Embarcatech 💻</h1> 

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

<h2>Tecnologias</h2>
<ul>
  <li><strong>Raspberry Pi Pico W</strong> - A placa de desenvolvimento baseada no microcontrolador que é a base do projeto.</li>
  <li><strong>Pico SDK</strong> - O kit de desenvolvimento de software da Raspberry Pi Pico para programar o RP2040.</li>
  <li><strong>Linguagem de Programação C</strong> - Utilizada para o desenvolvimento do código do projeto.</li>
  <li><strong>GPIO (General Purpose Input/Output)</strong> - Para interação com hardware externo, como o teclado matricial, LEDs e buzzer.</li>
  <li><strong>Teclado Matricial 4x4</strong> - Um componente para input de dados pelo usuário.</li>
  <li><strong>LED RGB</strong> - Utilizado para fornecer feedback visual com diferentes cores.</li>
  <li><strong>Buzzer</strong> - Para emitir sons de alerta ou feedback.</li>
  <li><strong>Wokwi</strong> - Simulador online para testar circuitos e projetos em microcontroladores, utilizado para a simulação e visualização do circuito.</li>
<li><strong>Wokwi Integrado ao Visual Studio Code</strong> - Wokwi integrado ao Visual Studio Code para testar circuitos e projetos em microcontroladores, utilizado para a simulação e visualização do circuito na prórpia IDE.</li>
  <li><strong>CMake</strong> - Ferramenta de automação de construção usada para gerenciar o processo de compilação do código.</li>
 </ul>

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
      <td>#</td>
      <td>Ativa o buzzer</td>
      </tr>
  </tbody>
</table>

<h2>Link do Vídeo do Projeto</h2>

<h3>Wokwi Web</h3>
<p>Google Drive: https://drive.google.com/file/d/1rtCsfEmN_9zEyMdBg4yoZL89ipi_Qxvp/view?usp=sharing</p>

<p>YouTube: https://youtu.be/tsf64rYX4GQ</p>

<h3>Wokwi integrado ao VSCode</h3>

<p>Google Drive: https://drive.google.com/file/d/1cXbM5-TMvTPYaASrBH3-spZ_24XX4y1l/view?usp=sharing</p>
<p>YouTube: https://youtu.be/OrN_K1Se51M</p>

   <h1>Como Executar o Projeto</h1>
        <h2>Clone o Repositório</h2>
    <ol>
        <li>Abra o <strong>Prompt de Comando</strong> ou o terminal de sua preferência.</li>
        <li>Clone o repositório usando o Git:
            <pre><code>git clone https://github.com/seu-usuario/seu-repositorio.git</code></pre>
        </li>
        <li>Entre no diretório do projeto:
            <pre><code>cd seu-repositorio</code></pre>
        </li>
    </ol>
    <h2>Simulação no Wokwi</h2>
    <ol>
        <li>Abra o site do <a href="https://wokwi.com/" target="_blank">Wokwi</a>.</li>
        <li>Faça login ou crie uma conta gratuita.</li>
        <li>Crie um novo projeto simulando o hardware:
            <ul>
                <li>Adicione o <strong>Raspberry Pi Pico W</strong> no ambiente de simulação.</li>
                <li>Inclua os componentes necessários, como teclado matricial, LEDs RGB e buzzer, conectando-os corretamente.</li>
            </ul>
        </li>
        <li>Carregue o código do projeto no simulador:
            <pre><code># Cole seu código no editor C/C++ integrado no Wokwi.</code></pre>
        </li>
        <li>Execute a simulação e observe os resultados diretamente no ambiente Wokwi.</li>
    </ol>
    <h2>Configuração do Ambiente Local</h2>
    <ol>
        <li>Baixe e instale o <a href="https://cmake.org/download/" target="_blank">CMake</a>.</li>
        <li>Configure o <strong>Pico SDK</strong> seguindo o guia oficial em 
            <a href="https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf" target="_blank">
                Raspberry Pi Pico SDK</a>.
        </li>
        <li>Crie um diretório de construção:
            <pre><code>mkdir build</code></pre>
            <pre><code>cd build</code></pre>
        </li>
        <li>Execute o CMake para gerar os arquivos de construção:
            <pre><code>cmake ..</code></pre>
        </li>
    </ol>
    <h2>Compilar o Projeto</h2>
    <p>Após configurar o ambiente, compile o projeto executando o seguinte comando dentro do diretório <code>build</code>:</p>
    <pre><code>make</code></pre>
    <p>Isso criará o arquivo binário do programa, geralmente no formato <code>.uf2</code>.</p>
   <h2>Testando o Projeto</h2>
    <ul>
        <li>Pressione as teclas no teclado matricial para interagir com o sistema.</li>
        <li>Observe os LEDs RGB para respostas visuais.</li>
        <li>Ouça o som emitido pelo buzzer para ações específicas.</li>
        <li>Verifique a interação com os componentes simulados e depure o código conforme necessário.</li>
    </ul>



