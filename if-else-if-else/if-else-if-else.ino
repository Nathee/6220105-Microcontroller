String weekDay = "Tuesday";
String message = "";
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (weekDay == "Monday")
    {
        message = "เรียนวิชาภาษาอังกฤษ";
    }
    else if (weekDay == "Tuesday")
    {
        message = "เรียนวิชาไมโครคอนโทรลเลอร์";
    }
    else
    {
        message = "วันหยุดเสาร์-อาทิตย์";
    }
}