#include <SPI.h>
#include <RH_RF95.h>
// Pin definitions
#define RFM95_CS 8
#define RFM95_RST 4
#define RFM95_INT 7
// LoRa frequency
#define RF95_FREQ 950.0
// Singleton instance of the radio driver
RH_RF95 rf95(RFM95_CS, RFM95_INT);
void setup() {
  pinMode(RFM95_RST, OUTPUT);
  digitalWrite(RFM95_RST, HIGH);
  Serial.begin(115200);
  while (!Serial) {
    delay(1);
  }
  delay(100);
  Serial.println("Welcome to LoRa Chat!");
  // Manual reset
  digitalWrite(RFM95_RST, LOW);
  delay(10);
  digitalWrite(RFM95_RST, HIGH);
  delay(10);
  if (!rf95.init()) {
    Serial.println("LoRa radio init failed!");
    while (1);
  }
  Serial.println("LoRa radio init OK!");
  // Set frequency
  if (!rf95.setFrequency(RF95_FREQ)) {
    Serial.println("setFrequency failed!");
    while (1);
  }
  Serial.print("Set Frequency to: ");
  Serial.println(RF95_FREQ);
  // Set power level
  rf95.setTxPower(23, false);
}
void loop() {
  // Check if a message is available
  if (rf95.available()) {
    uint8_t buf[RH_RF95_MAX_MESSAGE_LEN];
    uint8_t len = sizeof(buf);
    if (rf95.recv(buf, &len)) {
      buf[len] = '\0';  // Null-terminate the received message
      Serial.print("Received: ");
      Serial.println((char *)buf);  // Safely print the message
      Serial.println("****");
    } else {
      Serial.println("Receive failed!");
    }
  }
  // Check for user input
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();  // Remove any trailing newline or spaces
    if (input.length() > 0) {
      Serial.print(" Sent: ");
      Serial.println(input);
      rf95.send((uint8_t *)input.c_str(), input.length());
      rf95.waitPacketSent();
      Serial.println("****");
    }
  }
}






