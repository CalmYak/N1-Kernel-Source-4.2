#ifndef SYNAPTICS_TEST_RAWDATA_H
#define SYNAPTICS_TEST_RAWDATA_H

#define TX_NUM_TRULY  (13)
#define RX_NUM_TRULY  (25)
#define DiagonalUpperLimit_TRULY  (1100)
#define DiagonalLowerLimit_TRULY  (900)

const int16_t raw_cap_data_truly_3035[TX_NUM_TRULY][RX_NUM_TRULY*2] =
{
	{1444,2407,1374,2291,1428,2381,1368,2281,1364,2273,1379,2298,1332,2221,1342,2236,1357,2261,1326,2210,1321,2201,1363,2271,1111,1852,1107,1846,1094,1823,1078,1797,1075,1791,1076,1792,1059,1765,1060,1766,1071,1785,1070,1783,1073,1788,1037,1729,1024,1707,},
	{1370,2283,1338,2230,1339,2232,1324,2207,1304,2173,1322,2204,1306,2177,1300,2167,1306,2176,1273,2122,1277,2128,1263,2106,1194,1990,1184,1973,1203,2005,1159,1932,1165,1941,1158,1930,1150,1916,1148,1914,1157,1929,1151,1919,1156,1927,1127,1878,1117,1862,},
	{1366,2277,1329,2214,1346,2243,1318,2196,1303,2172,1309,2181,1294,2156,1282,2136,1292,2153,1262,2103,1263,2105,1249,2082,1201,2002,1195,1992,1192,1986,1171,1952,1175,1959,1162,1937,1148,1914,1155,1925,1169,1948,1168,1946,1166,1943,1134,1890,1128,1879,},
	{1366,2276,1331,2218,1339,2232,1333,2222,1299,2165,1296,2161,1285,2141,1268,2113,1283,2138,1261,2102,1257,2094,1247,2078,1208,2013,1202,2004,1221,2036,1178,1963,1176,1960,1163,1938,1167,1945,1192,1986,1152,1921,1141,1901,1147,1911,1133,1889,1124,1873,},
	{1367,2278,1331,2218,1339,2231,1325,2209,1291,2152,1292,2154,1273,2122,1268,2114,1281,2135,1251,2085,1253,2089,1244,2074,1210,2017,1208,2013,1236,2059,1191,1985,1184,1973,1175,1959,1172,1954,1188,1980,1160,1933,1146,1910,1156,1927,1135,1892,1128,1881,},
	{1355,2258,1334,2223,1338,2230,1309,2182,1280,2134,1285,2142,1267,2112,1264,2108,1266,2109,1240,2066,1248,2081,1232,2052,1211,2017,1212,2020,1244,2073,1197,1995,1193,1988,1184,1973,1190,1984,1215,2025,1163,1938,1151,1918,1156,1926,1136,1892,1135,1891,},
	{1330,2217,1317,2194,1311,2185,1303,2171,1287,2145,1287,2146,1263,2106,1259,2099,1263,2105,1238,2064,1243,2071,1225,2040,1209,2015,1232,2053,1214,2023,1214,2023,1219,2030,1228,2046,1170,1950,1179,1966,1172,1954,1159,1932,1159,1932,1138,1896,1148,1913,},
	{1318,2197,1316,2194,1306,2177,1300,2166,1286,2143,1294,2157,1261,2102,1256,2094,1266,2110,1227,2045,1228,2046,1219,2032,1211,2019,1250,2083,1217,2028,1214,2023,1206,2010,1197,1995,1176,1960,1186,1976,1180,1966,1165,1941,1169,1948,1156,1927,1157,1928,},
	{1307,2178,1297,2162,1299,2164,1292,2153,1279,2131,1281,2135,1260,2100,1252,2086,1251,2084,1218,2030,1221,2033,1212,2019,1213,2022,1220,2033,1218,2030,1198,1996,1207,2010,1198,1997,1183,1972,1190,1984,1187,1978,1170,1950,1179,1966,1177,1962,1165,1942,},
	{1302,2170,1299,2165,1304,2173,1290,2150,1282,2137,1277,2128,1258,2097,1255,2092,1257,2095,1223,2038,1225,2042,1213,2022,1228,2046,1268,2113,1229,2049,1227,2045,1223,2038,1209,2015,1196,1994,1199,1999,1197,1995,1182,1969,1193,1989,1192,1987,1173,1954,},
	{1296,2160,1287,2145,1298,2163,1291,2152,1275,2125,1273,2121,1259,2099,1253,2088,1249,2081,1224,2040,1225,2042,1213,2020,1255,2091,1255,2091,1243,2071,1229,2048,1236,2059,1221,2036,1211,2019,1213,2022,1205,2007,1199,1998,1210,2016,1200,2000,1177,1961,},
	{1293,2156,1282,2136,1296,2161,1299,2165,1267,2112,1270,2116,1250,2083,1246,2077,1240,2067,1218,2029,1217,2028,1206,2009,1298,2163,1334,2224,1261,2101,1247,2079,1259,2099,1244,2074,1239,2066,1238,2063,1224,2040,1220,2033,1231,2052,1222,2036,1214,2023,},
	{1254,2090,1237,2061,1241,2068,1224,2040,1207,2012,1203,2006,1185,1975,1179,1964,1170,1950,1146,1910,1143,1905,1129,1882,1611,2684,1434,2391,1378,2297,1336,2227,1334,2223,1315,2192,1304,2174,1297,2162,1286,2143,1277,2128,1288,2146,1286,2144,1326,2210,},
};


