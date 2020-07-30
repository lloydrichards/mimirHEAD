#include <Arduino.h>
#include <mimirHEAD.h>

mimirHEAD mimir(115200);

void setup()
{
  mimir.initSPIFFS();
  //mimir.i2cScanner();
  mimir.initMicroSD();
  mimir.initSensors();
  mimir.initWIFI();
  //mimir.initPixels();

  mimir.readSensors();
  mimir.printSensors();

  mimir.WiFi_ON();
  mimir.sendData("https://us-central1-mimirhome-app.cloudfunctions.net/sensorData/add");
  mimir.WiFi_OFF();

  mimir.logData(mimir.stringData());

  mimir.SLEEP(5);
}

void loop()
{
  //mimir.testPixels();
}