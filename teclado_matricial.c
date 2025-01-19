#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define ROWS 4
#define COLS 4

// Define as linhas e colunas do teclado matricial (ajustado com os novos pinos)
uint row_pins[ROWS] = {8, 7, 6, 5};    // GPIOs para as linhas (R1 a R4)
uint col_pins[COLS] = {4, 3, 2, 1};    // GPIOs para as colunas (C1 a C4)

// Define os GPIOs dos LEDs RGB
#define GREEN_LED 11 // LED verde na GPIO 11
#define BLUE_LED 12  // LED azul na GPIO 12
#define RED_LED 13   // LED vermelho na GPIO 13

// GPIO do buzzer
#define BUZZER 21 // Buzzer na GPIO 21

// Mapa das teclas do teclado matricial
char KEY_MAP[16] = {
    '1', '2', '3', 'A',
    '4', '5', '6', 'B',
    '7', '8', '9', 'C',
    '*', '0', '#', 'D'
};

// Inicializa os GPIOs usados no projeto
void init_gpio() {
    // Configura as linhas do teclado como saídas e inicializa como alto
    for (int i = 0; i < ROWS; i++) {
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i], 1);  // Inicializa como alto
    }

    // Configura as colunas do teclado como entradas com resistores pull-up
    for (int i = 0; i < COLS; i++) {
        gpio_init(col_pins[i]);
        gpio_set_dir(col_pins[i], GPIO_IN);
        gpio_pull_up(col_pins[i]);
    }

    // Configura os pinos dos LEDs e do buzzer como saídas
    gpio_init(RED_LED);
    gpio_init(GREEN_LED);
    gpio_init(BLUE_LED);
    gpio_init(BUZZER);

    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_set_dir(GREEN_LED, GPIO_OUT);
    gpio_set_dir(BLUE_LED, GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);
}

// Função para tocar o buzzer por uma duração específica (em milissegundos)
void Tocar_buzzer(int duracao_ms) {
    int tempo = duracao_ms;  // Duração total em milissegundos
    
    while (tempo > 0) {
        gpio_put(BUZZER, true);  // Liga o buzzer
        sleep_ms(1);             // Mantém o buzzer ligado por 1ms
        tempo -= 1;              // Diminui o tempo restante

        gpio_put(BUZZER, false); // Desliga o buzzer
        sleep_ms(3);             // Aguarda 3ms antes de repetir
        tempo -= 3;              // Diminui o tempo restante
    }
}

// Função para verificar as teclas pressionadas no teclado matricial
char scan_keypad() {
    for (int row = 0; row < ROWS; row++) {
        gpio_put(row_pins[row], 0);  // Ativa a linha atual (nível baixo)
        for (int col = 0; col < COLS; col++) {
            if (!gpio_get(col_pins[col])) {  // Verifica se a tecla na coluna atual está pressionada
                char key = KEY_MAP[row * COLS + col];  // Obtém o valor da tecla pressionada
                // Aguarda o debounce (evita leituras repetidas)
                sleep_ms(500);
                return key;  // Retorna o valor da tecla pressionada
            }
        }
        gpio_put(row_pins[row], 1);  // Desativa a linha atual (retorna ao nível alto)
    }
    return 0;  // Retorna 0 se nenhuma tecla foi pressionada
}

// Função para ligar LEDs individualmente

// Funções para ligar leds em grupos de 2 cores
void ligar_magenta () { // Liga as cores azul e vermelho
  gpio_put(GREEN_LED, false);
  gpio_put(BLUE_LED, true);
  gpio_put(RED_LED, true);
}
void ligar_amarelo () { // Liga as cores verde e vermelho
  gpio_put(GREEN_LED, true);
  gpio_put(BLUE_LED, false);
  gpio_put(RED_LED, true);
}
void ligar_ciano () { // Liga as cores verde e azul
  gpio_put(GREEN_LED, true);
  gpio_put(BLUE_LED, true);
  gpio_put(RED_LED, false);
}

//Funções para ligar/desligar todas as cores


// Função para mostrar o menu
void menu() {
    printf("\nMenu de Opcoes:\n");
    printf("Escolha uma opcao pressionando a tecla correspondente...\n");
    printf("A - Ligar LED Vermelho\n");
    printf("B - Ligar LED Azul\n");
    printf("C - Ligar LED Verde\n");
    printf("D - Ligar Todos os LEDs\n");
    printf("# - Tocar o Buzzer\n");
}

int main() {
    stdio_init_all();  // Inicializa a entrada/saída padrão
    init_gpio();       // Configura os GPIOs

    menu();            // Exibe o menu de opções

    while (true) {
        char key = scan_keypad();  // Lê a tecla pressionada no teclado matricial

        if (key != 0) {  // Verifica se alguma tecla foi pressionada
            // CHAMAR FUNÇÃO DE CONTROLE DE LEDS/ Parametro -->>(key);  // Controla LEDs e buzzer com base na tecla pressionada
            if (key == '#') {
            Tocar_buzzer(1000);   // Toca o buzzer por 1000ms
            }
        }
        sleep_ms(100);  // Aguarda um pequeno intervalo antes da próxima verificação
    }
}
