#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Definições de tamanho do display OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Declaração do display conectado via I2C. 
// O parâmetro -1 indica que não estamos usando um pino de RESET físico do Arduino.
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Inicializa a comunicação serial para depuração
  Serial.begin(9600);

  // Inicializa o display OLED no endereço I2C padrão (0x3C)
  // Nota: No Proteus, verifique se o display está configurado com este mesmo endereço.
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("Falha ao inicializar o display SSD1306"));
    for(;;); // Trava o programa se houver erro de conexão
  }

  // 1. Tela de Boas-Vindas (Texto Simples)
  display.clearDisplay();             // Limpa a tela antes de desenhar
  display.setTextSize(1);             // Tamanho da fonte (1 é o padrão)
  display.setTextColor(SSD1306_WHITE);// Cor do texto (Branco/Aceso)
  display.setCursor(10, 20);          // Posição X, Y
  display.println("PlatformIO + Proteus");
  display.setCursor(10, 40);
  display.setTextSize(2);             // Fonte maior
  display.println("OLED 128x64");
  display.display();                  // Atualiza a tela para mostrar o que foi desenhado
  delay(3000);                        // Aguarda 3 segundos

  // 2. Testando Formas Geométricas (Retângulos e Círculos)
  display.clearDisplay();
  
  // Desenha um retângulo na borda da tela
  display.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SSD1306_WHITE);
  
  // Desenha um círculo preenchido no centro
  display.fillCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 15, SSD1306_WHITE);
  
  // Desenha linhas diagonais
  display.drawLine(0, 0, 30, 30, SSD1306_WHITE);
  display.drawLine(SCREEN_WIDTH, 0, SCREEN_WIDTH - 30, 30, SSD1306_WHITE);
  
  display.display();
  delay(3000);
}

void loop() {
  // 3. Efeito de Animação de Texto Piscando
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(25, 25);
  display.println("Eng Caxinda");
  display.display();
  delay(800);

  display.clearDisplay();
  display.display();
  delay(400);
}
