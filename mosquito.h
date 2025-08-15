#pragma once

#define THERMAL_MODEL_MOSQUITO_VER 1      // model parameters version

#define THERMAL_MODEL_MOSQUITO_P 50.      // heater power (W)
#define THERMAL_MODEL_MOSQUITO_U -0.0014       // linear temperature coefficient (W/K/power)
#define THERMAL_MODEL_MOSQUITO_V 1.05       // linear temperature intercept (W/power)

#define THERMAL_MODEL_MOSQUITO_C 9.0     // initial guess for heatblock capacitance (J/K)
#define THERMAL_MODEL_MOSQUITO_R 25.0     // initial guess for heatblock resistance (K/W)

#define THERMAL_MODEL_MOSQUITO_fS 0.15   // sim. 1st order IIR filter factor (f=100/27)
#define THERMAL_MODEL_MOSQUITO_LAG 270   // sim. response lag (ms, 0-2160)

#define THERMAL_MODEL_MOSQUITO_W 1.2      // Default warning threshold (K/s)
#define THERMAL_MODEL_MOSQUITO_E 1.7     // Default error threshold (K/s)

// fall-back resistance vector (R0-15)
#define THERMAL_MODEL_MOSQUITO_Rv {THERMAL_MODEL_MOSQUITO_R, 23.9, 22.5, 19.6, 19.0, 18.3, 17.7, 17.1, 16.8, 16.5, 16.3, 16.0, 15.9, 15.7, 15.6, 15.4}