#define TX_NUM_WINTEK  (13)
#define RX_NUM_WINTEK  (24)
#define DiagonalUpperLimit_WINTEK  (1100)
#define DiagonalLowerLimit_WINTEK  (900)

const int16_t raw_cap_data_wintek_9093[TX_NUM_WINTEK][RX_NUM_WINTEK*2] =
{
	{1512,2519,1388,2314,1389,2316,1332,2220,1313,2188,1295,2159,1275,2125,1257,2094,1250,2083,1232,2053,1238,2064,1273,2122, 986,1644, 986,1643, 977,1628, 964,1607, 948,1580, 937,1562, 925,1542, 945,1575, 932,1553, 919,1532, 899,1498, 870,1450,},
	{1398,2330,1335,2224,1307,2178,1286,2144,1263,2105,1244,2073,1218,2030,1196,1993,1188,1979,1167,1945,1160,1933,1142,1903,1032,1720,1036,1726,1027,1712,1038,1731, 997,1661, 998,1663, 979,1632, 994,1656, 982,1636, 973,1622, 955,1592, 948,1580,},
	{1369,2281,1321,2202,1290,2150,1277,2128,1251,2086,1238,2064,1212,2020,1192,1986,1177,1961,1151,1918,1145,1908,1125,1874,1041,1736,1041,1735,1033,1722,1023,1704,1006,1677, 996,1660, 985,1642,1005,1675, 998,1663, 982,1637, 966,1611, 951,1586,},
	{1339,2231,1308,2180,1280,2133,1262,2104,1241,2069,1224,2040,1205,2008,1182,1969,1169,1949,1147,1911,1136,1893,1117,1861,1050,1749,1049,1748,1041,1735,1046,1744,1021,1701,1025,1708,1018,1696,1003,1671, 985,1642, 983,1638, 975,1625, 939,1566,},
	{1327,2212,1298,2163,1272,2121,1257,2094,1234,2056,1215,2025,1196,1994,1176,1959,1160,1933,1138,1896,1131,1886,1107,1844,1074,1790,1079,1798,1071,1785,1035,1725,1057,1762,1017,1694,1005,1675,1005,1674, 993,1655, 988,1646, 987,1644, 965,1608,},
	{1324,2207,1299,2165,1268,2113,1252,2087,1229,2048,1216,2026,1189,1982,1177,1961,1163,1939,1133,1889,1126,1877,1100,1833,1094,1823,1066,1777,1082,1803,1044,1740,1032,1720,1025,1709,1015,1692,1013,1688,1002,1670, 997,1662,1001,1668, 982,1637,},
	{1319,2198,1293,2156,1262,2104,1253,2088,1231,2052,1217,2028,1192,1986,1175,1958,1159,1931,1133,1889,1127,1878,1101,1834,1078,1797,1078,1797,1071,1784,1077,1795,1045,1742,1058,1764,1075,1792,1028,1714,1018,1696,1012,1686,1017,1694, 986,1643,},
	{1313,2188,1293,2156,1263,2105,1254,2090,1230,2050,1218,2030,1190,1983,1169,1949,1156,1926,1136,1893,1127,1878,1096,1827,1095,1826,1092,1821,1085,1808,1072,1786,1058,1764,1053,1755,1042,1736,1040,1733,1028,1713,1023,1705,1031,1718, 988,1646,},
	{1315,2192,1292,2153,1273,2121,1259,2098,1236,2060,1214,2023,1192,1987,1175,1958,1159,1931,1133,1888,1121,1869,1090,1817,1146,1910,1108,1847,1113,1855,1089,1815,1078,1797,1071,1784,1059,1765,1059,1766,1047,1745,1041,1735,1049,1749,1022,1703,},
	{1312,2186,1298,2163,1267,2112,1257,2094,1232,2053,1217,2029,1194,1990,1177,1962,1159,1932,1135,1892,1131,1885,1098,1829,1143,1906,1129,1882,1121,1868,1105,1842,1094,1824,1088,1814,1076,1793,1075,1792,1066,1777,1058,1764,1068,1780,1041,1735,},
	{1308,2181,1292,2153,1266,2110,1247,2078,1223,2039,1209,2015,1189,1982,1170,1949,1155,1925,1128,1880,1120,1867,1090,1817,1161,1935,1156,1927,1141,1901,1121,1868,1145,1908,1102,1836,1091,1818,1091,1819,1080,1800,1072,1787,1081,1801,1059,1765,},
	{1311,2185,1284,2140,1263,2105,1250,2083,1224,2040,1205,2009,1182,1971,1165,1942,1151,1918,1121,1869,1118,1863,1084,1807,1193,1988,1174,1956,1158,1931,1140,1900,1127,1879,1117,1862,1110,1849,1109,1849,1098,1830,1094,1823,1104,1840,1103,1838,},
	{1269,2115,1237,2062,1208,2014,1194,1989,1171,1951,1147,1911,1124,1873,1105,1841,1083,1804,1058,1763,1045,1742,1017,1695,1632,2720,1363,2272,1284,2139,1243,2072,1215,2025,1197,1995,1184,1974,1180,1967,1166,1944,1163,1938,1179,1965,1217,2028,},
};


