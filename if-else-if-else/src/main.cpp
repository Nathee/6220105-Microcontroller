#include <Arduino.h>
String weekDay = "Sunday";
String subjectName = "";

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (weekDay == "Monday")
    {
        subjectName = "เรียนวิชาภาษาอังกฤษ";
    }
    else if (weekDay == "Tuesday")
    {
        subjectName = "เรียนวิชาไมโครคอนโทรลเลอร์";
    }
    else
    {
        subjectName = "วันหยุดเสาร์-อาทิตย์";
    }
    Serial.println(subjectName);
    delay(2000);
}