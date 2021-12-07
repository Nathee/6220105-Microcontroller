String weekDay = "Tuesday";
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
    else if (weekDay == "Wednesday")
    {
        subjectName = "เรียนวิชาโครงงาน";
    }
    else if (weekDay == "Thursday")
    {
        subjectName = "เรียนวิชาโทรคมนาคม";
    }
    else if (weekDay == "Friday")
    {
        subjectName = "เรียนวิชาพื้นฐานอิเล็กทรอนิกส์อัฉริยะ";
    }
    else
    {
        subjectName = "วันหยุดเสาร์-อาทิตย์";
    }
    Serial.println(subjectName);
    delay(2000);
}
