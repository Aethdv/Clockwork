#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(294, 316);
inline const PParam KNIGHT_MAT = S(1135, 889);
inline const PParam BISHOP_MAT = S(1220, 938);
inline const PParam ROOK_MAT   = S(1701, 1660);
inline const PParam QUEEN_MAT  = S(3656, 2859);
inline const PParam TEMPO_VAL  = S(59, 15);

inline const PParam BISHOP_PAIR_VAL  = S(80, 177);
inline const PParam ROOK_OPEN_VAL  = S(104, -28);
inline const PParam ROOK_SEMIOPEN_VAL  = S(39, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-37, -78);

inline const PParam POTENTIAL_CHECKER_VAL = S(-74, -2);
inline const PParam OUTPOST_KNIGHT_VAL = S(7, 51);
inline const PParam OUTPOST_BISHOP_VAL = S(41, 43);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_SAFE = S(67, 34);
inline const PParam PAWN_PUSH_THREAT_BISHOP_SAFE = S(73, 29);
inline const PParam PAWN_PUSH_THREAT_ROOK_SAFE = S(53, 44);
inline const PParam PAWN_PUSH_THREAT_QUEEN_SAFE = S(72, -32);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_UNSAFE = S(27, -16);
inline const PParam PAWN_PUSH_THREAT_BISHOP_UNSAFE = S(33, -37);
inline const PParam PAWN_PUSH_THREAT_ROOK_UNSAFE = S(5, 3);
inline const PParam PAWN_PUSH_THREAT_QUEEN_UNSAFE = S(41, -61);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 18), S(59, 29), S(66, 68), S(180, 140), S(537, 246), S(864, 1094),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(64, 43), S(62, 32), S(68, 58), S(148, 121), S(687, -88),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-56, -108), S(-46, -90), S(-20, -14), S(36, 64), S(62, 205), S(305, 311),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(50, -43), S(36, -5), S(20, 28), S(20, 76), S(83, 154), S(142, 296),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(15, -45), S(5, 2), S(0, -27), S(4, -46), S(-2, -94), S(-192, -145),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(1, 100), S(-32, 88), S(-25, 37), S(-11, 7), S(-1, 12), S(28, 10), S(6, -1),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-186, -42), S(29, 3), S(-12, 52), S(9, 82), S(14, 107), S(35, 107), S(-14, 127),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-220, -207), S(-113, -44), S(-56, 6), S(-13, 39), S(33, 54), S(59, 92), S(95, 88), S(129, 90), S(175, 32),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-227, -271), S(-153, -86), S(-77, -24), S(-43, 25), S(-12, 55), S(4, 75), S(22, 89), S(40, 94), S(58, 97), S(72, 93), S(96, 79), S(161, 32), S(190, 11), S(250, -22),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-280, -263), S(-148, -71), S(-96, -7), S(-64, 3), S(-37, 26), S(-22, 49), S(-4, 61), S(14, 67), S(31, 79), S(49, 88), S(67, 90), S(79, 93), S(100, 95), S(112, 82), S(257, -45),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-981, -880), S(-251, -613), S(-155, -477), S(-99, -278), S(-90, -71), S(-52, 31), S(-48, 140), S(-23, 154), S(-18, 208), S(-6, 233), S(2, 257), S(7, 272), S(26, 264), S(36, 275), S(42, 270), S(56, 266), S(62, 257), S(62, 264), S(87, 220), S(109, 183), S(123, 165), S(166, 99), S(179, 90), S(336, -80), S(348, -107), S(591, -265), S(481, -221), S(858, -422),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(382, 80), S(110, -118), S(7, -27), S(-8, 9), S(-35, 12), S(-70, 18), S(-49, 19), S(-58, 13), S(-59, -35),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(90, -32), S(160, -77),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(37, -6), S(137, -43),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(69, -49), S(53, -64), S(104, -64), S(161, -129),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-38, 28), S(-55, 37), S(0, -8), S(162, -97), S(358, -239),
};

inline const PParam PAWN_THREAT_KNIGHT = S(241, 58);
inline const PParam PAWN_THREAT_BISHOP = S(207, 99);
inline const PParam PAWN_THREAT_ROOK   = S(201, 56);
inline const PParam PAWN_THREAT_QUEEN  = S(180, -61);

