
/**
   terminal simulator is simple way for connection between terminal
   and hardware. terminal get idenfication hardware(arduino) and
   version of firmware and hardware. and connect to that and send
   command for get and set data to device.
   this example simulate counter(meter) device command.
   you can test this application with follow command: 
   MAR_VER
   MAR_CT=7552
   MAR_CT=7552-7554
*/
String command = "";
const String prompt = "OK\r\n";
boolean isCommand = false;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.print(prompt);
}
/**
  in this method simulate read counter by serial all code in method have to replace with reader from counter
*/
void readCounter(String counterId) {
  Serial.println("ID:" + counterId);
  //counterNumber.trim();
  if (counterId.equals("7552")) {
    /*
       if serial number valid read data and write to serial port.
    */
    String output = String("F.F (000000)\n0.0.0(1119401502000)\n0.0.1(00000000)\n0.0.2(01502000)\n1.0.0(95.07.15 12:46:16 06)\n1.8.1(00209.472*kWh)\n1.8.2(00783.253*kWh)\n");
    Serial.print("1.8.3(00007.534*kWh)\n1.8.0(01000.259*kWh)\n2.8.0(00000.000*kWh)\n3.8.0(00039.389*kvarh)\n1.6.0(000.53*kW)\n1.6.0(95.07.12 20:43:40 03)\n3.6.0(000.18*kvar)\n");
    Serial.print("3.6.0(95.07.12 16:28:40 03)\n31.6 (002.67*A)\n31.6 (95.07.13 17:26:36 04)\n32.6 (237.3*V)\n32.6 (95.07.14 06:02:41 05)\nC.71 (00000)\nC.71 (00.00.00 00:00:00 00)\n");
    Serial.print("C.2.1(00.00.00 00:00:00 00)\nC.2.0(00000)\n0.1.0(00000)\n0.1.2(00.00.00 00:00:00 00)\nC.73 (00000)\nC.73 (00.00.00 00:00:00 00)\nC.72 (00000)\nC.72 (00.00.00 00:00:00 00)\n");
    Serial.print("C.2.5(94.09.02 15:58:49 03)\nC.6.0(00.00.00 00:00:00 00)\n0.9.1(12:46:19)\n0.9.2(95.07.15)\nC.2.2( )\nC.7.0(00025)\nC.52 (95.05.24 06:15:59 03)\n");
    Serial.print("C.54 (95.05.24 07:31:47 02)\n32.7 (223.83*V)\n31.7 (001.78*A)\nC.81 (00:00 T3 08:00 T2 20:00 T1 24:00)\nC.82 (00:00 T3 05:00 T2 17:00 T1 21:00 T3 24:00)\n");
    Serial.print("C.83 ()\nC.84 ()\nC.85 ()\nC.86 ()\nC.87 ()\nC.88 ()\n1.6.1(95.07.12 20:43:40 03)\n1.6.1(000.53*kW)\n1.6.2(95.07.12 16:58:41 03)\n1.6.2(000.51*kW)\n");
    Serial.print("1.6.3(95.07.12 21:13:40 03)\n1.6.3(000.45*kW)!\n");


  } else if (counterId.equals("7555")) {
    /*
       if serial number valid read data and write to serial port.
    */
    String output = String("F.F (000000)\n0.0.0(1119401502000)\n0.0.1(00000000)\n0.0.2(01502000)\n1.0.0(95.07.15 12:46:16 06)\n1.8.1(00209.472*kWh)\n1.8.2(00783.253*kWh)\n");
    Serial.print("1.8.3(00007.534*kWh)\n1.8.0(01000.259*kWh)\n2.8.0(00000.000*kWh)\n3.8.0(00039.389*kvarh)\n1.6.0(000.53*kW)\n1.6.0(95.07.12 20:43:40 03)\n3.6.0(000.18*kvar)\n");
    Serial.print("3.6.0(95.07.12 16:28:40 03)\n31.6 (002.67*A)\n31.6 (95.07.13 17:26:36 04)\n32.6 (237.3*V)\n32.6 (95.07.14 06:02:41 05)\nC.71 (00000)\nC.71 (00.00.00 00:00:00 00)\n");
    Serial.print("C.2.1(00.00.00 00:00:00 00)\nC.2.0(00000)\n0.1.0(00000)\n0.1.2(00.00.00 00:00:00 00)\nC.73 (00000)\nC.73 (00.00.00 00:00:00 00)\nC.72 (00000)\nC.72 (00.00.00 00:00:00 00)\n");
    Serial.print("C.2.5(94.09.02 15:58:49 03)\nC.6.0(00.00.00 00:00:00 00)\n0.9.1(12:46:19)\n0.9.2(95.07.15)\nC.2.2( )\nC.7.0(00025)\nC.52 (95.05.24 06:15:59 03)\n");
    Serial.print("C.54 (95.05.24 07:31:47 02)\n32.7 (223.83*V)\n31.7 (001.78*A)\nC.81 (00:00 T3 08:00 T2 20:00 T1 24:00)\nC.82 (00:00 T3 05:00 T2 17:00 T1 21:00 T3 24:00)\n");
    Serial.print("C.83 ()\nC.84 ()\nC.85 ()\nC.86 ()\nC.87 ()\nC.88 ()\n1.6.1(95.07.12 20:43:40 03)\n1.6.1(000.53*kW)\n1.6.2(95.07.12 16:58:41 03)\n1.6.2(000.51*kW)\n");
    Serial.print("1.6.3(95.07.12 21:13:40 03)\n1.6.3(000.45*kW)!\n");

  } else {
    /*
       if serial ID invalid return null
    */
    Serial.print("NULL\r\n");
  }
}


void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    char endChar = Serial.read();

    command += endChar;
    Serial.print(endChar);

    if (endChar == 13) {
      Serial.println("");
      //Serial.println(command);
      command.trim();
      if (command.startsWith("MAR")) {
        command = command.substring(4);
        int strEquel = command.indexOf('=');
        if (strEquel == -1) {
          strEquel = command.indexOf('\r');
        }
        if (command.startsWith("VER")) {
          isCommand = true;
          Serial.println("ALPHA_ALPHA");
          Serial.print(prompt);
        }
        else if (command.startsWith("CTR")) {
          /*
             this part argument pattern is "number1_number2" for example "7552_7554"
             controll number range is true MAR+CTR=7552-7556
          */
          command = command.substring(4);
          int under = command.indexOf('-');

          String rangeStr1 = command.substring(0, under);
          String rangeStr2 = command.substring(under + 1);


          Serial.println(rangeStr1);
          Serial.println(rangeStr2);

          int range1 = rangeStr1.toInt();
          int range2 = rangeStr2.toInt();
          for (int a = range1 ; a <= range2 ; a++)
          {
            command = String(a);
            readCounter(command);
          }
          Serial.print("OK\r\n");
        }
        else if (command.startsWith("CT")) {
          /**
             this section use Command "MAR+CT=7552" and return argument number of counter "7552"
          */
          command = command.substring(3);
          readCounter(command);
          Serial.print("OK\r\n");
          isCommand = true;
          Serial.end();
        } else if (!isCommand) {
          Serial.println("Command Not Found");
          Serial.print(prompt);
          Serial.print("OK\r\n");
        }
        command = "";
      }

    }
  }
}








