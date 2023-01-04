#include <Arduino.h>

#include <ESP8266WiFi.h>

#include <Firebase_ESP_Client.h>

// Provide the token generation process info.
#include <addons/TokenHelper.h>

/* 1. Define the WiFi credentials */
#define WIFI_SSID "Galaxy M02s5656"
#define WIFI_PASSWORD "hiru2857756"

/* 2. Define the API Key */
#define API_KEY "AIzaSyAg72CAX2SWsYzmN0B9NxYAHnE_oFgijVU"

/* 3. Define the project ID */
#define FIREBASE_PROJECT_ID "co300project"

/* 4. Define the user Email and password that alreadey registerd or added in your project */
#define USER_EMAIL "e18368@eng.pdn.ac.lk"
#define USER_PASSWORD "abcd1234"

#define MOTORPIN 6

// Define Firebase Data object
FirebaseData fbdo;

FirebaseAuth auth;
FirebaseConfig config;

unsigned long dataMillis = 0;
int count = 0;

void setup()
{

    Serial.begin(115200);

    // set up pin for pwm to control servo motor
    analogWrite(MOTORPIN,512);

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.print("Connecting to Wi-Fi");
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(300);
    }
    Serial.println();
    Serial.print("Connected with IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();

    Serial.printf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);

    /* Assign the project host and api key (required) */
    config.api_key = API_KEY;

    /* Assign the user sign in credentials */
    auth.user.email = USER_EMAIL;
    auth.user.password = USER_PASSWORD;

    /* Assign the callback function for the long running token generation task */
    config.token_status_callback = tokenStatusCallback; // see addons/TokenHelper.h

#if defined(ESP8266)
    // In ESP8266 required for BearSSL rx/tx buffer for large data handle, increase Rx size as needed.
    fbdo.setBSSLBufferSize(2048 /* Rx buffer size in bytes from 512 - 16384 */, 2048 /* Tx buffer size in bytes from 512 - 16384 */);
#endif

    // Limit the size of response payload to be collected in FirebaseData
    fbdo.setResponseSize(2048);

    Firebase.begin(&config, &auth);

    Firebase.reconnectWiFi(true);
}

void loop()
{
    uint16_t dutyCycle = analogRead(A0);
    
    
}