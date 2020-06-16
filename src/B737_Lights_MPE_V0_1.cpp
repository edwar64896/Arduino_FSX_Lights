
#include <gspswitch.h>

// Set up the on/off switch
// Classname (gspSwitch)
// Instance name (we will call it switch1)
// Parameters:
// 1:pin number
// 2:Function to call when we turn the switch off
// 3:Function to call when we turn the switch on
gspSwitch swLandingLight (2,"C430","C431");
gspSwitch swApuGenerator (3,"E500","E501");
gspSwitch swFuelValveE1  (4,"F32","F33");
gspSwitch swFuelValveE2  (5,"F35","F36");
gspSwitch swPanelLights  (6,"C460","C461");
gspSwitch swNavLights    (7,"C410","C411");
gspSwitch swBeacons      (8,"C420","C421");
gspSwitch pbNoSmoke      (9,"Y12");
gspSwitch pbSeatBelt     (10,"Y16");
gspSwitch swStartValveE1 (11,"E42","E43");
gspSwitch swStartValveE2 (12,"E45","E46");
gspSwitch pbPushBack     (A0,"Y01",1);
gspSwitch pbJetway       (A1,"Y02",1);
gspSwitch swApuStarter   (A2,"E47","E48");
gspSwitch swMasterBattery(A3,"E17","E18");
gspSwitch swStrobeLights (A4,"C450","C451");

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  gspGrouped::register_instance(&swLandingLight);
  gspGrouped::register_instance(&swApuGenerator);
  gspGrouped::register_instance(&swFuelValveE1);
  gspGrouped::register_instance(&swFuelValveE2);
  gspGrouped::register_instance(&swPanelLights);
  gspGrouped::register_instance(&swNavLights);
  gspGrouped::register_instance(&swBeacons);
  gspGrouped::register_instance(&pbNoSmoke);
  gspGrouped::register_instance(&pbSeatBelt);
  gspGrouped::register_instance(&swStartValveE1);
  gspGrouped::register_instance(&swStartValveE2);
  gspGrouped::register_instance(&pbPushBack);
  gspGrouped::register_instance(&pbJetway);
  gspGrouped::register_instance(&swApuStarter);
  gspGrouped::register_instance(&swMasterBattery);
  gspGrouped::register_instance(&swStrobeLights);

}

void loop() {
  // put your main code here, to run repeatedly:

  // this must go in loop/
  // allows us to check what's happening with the switch.

  gspSwitch::checkAll();
}
