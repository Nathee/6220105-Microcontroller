int number = 1;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (number > 0)
    {
        Serial.println("WE-ARE-EN-LIC");
        delay(1000);
    }
}