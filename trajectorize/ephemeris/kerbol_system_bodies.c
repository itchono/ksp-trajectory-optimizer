#include "kerbol_system_bodies.h"

#define _USE_MATH_DEFINES
#include <math.h>

#ifndef M_PI
// This macro is here for when the linter doesn't see M_PI defined from math.h
#define M_PI (3.14159265358979323846)
#endif // M_PI

#define RADIANS(degrees) ((degrees)*M_PI / 180.0)

// All units are in SI base units [m, kg, s]
// Information was taken from the KSP wiki
// Distances are given wrt center of mass of the body rather than surface
// This differs from what is reported in-game (wrt equatorial surface)

const Body kerbol_system_bodies[] =
    {
        // Kerbol
        {.body_id = KERBOL,
         .parent_id = KERBOL,
         .mass = 1.7565459e28,
         .mu = 1.1723328e18,
         .radius = 261600000,
         .atmosphere_height = 600000,
         .orbit = {.semi_major_axis = 0,
                   .eccentricity = 0,
                   .inclination = 0,
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 0},
         .soi_radius = INFINITY,
         .colour = 0xfdf3a4},
        // Moho
        {.body_id = MOHO,
         .parent_id = KERBOL,
         .mass = 2.5263314e21,
         .mu = 1.6860938e11,
         .radius = 250000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 5263138304,
                   .eccentricity = 0.2,
                   .inclination = RADIANS(7),
                   .longitude_of_ascending_node = RADIANS(70),
                   .argument_of_periapsis = RADIANS(15),
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 9646663.0,
         .colour = 0x5d4026},
        // Eve
        {.body_id = EVE,
         .parent_id = KERBOL,
         .mass = 1.2243980e23,
         .mu = 8.1717302e12,
         .radius = 700000,
         .atmosphere_height = 90000,
         .orbit = {.semi_major_axis = 9832684544,
                   .eccentricity = 0.01,
                   .inclination = RADIANS(2.1),
                   .longitude_of_ascending_node = RADIANS(15),
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 85109365.0,
         .colour = 0x8a29fe},
        // Gilly
        {.body_id = GILLY,
         .parent_id = EVE,
         .mass = 1.2420363e17,
         .mu = 8289449.8,
         .radius = 13000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 31500000,
                   .eccentricity = 0.55,
                   .inclination = RADIANS(12),
                   .longitude_of_ascending_node = RADIANS(80),
                   .argument_of_periapsis = RADIANS(10),
                   .mean_anomaly_at_epoch = 0.9},
         .soi_radius = 126123.27,
         .colour = 0x64514d},
        // Kerbin
        {.body_id = KERBIN,
         .parent_id = KERBOL,
         .mass = 5.2915158e22,
         .mu = 3.5316000e12,
         .radius = 600000,
         .atmosphere_height = 70000,
         .orbit = {.semi_major_axis = 13599840256,
                   .eccentricity = 0,
                   .inclination = 0,
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 84159286.0,
         .colour = 0xa4ece5},
        // Mun
        {.body_id = MUN,
         .parent_id = KERBIN,
         .mass = 9.7599066e20,
         .mu = 6.5138398e10,
         .radius = 200000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 12000000,
                   .eccentricity = 0,
                   .inclination = 0,
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 1.7},
         .soi_radius = 2429559.1,
         .colour = 0xafb0c0},
        // Minmus
        {.body_id = MINMUS,
         .parent_id = KERBIN,
         .mass = 2.6457580e19,
         .mu = 1.7658000e9,
         .radius = 60000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 47000000,
                   .eccentricity = 0,
                   .inclination = RADIANS(6),
                   .longitude_of_ascending_node = RADIANS(78),
                   .argument_of_periapsis = RADIANS(38),
                   .mean_anomaly_at_epoch = 0.9},
         .soi_radius = 2247428.4,
         .colour = 0x585267},
        // Duna
        {.body_id = DUNA,
         .parent_id = KERBOL,
         .mass = 4.5154270e21,
         .mu = 3.0136321e11,
         .radius = 320000,
         .atmosphere_height = 50000,
         .orbit = {.semi_major_axis = 20726155264,
                   .eccentricity = 0.051,
                   .inclination = RADIANS(0.06),
                   .longitude_of_ascending_node = RADIANS(135.5),
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 47921949.0,
         .colour = 0xc9513a},
        // Ike
        {.body_id = IKE,
         .parent_id = DUNA,
         .mass = 2.7821615e20,
         .mu = 1.8568369e10,
         .radius = 130000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 32000000,
                   .eccentricity = 0.03,
                   .inclination = RADIANS(0.2),
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 1.7},
         .soi_radius = 1049598.9,
         .colour = 0xb1aeb9},
        // Dres
        {.body_id = DRES,
         .parent_id = KERBOL,
         .mass = 3.2190937e20,
         .mu = 2.1484489e10,
         .radius = 138000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 40839348203,
                   .eccentricity = 0.145,
                   .inclination = RADIANS(5),
                   .longitude_of_ascending_node = RADIANS(280),
                   .argument_of_periapsis = RADIANS(90),
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 32832840,
         .colour = 0x786558},
        // Jool
        {.body_id = JOOL,
         .parent_id = KERBOL,
         .mass = 4.2332127e24,
         .mu = 2.8252800e14,
         .radius = 6000000,
         .atmosphere_height = 200000,
         .orbit = {.semi_major_axis = 68773560320,
                   .eccentricity = 0.05,
                   .inclination = RADIANS(1.304),
                   .longitude_of_ascending_node = RADIANS(52),
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 0.1},
         .soi_radius = 2.4559852e9,
         .colour = 0x56dd26},
        // Laythe
        {.body_id = LAYTHE,
         .parent_id = JOOL,
         .mass = 2.9397311e22,
         .mu = 1.9620000e12,
         .radius = 500000,
         .atmosphere_height = 50000,
         .orbit = {.semi_major_axis = 27184000,
                   .eccentricity = 0,
                   .inclination = 0,
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 3723645.8,
         .colour = 0x526187},
        // Vall
        {.body_id = VALL,
         .parent_id = JOOL,
         .mass = 3.1087655e21,
         .mu = 2.0748150e11,
         .radius = 300000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 43152000,
                   .eccentricity = 0,
                   .inclination = 0,
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 0.9},
         .soi_radius = 2406401.4,
         .colour = 0x97c4e3},
        {.body_id = TYLO,
         .parent_id = JOOL,
         .mass = 4.2332127e22,
         .mu = 2.8252800e12,
         .radius = 600000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 68500000,
                   .eccentricity = 0,
                   .inclination = RADIANS(0.025),
                   .longitude_of_ascending_node = 0,
                   .argument_of_periapsis = 0,
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 10856518,
         .colour = 0xf9d8db},
        {.body_id = BOP,
         .parent_id = JOOL,
         .mass = 3.7261090e19,
         .mu = 2.4868349e9,
         .radius = 65000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 128500000,
                   .eccentricity = 0.235,
                   .inclination = RADIANS(15),
                   .longitude_of_ascending_node = RADIANS(10),
                   .argument_of_periapsis = RADIANS(25),
                   .mean_anomaly_at_epoch = 0.9},
         .soi_radius = 1221060.9,
         .colour = 0x706a5c},
        {.body_id = POL,
         .parent_id = JOOL,
         .mass = 1.0813507e19,
         .mu = 7.2170208e8,
         .radius = 44000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 179890000,
                   .eccentricity = 0.171,
                   .inclination = RADIANS(4.25),
                   .longitude_of_ascending_node = RADIANS(2),
                   .argument_of_periapsis = RADIANS(15),
                   .mean_anomaly_at_epoch = 0.9},
         .soi_radius = 1042138.9,
         .colour = 0xaeb359},
        {.body_id = EELOO,
         .parent_id = KERBOL,
         .mass = 1.1149224e21,
         .mu = 7.4410815e10,
         .radius = 210000,
         .atmosphere_height = 0,
         .orbit = {.semi_major_axis = 90118820000,
                   .eccentricity = 0.26,
                   .inclination = RADIANS(6.15),
                   .longitude_of_ascending_node = RADIANS(50),
                   .argument_of_periapsis = RADIANS(260),
                   .mean_anomaly_at_epoch = 3.14},
         .soi_radius = 1.1908294e8,
         .colour = 0xa3aea9}};
