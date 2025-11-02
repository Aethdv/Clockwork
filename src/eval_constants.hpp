#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(293, 310);
inline const PParam KNIGHT_MAT = S(1129, 914);
inline const PParam BISHOP_MAT = S(1226, 945);
inline const PParam ROOK_MAT   = S(1713, 1680);
inline const PParam QUEEN_MAT  = S(3667, 2886);
inline const PParam TEMPO_VAL  = S(59, 15);

inline const PParam BISHOP_PAIR_VAL  = S(80, 177);
inline const PParam ROOK_OPEN_VAL  = S(104, -28);
inline const PParam ROOK_SEMIOPEN_VAL  = S(39, 12);

inline const PParam DOUBLED_PAWN_VAL = S(-37, -78);

inline const PParam POTENTIAL_CHECKER_VAL = S(-74, -2);
inline const PParam OUTPOST_KNIGHT_VAL = S(7, 51);
inline const PParam OUTPOST_BISHOP_VAL = S(42, 44);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_SAFE = S(67, 27);
inline const PParam PAWN_PUSH_THREAT_BISHOP_SAFE = S(65, -8);
inline const PParam PAWN_PUSH_THREAT_ROOK_SAFE = S(38, 34);
inline const PParam PAWN_PUSH_THREAT_QUEEN_SAFE = S(62, -53);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_UNSAFE = S(26, -4);
inline const PParam PAWN_PUSH_THREAT_BISHOP_UNSAFE = S(33, -31);
inline const PParam PAWN_PUSH_THREAT_ROOK_UNSAFE = S(18, 26);
inline const PParam PAWN_PUSH_THREAT_QUEEN_UNSAFE = S(35, -52);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 19), S(62, 31), S(75, 70), S(193, 140), S(560, 241), S(926, 1151),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(63, 43), S(62, 31), S(68, 57), S(147, 120), S(689, -91),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-69, -104), S(-59, -86), S(-34, -9), S(19, 69), S(42, 210), S(307, 314),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(50, -43), S(36, -5), S(22, 27), S(25, 75), S(93, 152), S(142, 296),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(15, -45), S(5, 2), S(1, -27), S(9, -47), S(7, -97), S(-191, -146),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(9, 102), S(-25, 89), S(-17, 38), S(-4, 9), S(5, 13), S(36, 11), S(14, 0),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-181, -48), S(34, -2), S(-8, 46), S(14, 77), S(20, 101), S(40, 101), S(-8, 121),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-220, -224), S(-113, -61), S(-56, -9), S(-13, 23), S(32, 38), S(58, 76), S(95, 72), S(129, 74), S(176, 17),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-233, -281), S(-159, -96), S(-83, -34), S(-48, 15), S(-17, 45), S(0, 66), S(18, 80), S(37, 85), S(56, 89), S(70, 85), S(95, 71), S(160, 25), S(192, 3), S(251, -29),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-310, -228), S(-152, -81), S(-100, -17), S(-67, -7), S(-41, 16), S(-26, 38), S(-8, 50), S(10, 56), S(27, 69), S(45, 77), S(64, 79), S(76, 82), S(97, 85), S(108, 71), S(254, -56),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-965, -876), S(-257, -657), S(-160, -523), S(-105, -311), S(-97, -104), S(-59, 2), S(-54, 110), S(-30, 124), S(-24, 179), S(-12, 204), S(-3, 228), S(2, 243), S(21, 234), S(32, 246), S(38, 241), S(52, 237), S(59, 228), S(58, 235), S(84, 191), S(106, 154), S(121, 135), S(165, 69), S(177, 61), S(337, -112), S(371, -155), S(613, -311), S(483, -254), S(856, -454),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(448, 4), S(105, -118), S(1, -27), S(-13, 10), S(-41, 13), S(-76, 19), S(-54, 20), S(-64, 14), S(-64, -34),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(89, -32), S(159, -78),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(36, -6), S(137, -43),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(68, -49), S(53, -64), S(104, -63), S(161, -129),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-38, 28), S(-56, 38), S(0, -7), S(162, -97), S(356, -237),
};

