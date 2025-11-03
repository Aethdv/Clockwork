#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(281, 367);
inline const PParam KNIGHT_MAT = S(1024, 1138);
inline const PParam BISHOP_MAT = S(1135, 1219);
inline const PParam ROOK_MAT   = S(1469, 2171);
inline const PParam QUEEN_MAT  = S(2976, 4013);
inline const PParam TEMPO_VAL  = S(95, 85);

inline const PParam BISHOP_PAIR_VAL  = S(70, 203);
inline const PParam ROOK_OPEN_VAL  = S(107, 6);
inline const PParam ROOK_SEMIOPEN_VAL  = S(41, 28);

inline const PParam DOUBLED_PAWN_VAL = S(-24, -91);

inline const PParam POTENTIAL_CHECKER_VAL = S(-67, -32);
inline const PParam OUTPOST_KNIGHT_VAL = S(20, 70);
inline const PParam OUTPOST_BISHOP_VAL = S(50, 38);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_SAFE = S(70, 48);
inline const PParam PAWN_PUSH_THREAT_BISHOP_SAFE = S(74, -11);
inline const PParam PAWN_PUSH_THREAT_ROOK_SAFE = S(64, 37);
inline const PParam PAWN_PUSH_THREAT_QUEEN_SAFE = S(62, -34);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_UNSAFE = S(27, -9);
inline const PParam PAWN_PUSH_THREAT_BISHOP_UNSAFE = S(34, -51);
inline const PParam PAWN_PUSH_THREAT_ROOK_UNSAFE = S(12, 32);
inline const PParam PAWN_PUSH_THREAT_QUEEN_UNSAFE = S(63, -75);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(24, 15), S(58, 45), S(64, 91), S(153, 222), S(549, 363), S(713, 893),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(70, 59), S(57, 53), S(63, 90), S(84, 195), S(604, 123),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-57, -158), S(-33, -130), S(-21, -16), S(46, 113), S(-28, 393), S(151, 466),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(63, -56), S(59, -34), S(46, 3), S(-5, 70), S(-7, 234), S(-202, 671),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(5, -53), S(25, 0), S(19, -42), S(33, -79), S(95, -272), S(-53, -337),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-38, 148), S(-74, 122), S(-43, 57), S(-17, 27), S(0, 30), S(60, 23), S(16, 19),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-214, -73), S(11, -14), S(-30, 69), S(-1, 108), S(-1, 143), S(9, 164), S(-51, 174),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-221, -212), S(-110, -42), S(-61, 55), S(-24, 92), S(5, 124), S(31, 167), S(59, 176), S(86, 192), S(109, 168),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-213, -85), S(-140, -38), S(-94, 18), S(-70, 73), S(-37, 100), S(-18, 128), S(-5, 147), S(9, 155), S(16, 163), S(33, 159), S(62, 143), S(97, 130), S(111, 129), S(148, 102),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-153, -419), S(-108, -50), S(-62, 18), S(-52, 62), S(-35, 82), S(-28, 106), S(-24, 137), S(-9, 152), S(-5, 172), S(8, 180), S(19, 187), S(20, 201), S(23, 210), S(44, 198), S(46, 182),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-986, -883), S(-386, -699), S(-165, -415), S(-108, -9), S(-85, 144), S(-65, 160), S(-60, 232), S(-49, 292), S(-36, 332), S(-22, 340), S(-12, 357), S(-1, 363), S(2, 380), S(14, 380), S(13, 392), S(30, 380), S(27, 396), S(27, 403), S(35, 396), S(67, 366), S(89, 350), S(134, 290), S(162, 296), S(279, 165), S(243, 224), S(692, -115), S(591, -67), S(871, -282),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(222, 81), S(58, -152), S(-10, -39), S(-11, 9), S(-41, 14), S(-43, 9), S(-49, 31), S(-56, 21), S(-11, -31),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(63, -22), S(126, -75),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(28, -7), S(135, -39),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(80, -69), S(91, -109), S(169, -97), S(142, -157),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-41, 4), S(-55, -17), S(-24, -55), S(122, -161), S(316, -266),
};