inline const PParam KNIGHT_THREAT_BISHOP = S(105, 72);
inline const PParam KNIGHT_THREAT_ROOK   = S(244, 6);
inline const PParam KNIGHT_THREAT_QUEEN  = S(155, -66);

inline const PParam BISHOP_THREAT_KNIGHT = S(110, 34);
inline const PParam BISHOP_THREAT_ROOK   = S(243, 55);
inline const PParam BISHOP_THREAT_QUEEN  = S(192, 50);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(1, -6), S(-1, 0), S(0, -11), S(-5, -21), S(-11, -26), S(-17, -32), S(-18, -39), S(-24, -36), S(-33, -43),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(125, 155),    S(115, 203),    S(181, 169),    S(246, 49),     S(191, 44),     S(178, 109),    S(73, 133),     S(132, 109),    //
    S(77, 42),      S(192, 69),     S(167, 12),     S(170, -45),    S(123, -62),    S(66, -13),     S(28, 34),      S(-24, 37),     //
    S(-3, 9),       S(17, 13),      S(33, -31),     S(20, -45),     S(3, -49),      S(-38, -43),    S(-78, 4),      S(-106, 25),    //
    S(-29, -38),    S(-9, -10),     S(-15, -44),    S(-32, -41),    S(-58, -49),    S(-79, -41),    S(-129, 7),     S(-149, -4),    //
    S(-31, -67),    S(32, -65),     S(-17, -21),    S(-48, -19),    S(-69, -28),    S(-109, -30),   S(-126, -16),   S(-151, -22),   //
    S(-21, -61),    S(109, -56),    S(64, -21),     S(5, -2),       S(-31, -14),    S(-67, -19),    S(-92, 4),      S(-130, -9),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-404, -155),  S(-355, 65),    S(-467, 243),   S(-131, 75),    S(-263, 100),   S(-346, 107),   S(-578, 92),    S(-550, -13),   //
    S(-7, 5),       S(59, 18),      S(161, -49),    S(106, 16),     S(108, 23),     S(46, -1),      S(-13, 18),     S(-32, -27),    //
    S(51, -20),     S(93, 25),      S(185, 16),     S(135, 39),     S(134, 29),     S(55, 37),      S(43, 12),      S(-51, 19),     //
    S(107, 13),     S(101, 37),     S(130, 41),     S(108, 69),     S(115, 55),     S(84, 48),      S(60, 7),       S(31, 12),      //
    S(95, -7),      S(123, -9),     S(115, 15),     S(89, 33),      S(80, 40),      S(75, 35),      S(50, 8),       S(33, -47),     //
    S(7, -15),      S(39, -26),     S(31, -6),      S(43, 37),      S(50, 33),      S(-7, 11),      S(0, -26),      S(-41, -33),    //
    S(8, -1),       S(30, -29),     S(14, -21),     S(13, -3),      S(0, -10),      S(-27, -29),    S(-15, -44),    S(-73, -112),   //
    S(-39, -53),    S(-1, -9),      S(16, -31),     S(25, -25),     S(17, -17),     S(-29, -47),    S(-42, -23),    S(-91, -77),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-168, 81),    S(-189, 62),    S(-431, 89),    S(-311, 102),   S(-261, 105),   S(-428, 131),   S(-172, 108),   S(-123, 83),    //
    S(5, -31),      S(-10, 47),     S(7, 28),       S(-12, 33),     S(-35, 47),     S(0, 39),       S(-20, 29),     S(-57, 29),     //
    S(34, 25),      S(82, 16),      S(162, 26),     S(90, 24),      S(65, 28),      S(40, 40),      S(97, 11),      S(-5, 27),      //
    S(54, -20),     S(75, 12),      S(107, 16),     S(107, 43),     S(110, 43),     S(49, 39),      S(40, 14),      S(-14, 21),     //
    S(52, -49),     S(61, -9),      S(69, 8),       S(71, 33),      S(63, 50),      S(20, 40),      S(4, 1),        S(-1, -42),     //
    S(66, -39),     S(113, -19),    S(114, -5),     S(56, 38),      S(36, 42),      S(37, 37),      S(68, -5),      S(29, -35),     //
    S(50, -76),     S(101, -50),    S(72, -37),     S(43, -8),      S(34, -23),     S(36, -34),     S(17, -19),     S(35, -84),     //
    S(47, -56),     S(34, -9),      S(38, -2),      S(49, -37),     S(57, -47),     S(54, -6),      S(46, -34),     S(29, -37),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(111, 23),     S(177, 22),     S(106, 52),     S(106, 47),     S(114, 36),     S(62, 48),      S(69, 52),      S(77, 57),      //
    S(20, 81),      S(107, 56),     S(181, 33),     S(106, 77),     S(122, 64),     S(69, 73),      S(10, 92),      S(2, 98),       //
    S(8, 58),       S(156, 17),     S(187, 11),     S(187, 7),      S(141, 16),     S(66, 58),      S(84, 45),      S(-34, 96),     //
    S(-20, 52),     S(60, 44),      S(90, 35),      S(112, 0),      S(78, 24),      S(18, 71),      S(2, 71),       S(-72, 79),     //
    S(-86, 3),      S(-3, 8),       S(-18, 23),     S(-34, 25),     S(-40, 22),     S(-59, 61),     S(-87, 59),     S(-109, 49),    //
    S(-109, -16),   S(-34, -43),    S(-40, -14),    S(-60, -13),    S(-43, -32),    S(-93, 22),     S(-94, 5),      S(-118, 2),     //
    S(-171, -5),    S(-71, -66),    S(-47, -51),    S(-43, -49),    S(-50, -45),    S(-69, -27),    S(-89, -49),    S(-121, -33),   //
    S(-136, -4),    S(-105, 0),     S(-52, -35),    S(-27, -52),    S(-41, -37),    S(-54, -25),    S(-69, -33),    S(-87, -17),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(37, 47),      S(76, 12),      S(81, 19),      S(-37, 148),    S(33, 66),      S(-23, 94),     S(41, 9),       S(-22, 33),     //
    S(24, 85),      S(-47, 179),    S(-52, 235),    S(-140, 267),   S(-112, 213),   S(-122, 211),   S(-74, 117),    S(-39, 57),     //
    S(-18, 116),    S(71, 113),     S(12, 190),     S(-5, 202),     S(-45, 183),    S(-77, 182),    S(-8, 76),      S(-41, 48),     //
    S(54, 26),      S(57, 96),      S(23, 130),     S(10, 197),     S(-13, 182),    S(-22, 116),    S(15, 22),      S(0, -9),       //
    S(14, 56),      S(49, 18),      S(23, 88),      S(-14, 144),    S(-26, 131),    S(-22, 90),     S(-10, 11),     S(-9, -38),     //
    S(25, -102),    S(50, -58),     S(49, 11),      S(-3, 38),      S(8, -4),       S(11, 0),       S(22, -70),     S(-1, -64),     //
    S(9, -207),     S(42, -305),    S(30, -169),    S(46, -96),     S(19, -77),     S(37, -148),    S(11, -86),     S(-5, -84),     //
    S(-45, -128),   S(15, -377),    S(11, -364),    S(38, -270),    S(41, -187),    S(44, -232),    S(31, -193),    S(-22, -117),   //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-20, -407),   S(110, -22),    S(-44, 30),     S(-168, 58),    S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(178, -105),   S(5, 147),      S(21, 133),     S(127, 63),     S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(-36, 60),     S(69, 138),     S(107, 108),    S(92, 62),      S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(-255, 85),    S(32, 99),      S(25, 97),      S(-29, 82),     S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(-228, 41),    S(-45, 72),     S(-28, 78),     S(-112, 113),   S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(-133, 11),    S(58, 14),      S(-32, 66),     S(-75, 91),     S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(82, -79),     S(135, -39),    S(47, 7),       S(-34, 51),     S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
    S(-41, -108),   S(88, -98),     S(-11, -62),    S(-29, -60),    S(20, -8),      S(20, -8),      S(20, -8),      S(20, -8),      //
};
// Epoch duration: 68.5057s
// clang-format on
}
