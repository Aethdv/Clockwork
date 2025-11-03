#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(293, 314);
inline const PParam KNIGHT_MAT = S(1129, 906);
inline const PParam BISHOP_MAT = S(1226, 944);
inline const PParam ROOK_MAT   = S(1711, 1679);
inline const PParam QUEEN_MAT  = S(3666, 2887);
inline const PParam TEMPO_VAL  = S(59, 15);

inline const PParam BISHOP_PAIR_VAL  = S(80, 177);
inline const PParam ROOK_OPEN_VAL  = S(104, -28);
inline const PParam ROOK_SEMIOPEN_VAL  = S(39, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-37, -78);

inline const PParam POTENTIAL_CHECKER_VAL = S(-74, -2);
inline const PParam OUTPOST_KNIGHT_VAL = S(7, 51);
inline const PParam OUTPOST_BISHOP_VAL = S(42, 43);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_SAFE = S(62, 28);
inline const PParam PAWN_PUSH_THREAT_BISHOP_SAFE = S(63, -5);
inline const PParam PAWN_PUSH_THREAT_ROOK_SAFE = S(38, 36);
inline const PParam PAWN_PUSH_THREAT_QUEEN_SAFE = S(58, -49);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_UNSAFE = S(22, -11);
inline const PParam PAWN_PUSH_THREAT_BISHOP_UNSAFE = S(26, -46);
inline const PParam PAWN_PUSH_THREAT_ROOK_UNSAFE = S(12, 17);
inline const PParam PAWN_PUSH_THREAT_QUEEN_UNSAFE = S(39, -60);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 19), S(61, 30), S(70, 69), S(187, 141), S(560, 240), S(928, 1153),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(64, 43), S(62, 31), S(68, 57), S(147, 120), S(688, -91),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-64, -101), S(-53, -82), S(-28, -6), S(24, 73), S(47, 213), S(313, 317),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(50, -43), S(36, -5), S(22, 27), S(25, 75), S(93, 152), S(143, 296),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(15, -45), S(5, 2), S(0, -27), S(9, -47), S(6, -96), S(-192, -145),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(10, 102), S(-24, 89), S(-16, 38), S(-3, 9), S(6, 14), S(36, 11), S(15, 0),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-187, -52), S(28, -5), S(-14, 43), S(8, 73), S(14, 98), S(34, 97), S(-14, 117),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-220, -219), S(-113, -56), S(-56, -4), S(-12, 28), S(33, 43), S(59, 81), S(96, 77), S(130, 79), S(176, 21),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-235, -281), S(-161, -95), S(-86, -33), S(-50, 15), S(-19, 46), S(-2, 66), S(16, 80), S(34, 86), S(53, 89), S(66, 85), S(91, 72), S(156, 25), S(187, 4), S(246, -29),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-308, -231), S(-151, -81), S(-99, -17), S(-67, -7), S(-40, 16), S(-25, 38), S(-7, 50), S(11, 56), S(28, 69), S(46, 77), S(64, 79), S(77, 82), S(98, 85), S(109, 71), S(255, -55),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-965, -876), S(-256, -658), S(-159, -523), S(-105, -312), S(-96, -104), S(-58, 1), S(-53, 109), S(-29, 123), S(-23, 177), S(-11, 203), S(-2, 227), S(3, 242), S(22, 234), S(32, 245), S(39, 240), S(53, 236), S(59, 227), S(59, 234), S(84, 190), S(106, 153), S(121, 135), S(165, 68), S(178, 60), S(337, -112), S(371, -155), S(612, -310), S(482, -254), S(856, -454),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(444, 3), S(102, -118), S(-1, -28), S(-16, 10), S(-44, 13), S(-78, 18), S(-57, 20), S(-67, 14), S(-68, -34),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(89, -32), S(159, -78),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(36, -6), S(137, -43),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(68, -48), S(53, -64), S(104, -63), S(161, -129),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-38, 28), S(-56, 38), S(-1, -7), S(161, -96), S(356, -237),
};

inline const PParam PAWN_THREAT_KNIGHT = S(241, 58);
inline const PParam PAWN_THREAT_BISHOP = S(207, 99);
inline const PParam PAWN_THREAT_ROOK   = S(200, 56);
inline const PParam PAWN_THREAT_QUEEN  = S(180, -63);