inline const PParam PAWN_THREAT_KNIGHT = S(215, 81);
inline const PParam PAWN_THREAT_BISHOP = S(203, 153);
inline const PParam PAWN_THREAT_ROOK   = S(283, 16);
inline const PParam PAWN_THREAT_QUEEN  = S(270, -122);

inline const PParam KNIGHT_THREAT_BISHOP = S(101, 113);
inline const PParam KNIGHT_THREAT_ROOK   = S(235, 58);
inline const PParam KNIGHT_THREAT_QUEEN  = S(188, -77);

inline const PParam BISHOP_THREAT_KNIGHT = S(80, 77);
inline const PParam BISHOP_THREAT_ROOK   = S(180, 89);
inline const PParam BISHOP_THREAT_QUEEN  = S(226, 180);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(-3, 6), S(0, 0), S(-1, -14), S(-6, -26), S(-10, -39), S(-12, -55), S(-15, -66), S(-18, -82), S(-25, -93),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(-54, 303),    S(41, 242),     S(189, 237),    S(189, 118),    S(214, 71),     S(72, 142),     S(68, 174),     S(17, 228),     //
    S(118, 88),     S(176, 82),     S(243, -30),    S(145, -97),    S(119, -114),   S(94, -64),     S(-1, 51),      S(-18, 59),     //
    S(20, 12),      S(15, 14),      S(45, -44),     S(21, -70),     S(-26, -74),    S(-58, -43),    S(-73, 0),      S(-113, 31),    //
    S(-29, -21),    S(-15, 5),      S(-12, -44),    S(-25, -44),    S(-55, -53),    S(-78, -40),    S(-108, -2),    S(-145, -9),    //
    S(-16, -48),    S(30, -34),     S(-31, -23),    S(-47, -21),    S(-78, -24),    S(-97, -34),    S(-126, -14),   S(-166, -12),   //
    S(7, -41),      S(116, -25),    S(66, -9),      S(-13, 31),     S(-34, -10),    S(-61, -5),     S(-86, 18),     S(-134, 18),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-321, -228),  S(-276, -51),   S(-239, -22),   S(-37, -2),     S(-184, 51),    S(-297, 62),    S(-426, 65),    S(-365, -129),  //
    S(-53, -9),     S(47, 22),      S(64, -3),      S(-29, 26),     S(-24, 43),     S(-26, 50),     S(-19, 84),     S(-54, 51),     //
    S(37, 5),       S(-16, 27),     S(151, 3),      S(68, 68),      S(53, 78),      S(22, 73),      S(29, 30),      S(-14, 48),     //
    S(96, 45),      S(52, 103),     S(81, 92),      S(73, 103),     S(65, 105),     S(98, 76),      S(59, 67),      S(44, 80),      //
    S(65, 46),      S(56, 43),      S(87, 46),      S(51, 92),      S(78, 70),      S(50, 78),      S(66, 38),      S(19, 59),      //
    S(27, 20),      S(53, 10),      S(45, 19),      S(64, 70),      S(39, 76),      S(7, 44),       S(-11, 26),     S(-39, 21),     //
    S(27, 37),      S(13, 21),      S(12, 15),      S(18, 20),      S(7, 22),       S(-18, 25),     S(-19, 12),     S(-57, 10),     //
    S(-25, 20),     S(-16, 32),     S(27, 18),      S(14, 51),      S(19, 34),      S(-53, 8),      S(-25, 13),     S(-158, 13),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-147, 11),    S(-182, 74),    S(-211, 45),    S(-323, 83),    S(-312, 94),    S(-261, 65),    S(-140, 58),    S(-74, 64),     //
    S(-86, 9),      S(-119, 75),    S(-27, 34),     S(-42, 34),     S(-82, 62),     S(6, 35),       S(1, 44),       S(-7, 22),      //
    S(26, 65),      S(27, 42),      S(106, 60),     S(8, 60),       S(37, 28),      S(15, 56),      S(47, 39),      S(6, 48),       //
    S(-16, 36),     S(63, 25),      S(49, 63),      S(61, 82),      S(52, 103),     S(55, 48),      S(34, 51),      S(-17, 52),     //
    S(74, -21),     S(0, 40),       S(45, 40),      S(29, 80),      S(58, 74),      S(-2, 80),      S(-17, 56),     S(-7, 34),      //
    S(64, 2),       S(108, 15),     S(79, 50),      S(63, 75),      S(22, 72),      S(49, 76),      S(60, 64),      S(-5, 21),      //
    S(69, -18),     S(107, -10),    S(75, 5),       S(31, 29),      S(18, 40),      S(54, -9),      S(41, 0),       S(41, 1),       //
    S(109, -63),    S(72, 0),       S(20, 48),      S(52, 26),      S(11, 18),      S(42, 45),      S(70, 45),      S(39, -7),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(18, 82),      S(-89, 141),    S(27, 111),     S(-40, 103),    S(-113, 149),   S(-83, 145),    S(-36, 114),    S(-64, 132),    //
    S(78, 56),      S(55, 98),      S(63, 108),     S(-47, 134),    S(4, 137),      S(-50, 172),    S(-84, 163),    S(-80, 150),    //
    S(30, 48),      S(168, 45),     S(83, 53),      S(59, 72),      S(-22, 101),    S(-30, 128),    S(3, 113),      S(-85, 135),    //
    S(5, 64),       S(26, 78),      S(46, 66),      S(3, 76),       S(-13, 97),     S(-19, 120),    S(-16, 113),    S(-77, 140),    //
    S(-61, 49),     S(6, 48),       S(-73, 75),     S(-53, 69),     S(-72, 82),     S(-84, 98),     S(-106, 102),   S(-118, 103),   //
    S(-20, 5),      S(36, -13),     S(-27, 24),     S(-48, 33),     S(-90, 63),     S(-92, 56),     S(-90, 50),     S(-123, 69),    //
    S(-62, -11),    S(11, -36),     S(-34, 0),      S(-40, 11),     S(-62, 26),     S(-67, 36),     S(-98, 44),     S(-114, 39),    //
    S(-96, -11),    S(-64, 27),     S(-51, 22),     S(-24, 0),      S(-42, 20),     S(-64, 44),     S(-66, 29),     S(-83, 46),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(-62, 29),     S(136, -83),    S(-6, 112),     S(-102, 174),   S(-47, 110),    S(-119, 145),   S(-149, 99),    S(-129, 117),   //
    S(109, 58),     S(-71, 155),    S(-90, 245),    S(-229, 332),   S(-172, 262),   S(-89, 167),    S(-53, 89),     S(-11, 62),     //
    S(-38, 112),    S(42, 87),      S(-46, 210),    S(-57, 211),    S(-60, 197),    S(-25, 146),    S(6, 44),       S(4, 51),       //
    S(51, 67),      S(45, 137),     S(17, 142),     S(-26, 196),    S(-25, 200),    S(2, 112),      S(29, 67),      S(4, 55),       //
    S(63, 51),      S(35, 103),     S(16, 119),     S(-13, 174),    S(-28, 194),    S(-20, 148),    S(-11, 111),    S(-5, 54),      //
    S(57, -7),      S(64, 48),      S(45, 83),      S(-3, 122),     S(-13, 113),    S(0, 126),      S(8, 76),       S(12, 13),      //
    S(46, -119),    S(61, -145),    S(46, -60),     S(29, 37),      S(25, 42),      S(19, 19),      S(18, 14),      S(43, -53),     //
    S(11, -138),    S(-22, -110),   S(-28, -36),    S(11, -30),     S(4, 43),       S(9, -6),       S(9, -22),      S(-25, 12),     //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(152, -305),   S(155, -115),   S(56, -58),     S(-97, -4),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-178, 39),    S(16, 129),     S(-32, 153),    S(196, 79),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-154, 62),    S(63, 145),     S(109, 154),    S(-39, 180),    S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-278, 48),    S(-132, 122),   S(-176, 158),   S(-278, 181),   S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-312, 7),     S(-138, 57),    S(-135, 94),    S(-274, 145),   S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-120, -29),   S(38, -2),      S(-44, 49),     S(-87, 86),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(99, -104),    S(136, -45),    S(39, 13),      S(-40, 48),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(43, -161),    S(91, -115),    S(-5, -44),     S(-7, -50),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
};
// Epoch duration: 65.5441s
// clang-format on
}
