
#ifndef SMC66Registers_h
#define SMC66Registers_h
#define MESSENGERBUFFERSIZE 64

#define object_index_32 0x2012
#define object_index_16 0x2014

#define MODE_REG 2
#define P_SOLL 3
#define V_SOLL 5
#define A_SOLL 6
#define RUN_CURRENT 7
#define STANDBY_CURRENT 9
#define P_IST 10
#define V_IST 12
#define ENCODER_POS 16
#define V_START 13
#define FLWERR 20
#define STATUSBITS 25
#define MIN_P_IST 28
#define MAX_P_IST 30
#define ERR_BITS 35
#define IN_POSITION_WINDOW 33
#define P_NEW 144
#define CUR_SCALE_MAX 212
#define CUR_SCALE_MIN 213
#define CUR_SCALE_FACTOR 215
#define ACTUAL_TORQUE 217
#define CUR_SCALE_INC 218
#define CUR_SCALE_DEC 219
#define V_ENCODER 253

#define AMPS_TO_TORQUE 0.88571428 //specific to my motor units Nm/A rms
#define COUNTS_PER_REVOLUTION 409600 
#define COUNTS_TO_RAD 0.00001533980787 //dimensions are rad/counts
#define RPM_TO_RADS 0.1047197551 //dimensions are rads / rpm
#define RADS_TO_RPM 9.5492965855 //dimensions are rpm / rads
#define TORQUE_TO_AMPS 1.1290322 // dimensions are A rms/ Nm
#define REDUCTION 4.285714286 // reduction in the robot

#define READ_REQUEST_CAN 0x40
#define WRITE_REQUEST_CAN 0x600

#define CANWRITE_1BYTE 0x2F
#define CANWRITE_2BYTE 0x2B
#define CANWRITE_3BYTE 0x27
#define CANWRITE_4BYTE 0x23

#define CAN_WRITE_RESPONSE 0x60
#define CAN_ERROR_RESPONSE 0x80

#define CANREAD_1BYTE 0x4F
#define CANREAD_2BYTE 0x4B
#define CANREAD_3BYTE 0x47
#define CANREAD_4BYTE 0x43	

#define current_C 5.87 // miliamps
#define C_current 0.17035775 // 1/miliamps
#define VEL_UNITS 0.01 // convertion units to rpm

#define EXT_ENCODER_VEL 172
#define V_ENCODER 253

#define COUNT_TO_PERCENT 0.000488519785 //CONVERSION FOR TORQUE 

#define RAD2DEG 57.29577951


#endif

#ifndef PI
#define PI 3.14159265359
#endif