#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        19 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
// Popular NeoPixel ring size


#define NUMPIXELS 64

class color {
  public:
    int r;
    int g;
    int b;
    void setColor(int r, int g, int b) {
      this-> r = r;
      this-> g = g;
      this-> b = b;
    }
};



struct pixel {
  public:
    color c;
};

struct bandera {
  public:
    pixel pixels[NUMPIXELS];
};


bandera banderas[20];
color colores[40];

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.
  Serial.begin(9600);
  colores[0].setColor(13, 235, 145);
  colores[1].setColor(120, 235, 145);
  colores[2].setColor(255, 255, 255);
  colores[3].setColor(97, 177, 242);
  colores[4].setColor(8, 131, 60);
  colores[5].setColor(245, 97, 5);
  colores[6].setColor(255, 132, 56);
  colores[7].setColor(240, 101, 153);
  colores[8].setColor(240, 17, 254);
  colores[9].setColor(245, 73, 171);
  colores[10].setColor(0, 204, 88);
  colores[11].setColor(0, 144, 217);
  colores[12].setColor(240, 89, 154);
  colores[13].setColor(208, 24, 214);
  colores[14].setColor(30, 30, 30);
  colores[15].setColor(51, 6, 115);
  colores[16].setColor(255, 147, 121);
  colores[17].setColor(113, 101, 247);
  colores[18].setColor(127, 152, 235);
  colores[19].setColor(120, 120, 120);
  colores[20].setColor(245, 159, 225);
  colores[21].setColor(242, 229, 80);
  colores[22].setColor(81, 155, 245);
  colores[23].setColor(217, 124, 177);
  colores[24].setColor(235, 157, 201);
  colores[25].setColor(255, 255, 255);
  colores[26].setColor(200, 157, 235);
  colores[27].setColor(135, 179, 245);
  colores[28].setColor(96, 123, 230);
  colores[29].setColor(151, 240, 124);
  colores[30].setColor(233, 30, 99);
  colores[31].setColor(142, 34, 187);
  colores[32].setColor(25, 93, 162);
  colores[33].setColor(255, 0, 128);
  colores[34].setColor(255, 255, 0);
  colores[35].setColor(0, 221, 255);
  colores[36].setColor(255, 0, 0);
  colores[37].setColor(0, 255, 0);
  colores[38].setColor(0, 0, 255);
  pixels.begin();
  pixels.clear();
  pixels.show();// INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.setBrightness(10);
  banderaGay();
  banderaLesbiana();
  banderaPolisexual() ;
  banderaGeneroFluido();
  banderaOmnisexual() ;
  banderaPoligenero();
  banderaBigenero();
  banderaAgenero();
  banderaPansexual();
  banderaAsexual();
  banderaTrans();
  banderaNobinaria();
  banderaLGBT();
}

void loop() {

  for (int x = 0; x < 13; x++) {
    for (int j = 0; j < NUMPIXELS; j++) {
      pixels.setPixelColor(j , pixels.Color(banderas[x].pixels[j].c.r, banderas[x].pixels[j].c.g, banderas[x].pixels[j].c.b));
      pixels.show();
    }
    delay(30000);
  }
}

void banderaGay() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 30) {
      banderas[0].pixels[j].c = colores[0];
    } else if (j < 60) {
      banderas[0].pixels[j].c = colores[1];
    } else if (j < 90) {
      banderas[0].pixels[j].c = colores[2];
    } else if (j < 120) {
      banderas[0].pixels[j].c = colores[3];
    } else {
      banderas[0].pixels[j].c = colores[4];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[0].pixels[j].c.r, banderas[0].pixels[j].c.g, banderas[0].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[0].pixels[j].c.r);
    Serial.println(banderas[0].pixels[j].c.g);
    Serial.println(banderas[0].pixels[j].c.b);
  }
}

