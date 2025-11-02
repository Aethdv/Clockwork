#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(291, 309);
inline const PParam KNIGHT_MAT = S(1122, 912);
inline const PParam BISHOP_MAT = S(1222, 940);
inline const PParam ROOK_MAT   = S(1718, 1680);
inline const PParam QUEEN_MAT  = S(3670, 2883);
inline const PParam TEMPO_VAL  = S(59, 15);

inline const PParam BISHOP_PAIR_VAL  = S(80, 177);
inline const PParam ROOK_OPEN_VAL  = S(104, -28);
inline const PParam ROOK_SEMIOPEN_VAL  = S(39, 12);

inline const PParam DOUBLED_PAWN_VAL = S(-36, -77);

inline const PParam POTENTIAL_CHECKER_VAL = S(-74, -2);
inline const PParam OUTPOST_KNIGHT_VAL = S(7, 51);
inline const PParam OUTPOST_BISHOP_VAL = S(41, 43);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_SAFE = S(71, 32);
inline const PParam PAWN_PUSH_THREAT_BISHOP_SAFE = S(82, 37);
inline const PParam PAWN_PUSH_THREAT_ROOK_SAFE = S(57, 38);
inline const PParam PAWN_PUSH_THREAT_QUEEN_SAFE = S(86, -31);

inline const PParam PAWN_PUSH_THREAT_KNIGHT_UNSAFE = S(28, -8);
inline const PParam PAWN_PUSH_THREAT_BISHOP_UNSAFE = S(39, -28);
inline const PParam PAWN_PUSH_THREAT_ROOK_UNSAFE = S(8, 10);
inline const PParam PAWN_PUSH_THREAT_QUEEN_UNSAFE = S(42, -64);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 19), S(60, 30), S(71, 69), S(191, 140), S(553, 240), S(920, 1154),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(64, 43), S(62, 32), S(68, 57), S(148, 120), S(688, -89),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-71, -105), S(-61, -86), S(-34, -10), S(22, 68), S(47, 208), S(307, 311),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(49, -43), S(35, -5), S(18, 28), S(19, 77), S(84, 154), S(143, 296),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(16, -45), S(6, 2), S(-2, -27), S(3, -46), S(-2, -94), S(-193, -145),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(10, 102), S(-23, 90), S(-15, 39), S(-1, 10), S(8, 14), S(37, 12), S(16, 0),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-180, -48), S(35, -2), S(-6, 46), S(15, 76), S(20, 101), S(40, 101), S(-8, 121),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-213, -223), S(-106, -60), S(-49, -8), S(-7, 24), S(38, 39), S(64, 77), S(100, 72), S(134, 75), S(180, 17),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-230, -279), S(-155, -94), S(-80, -31), S(-45, 17), S(-14, 47), S(2, 68), S(20, 81), S(38, 87), S(57, 90), S(70, 85), S(95, 72), S(160, 25), S(190, 4), S(252, -29),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-311, -233), S(-155, -83), S(-102, -19), S(-70, -8), S(-43, 15), S(-28, 37), S(-10, 49), S(8, 55), S(25, 68), S(43, 76), S(61, 78), S(74, 81), S(95, 83), S(106, 70), S(251, -57),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-960, -873), S(-256, -653), S(-158, -524), S(-105, -310), S(-96, -101), S(-58, 3), S(-54, 111), S(-29, 125), S(-24, 179), S(-12, 204), S(-3, 228), S(2, 243), S(20, 235), S(31, 246), S(37, 241), S(51, 237), S(57, 228), S(57, 235), S(82, 191), S(104, 154), S(118, 136), S(162, 69), S(175, 61), S(334, -111), S(366, -153), S(612, -311), S(489, -259), S(909, -484),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(454, 2), S(107, -118), S(3, -27), S(-11, 10), S(-38, 13), S(-73, 19), S(-52, 20), S(-61, 14), S(-61, -33),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(90, -32), S(160, -77),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(37, -6), S(137, -43),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(69, -49), S(53, -64), S(105, -64), S(161, -129),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-38, 28), S(-55, 37), S(0, -8), S(163, -98), S(358, -237),
};

