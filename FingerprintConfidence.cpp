int getFingerprintIDez() {
 uint8_t p = finger.getImage();
 if (p != FINGERPRINT_OK) return -1;
 p = finger.image2Tz();
 if (p != FINGERPRINT_OK) return -1;

 p = finger.fingerFastSearch();
 if (p != FINGERPRINT_OK) return -1;

 // found a match!
 {
 digitalWrite(12, HIGH);
 delay(3000);
 digitalWrite(12, LOW);
 Serial.print("Found ID #"); Serial.print(finger.fingerID);
 Serial.print(" with confidence of "); Serial.println(finger.confidence);

 }
}