void banderaLesbiana() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 30) {
      banderas[1].pixels[j].c = colores[5];
    } else if (j < 60) {
      banderas[1].pixels[j].c = colores[6];
    } else if (j < 90) {
      banderas[1].pixels[j].c = colores[2];
    } else if (j < 120) {
      banderas[1].pixels[j].c = colores[7];
    } else {
      banderas[1].pixels[j].c = colores[8];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[1].pixels[j].c.r, banderas[1].pixels[j].c.g, banderas[1].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[1].pixels[j].c.r);
    Serial.println(banderas[1].pixels[j].c.g);
    Serial.println(banderas[1].pixels[j].c.b);
  }
}

void banderaPolisexual() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 50) {
      banderas[2].pixels[j].c = colores[9];
    } else if (j < 50) {
      banderas[2].pixels[j].c = colores[10];
    } else {
      banderas[2].pixels[j].c = colores[11];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[2].pixels[j].c.r, banderas[2].pixels[j].c.g, banderas[2].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[2].pixels[j].c.r);
    Serial.println(banderas[2].pixels[j].c.g);
    Serial.println(banderas[2].pixels[j].c.b);
  }
}

void banderaGeneroFluido() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 30) {
      banderas[3].pixels[j].c = colores[12];
    } else if (j < 60) {
      banderas[3].pixels[j].c = colores[2];
    } else if (j < 90) {
      banderas[3].pixels[j].c = colores[13];
    } else if (j < 120) {
      banderas[3].pixels[j].c = colores[14];
    } else {
      banderas[3].pixels[j].c = colores[15];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[3].pixels[j].c.r, banderas[3].pixels[j].c.g, banderas[3].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[3].pixels[j].c.r);
    Serial.println(banderas[3].pixels[j].c.g);
    Serial.println(banderas[3].pixels[j].c.b);
  }
}


void banderaOmnisexual() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[4].pixels[j].c = colores[16];
    } else if (j < 24) {
      banderas[4].pixels[j].c = colores[7];
    } else if (j < 40) {
      banderas[4].pixels[j].c = colores[14];
    } else if (j < 56) {
      banderas[4].pixels[j].c = colores[17];
    } else {
      banderas[4].pixels[j].c = colores[18];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[4].pixels[j].c.r, banderas[4].pixels[j].c.g, banderas[4].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[4].pixels[j].c.r);
    Serial.println(banderas[4].pixels[j].c.g);
    Serial.println(banderas[4].pixels[j].c.b);
  }
}

void banderaPoligenero() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[5].pixels[j].c = colores[14];
    } else if (j < 24) {
      banderas[5].pixels[j].c = colores[19];
    } else if (j < 40) {
      banderas[5].pixels[j].c = colores[20];
    } else if (j < 56) {
      banderas[5].pixels[j].c = colores[21];
    } else {
      banderas[5].pixels[j].c = colores[22];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[5].pixels[j].c.r, banderas[5].pixels[j].c.g, banderas[5].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[5].pixels[j].c.r);
    Serial.println(banderas[5].pixels[j].c.g);
    Serial.println(banderas[5].pixels[j].c.b);
  }
}

void banderaBigenero() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 8) {
      banderas[6].pixels[j].c = colores[23];
    } else if (j < 16) {
      banderas[6].pixels[j].c = colores[24];
    } else if (j < 24) {
      banderas[6].pixels[j].c = colores[26];
    } else if (j < 32) {
      banderas[6].pixels[j].c = colores[25];
    } else if (j < 40) {
      banderas[6].pixels[j].c = colores[26];
    } else if (j < 48) {
      banderas[6].pixels[j].c = colores[27];
    } else {
      banderas[6].pixels[j].c = colores[28];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[6].pixels[j].c.r, banderas[6].pixels[j].c.g, banderas[6].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[6].pixels[j].c.r);
    Serial.println(banderas[6].pixels[j].c.g);
    Serial.println(banderas[6].pixels[j].c.b);
  }
}