inline const PParam PAWN_THREAT_KNIGHT = S(242, 57);
inline const PParam PAWN_THREAT_BISHOP = S(209, 98);
inline const PParam PAWN_THREAT_ROOK   = S(202, 55);
inline const PParam PAWN_THREAT_QUEEN  = S(181, -62);

inline const PParam KNIGHT_THREAT_BISHOP = S(105, 72);
inline const PParam KNIGHT_THREAT_ROOK   = S(244, 6);
inline const PParam KNIGHT_THREAT_QUEEN  = S(156, -67);

inline const PParam BISHOP_THREAT_KNIGHT = S(110, 34);
inline const PParam BISHOP_THREAT_ROOK   = S(244, 55);
inline const PParam BISHOP_THREAT_QUEEN  = S(194, 46);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(1, -6), S(-1, 0), S(0, -11), S(-5, -21), S(-11, -26), S(-17, -33), S(-18, -39), S(-24, -37), S(-33, -43),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(112, 165),    S(101, 213),    S(169, 178),    S(231, 60),     S(178, 54),     S(163, 119),    S(59, 142),     S(118, 119),    //
    S(80, 49),      S(195, 76),     S(171, 19),     S(173, -38),    S(127, -55),    S(70, -5),      S(31, 41),      S(-20, 45),     //
    S(0, 16),       S(21, 20),      S(37, -24),     S(24, -38),     S(6, -42),      S(-34, -36),    S(-75, 11),     S(-103, 33),    //
    S(-26, -31),    S(-6, -3),      S(-11, -37),    S(-27, -34),    S(-53, -43),    S(-75, -34),    S(-127, 15),    S(-146, 3),     //
    S(-28, -60),    S(36, -58),     S(-13, -14),    S(-45, -12),    S(-66, -21),    S(-105, -23),   S(-123, -9),    S(-148, -15),   //
    S(-18, -53),    S(113, -49),    S(67, -13),     S(9, 4),        S(-28, -7),     S(-63, -12),    S(-89, 11),     S(-127, -1),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-401, -162),  S(-352, 58),    S(-457, 232),   S(-122, 64),    S(-253, 90),    S(-337, 97),    S(-574, 84),    S(-548, -18),   //
    S(0, -3),       S(67, 8),       S(169, -58),    S(115, 6),      S(116, 13),     S(55, -11),     S(-5, 8),       S(-25, -36),    //
    S(58, -30),     S(102, 15),     S(194, 7),      S(144, 29),     S(143, 18),     S(64, 27),      S(52, 2),       S(-43, 9),      //
    S(116, 2),      S(116, 25),     S(141, 31),     S(117, 59),     S(125, 45),     S(94, 38),      S(72, -3),      S(40, 2),       //
    S(102, -16),    S(132, -19),    S(124, 5),      S(97, 23),      S(89, 30),      S(84, 25),      S(59, -1),      S(40, -56),     //
    S(15, -25),     S(48, -36),     S(41, -16),     S(52, 27),      S(58, 24),      S(1, 1),        S(8, -36),      S(-33, -43),    //
    S(16, -11),     S(39, -38),     S(23, -31),     S(22, -12),     S(9, -19),      S(-17, -39),    S(-7, -54),     S(-65, -122),   //
    S(-32, -62),    S(6, -18),      S(25, -41),     S(33, -34),     S(25, -27),     S(-21, -56),    S(-34, -33),    S(-84, -86),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-166, 83),    S(-186, 64),    S(-431, 92),    S(-310, 105),   S(-259, 108),   S(-426, 134),   S(-170, 111),   S(-122, 85),    //
    S(7, -29),      S(-8, 50),      S(8, 31),       S(-10, 35),     S(-33, 50),     S(0, 42),       S(-19, 32),     S(-55, 32),     //
    S(36, 27),      S(84, 18),      S(163, 28),     S(92, 26),      S(67, 30),      S(42, 42),      S(100, 13),     S(-3, 29),      //
    S(58, -17),     S(88, 12),      S(111, 18),     S(110, 44),     S(114, 45),     S(53, 42),      S(49, 15),      S(-11, 23),     //
    S(53, -45),     S(64, -7),      S(71, 10),      S(73, 35),      S(65, 52),      S(21, 42),      S(7, 4),        S(0, -39),      //
    S(68, -36),     S(115, -16),    S(116, -3),     S(58, 39),      S(38, 44),      S(40, 40),      S(70, -2),      S(32, -33),     //
    S(53, -72),     S(104, -48),    S(75, -35),     S(46, -5),      S(37, -21),     S(38, -31),     S(20, -17),     S(39, -82),     //
    S(50, -52),     S(37, -7),      S(40, 0),       S(52, -34),     S(60, -44),     S(57, -3),      S(49, -31),     S(31, -34),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(104, 11),     S(170, 10),     S(100, 40),     S(99, 35),      S(107, 23),     S(55, 36),      S(62, 40),      S(70, 44),      //
    S(13, 69),      S(100, 44),     S(174, 21),     S(99, 65),      S(116, 52),     S(63, 62),      S(2, 80),       S(-4, 86),      //
    S(1, 46),       S(150, 5),      S(180, 0),      S(179, -4),     S(133, 5),      S(59, 46),      S(77, 33),      S(-41, 84),     //
    S(-28, 40),     S(55, 31),      S(83, 23),      S(104, -11),    S(71, 12),      S(11, 59),      S(-2, 58),      S(-79, 67),     //
    S(-95, -7),     S(-10, -3),     S(-27, 12),     S(-42, 13),     S(-49, 10),     S(-67, 50),     S(-95, 47),     S(-117, 37),    //
    S(-117, -28),   S(-41, -55),    S(-48, -26),    S(-68, -25),    S(-51, -44),    S(-101, 10),    S(-101, -6),    S(-125, -9),    //
    S(-178, -17),   S(-78, -77),    S(-55, -63),    S(-50, -61),    S(-58, -56),    S(-77, -39),    S(-97, -61),    S(-128, -45),   //
    S(-144, -16),   S(-113, -10),   S(-59, -47),    S(-34, -64),    S(-48, -48),    S(-61, -36),    S(-76, -44),    S(-94, -28),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(37, 44),      S(77, 8),       S(82, 15),      S(-35, 143),    S(35, 62),      S(-21, 89),     S(43, 5),       S(-21, 30),     //
    S(25, 81),      S(-47, 176),    S(-52, 232),    S(-139, 263),   S(-111, 210),   S(-121, 207),   S(-74, 114),    S(-37, 53),     //
    S(-17, 113),    S(73, 108),     S(12, 187),     S(-4, 198),     S(-45, 179),    S(-76, 178),    S(-6, 72),      S(-40, 45),     //
    S(57, 21),      S(66, 85),      S(28, 124),     S(13, 192),     S(-10, 176),    S(-18, 110),    S(22, 12),      S(2, -13),      //
    S(12, 55),      S(50, 14),      S(24, 83),      S(-13, 140),    S(-25, 126),    S(-22, 86),     S(-9, 6),       S(-10, -39),    //
    S(25, -105),    S(50, -61),     S(50, 8),       S(-3, 35),      S(8, -8),       S(11, -3),      S(22, -73),     S(0, -67),      //
    S(10, -210),    S(44, -309),    S(31, -173),    S(47, -101),    S(21, -81),     S(38, -152),    S(12, -90),     S(-4, -87),     //
    S(-45, -129),   S(16, -381),    S(12, -368),    S(39, -273),    S(42, -191),    S(45, -236),    S(32, -196),    S(-21, -120),   //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-138, -377),  S(94, -20),     S(-64, 31),     S(-174, 56),    S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(189, -112),   S(3, 144),      S(20, 129),     S(126, 59),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-38, 57),     S(66, 135),     S(106, 104),    S(90, 59),      S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-257, 82),    S(31, 96),      S(24, 94),      S(-30, 79),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-232, 39),    S(-48, 69),     S(-31, 75),     S(-114, 110),   S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-135, 8),     S(55, 11),      S(-34, 63),     S(-78, 88),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(79, -82),     S(133, -42),    S(45, 4),       S(-36, 48),     S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
    S(-43, -111),   S(86, -101),    S(-13, -65),    S(-31, -63),    S(20, -9),      S(20, -9),      S(20, -9),      S(20, -9),      //
};
// Epoch duration: 68.0944s
// clang-format on
}