inline const PParam PAWN_THREAT_KNIGHT = S(241, 57);
inline const PParam PAWN_THREAT_BISHOP = S(206, 99);
inline const PParam PAWN_THREAT_ROOK   = S(200, 55);
inline const PParam PAWN_THREAT_QUEEN  = S(179, -63);

inline const PParam KNIGHT_THREAT_BISHOP = S(105, 72);
inline const PParam KNIGHT_THREAT_ROOK   = S(244, 5);
inline const PParam KNIGHT_THREAT_QUEEN  = S(156, -68);

inline const PParam BISHOP_THREAT_KNIGHT = S(111, 34);
inline const PParam BISHOP_THREAT_ROOK   = S(244, 55);
inline const PParam BISHOP_THREAT_QUEEN  = S(192, 48);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(1, -6), S(-1, 0), S(0, -11), S(-5, -21), S(-11, -26), S(-17, -32), S(-18, -39), S(-24, -37), S(-33, -42),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(112, 162),    S(102, 210),    S(170, 175),    S(233, 57),     S(179, 51),     S(164, 116),    S(60, 139),     S(118, 116),    //
    S(80, 48),      S(192, 75),     S(168, 18),     S(168, -38),    S(122, -55),    S(67, -7),      S(28, 40),      S(-21, 43),     //
    S(-2, 14),      S(18, 18),      S(35, -25),     S(22, -40),     S(4, -44),      S(-37, -37),    S(-77, 10),     S(-105, 31),    //
    S(-29, -32),    S(-9, -5),      S(-14, -38),    S(-32, -35),    S(-57, -44),    S(-79, -35),    S(-129, 13),    S(-149, 1),     //
    S(-30, -62),    S(34, -60),     S(-16, -16),    S(-47, -14),    S(-68, -22),    S(-107, -24),   S(-125, -10),   S(-150, -16),   //
    S(-19, -55),    S(112, -51),    S(66, -15),     S(7, 3),        S(-29, -9),     S(-65, -14),    S(-90, 9),      S(-128, -3),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-401, -161),  S(-351, 58),    S(-460, 233),   S(-125, 66),    S(-253, 90),    S(-338, 97),    S(-573, 83),    S(-545, -20),   //
    S(0, -4),       S(66, 8),       S(169, -58),    S(114, 6),      S(116, 13),     S(53, -11),     S(-5, 8),       S(-25, -36),    //
    S(58, -30),     S(101, 15),     S(193, 6),      S(144, 29),     S(142, 19),     S(63, 27),      S(51, 2),       S(-44, 9),      //
    S(115, 2),      S(108, 26),     S(138, 31),     S(116, 59),     S(123, 45),     S(91, 38),      S(66, -2),      S(38, 2),       //
    S(103, -16),    S(130, -18),    S(122, 5),      S(96, 23),      S(87, 31),      S(82, 25),      S(57, -1),      S(40, -56),     //
    S(14, -25),     S(46, -36),     S(38, -16),     S(50, 27),      S(57, 24),      S(0, 2),        S(7, -36),      S(-34, -43),    //
    S(15, -10),     S(38, -38),     S(22, -31),     S(21, -13),     S(8, -19),      S(-18, -39),    S(-7, -54),     S(-65, -122),   //
    S(-33, -62),    S(5, -18),      S(24, -41),     S(32, -34),     S(24, -27),     S(-22, -57),    S(-35, -33),    S(-85, -86),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-167, 81),    S(-187, 62),    S(-431, 89),    S(-310, 102),   S(-261, 106),   S(-428, 131),   S(-171, 108),   S(-123, 83),    //
    S(5, -31),      S(-10, 48),     S(7, 28),       S(-12, 32),     S(-35, 47),     S(0, 39),       S(-21, 29),     S(-57, 30),     //
    S(34, 25),      S(81, 15),      S(161, 24),     S(89, 23),      S(63, 27),      S(39, 39),      S(97, 10),      S(-5, 27),      //
    S(53, -19),     S(70, 12),      S(103, 15),     S(102, 41),     S(107, 41),     S(46, 39),      S(36, 15),      S(-14, 22),     //
    S(52, -47),     S(62, -8),      S(68, 7),       S(68, 32),      S(60, 49),      S(18, 39),      S(5, 2),        S(-1, -42),     //
    S(66, -39),     S(113, -18),    S(114, -6),     S(56, 37),      S(36, 41),      S(37, 37),      S(69, -4),      S(30, -35),     //
    S(51, -74),     S(102, -50),    S(73, -36),     S(44, -7),      S(34, -22),     S(37, -33),     S(18, -18),     S(37, -84),     //
    S(48, -54),     S(35, -8),      S(38, -1),      S(50, -36),     S(58, -46),     S(55, -5),      S(47, -33),     S(29, -35),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(105, 12),     S(171, 10),     S(100, 41),     S(99, 36),      S(107, 24),     S(56, 37),      S(62, 41),      S(71, 45),      //
    S(13, 70),      S(101, 45),     S(174, 22),     S(100, 65),     S(116, 53),     S(63, 62),      S(3, 81),       S(-4, 87),      //
    S(2, 47),       S(151, 5),      S(181, 0),      S(181, -3),     S(135, 5),      S(61, 47),      S(78, 34),      S(-40, 84),     //
    S(-27, 41),     S(50, 34),      S(80, 25),      S(103, -10),    S(71, 12),      S(9, 61),       S(-7, 60),      S(-79, 68),     //
    S(-92, -7),     S(-10, -2),     S(-26, 14),     S(-42, 15),     S(-47, 12),     S(-66, 52),     S(-95, 49),     S(-114, 38),    //
    S(-115, -28),   S(-40, -54),    S(-47, -24),    S(-66, -23),    S(-50, -42),    S(-100, 12),    S(-101, -5),    S(-124, -8),    //
    S(-177, -17),   S(-77, -77),    S(-53, -62),    S(-49, -60),    S(-56, -55),    S(-75, -39),    S(-95, -61),    S(-127, -44),   //
    S(-143, -15),   S(-112, -10),   S(-58, -46),    S(-33, -63),    S(-47, -48),    S(-60, -36),    S(-75, -44),    S(-93, -28),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(38, 41),      S(78, 6),       S(82, 13),      S(-38, 142),    S(32, 61),      S(-22, 88),     S(43, 2),       S(-21, 27),     //
    S(25, 79),      S(-48, 174),    S(-52, 230),    S(-139, 261),   S(-111, 207),   S(-123, 206),   S(-73, 111),    S(-38, 51),     //
    S(-16, 111),    S(73, 107),     S(13, 185),     S(-3, 196),     S(-44, 177),    S(-77, 176),    S(-6, 70),      S(-40, 43),     //
    S(53, 24),      S(58, 91),      S(21, 127),     S(8, 193),      S(-13, 177),    S(-22, 111),    S(16, 17),      S(1, -13),      //
    S(16, 52),      S(52, 13),      S(24, 83),      S(-14, 140),    S(-26, 126),    S(-22, 85),     S(-8, 6),       S(-7, -42),     //
    S(26, -107),    S(51, -62),     S(49, 7),       S(-2, 33),      S(9, -9),       S(11, -4),      S(24, -75),     S(0, -68),      //
    S(10, -211),    S(44, -312),    S(31, -175),    S(47, -102),    S(21, -83),     S(38, -154),    S(13, -92),     S(-4, -90),     //
    S(-44, -132),   S(16, -383),    S(12, -370),    S(39, -276),    S(41, -193),    S(45, -238),    S(32, -199),    S(-21, -122),   //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-136, -377),  S(97, -19),     S(-62, 32),     S(-171, 57),    S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(191, -112),   S(5, 145),      S(22, 131),     S(128, 61),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-36, 59),     S(67, 137),     S(107, 106),    S(91, 61),      S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-255, 83),    S(32, 97),      S(25, 95),      S(-28, 80),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-230, 40),    S(-45, 71),     S(-29, 76),     S(-112, 112),   S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-134, 10),    S(57, 13),      S(-32, 64),     S(-76, 90),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(81, -81),     S(134, -41),    S(46, 5),       S(-35, 49),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-42, -109),   S(87, -99),     S(-12, -63),    S(-29, -62),    S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
};
// Epoch duration: 64.0964s
// clang-format on
}
