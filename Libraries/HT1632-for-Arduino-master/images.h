/* 
 * SIMPLE IMAGES FOR RENDERING TO THE LED SCREEN.
 * 8 pixels-per-byte
 * Gaurav Manek, 2014
 */

//
// Online Services:
//

const byte IMG_MAIL [] PROGMEM = {0b11111111, 0b11000001, 0b10100001, 0b10010001, 0b10001001, 0b10000101, 0b10000101, 0b10001001};
#define IMG_MAIL_WIDTH 	8
#define IMG_MAIL_HEIGHT 8

const byte IMG_FB [] PROGMEM = {0b00111111, 0b01000000, 0b10000100, 0b10011111, 0b10100100, 0b10100000, 0b10000000, 0b10000000};
#define IMG_FB_WIDTH 	 8
#define IMG_FB_HEIGHT 	 8

const byte IMG_FB2 [] PROGMEM = {
	0b01111110, 
	0b10000001, 
	0b10001001, 
	0b10011111, 
	0b10101001, 
	0b10100001, 
	0b10000001, 
	0b01111110};

const byte IMG_INSTA [] PROGMEM = {
	0b01111110, 
	0b10000001, 
	0b10011001, 
	0b10100101, 
	0b10100101, 
	0b10011001, 
	0b11000001, 
	0b01111110};

const byte IMG_TWITTER [] PROGMEM = {0b01111110, 0b10000001, 0b10111001, 0b10010101, 0b10010101, 0b10000001, 0b10000001, 0b01111110};
#define IMG_TWITTER_WIDTH 	 8
#define IMG_TWITTER_HEIGHT 	 8

//
// Music:
//

const byte IMG_MUSIC [] PROGMEM = {0b00000010, 0b00000111, 0b11111110, 0b11000000, 0b11000000, 0b11000100, 0b11001110, 0b11111100};
#define IMG_MUSIC_WIDTH 	 8
#define IMG_MUSIC_HEIGHT 	 8

const byte IMG_MUSICNOTE [] PROGMEM = {0b00000100, 0b00001110, 0b11111100, 0b01000000};
#define IMG_MUSICNOTE_WIDTH 	 4
#define IMG_MUSICNOTE_HEIGHT 	 7

const byte IMG_SPEAKER_A [] PROGMEM = {0b00011000, 0b00011000, 0b00111100, 0b01000010, 0b10100101, 0b00011000};
const byte IMG_SPEAKER_B [] PROGMEM = {0b00011000, 0b00011000, 0b00111100, 0b01000010, 0b10111101, 0b00000000};
#define IMG_SPEAKER_WIDTH 	 6
#define IMG_SPEAKER_HEIGHT 	 8

//
// Emotions:
//

const byte IMG_HEART [] PROGMEM = {0b01110000, 0b11111000, 0b11111100, 0b11111110, 0b01111111, 0b11111110, 0b11111100, 0b11111000, 0b01110000};
#define IMG_HEART_WIDTH 	 9
#define IMG_HEART_HEIGHT 	 8

//
// Things:
//

const byte IMG_SAILBOAT [] PROGMEM = {0b00000010, 0b00100011, 0b01100011, 0b11111111, 0b01111011, 0b00111011, 0b00011011, 0b00001010};
#define IMG_SAILBOAT_WIDTH 	 8
#define IMG_SAILBOAT_HEIGHT  8