inline const PParam KNIGHT_THREAT_BISHOP = S(105, 72);
inline const PParam KNIGHT_THREAT_ROOK   = S(244, 5);
inline const PParam KNIGHT_THREAT_QUEEN  = S(156, -68);

inline const PParam BISHOP_THREAT_KNIGHT = S(110, 34);
inline const PParam BISHOP_THREAT_ROOK   = S(244, 55);
inline const PParam BISHOP_THREAT_QUEEN  = S(192, 48);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(1, -6), S(-1, 0), S(0, -11), S(-5, -21), S(-11, -27), S(-17, -33), S(-18, -39), S(-24, -37), S(-33, -42),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(110, 159),    S(100, 207),    S(168, 172),    S(232, 53),     S(177, 48),     S(162, 112),    S(58, 136),     S(117, 112),    //
    S(80, 44),      S(192, 72),     S(168, 15),     S(168, -42),    S(122, -59),    S(67, -10),     S(28, 37),      S(-21, 40),     //
    S(-1, 11),      S(19, 15),      S(35, -28),     S(22, -43),     S(5, -47),      S(-37, -40),    S(-77, 7),      S(-104, 28),    //
    S(-28, -36),    S(-8, -8),      S(-14, -41),    S(-31, -38),    S(-57, -47),    S(-78, -39),    S(-128, 10),    S(-148, -1),    //
    S(-29, -65),    S(34, -62),     S(-16, -19),    S(-47, -17),    S(-68, -26),    S(-107, -27),   S(-125, -13),   S(-150, -20),   //
    S(-19, -59),    S(111, -54),    S(66, -18),     S(7, 0),        S(-29, -12),    S(-65, -17),    S(-90, 6),      S(-128, -6),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-400, -158),  S(-351, 62),    S(-460, 236),   S(-125, 69),    S(-256, 94),    S(-339, 100),   S(-572, 87),    S(-544, -17),   //
    S(0, 0),        S(67, 11),      S(168, -55),    S(113, 10),     S(115, 17),     S(53, -8),      S(-5, 11),      S(-25, -33),    //
    S(58, -27),     S(101, 18),     S(193, 10),     S(143, 33),     S(142, 22),     S(62, 30),      S(51, 5),       S(-44, 12),     //
    S(114, 6),      S(106, 30),     S(136, 35),     S(114, 62),     S(122, 48),     S(90, 42),      S(65, 1),       S(38, 6),       //
    S(103, -13),    S(129, -15),    S(121, 9),      S(95, 27),      S(87, 35),      S(81, 29),      S(57, 2),       S(40, -53),     //
    S(13, -21),     S(46, -32),     S(38, -12),     S(50, 30),      S(57, 27),      S(0, 5),        S(6, -33),      S(-34, -39),    //
    S(15, -7),      S(37, -35),     S(21, -28),     S(20, -9),      S(7, -15),      S(-19, -36),    S(-8, -50),     S(-66, -119),   //
    S(-33, -58),    S(5, -15),      S(23, -37),     S(32, -31),     S(24, -23),     S(-22, -53),    S(-35, -29),    S(-85, -83),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-165, 82),    S(-186, 63),    S(-429, 90),    S(-308, 103),   S(-259, 107),   S(-426, 132),   S(-168, 109),   S(-121, 84),    //
    S(7, -30),      S(-8, 48),      S(10, 29),      S(-9, 33),      S(-33, 48),     S(1, 40),       S(-18, 30),     S(-55, 30),     //
    S(37, 26),      S(84, 16),      S(164, 25),     S(92, 24),      S(67, 28),      S(42, 40),      S(99, 12),      S(-2, 28),      //
    S(55, -18),     S(72, 14),      S(106, 17),     S(105, 43),     S(110, 43),     S(49, 40),      S(38, 17),      S(-12, 22),     //
    S(54, -47),     S(64, -7),      S(71, 8),       S(71, 33),      S(63, 50),      S(21, 40),      S(7, 3),        S(0, -41),      //
    S(69, -38),     S(116, -17),    S(116, -5),     S(59, 38),      S(39, 42),      S(39, 38),      S(71, -3),      S(32, -33),     //
    S(53, -73),     S(104, -49),    S(75, -36),     S(46, -6),      S(36, -22),     S(39, -32),     S(20, -17),     S(39, -83),     //
    S(50, -54),     S(37, -7),      S(41, -1),      S(52, -35),     S(60, -45),     S(57, -4),      S(49, -32),     S(31, -35),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(106, 13),     S(172, 12),     S(101, 42),     S(101, 37),     S(109, 26),     S(57, 38),      S(64, 42),      S(73, 46),      //
    S(15, 71),      S(102, 46),     S(177, 23),     S(102, 67),     S(118, 54),     S(65, 64),      S(5, 82),       S(-3, 88),      //
    S(4, 48),       S(152, 7),      S(183, 0),      S(183, -2),     S(137, 6),      S(62, 48),      S(79, 35),      S(-39, 86),     //
    S(-26, 43),     S(52, 35),      S(82, 26),      S(105, -9),     S(73, 14),      S(11, 62),      S(-5, 61),      S(-77, 69),     //
    S(-90, -5),     S(-8, -1),      S(-24, 15),     S(-40, 16),     S(-45, 13),     S(-64, 52),     S(-93, 50),     S(-112, 39),    //
    S(-114, -26),   S(-39, -52),    S(-45, -23),    S(-65, -22),    S(-48, -41),    S(-98, 12),     S(-99, -4),     S(-122, -7),    //
    S(-176, -16),   S(-76, -75),    S(-52, -61),    S(-47, -59),    S(-54, -54),    S(-74, -37),    S(-93, -60),    S(-125, -43),   //
    S(-141, -14),   S(-110, -9),    S(-57, -45),    S(-31, -62),    S(-45, -47),    S(-58, -35),    S(-74, -43),    S(-91, -27),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(38, 41),      S(78, 6),       S(82, 13),      S(-37, 142),    S(33, 60),      S(-22, 87),     S(43, 2),       S(-20, 27),     //
    S(25, 80),      S(-47, 174),    S(-52, 230),    S(-139, 261),   S(-111, 207),   S(-122, 206),   S(-73, 111),    S(-37, 51),     //
    S(-16, 111),    S(73, 107),     S(13, 184),     S(-3, 195),     S(-44, 177),    S(-76, 176),    S(-6, 70),      S(-40, 43),     //
    S(52, 24),      S(57, 92),      S(21, 127),     S(8, 194),      S(-13, 178),    S(-22, 112),    S(15, 19),      S(1, -13),      //
    S(16, 52),      S(51, 14),      S(24, 83),      S(-14, 140),    S(-26, 126),    S(-21, 85),     S(-9, 7),       S(-7, -42),     //
    S(26, -106),    S(51, -62),     S(50, 7),       S(-2, 33),      S(9, -9),       S(12, -4),      S(24, -75),     S(0, -68),      //
    S(11, -211),    S(44, -311),    S(31, -175),    S(48, -102),    S(21, -83),     S(39, -154),    S(13, -92),     S(-4, -89),     //
    S(-44, -132),   S(16, -383),    S(12, -370),    S(39, -275),    S(42, -193),    S(46, -238),    S(32, -198),    S(-21, -122),   //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-136, -376),  S(101, -19),    S(-56, 32),     S(-166, 57),    S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(197, -112),   S(10, 145),     S(27, 131),     S(134, 61),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-31, 58),     S(73, 137),     S(113, 106),    S(97, 60),      S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-249, 83),    S(39, 97),      S(31, 95),      S(-23, 80),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-223, 40),    S(-39, 70),     S(-23, 76),     S(-106, 111),   S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-128, 9),     S(63, 13),      S(-27, 64),     S(-70, 89),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(87, -81),     S(140, -41),    S(52, 5),       S(-29, 49),     S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
    S(-36, -110),   S(93, -100),    S(-6, -64),     S(-23, -62),    S(20, -10),     S(20, -10),     S(20, -10),     S(20, -10),     //
};
// Epoch duration: 65.4973s
// clang-format on
}
