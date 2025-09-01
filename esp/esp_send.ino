// สร้างโครงสร้างข้อมูล (struct) สำหรับเก็บค่าข้อมูลที่ต้องการส่งผ่าน Serial
typedef struct __attribute__((packed)) {
  uint8_t Header[2];

  union {
    uint8_t moveBtnByte;
    struct {
      uint8_t move1 : 1;
      uint8_t move2 : 1;
      uint8_t move3 : 1;
      uint8_t move4 : 1;
      uint8_t res1 : 2;
      uint8_t set1 : 1;
      uint8_t set2 : 1;
    } moveBtnBit;
  };

  union {
    uint8_t attackBtnByte;
    struct {
      uint8_t attack1 : 1;
      uint8_t attack2 : 1;
      uint8_t attack3 : 1;
      uint8_t attack4 : 1;
      uint8_t res1 : 4;
    } attackBtnBit;
  };

  int8_t stickValue[4];  //joyL_X,joyL_Y ,joyR_X,joyR_Y

} Receive_ESPNOW;

Receive_ESPNOW message;

long TIME = 0;  // ตัวแปรเก็บเวลาสำหรับควบคุมการส่งข้อมูล

void setup() {
  // เริ่มต้นใช้งาน Serial (UART) ที่ความเร็ว 115200 baud
  // พร้อมตั้งค่าขา RX และ TX ของ ESP32
  Serial.begin(115200, SERIAL_8N1, SOC_RX0, SOC_TX0);
}

void loop() {
  // เช็คว่าผ่านไปอย่างน้อย 10 มิลลิวินาทีแล้วหรือยัง
  if ((millis() - TIME) > 10) {
    message.Header[0] = 'R';
    message.Header[1] = 'B';

    message.moveBtnBit.move1 = 0;
    message.moveBtnBit.move2 = 1;
    message.moveBtnBit.move3 = 1;
    message.moveBtnBit.move4 = 0;

    message.attackBtnBit.attack1 = 0;
    message.attackBtnBit.attack2 = 0;
    message.attackBtnBit.attack3 = 1;
    message.attackBtnBit.attack4 = 0;

    message.stickValue[0] = random(-128, 127);
    message.stickValue[1] = 100;
    message.stickValue[2] = random(-128, 127);
    message.stickValue[3] = -100;
     

    // ส่งข้อมูลโครงสร้าง message ผ่าน Serial เป็น byte array
    Serial.write((uint8_t *)&message, sizeof(message));

    // อัปเดตค่าเวลา TIME เป็นค่าปัจจุบัน
    TIME = millis();
  }
}