#define TX_NUM_TPK  (13)
#define RX_NUM_TPK  (24)
#define DiagonalUpperLimit_TPK  (1100)
#define DiagonalLowerLimit_TPK  (900)

const int16_t raw_cap_data_tpk[TX_NUM_TPK][RX_NUM_TPK*2] =
{
	{1809, 3015, 1812, 3020, 1754, 2923, 1743, 2904, 1731, 2885, 1722, 2869, 1711, 2852, 1701, 2835, 1692, 2821, 1688, 2814, 1696, 2827, 1794, 2989, 1455, 2424, 1449, 2414, 1440, 2399, 1429, 2383, 1422, 2370, 1410, 2351, 1428, 2381, 1417, 2362, 1406, 2343, 1376, 2294, 1392, 2319, 1105, 1842},
	{1759, 2932, 1735, 2891, 1710, 2850, 1695, 2825, 1681, 2803, 1671, 2786, 1658, 2763, 1644, 2740, 1633, 2722, 1624, 2706, 1614, 2690, 1621, 2702, 1532, 2553, 1526, 2543, 1518, 2530, 1510, 2516, 1512, 2521, 1519, 2532, 1509, 2516, 1498, 2497, 1484, 2474, 1458, 2431, 1476, 2459, 1213, 2021},
	{1725, 2875, 1712, 2854, 1689, 2816, 1677, 2796, 1663, 2772, 1654, 2756, 1640, 2733, 1625, 2709, 1616, 2694, 1606, 2677, 1596, 2660, 1595, 2658, 1533, 2554, 1528, 2546, 1519, 2531, 1511, 2518, 1504, 2507, 1496, 2494, 1494, 2490, 1526, 2543, 1493, 2488, 1466, 2444, 1482, 2470, 1187, 1978},
	{1703, 2838, 1690, 2817, 1674, 2790, 1662, 2770, 1649, 2748, 1641, 2734, 1628, 2714, 1615, 2691, 1604, 2673, 1594, 2657, 1583, 2638, 1580, 2633, 1533, 2554, 1528, 2547, 1521, 2535, 1517, 2529, 1526, 2543, 1514, 2523, 1519, 2532, 1506, 2510, 1485, 2474, 1468, 2447, 1473, 2455, 1170, 1950},
	{1694, 2823, 1679, 2799, 1665, 2775, 1652, 2753, 1640, 2734, 1632, 2720, 1621, 2701, 1608, 2679, 1597, 2662, 1584, 2641, 1573, 2622, 1569, 2616, 1549, 2582, 1550, 2583, 1541, 2569, 1549, 2581, 1507, 2512, 1497, 2495, 1494, 2491, 1490, 2483, 1478, 2464, 1469, 2448, 1468, 2446, 1199, 1998},
	{1693, 2822, 1676, 2793, 1661, 2769, 1649, 2749, 1636, 2726, 1626, 2710, 1614, 2690, 1602, 2671, 1592, 2654, 1578, 2630, 1566, 2610, 1562, 2603, 1566, 2611, 1558, 2597, 1530, 2549, 1518, 2531, 1513, 2521, 1503, 2504, 1500, 2499, 1494, 2490, 1484, 2474, 1475, 2458, 1475, 2458, 1205, 2008},
	{1689, 2814, 1669, 2782, 1656, 2760, 1643, 2738, 1629, 2715, 1619, 2698, 1608, 2680, 1595, 2659, 1585, 2642, 1572, 2620, 1559, 2599, 1555, 2591, 1544, 2574, 1540, 2567, 1534, 2556, 1530, 2550, 1549, 2581, 1536, 2560, 1558, 2597, 1501, 2501, 1491, 2485, 1481, 2468, 1481, 2468, 1180, 1967},
	{1687, 2812, 1669, 2781, 1652, 2753, 1640, 2734, 1626, 2710, 1619, 2698, 1607, 2678, 1593, 2654, 1583, 2637, 1570, 2617, 1559, 2598, 1554, 2591, 1556, 2593, 1553, 2588, 1552, 2586, 1572, 2620, 1532, 2554, 1525, 2541, 1523, 2538, 1514, 2523, 1503, 2505, 1494, 2490, 1493, 2488, 1185, 1976},
	{1676, 2793, 1666, 2777, 1651, 2751, 1639, 2732, 1626, 2710, 1616, 2694, 1604, 2673, 1590, 2649, 1579, 2631, 1565, 2608, 1553, 2588, 1548, 2580, 1564, 2606, 1558, 2597, 1552, 2586, 1545, 2574, 1540, 2567, 1531, 2552, 1529, 2548, 1523, 2538, 1514, 2523, 1503, 2505, 1504, 2507, 1218, 2031},
	{1673, 2788, 1663, 2772, 1646, 2744, 1637, 2729, 1625, 2709, 1616, 2694, 1605, 2675, 1591, 2651, 1580, 2633, 1567, 2611, 1555, 2592, 1550, 2583, 1629, 2716, 1596, 2660, 1577, 2628, 1565, 2608, 1558, 2597, 1549, 2582, 1546, 2576, 1538, 2564, 1529, 2548, 1519, 2532, 1518, 2529, 1226, 2043},
	{1674, 2790, 1664, 2773, 1647, 2745, 1636, 2726, 1624, 2707, 1614, 2691, 1602, 2669, 1587, 2644, 1577, 2629, 1564, 2607, 1552, 2586, 1547, 2578, 1626, 2711, 1607, 2678, 1593, 2656, 1582, 2637, 1576, 2627, 1566, 2610, 1563, 2604, 1554, 2591, 1543, 2571, 1533, 2555, 1526, 2544, 1230, 2051},
	{1678, 2796, 1670, 2783, 1654, 2757, 1642, 2737, 1628, 2713, 1615, 2692, 1600, 2666, 1584, 2640, 1573, 2621, 1560, 2600, 1548, 2580, 1542, 2571, 1731, 2886, 1638, 2730, 1624, 2707, 1605, 2675, 1597, 2662, 1586, 2643, 1582, 2636, 1574, 2623, 1564, 2607, 1555, 2592, 1546, 2577, 1281, 2135},
	{1622, 2703, 1609, 2682, 1591, 2651, 1577, 2629, 1560, 2600, 1545, 2574, 1525, 2542, 1508, 2513, 1496, 2493, 1481, 2468, 1469, 2448, 1461, 2436, 2024, 3373, 1846, 3077, 1769, 2949, 1725, 2875, 1695, 2825, 1670, 2784, 1658, 2764, 1647, 2744, 1635, 2725, 1628, 2713, 1632, 2720, 1408, 2347},
};


