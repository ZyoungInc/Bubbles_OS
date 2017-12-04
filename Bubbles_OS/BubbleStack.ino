#include <kernel.h>//载入bubbles核心函数库
#include <hardware.h>//初始化硬件引脚


void setup() {
#include <int.h>
}//加载配置信息

void loop() {
  for (int t = 0; t < 8; t++) {
    for (int i = 0; i < 255; i++ ) {
      ledLevels[t] = i;
      delay(10);
      reLED();
    }
    for (int i = 255; i > 0; i-- ) {
      ledLevels[t] = i;
      delay(10);
      reLED();
    }
  }
  
}
