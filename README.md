# SENG691-Project

Here's a suggested README.md file for your project:

md
# IoT Time Series Streaming and Processing

InfluxDB, Kafka, and MQTT are used in this project's end-to-end solution to stream environmental sensor data for real-time analytics and event detection. The DHT11 humidity and temperature sensor on an Arduino Uno R4 Wi-Fi board is used by the solution to collect and broadcast data.

## Project Team
- **Teja Muddangula**
- **Nava Chaithanya Chowdary Darshi**

## Project Goals
1. Develop a scalable architecture for handling multiple sensors.
2. Implement real-time event detection based on predefined thresholds.
3. Create continuous queries for real-time aggregation and analytics.
4. Enable offline exploration of stored sensor data.

## Architecture Overview
1. **Arduino (MQTT Client):** Streams temperature and humidity data via MQTT.
2. **EMQX Broker (MQTT):** Receives MQTT messages from Arduino and streams them to Kafka.
3. **Kafka Broker:** Distributes sensor data across topics for efficient processing.
4. **InfluxDB:** Stores time-series data and provides real-time aggregation and event detection through continuous queries.

## Project Implementation
- **Arduino Setup:** Configured Arduino Uno R4 Wi-Fi to read from the DHT11 sensor and stream data via MQTT.
- **MQTT Broker (EMQX):** Deployed EMQX to manage the MQTT connections and stream data to Kafka.
- **Kafka Broker:** Configured Kafka to receive data from EMQX and forward it to InfluxDB.
- **InfluxDB:** Deployed InfluxDB for time-series storage and configured continuous queries for aggregation and event detection.

## Integration Testing
- Verified seamless data flow from Arduino to InfluxDB through end-to-end testing.
- Developed scripts to simulate sensor data and confirm integration.

## Usage
1. Clone this repository.
2. Follow the setup guide in the documentation for configuring Arduino, EMQX, Kafka, and InfluxDB.
3. Deploy the solution and run the integration tests to verify the setup.

## Implementation Limitations
- **Scalability:** Clustering was omitted for EMQX and Kafka due to project constraints.
- **Bugs:** Some data duplication may occur due to network issues or retries in Kafka.

## References
- [EMQX Documentation](https://www.emqx.io/docs/en/latest/)
- [Kafka Connect Documentation](https://kafka.apache.org/documentation/)
- [InfluxDB Documentation](https://docs.influxdata.com/influxdb/v1.8/)
- [Time Series Databases (Ted Dunning & Ellen Friedman)](https://www.oreilly.com/library/view/time-series-databases/9781491917022/)

## License
This project is licensed under the MIT License.


Feel free to adjust any of the sections to match your project's specifics or add more detailed setup instructions if needed!
