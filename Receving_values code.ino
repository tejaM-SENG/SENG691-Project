#include <DHT.h>
#include <ArduinoJson.h>

#define DHTPIN 2          // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11     // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(30000); // Wait for 30 seconds between measurements

  // Reading temperature or humidity takes about 250 milliseconds
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Create a JSON object
  StaticJsonDocument<256>doc; // Declare a JSON document. The number in angle brackets indicates the memory allocation in bytes.

// Populate the JSON document
doc["sensor"] = "SENG691 DHT11";
doc["timestamp"] = millis(); // Current time since the Arduino started in milliseconds.
doc["temperature_C"] = temperature;
doc["humidity_%"] = humidity;

// Serialize JSON document to a string
serializeJson(doc, Serial);
Serial.println(); // Print a newline
}