#define TX_NUM_TPK_N1  (15)
#define RX_NUM_TPK_N1  (26)

const int16_t raw_cap_data_tpk_n1[TX_NUM_TPK_N1][RX_NUM_TPK_N1*2] =
{
	{1463,2439,1491,2485,1488,2480,1492,2487,1493,2488,1491,2485,1492,2487,1493,2488,1499,2499,1501,2502,1504,2506,1494,2490,1499,2499,1713,2855,1701,2835,1703,2839,1707,2844,1713,2855,1717,2861,1721,2868,1725,2875,1737,2895,1745,2909,1754,2923,1770,2950,1710,2849},
	{1507,2512,1537,2561,1534,2557,1539,2566,1543,2571,1541,2569,1542,2569,1539,2565,1545,2576,1544,2574,1546,2577,1533,2555,1538,2563,1668,2779,1670,2784,1672,2787,1680,2800,1688,2814,1687,2812,1691,2819,1697,2828,1708,2846,1714,2857,1730,2884,1739,2899,1739,2898},
	{1509,2515,1539,2566,1536,2559,1542,2570,1542,2571,1544,2573,1544,2573,1544,2574,1550,2584,1546,2577,1549,2581,1535,2559,1538,2564,1658,2763,1664,2773,1665,2775,1668,2779,1674,2790,1679,2799,1685,2808,1693,2822,1704,2839,1712,2854,1726,2877,1731,2884,1678,2797},
	{1516,2527,1545,2575,1541,2569,1548,2579,1549,2582,1551,2585,1552,2587,1552,2587,1560,2599,1555,2592,1557,2595,1543,2571,1547,2578,1657,2762,1664,2773,1665,2775,1669,2781,1677,2795,1683,2804,1737,2896,1742,2903,1743,2905,1727,2878,1728,2879,1731,2885,1674,2791},
	{1521,2534,1549,2581,1545,2575,1551,2586,1553,2589,1555,2592,1556,2594,1558,2596,1564,2606,1560,2600,1562,2604,1550,2583,1552,2587,1655,2758,1663,2772,1665,2775,1669,2782,1677,2796,1685,2808,1690,2816,1698,2830,1704,2840,1715,2859,1727,2879,1731,2885,1669,2781},
	{1529,2548,1557,2595,1552,2586,1558,2597,1560,2600,1560,2600,1562,2603,1564,2606,1571,2618,1567,2612,1571,2618,1558,2597,1562,2603,1652,2753,1662,2769,1665,2774,1670,2783,1680,2800,1689,2814,1693,2822,1702,2836,1708,2847,1720,2867,1734,2890,1745,2908,1710,2849},
	{1537,2561,1564,2607,1558,2597,1564,2606,1567,2611,1565,2609,1567,2612,1570,2617,1580,2633,1579,2632,1583,2638,1568,2613,1571,2618,1650,2750,1656,2761,1666,2776,1671,2784,1677,2796,1689,2814,1696,2826,1705,2842,1706,2844,1751,2919,1735,2892,1734,2890,1668,2780},
	{1545,2574,1569,2616,1565,2609,1571,2618,1570,2617,1570,2616,1572,2621,1577,2629,1587,2644,1584,2641,1590,2651,1574,2624,1580,2633,1652,2754,1654,2756,1667,2779,1669,2782,1674,2790,1687,2812,1692,2820,1698,2829,1704,2839,1714,2856,1724,2873,1749,2915,1688,2813},
	{1552,2586,1575,2626,1572,2620,1577,2629,1578,2630,1576,2627,1579,2632,1584,2640,1591,2652,1589,2649,1596,2660,1581,2634,1587,2644,1648,2746,1650,2751,1661,2768,1666,2777,1671,2784,1681,2802,1686,2810,1690,2817,1698,2830,1740,2900,1736,2893,1740,2900,1673,2789},
	{1562,2603,1584,2640,1579,2632,1585,2641,1585,2642,1583,2639,1586,2643,1591,2651,1597,2662,1596,2660,1603,2671,1586,2643,1590,2649,1637,2728,1648,2746,1649,2748,1657,2762,1667,2778,1675,2792,1700,2833,1731,2885,1717,2862,1703,2838,1708,2847,1714,2857,1653,2755},
	{1575,2624,1595,2658,1589,2649,1593,2654,1593,2655,1591,2652,1591,2652,1597,2661,1602,2670,1602,2670,1607,2678,1588,2647,1592,2653,1629,2715,1641,2735,1645,2741,1657,2762,1669,2781,1670,2783,1693,2822,1702,2837,1702,2837,1696,2827,1700,2833,1708,2847,1647,2745},
	{1590,2649,1609,2681,1603,2672,1604,2674,1605,2675,1603,2671,1603,2672,1606,2677,1613,2688,1610,2683,1615,2692,1597,2661,1600,2666,1626,2710,1636,2727,1640,2734,1644,2741,1656,2759,1661,2768,1690,2817,1708,2846,1698,2830,1685,2809,1691,2819,1705,2841,1647,2744},
	{1607,2678,1625,2709,1621,2701,1621,2702,1620,2701,1622,2703,1622,2703,1624,2706,1629,2714,1627,2712,1634,2723,1625,2708,1616,2693,1623,2705,1633,2722,1637,2728,1655,2758,1668,2781,1678,2797,1697,2829,1674,2790,1690,2816,1685,2808,1689,2815,1703,2839,1644,2740},
	{1628,2713,1643,2739,1639,2731,1640,2734,1639,2732,1639,2732,1644,2740,1645,2742,1650,2749,1653,2755,1656,2760,1648,2747,1644,2740,1621,2701,1632,2720,1635,2726,1657,2761,1674,2790,1685,2809,1667,2779,1669,2781,1675,2791,1680,2800,1685,2808,1699,2832,1642,2737},
	{1715,2858,1713,2855,1707,2845,1707,2844,1704,2840,1703,2839,1706,2844,1709,2848,1710,2851,1718,2863,1754,2923,1764,2940,1725,2876,1589,2649,1603,2672,1608,2681,1629,2716,1649,2748,1655,2759,1638,2729,1645,2742,1650,2751,1658,2763,1663,2772,1671,2785,1624,2707},
};

#endif

