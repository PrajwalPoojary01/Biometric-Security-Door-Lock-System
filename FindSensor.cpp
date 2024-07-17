finger.begin(57600);
 if (finger.verifyPassword()) {
 Serial.println("Found fingerprint sensor!");
 } else {
 Serial.println("Did not find fingerprint sensor :(");
 while (1) {
 delay(1);
 }
 }
 finger.getTemplateCount();
 Serial.print("Sensor contains "); Serial.print(finger.templateCount); Serial.println("
templates");
 Serial.println("Waiting for valid finger...");
}