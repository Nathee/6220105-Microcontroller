float wieght = 0.9;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (wieght == 0.0)
    {
        Serial.println("True");
    }
    else
    {
        Serial.println("Flase");
    }
    delay(1000);
}