void banderaAgenero() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[7].pixels[j].c = colores[14];
    } else if (j < 24) {
      banderas[7].pixels[j].c = colores[19];
    } else if (j < 40) {
      banderas[7].pixels[j].c = colores[2];
    } else {
      banderas[7].pixels[j].c = colores[29];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[7].pixels[j].c.r, banderas[7].pixels[j].c.g, banderas[7].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[7].pixels[j].c.r);
    Serial.println(banderas[7].pixels[j].c.g);
    Serial.println(banderas[7].pixels[j].c.b);
  }
}

void banderaBisexual() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[8].pixels[j].c = colores[30];
    } else if (j < 24) {
      banderas[8].pixels[j].c = colores[31];
    } else {
      banderas[8].pixels[j].c = colores[32];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[8].pixels[j].c.r, banderas[8].pixels[j].c.g, banderas[8].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[8].pixels[j].c.r);
    Serial.println(banderas[8].pixels[j].c.g);
    Serial.println(banderas[8].pixels[j].c.b);
  }
}

void banderaPansexual() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[9].pixels[j].c = colores[33];
    } else if (j < 24) {
      banderas[9].pixels[j].c = colores[34];
    } else {
      banderas[9].pixels[j].c = colores[35];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[9].pixels[j].c.r, banderas[9].pixels[j].c.g, banderas[9].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[9].pixels[j].c.r);
    Serial.println(banderas[9].pixels[j].c.g);
    Serial.println(banderas[9].pixels[j].c.b);
  }
}


void banderaAsexual() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[10].pixels[j].c = colores[14];
    } else if (j < 24) {
      banderas[10].pixels[j].c = colores[19];
    } else if (j < 32) {
      banderas[10].pixels[j].c = colores[2];
    } else {
      banderas[10].pixels[j].c = colores[31];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[10].pixels[j].c.r, banderas[10].pixels[j].c.g, banderas[10].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[10].pixels[j].c.r);
    Serial.println(banderas[10].pixels[j].c.g);
    Serial.println(banderas[10].pixels[j].c.b);
  }
}

void banderaTrans() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[11].pixels[j].c = colores[35];
    } else if (j < 24) {
      banderas[11].pixels[j].c = colores[12];
    } else if (j < 32) {
      banderas[11].pixels[j].c = colores[2];
    } else if (j < 40) {
      banderas[11].pixels[j].c = colores[12];
    } else {
      banderas[11].pixels[j].c = colores[35];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[11].pixels[j].c.r, banderas[11].pixels[j].c.g, banderas[11].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[11].pixels[j].c.r);
    Serial.println(banderas[11].pixels[j].c.g);
    Serial.println(banderas[11].pixels[j].c.b);
  }
}

void banderaNobinaria() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[12].pixels[j].c = colores[34];
    } else if (j < 24) {
      banderas[12].pixels[j].c = colores[2];
    } else if (j < 32) {
      banderas[12].pixels[j].c = colores[31];
    } else {
      banderas[12].pixels[j].c = colores[14];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[12].pixels[j].c.r, banderas[12].pixels[j].c.g, banderas[12].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[12].pixels[j].c.r);
    Serial.println(banderas[12].pixels[j].c.g);
    Serial.println(banderas[12].pixels[j].c.b);
  }
}

void banderaLGBT() {
  for (int j = 0; j < NUMPIXELS; j++) {
    if (j < 16) {
      banderas[13].pixels[j].c = colores[36];
    } else if (j < 24) {
      banderas[13].pixels[j].c = colores[6];
    } else if (j < 32) {
      banderas[13].pixels[j].c = colores[37];
    } else if (j < 40) {
      banderas[13].pixels[j].c = colores[38];
    } else {
      banderas[13].pixels[j].c = colores[31];
    }
    pixels.setPixelColor(j , pixels.Color(banderas[13].pixels[j].c.r, banderas[13].pixels[j].c.g, banderas[13].pixels[j].c.b));
    pixels.show();
    Serial.print(j);
    Serial.print(" ");
    Serial.println(banderas[13].pixels[j].c.r);
    Serial.println(banderas[13].pixels[j].c.g);
    Serial.println(banderas[13].pixels[j].c.b);
  }
}
