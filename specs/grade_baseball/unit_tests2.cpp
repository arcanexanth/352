#include <iostream>
#include <string>
#include <vector>
#include <gtest/gtest.h>

#include "Baseball.h"

using std::vector;
using std::string;

TEST(Baseball, EvaluateTerm) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ(73387, calc.EvaluateTerm("21cs_33"));
  ASSERT_EQ(999, calc.EvaluateTerm(":nineninenine"));
  ASSERT_EQ(4294944124, calc.EvaluateTerm("~o3e_31"));
  ASSERT_EQ(4294921005, calc.EvaluateTerm("~46290"));
  ASSERT_EQ(7764, calc.EvaluateTerm("19ec_17"));
  ASSERT_EQ(94676, calc.EvaluateTerm("94676"));
  ASSERT_EQ(4294965099, calc.EvaluateTerm("~2196"));
  ASSERT_EQ(12582, calc.EvaluateTerm("g1a_28"));
  ASSERT_EQ(78908, calc.EvaluateTerm("2rk8_30"));
  ASSERT_EQ(47820, calc.EvaluateTerm("47820"));
  ASSERT_EQ(4294960203, calc.EvaluateTerm("~6gu_33"));
  ASSERT_EQ(68235, calc.EvaluateTerm("205213_8"));
  ASSERT_EQ(73950, calc.EvaluateTerm("425412_7"));
  ASSERT_EQ(4294901017, calc.EvaluateTerm("~10000001011100110_2"));
  ASSERT_EQ(68140, calc.EvaluateTerm("1tis_33"));
  ASSERT_EQ(4294942464, calc.EvaluateTerm("~1j2f_24"));
  ASSERT_EQ(74645, calc.EvaluateTerm("74645"));
  ASSERT_EQ(4294967285, calc.EvaluateTerm("~:onezero"));
  ASSERT_EQ(4294924749, calc.EvaluateTerm("~42546"));
  ASSERT_EQ(67699, calc.EvaluateTerm("10000100001110011_2"));
  ASSERT_EQ(29755, calc.EvaluateTerm("111010000111011_2"));
  ASSERT_EQ(22, calc.EvaluateTerm(":twotwo"));
  ASSERT_EQ(57228, calc.EvaluateTerm("1nsc_32"));
  ASSERT_EQ(94902, calc.EvaluateTerm("2682a_14"));
  ASSERT_EQ(43741, calc.EvaluateTerm("33md_24"));
  ASSERT_EQ(82726, calc.EvaluateTerm("82726"));
  ASSERT_EQ(19618, calc.EvaluateTerm("b42a_12"));
  ASSERT_EQ(4294880132, calc.EvaluateTerm("~87163"));
  ASSERT_EQ(1598, calc.EvaluateTerm(":onefivenineeight"));
  ASSERT_EQ(46503, calc.EvaluateTerm("2100210100_3"));
  ASSERT_EQ(88033, calc.EvaluateTerm("88033_10"));
  ASSERT_EQ(84023, calc.EvaluateTerm("58145_11"));
  ASSERT_EQ(4294906829, calc.EvaluateTerm("~60466"));
  ASSERT_EQ(80589, calc.EvaluateTerm("1421033_6"));
  ASSERT_EQ(10, calc.EvaluateTerm(":onezero"));
  ASSERT_EQ(4294967285, calc.EvaluateTerm("~:onezero"));
  ASSERT_EQ(4294901369, calc.EvaluateTerm("~65926"));
  ASSERT_EQ(4294967273, calc.EvaluateTerm("~:twotwo"));
  ASSERT_EQ(1598, calc.EvaluateTerm(":onefivenineeight"));
  ASSERT_EQ(100, calc.EvaluateTerm(":onezerozero"));
  ASSERT_EQ(32105, calc.EvaluateTerm("32105"));
  ASSERT_EQ(23006, calc.EvaluateTerm("pgq_30"));
  ASSERT_EQ(4294920821, calc.EvaluateTerm("~70667_9"));
  ASSERT_EQ(1598, calc.EvaluateTerm(":onefivenineeight"));
  ASSERT_EQ(1003, calc.EvaluateTerm(":onezerozerothree"));
  ASSERT_EQ(2893, calc.EvaluateTerm("2893"));
  ASSERT_EQ(22851, calc.EvaluateTerm("22851_10"));
  ASSERT_EQ(41354, calc.EvaluateTerm("871a_17"));
  ASSERT_EQ(91739, calc.EvaluateTerm("d727_19"));
  ASSERT_EQ(22, calc.EvaluateTerm(":twotwo"));
  ASSERT_EQ(100, calc.EvaluateTerm(":onezerozero"));
  ASSERT_EQ(30296, calc.EvaluateTerm("b080_14"));
  ASSERT_EQ(96432, calc.EvaluateTerm("a8e0_21"));
  ASSERT_EQ(4294942010, calc.EvaluateTerm("~q9k_31"));
  ASSERT_EQ(70518, calc.EvaluateTerm("1b9b0_14"));
  ASSERT_EQ(61656, calc.EvaluateTerm("61656"));
  ASSERT_EQ(4294888701, calc.EvaluateTerm("~208dc_14"));
  ASSERT_EQ(10, calc.EvaluateTerm(":onezero"));
  ASSERT_EQ(4294874837, calc.EvaluateTerm("~150741_9"));
  ASSERT_EQ(4294893266, calc.EvaluateTerm("~3kem_27"));
  ASSERT_EQ(96710, calc.EvaluateTerm("1d9c5_15"));
  ASSERT_EQ(4294966733, calc.EvaluateTerm("~:fivesixtwo"));
  ASSERT_EQ(4553, calc.EvaluateTerm("6j3_26"));
  ASSERT_EQ(37, calc.EvaluateTerm(":threeseven"));
  ASSERT_EQ(58695, calc.EvaluateTerm("58695"));
  ASSERT_EQ(4294966292, calc.EvaluateTerm("~:onezerozerothree"));
  ASSERT_EQ(562, calc.EvaluateTerm(":fivesixtwo"));
  ASSERT_EQ(22, calc.EvaluateTerm(":twotwo"));
  ASSERT_EQ(4294963299, calc.EvaluateTerm("~5ni_26"));
  ASSERT_EQ(69685, calc.EvaluateTerm("6blb_22"));
  ASSERT_EQ(2719, calc.EvaluateTerm("4h7_24"));
  ASSERT_EQ(10, calc.EvaluateTerm(":onezero"));
  ASSERT_EQ(887, calc.EvaluateTerm(":eighteightseven"));
  ASSERT_EQ(46577, calc.EvaluateTerm("1qb3_29"));
  ASSERT_EQ(4294925385, calc.EvaluateTerm("~8905_17"));
  ASSERT_EQ(24232, calc.EvaluateTerm("24232"));
  ASSERT_EQ(4294887216, calc.EvaluateTerm("~5j0f_24"));
  ASSERT_EQ(69648, calc.EvaluateTerm("11010_16"));
  ASSERT_EQ(95764, calc.EvaluateTerm("95764"));
  ASSERT_EQ(20867, calc.EvaluateTerm("1c5b_24"));
  ASSERT_EQ(25869, calc.EvaluateTerm("25869"));
  ASSERT_EQ(98203, calc.EvaluateTerm("395q_31"));
  ASSERT_EQ(4294962699, calc.EvaluateTerm("~4596"));
  ASSERT_EQ(97866, calc.EvaluateTerm("97866"));
  ASSERT_EQ(91953, calc.EvaluateTerm("fde9_18"));
  ASSERT_EQ(42754, calc.EvaluateTerm("22130002_4"));
  ASSERT_EQ(4294920807, calc.EvaluateTerm("~46488"));
  ASSERT_EQ(36030, calc.EvaluateTerm("54373_9"));
  ASSERT_EQ(51140, calc.EvaluateTerm("1032432_6"));
  ASSERT_EQ(92715, calc.EvaluateTerm("92715"));
  ASSERT_EQ(1598, calc.EvaluateTerm(":onefivenineeight"));
  ASSERT_EQ(77313, calc.EvaluateTerm("17d93_15"));
  ASSERT_EQ(4294906349, calc.EvaluateTerm("~1ioi_34"));
  ASSERT_EQ(123, calc.EvaluateTerm(":onetwothree"));
  ASSERT_EQ(4294902206, calc.EvaluateTerm("~65089"));
  ASSERT_EQ(328, calc.EvaluateTerm("328"));
  ASSERT_EQ(45846, calc.EvaluateTerm("d8b6_15"));
  ASSERT_EQ(27173, calc.EvaluateTerm("nh7_34"));
  ASSERT_EQ(4294967273, calc.EvaluateTerm("~:twotwo"));
  ASSERT_EQ(999, calc.EvaluateTerm(":nineninenine"));
}

TEST(Baseball, ExtractTargetID) {
  // One operand
  {
    vector<string> tokens = {":w", "<-", "690"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"690\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"690"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"690\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "33aa_21"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"33aa_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"33aa_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"33aa_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "13na_30"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"13na_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"13na_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"13na_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", ":onezero"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "2hn6_28"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"2hn6_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2hn6_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"2hn6_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":s", "<-", "89667"};
    ASSERT_EQ(":s", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":s\", \"<-\", \"89667\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"89667"}), tokens) << "I tried calling ExtractTargetID on the token list {\":s\", \"<-\", \"89667\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":rjo", "<-", "14jn_27"};
    ASSERT_EQ(":rjo", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":rjo\", \"<-\", \"14jn_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"14jn_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":rjo\", \"<-\", \"14jn_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "1qe5_27"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"1qe5_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1qe5_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"1qe5_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "1ae11_15"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"1ae11_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1ae11_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"1ae11_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", "2768a_11"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \"2768a_11\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2768a_11"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \"2768a_11\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":es", "<-", "10mo_27"};
    ASSERT_EQ(":es", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":es\", \"<-\", \"10mo_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10mo_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":es\", \"<-\", \"10mo_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", ":twotwo"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "914_15"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"914_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"914_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"914_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":dijj", "<-", "51937"};
    ASSERT_EQ(":dijj", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":dijj\", \"<-\", \"51937\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"51937"}), tokens) << "I tried calling ExtractTargetID on the token list {\":dijj\", \"<-\", \"51937\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", "4002100_5"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \"4002100_5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4002100_5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \"4002100_5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "7hfh_22"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"7hfh_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"7hfh_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"7hfh_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "314415_6"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"314415_6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"314415_6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"314415_6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "3eh7_26"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"3eh7_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3eh7_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"3eh7_26\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ocdk", "<-", "3e9h_25"};
    ASSERT_EQ(":ocdk", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ocdk\", \"<-\", \"3e9h_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3e9h_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ocdk\", \"<-\", \"3e9h_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xws", "<-", "c6j5_20"};
    ASSERT_EQ(":xws", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xws\", \"<-\", \"c6j5_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"c6j5_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xws\", \"<-\", \"c6j5_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "53k_33"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"53k_33\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"53k_33"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"53k_33\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "2uab_32"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"2uab_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2uab_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"2uab_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "59531"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"59531\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"59531"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"59531\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ov", "<-", "93944"};
    ASSERT_EQ(":ov", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ov\", \"<-\", \"93944\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"93944"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ov\", \"<-\", \"93944\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "947h_21"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"947h_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"947h_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"947h_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "2110001012_3"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"2110001012_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2110001012_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"2110001012_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", ":onefivenineeight"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \":onefivenineeight\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \":onefivenineeight\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "chn_34"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"chn_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"chn_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"chn_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", ":threeseven"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \":threeseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \":threeseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "93230"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"93230\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"93230"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"93230\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "451n_28"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"451n_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"451n_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"451n_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", ":onefivenineeight"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \":onefivenineeight\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \":onefivenineeight\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "91699"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"91699\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"91699"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"91699\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "ad4_32"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"ad4_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"ad4_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"ad4_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", ":onetwothree"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":br", "<-", ":twotwo"};
    ASSERT_EQ(":br", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":br\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":br\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", ":threeseven"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \":threeseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \":threeseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":eyf", "<-", "1gvl_33"};
    ASSERT_EQ(":eyf", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":eyf\", \"<-\", \"1gvl_33\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1gvl_33"}), tokens) << "I tried calling ExtractTargetID on the token list {\":eyf\", \"<-\", \"1gvl_33\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "11002211101_3"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"11002211101_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"11002211101_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"11002211101_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", ":twotwo"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "6k9b_23"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"6k9b_23\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"6k9b_23"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"6k9b_23\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", "4hk3_22"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \"4hk3_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4hk3_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \"4hk3_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "3301441_5"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"3301441_5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3301441_5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"3301441_5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "234351_8"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"234351_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"234351_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"234351_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", ":onezero"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ec", "<-", ":onetwothree"};
    ASSERT_EQ(":ec", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ec\", \"<-\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ec\", \"<-\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "3rfj_29"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"3rfj_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3rfj_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"3rfj_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", ":onezero"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "5197"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"5197\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"5197"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"5197\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", ":twotwo"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", "l9p_31"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \"l9p_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"l9p_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \"l9p_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":onetwothree"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ov", "<-", ":nineninenine"};
    ASSERT_EQ(":ov", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ov\", \"<-\", \":nineninenine\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ov\", \"<-\", \":nineninenine\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "13619"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"13619\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"13619"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"13619\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", ":onezerozero"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \":onezerozero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \":onezerozero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "44272"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"44272\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"44272"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"44272\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":vo", "<-", ":onefivenineeight"};
    ASSERT_EQ(":vo", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":vo\", \"<-\", \":onefivenineeight\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight"}), tokens) << "I tried calling ExtractTargetID on the token list {\":vo\", \"<-\", \":onefivenineeight\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "7ii5_23"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"7ii5_23\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"7ii5_23"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"7ii5_23\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", ":onezero"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":s", "<-", ":nineninenine"};
    ASSERT_EQ(":s", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":s\", \"<-\", \":nineninenine\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine"}), tokens) << "I tried calling ExtractTargetID on the token list {\":s\", \"<-\", \":nineninenine\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ad", "<-", "61107"};
    ASSERT_EQ(":ad", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ad\", \"<-\", \"61107\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"61107"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ad\", \"<-\", \"61107\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", ":twotwo"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "86255"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"86255\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"86255"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"86255\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", ":onezerozero"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \":onezerozero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \":onezerozero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ex", "<-", "95737_10"};
    ASSERT_EQ(":ex", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ex\", \"<-\", \"95737_10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"95737_10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ex\", \"<-\", \"95737_10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", ":twotwo"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "262121_8"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"262121_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"262121_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"262121_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":rxex", "<-", "33803"};
    ASSERT_EQ(":rxex", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":rxex\", \"<-\", \"33803\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"33803"}), tokens) << "I tried calling ExtractTargetID on the token list {\":rxex\", \"<-\", \"33803\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":fc", "<-", ":twotwo"};
    ASSERT_EQ(":fc", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":fc\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":fc\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", ":onezero"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "151371_8"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"151371_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"151371_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"151371_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ci", "<-", "434140_7"};
    ASSERT_EQ(":ci", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ci\", \"<-\", \"434140_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"434140_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ci\", \"<-\", \"434140_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", ":twotwo"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", ":eighteightseven"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \":eighteightseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \":eighteightseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", ":fivesixtwo"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \":fivesixtwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \":fivesixtwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", "22221012_3"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \"22221012_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"22221012_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \"22221012_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "2222200112_3"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"2222200112_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2222200112_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"2222200112_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "a0e9_20"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"a0e9_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"a0e9_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"a0e9_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":kvn", "<-", "7ro_32"};
    ASSERT_EQ(":kvn", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":kvn\", \"<-\", \"7ro_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"7ro_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":kvn\", \"<-\", \"7ro_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "dd9_19"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"dd9_19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"dd9_19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"dd9_19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "434322_6"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"434322_6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"434322_6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"434322_6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":kd", "<-", ":nineninenine"};
    ASSERT_EQ(":kd", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":kd\", \"<-\", \":nineninenine\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine"}), tokens) << "I tried calling ExtractTargetID on the token list {\":kd\", \"<-\", \":nineninenine\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "87500"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"87500\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"87500"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"87500\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":fiv", "<-", "31t1_30"};
    ASSERT_EQ(":fiv", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":fiv\", \"<-\", \"31t1_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"31t1_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":fiv\", \"<-\", \"31t1_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "60501"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"60501\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"60501"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"60501\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":bw", "<-", "160q_30"};
    ASSERT_EQ(":bw", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":bw\", \"<-\", \"160q_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"160q_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":bw\", \"<-\", \"160q_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":mb", "<-", "2sij_30"};
    ASSERT_EQ(":mb", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":mb\", \"<-\", \"2sij_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2sij_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":mb\", \"<-\", \"2sij_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":no", "<-", "45j5_25"};
    ASSERT_EQ(":no", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":no\", \"<-\", \"45j5_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"45j5_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":no\", \"<-\", \"45j5_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xpw", "<-", ":onetwothree"};
    ASSERT_EQ(":xpw", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xpw\", \"<-\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xpw\", \"<-\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "61593"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"61593\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"61593"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"61593\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "3ohp_26"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"3ohp_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3ohp_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"3ohp_26\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", ":onetwothree"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", ":eighteightseven"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \":eighteightseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \":eighteightseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", "4424a_11"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \"4424a_11\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4424a_11"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \"4424a_11\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "304023_6"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"304023_6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"304023_6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"304023_6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", ":twotwo"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", "c6ji_20"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \"c6ji_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"c6ji_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \"c6ji_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "234464_7"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"234464_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"234464_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"234464_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":qv", "<-", "39d5_28"};
    ASSERT_EQ(":qv", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":qv\", \"<-\", \"39d5_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"39d5_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":qv\", \"<-\", \"39d5_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "462324_7"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"462324_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"462324_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"462324_7\"}, but it didn't prune the token list in the way I expected.";
  }

  // One operand with target base
  {
    vector<string> tokens = {":y", "<-", ":nineninenine", "->", "1e_16"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \":nineninenine\", \"->\", \"1e_16\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine", "->", "1e_16"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \":nineninenine\", \"->\", \"1e_16\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":threeseven", "->", "4"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":threeseven\", \"->\", \"4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "->", "4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":threeseven\", \"->\", \"4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "13163_10", "->", "4_34"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"13163_10\", \"->\", \"4_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"13163_10", "->", "4_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"13163_10\", \"->\", \"4_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "50787", "->", "e_17"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"50787\", \"->\", \"e_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"50787", "->", "e_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"50787\", \"->\", \"e_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", ":threeseven", "->", "17"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \":threeseven\", \"->\", \"17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "->", "17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \":threeseven\", \"->\", \"17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":sz", "<-", "4h5e_19", "->", "20_12"};
    ASSERT_EQ(":sz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":sz\", \"<-\", \"4h5e_19\", \"->\", \"20_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4h5e_19", "->", "20_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":sz\", \"<-\", \"4h5e_19\", \"->\", \"20_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":onezero", "->", "1b_20"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":onezero\", \"->\", \"1b_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "->", "1b_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":onezero\", \"->\", \"1b_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ftuh", "<-", "88771", "->", "2"};
    ASSERT_EQ(":ftuh", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ftuh\", \"<-\", \"88771\", \"->\", \"2\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"88771", "->", "2"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ftuh\", \"<-\", \"88771\", \"->\", \"2\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":cr", "<-", "44215_10", "->", "3_7"};
    ASSERT_EQ(":cr", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":cr\", \"<-\", \"44215_10\", \"->\", \"3_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"44215_10", "->", "3_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":cr\", \"<-\", \"44215_10\", \"->\", \"3_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", ":onefivenineeight", "->", "5"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \":onefivenineeight\", \"->\", \"5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "->", "5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \":onefivenineeight\", \"->\", \"5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", "32079_10", "->", "19_14"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \"32079_10\", \"->\", \"19_14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"32079_10", "->", "19_14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \"32079_10\", \"->\", \"19_14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "d9d_21", "->", "19"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"d9d_21\", \"->\", \"19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"d9d_21", "->", "19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"d9d_21\", \"->\", \"19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "4018_9", "->", "13_30"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"4018_9\", \"->\", \"13_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4018_9", "->", "13_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"4018_9\", \"->\", \"13_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xp", "<-", "33712", "->", "13_27"};
    ASSERT_EQ(":xp", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xp\", \"<-\", \"33712\", \"->\", \"13_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"33712", "->", "13_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xp\", \"<-\", \"33712\", \"->\", \"13_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "200541_7", "->", "18"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"200541_7\", \"->\", \"18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"200541_7", "->", "18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"200541_7\", \"->\", \"18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":yr", "<-", "95852", "->", "e_31"};
    ASSERT_EQ(":yr", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":yr\", \"<-\", \"95852\", \"->\", \"e_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"95852", "->", "e_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":yr\", \"<-\", \"95852\", \"->\", \"e_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", "501231_6", "->", "14"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \"501231_6\", \"->\", \"14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"501231_6", "->", "14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \"501231_6\", \"->\", \"14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", ":onezerozero", "->", "112_3"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \":onezerozero\", \"->\", \"112_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozero", "->", "112_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \":onezerozero\", \"->\", \"112_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "1e63_31", "->", "g_17"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"1e63_31\", \"->\", \"g_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1e63_31", "->", "g_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"1e63_31\", \"->\", \"g_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":uk", "<-", "274f_26", "->", "2_7"};
    ASSERT_EQ(":uk", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":uk\", \"<-\", \"274f_26\", \"->\", \"2_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"274f_26", "->", "2_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":uk\", \"<-\", \"274f_26\", \"->\", \"2_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xfw", "<-", "132638_9", "->", "17"};
    ASSERT_EQ(":xfw", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xfw\", \"<-\", \"132638_9\", \"->\", \"17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"132638_9", "->", "17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xfw\", \"<-\", \"132638_9\", \"->\", \"17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", ":onezerozerothree", "->", "p_28"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \":onezerozerothree\", \"->\", \"p_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozerothree", "->", "p_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \":onezerozerothree\", \"->\", \"p_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "14d1d_15", "->", "h_27"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"14d1d_15\", \"->\", \"h_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"14d1d_15", "->", "h_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"14d1d_15\", \"->\", \"h_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", ":onefivenineeight", "->", "23_13"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \":onefivenineeight\", \"->\", \"23_13\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "->", "23_13"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \":onefivenineeight\", \"->\", \"23_13\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "96749", "->", "8_12"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"96749\", \"->\", \"8_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"96749", "->", "8_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"96749\", \"->\", \"8_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", ":onefivenineeight", "->", "14"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \":onefivenineeight\", \"->\", \"14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "->", "14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \":onefivenineeight\", \"->\", \"14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "294g_33", "->", "20"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"294g_33\", \"->\", \"20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"294g_33", "->", "20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"294g_33\", \"->\", \"20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":yyep", "<-", ":onezerozerothree", "->", "c_28"};
    ASSERT_EQ(":yyep", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":yyep\", \"<-\", \":onezerozerothree\", \"->\", \"c_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozerothree", "->", "c_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":yyep\", \"<-\", \":onezerozerothree\", \"->\", \"c_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "543240_7", "->", "22_15"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"543240_7\", \"->\", \"22_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"543240_7", "->", "22_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"543240_7\", \"->\", \"22_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "359b2_12", "->", "h_23"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"359b2_12\", \"->\", \"h_23\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"359b2_12", "->", "h_23"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"359b2_12\", \"->\", \"h_23\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "15749_14", "->", "29_13"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"15749_14\", \"->\", \"29_13\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"15749_14", "->", "29_13"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"15749_14\", \"->\", \"29_13\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":vb", "<-", "10101011121_3", "->", "19_20"};
    ASSERT_EQ(":vb", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":vb\", \"<-\", \"10101011121_3\", \"->\", \"19_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10101011121_3", "->", "19_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":vb\", \"<-\", \"10101011121_3\", \"->\", \"19_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "64082", "->", "19"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"64082\", \"->\", \"19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"64082", "->", "19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"64082\", \"->\", \"19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "j7a_30", "->", "5_19"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"j7a_30\", \"->\", \"5_19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"j7a_30", "->", "5_19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"j7a_30\", \"->\", \"5_19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":bt", "<-", "84713", "->", "36_10"};
    ASSERT_EQ(":bt", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":bt\", \"<-\", \"84713\", \"->\", \"36_10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"84713", "->", "36_10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":bt\", \"<-\", \"84713\", \"->\", \"36_10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "d21c_14", "->", "l_22"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"d21c_14\", \"->\", \"l_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"d21c_14", "->", "l_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"d21c_14\", \"->\", \"l_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "39938", "->", "27_10"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"39938\", \"->\", \"27_10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"39938", "->", "27_10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"39938\", \"->\", \"27_10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", ":onezero", "->", "e_15"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \":onezero\", \"->\", \"e_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "->", "e_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \":onezero\", \"->\", \"e_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", ":onetwothree", "->", "e_20"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \":onetwothree\", \"->\", \"e_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "->", "e_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \":onetwothree\", \"->\", \"e_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "117o_33", "->", "1b_18"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"117o_33\", \"->\", \"1b_18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"117o_33", "->", "1b_18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"117o_33\", \"->\", \"1b_18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "253", "->", "28_10"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"253\", \"->\", \"28_10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"253", "->", "28_10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"253\", \"->\", \"28_10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "65676_10", "->", "34"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"65676_10\", \"->\", \"34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"65676_10", "->", "34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"65676_10\", \"->\", \"34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "2mad_26", "->", "r_29"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"2mad_26\", \"->\", \"r_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2mad_26", "->", "r_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"2mad_26\", \"->\", \"r_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", "10002400_5", "->", "19_24"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \"10002400_5\", \"->\", \"19_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10002400_5", "->", "19_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \"10002400_5\", \"->\", \"19_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "372o_27", "->", "10"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"372o_27\", \"->\", \"10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"372o_27", "->", "10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"372o_27\", \"->\", \"10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "473b_14", "->", "19"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"473b_14\", \"->\", \"19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"473b_14", "->", "19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"473b_14\", \"->\", \"19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":bs", "<-", ":onetwothree", "->", "8_29"};
    ASSERT_EQ(":bs", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":bs\", \"<-\", \":onetwothree\", \"->\", \"8_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "->", "8_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":bs\", \"<-\", \":onetwothree\", \"->\", \"8_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "ch_29", "->", "1001_2"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"ch_29\", \"->\", \"1001_2\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"ch_29", "->", "1001_2"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"ch_29\", \"->\", \"1001_2\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "39786", "->", "11_17"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"39786\", \"->\", \"11_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"39786", "->", "11_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"39786\", \"->\", \"11_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", ":twotwo", "->", "32_8"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \":twotwo\", \"->\", \"32_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo", "->", "32_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \":twotwo\", \"->\", \"32_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":irep", "<-", "53469", "->", "c_35"};
    ASSERT_EQ(":irep", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":irep\", \"<-\", \"53469\", \"->\", \"c_35\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"53469", "->", "c_35"}), tokens) << "I tried calling ExtractTargetID on the token list {\":irep\", \"<-\", \"53469\", \"->\", \"c_35\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", ":onetwothree", "->", "3_29"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \":onetwothree\", \"->\", \"3_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "->", "3_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \":onetwothree\", \"->\", \"3_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":kh", "<-", ":fivesixtwo", "->", "24"};
    ASSERT_EQ(":kh", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":kh\", \"<-\", \":fivesixtwo\", \"->\", \"24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "->", "24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":kh\", \"<-\", \":fivesixtwo\", \"->\", \"24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "1111000010101010_2", "->", "m_34"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"1111000010101010_2\", \"->\", \"m_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1111000010101010_2", "->", "m_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"1111000010101010_2\", \"->\", \"m_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", ":fivesixtwo", "->", "15_9"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \":fivesixtwo\", \"->\", \"15_9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "->", "15_9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \":fivesixtwo\", \"->\", \"15_9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":onezerozero", "->", "6"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":onezerozero\", \"->\", \"6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozero", "->", "6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":onezerozero\", \"->\", \"6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "98946", "->", "8_19"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"98946\", \"->\", \"8_19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"98946", "->", "8_19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"98946\", \"->\", \"8_19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":rug", "<-", "43336_9", "->", "1c_24"};
    ASSERT_EQ(":rug", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":rug\", \"<-\", \"43336_9\", \"->\", \"1c_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"43336_9", "->", "1c_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":rug\", \"<-\", \"43336_9\", \"->\", \"1c_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":gqp", "<-", ":threeseven", "->", "13_29"};
    ASSERT_EQ(":gqp", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":gqp\", \"<-\", \":threeseven\", \"->\", \"13_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "->", "13_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":gqp\", \"<-\", \":threeseven\", \"->\", \"13_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", ":fivesixtwo", "->", "3_12"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \":fivesixtwo\", \"->\", \"3_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "->", "3_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \":fivesixtwo\", \"->\", \"3_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":s", "<-", "56217", "->", "23"};
    ASSERT_EQ(":s", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":s\", \"<-\", \"56217\", \"->\", \"23\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"56217", "->", "23"}), tokens) << "I tried calling ExtractTargetID on the token list {\":s\", \"<-\", \"56217\", \"->\", \"23\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", ":onefivenineeight", "->", "13"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \":onefivenineeight\", \"->\", \"13\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "->", "13"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \":onefivenineeight\", \"->\", \"13\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":s", "<-", "4d13_14", "->", "1d_21"};
    ASSERT_EQ(":s", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":s\", \"<-\", \"4d13_14\", \"->\", \"1d_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4d13_14", "->", "1d_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":s\", \"<-\", \"4d13_14\", \"->\", \"1d_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", ":twotwo", "->", "w_34"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \":twotwo\", \"->\", \"w_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo", "->", "w_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \":twotwo\", \"->\", \"w_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":eh", "<-", "4hgg_22", "->", "9_16"};
    ASSERT_EQ(":eh", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":eh\", \"<-\", \"4hgg_22\", \"->\", \"9_16\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4hgg_22", "->", "9_16"}), tokens) << "I tried calling ExtractTargetID on the token list {\":eh\", \"<-\", \"4hgg_22\", \"->\", \"9_16\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ki", "<-", "1001_10", "->", "111_4"};
    ASSERT_EQ(":ki", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ki\", \"<-\", \"1001_10\", \"->\", \"111_4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1001_10", "->", "111_4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ki\", \"<-\", \"1001_10\", \"->\", \"111_4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "39364", "->", "29"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"39364\", \"->\", \"29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"39364", "->", "29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"39364\", \"->\", \"29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":mbu", "<-", "10201011112_3", "->", "17_13"};
    ASSERT_EQ(":mbu", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":mbu\", \"<-\", \"10201011112_3\", \"->\", \"17_13\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10201011112_3", "->", "17_13"}), tokens) << "I tried calling ExtractTargetID on the token list {\":mbu\", \"<-\", \"10201011112_3\", \"->\", \"17_13\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "78955", "->", "7"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"78955\", \"->\", \"7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"78955", "->", "7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"78955\", \"->\", \"7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "2378", "->", "17_27"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"2378\", \"->\", \"17_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2378", "->", "17_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"2378\", \"->\", \"17_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "27007_13", "->", "24"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"27007_13\", \"->\", \"24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"27007_13", "->", "24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"27007_13\", \"->\", \"24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "58644", "->", "1a_19"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"58644\", \"->\", \"1a_19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"58644", "->", "1a_19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"58644\", \"->\", \"1a_19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "6306_24", "->", "27_14"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"6306_24\", \"->\", \"27_14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"6306_24", "->", "27_14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"6306_24\", \"->\", \"27_14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", "87979", "->", "36"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \"87979\", \"->\", \"36\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"87979", "->", "36"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \"87979\", \"->\", \"36\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":rz", "<-", ":onetwothree", "->", "d_35"};
    ASSERT_EQ(":rz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":rz\", \"<-\", \":onetwothree\", \"->\", \"d_35\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "->", "d_35"}), tokens) << "I tried calling ExtractTargetID on the token list {\":rz\", \"<-\", \":onetwothree\", \"->\", \"d_35\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", ":onezero", "->", "9_26"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \":onezero\", \"->\", \"9_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "->", "9_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \":onezero\", \"->\", \"9_26\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "41676", "->", "n_31"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"41676\", \"->\", \"n_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"41676", "->", "n_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"41676\", \"->\", \"n_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", ":nineninenine", "->", "35_9"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \":nineninenine\", \"->\", \"35_9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine", "->", "35_9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \":nineninenine\", \"->\", \"35_9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", ":fivesixtwo", "->", "5"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \":fivesixtwo\", \"->\", \"5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "->", "5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \":fivesixtwo\", \"->\", \"5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", ":nineninenine", "->", "12"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \":nineninenine\", \"->\", \"12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine", "->", "12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \":nineninenine\", \"->\", \"12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "356355_7", "->", "20_5"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"356355_7\", \"->\", \"20_5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"356355_7", "->", "20_5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"356355_7\", \"->\", \"20_5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":rk", "<-", "14144_12", "->", "32"};
    ASSERT_EQ(":rk", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":rk\", \"<-\", \"14144_12\", \"->\", \"32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"14144_12", "->", "32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":rk\", \"<-\", \"14144_12\", \"->\", \"32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "53864_11", "->", "k_21"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"53864_11\", \"->\", \"k_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"53864_11", "->", "k_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"53864_11\", \"->\", \"k_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xi", "<-", "60334", "->", "30"};
    ASSERT_EQ(":xi", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xi\", \"<-\", \"60334\", \"->\", \"30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"60334", "->", "30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xi\", \"<-\", \"60334\", \"->\", \"30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", "22457", "->", "3"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \"22457\", \"->\", \"3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"22457", "->", "3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \"22457\", \"->\", \"3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "2fed_28", "->", "2a_12"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"2fed_28\", \"->\", \"2a_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2fed_28", "->", "2a_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"2fed_28\", \"->\", \"2a_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "234k_30", "->", "e_16"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"234k_30\", \"->\", \"e_16\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"234k_30", "->", "e_16"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"234k_30\", \"->\", \"e_16\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "81758", "->", "11_5"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"81758\", \"->\", \"11_5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"81758", "->", "11_5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"81758\", \"->\", \"11_5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "434014_5", "->", "q_29"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"434014_5\", \"->\", \"q_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"434014_5", "->", "q_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"434014_5\", \"->\", \"q_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", ":onezero", "->", "35"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \":onezero\", \"->\", \"35\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "->", "35"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \":onezero\", \"->\", \"35\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "65531", "->", "18_17"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"65531\", \"->\", \"18_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"65531", "->", "18_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"65531\", \"->\", \"18_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", ":onezero", "->", "21_9"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \":onezero\", \"->\", \"21_9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "->", "21_9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \":onezero\", \"->\", \"21_9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":rn", "<-", "1415343_6", "->", "14"};
    ASSERT_EQ(":rn", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":rn\", \"<-\", \"1415343_6\", \"->\", \"14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1415343_6", "->", "14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":rn\", \"<-\", \"1415343_6\", \"->\", \"14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", ":fivesixtwo", "->", "10_18"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \":fivesixtwo\", \"->\", \"10_18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "->", "10_18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \":fivesixtwo\", \"->\", \"10_18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":dn", "<-", "j6q_27", "->", "11_8"};
    ASSERT_EQ(":dn", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":dn\", \"<-\", \"j6q_27\", \"->\", \"11_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"j6q_27", "->", "11_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":dn\", \"<-\", \"j6q_27\", \"->\", \"11_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", ":onetwothree", "->", "5"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \":onetwothree\", \"->\", \"5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "->", "5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \":onetwothree\", \"->\", \"5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "92215", "->", "q_31"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"92215\", \"->\", \"q_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"92215", "->", "q_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"92215\", \"->\", \"q_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "13d5d_16", "->", "q_28"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"13d5d_16\", \"->\", \"q_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"13d5d_16", "->", "q_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"13d5d_16\", \"->\", \"q_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "13870_12", "->", "32"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"13870_12\", \"->\", \"32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"13870_12", "->", "32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"13870_12\", \"->\", \"32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", ":threeseven", "->", "p_26"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \":threeseven\", \"->\", \"p_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "->", "p_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \":threeseven\", \"->\", \"p_26\"}, but it didn't prune the token list in the way I expected.";
  }

  // Operation without target base
  {
    vector<string> tokens = {":n", "<-", "95104", "%", "112"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"95104\", \"%\", \"112\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"95104", "%", "112"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"95104\", \"%\", \"112\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "b102_16", "/", "24668"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"b102_16\", \"/\", \"24668\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"b102_16", "/", "24668"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"b102_16\", \"/\", \"24668\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", "2534_16", ">>", "47aj_27"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \"2534_16\", \">>\", \"47aj_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2534_16", ">>", "47aj_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \"2534_16\", \">>\", \"47aj_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "1121011111_3", "/", ":fivesixtwo"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"1121011111_3\", \"/\", \":fivesixtwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1121011111_3", "/", ":fivesixtwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"1121011111_3\", \"/\", \":fivesixtwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "49j0_24", "+", "23543"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"49j0_24\", \"+\", \"23543\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"49j0_24", "+", "23543"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"49j0_24\", \"+\", \"23543\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "4cgq_27", ">>", "375c_20"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"4cgq_27\", \">>\", \"375c_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4cgq_27", ">>", "375c_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"4cgq_27\", \">>\", \"375c_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":vn", "<-", "6883_21", "*", ":onezerozerothree"};
    ASSERT_EQ(":vn", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":vn\", \"<-\", \"6883_21\", \"*\", \":onezerozerothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"6883_21", "*", ":onezerozerothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":vn\", \"<-\", \"6883_21\", \"*\", \":onezerozerothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "2cq9_30", ">>", "2a72_15"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"2cq9_30\", \">>\", \"2a72_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2cq9_30", ">>", "2a72_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"2cq9_30\", \">>\", \"2a72_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "2497_18", "/", "7cf9_21"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"2497_18\", \"/\", \"7cf9_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2497_18", "/", "7cf9_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"2497_18\", \"/\", \"7cf9_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "17953_13", "/", "1u6u_31"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"17953_13\", \"/\", \"1u6u_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"17953_13", "/", "1u6u_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"17953_13\", \"/\", \"1u6u_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "3i92_29", "+", "16330"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"3i92_29\", \"+\", \"16330\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3i92_29", "+", "16330"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"3i92_29\", \"+\", \"16330\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", ":onefivenineeight", "*", "1dbm_24"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \":onefivenineeight\", \"*\", \"1dbm_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "*", "1dbm_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \":onefivenineeight\", \"*\", \"1dbm_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ucx", "<-", "3843", ">>", ":onezero"};
    ASSERT_EQ(":ucx", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ucx\", \"<-\", \"3843\", \">>\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3843", ">>", ":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ucx\", \"<-\", \"3843\", \">>\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":adh", "<-", "4amf_28", "+", "47090"};
    ASSERT_EQ(":adh", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":adh\", \"<-\", \"4amf_28\", \"+\", \"47090\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4amf_28", "+", "47090"}), tokens) << "I tried calling ExtractTargetID on the token list {\":adh\", \"<-\", \"4amf_28\", \"+\", \"47090\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":s", "<-", "cl7_30", "%", "27556"};
    ASSERT_EQ(":s", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":s\", \"<-\", \"cl7_30\", \"%\", \"27556\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"cl7_30", "%", "27556"}), tokens) << "I tried calling ExtractTargetID on the token list {\":s\", \"<-\", \"cl7_30\", \"%\", \"27556\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "35668", "*", "83765"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"35668\", \"*\", \"83765\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"35668", "*", "83765"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"35668\", \"*\", \"83765\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "4134344_5", "/", "56c_22"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"4134344_5\", \"/\", \"56c_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4134344_5", "/", "56c_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"4134344_5\", \"/\", \"56c_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "35791_11", "/", ":onezerozero"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"35791_11\", \"/\", \":onezerozero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"35791_11", "/", ":onezerozero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"35791_11\", \"/\", \":onezerozero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "c901_14", "%", ":nineninenine"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"c901_14\", \"%\", \":nineninenine\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"c901_14", "%", ":nineninenine"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"c901_14\", \"%\", \":nineninenine\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "1bd_22", "-", ":fivesixtwo"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"1bd_22\", \"-\", \":fivesixtwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1bd_22", "-", ":fivesixtwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"1bd_22\", \"-\", \":fivesixtwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "fd1f_18", "%", ":onetwothree"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"fd1f_18\", \"%\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"fd1f_18", "%", ":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"fd1f_18\", \"%\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", ":threeseven", "*", "5g08_18"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \":threeseven\", \"*\", \"5g08_18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "*", "5g08_18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \":threeseven\", \"*\", \"5g08_18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":yo", "<-", ":fivesixtwo", "/", ":onezero"};
    ASSERT_EQ(":yo", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":yo\", \"<-\", \":fivesixtwo\", \"/\", \":onezero\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "/", ":onezero"}), tokens) << "I tried calling ExtractTargetID on the token list {\":yo\", \"<-\", \":fivesixtwo\", \"/\", \":onezero\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ii", "<-", "j0a_21", "*", "35088"};
    ASSERT_EQ(":ii", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ii\", \"<-\", \"j0a_21\", \"*\", \"35088\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"j0a_21", "*", "35088"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ii\", \"<-\", \"j0a_21\", \"*\", \"35088\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "1251b_13", "*", ":onezerozerothree"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"1251b_13\", \"*\", \":onezerozerothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1251b_13", "*", ":onezerozerothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"1251b_13\", \"*\", \":onezerozerothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", ":threeseven", "+", "15e8_31"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \":threeseven\", \"+\", \"15e8_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "+", "15e8_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \":threeseven\", \"+\", \"15e8_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", ":onefivenineeight", ">>", "12021312_4"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \":onefivenineeight\", \">>\", \"12021312_4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", ">>", "12021312_4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \":onefivenineeight\", \">>\", \"12021312_4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "69997_10", "%", "1a4a0_15"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"69997_10\", \"%\", \"1a4a0_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"69997_10", "%", "1a4a0_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"69997_10\", \"%\", \"1a4a0_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "6lai_22", "+", "79425"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"6lai_22\", \"+\", \"79425\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"6lai_22", "+", "79425"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"6lai_22\", \"+\", \"79425\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", ":onezerozerothree", "%", ":onefivenineeight"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \":onezerozerothree\", \"%\", \":onefivenineeight\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozerothree", "%", ":onefivenineeight"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \":onezerozerothree\", \"%\", \":onefivenineeight\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "6909_21", ">>", "13131232_4"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"6909_21\", \">>\", \"13131232_4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"6909_21", ">>", "13131232_4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"6909_21\", \">>\", \"13131232_4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "87241", "/", "76k_27"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"87241\", \"/\", \"76k_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"87241", "/", "76k_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"87241\", \"/\", \"76k_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "244715_8", "+", ":eighteightseven"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"244715_8\", \"+\", \":eighteightseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"244715_8", "+", ":eighteightseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"244715_8\", \"+\", \":eighteightseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", "3c9_17", "/", "ajg_27"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \"3c9_17\", \"/\", \"ajg_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3c9_17", "/", "ajg_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \"3c9_17\", \"/\", \"ajg_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "78294", "/", "icm_32"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"78294\", \"/\", \"icm_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"78294", "/", "icm_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"78294\", \"/\", \"icm_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", ":onefivenineeight", "+", "1snd_32"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \":onefivenineeight\", \"+\", \"1snd_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "+", "1snd_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \":onefivenineeight\", \"+\", \"1snd_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", "833a_17", "+", ":threeseven"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \"833a_17\", \"+\", \":threeseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"833a_17", "+", ":threeseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \"833a_17\", \"+\", \":threeseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "1222122220_3", "-", "486_19"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"1222122220_3\", \"-\", \"486_19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1222122220_3", "-", "486_19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"1222122220_3\", \"-\", \"486_19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "1cfq_28", "*", "3aah_31"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"1cfq_28\", \"*\", \"3aah_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1cfq_28", "*", "3aah_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"1cfq_28\", \"*\", \"3aah_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "61921", "%", "1erd_30"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"61921\", \"%\", \"1erd_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"61921", "%", "1erd_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"61921\", \"%\", \"1erd_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", "268c_24", "/", ":twotwo"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \"268c_24\", \"/\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"268c_24", "/", ":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \"268c_24\", \"/\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", ":eighteightseven", "%", "87832"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \":eighteightseven\", \"%\", \"87832\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "%", "87832"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \":eighteightseven\", \"%\", \"87832\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "73814", "%", "de8e_16"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"73814\", \"%\", \"de8e_16\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"73814", "%", "de8e_16"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"73814\", \"%\", \"de8e_16\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":vbw", "<-", ":twotwo", "+", "13b1_33"};
    ASSERT_EQ(":vbw", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":vbw\", \"<-\", \":twotwo\", \"+\", \"13b1_33\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo", "+", "13b1_33"}), tokens) << "I tried calling ExtractTargetID on the token list {\":vbw\", \"<-\", \":twotwo\", \"+\", \"13b1_33\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", ":onezero", "*", ":threeseven"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \":onezero\", \"*\", \":threeseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "*", ":threeseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \":onezero\", \"*\", \":threeseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "22a62_12", "+", "231621_7"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"22a62_12\", \"+\", \"231621_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"22a62_12", "+", "231621_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"22a62_12\", \"+\", \"231621_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "74t_33", "%", "8415_20"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"74t_33\", \"%\", \"8415_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"74t_33", "%", "8415_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"74t_33\", \"%\", \"8415_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", "90268", "%", "5480_17"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \"90268\", \"%\", \"5480_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"90268", "%", "5480_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \"90268\", \"%\", \"5480_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", ":onezero", "%", "10eg_30"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \":onezero\", \"%\", \"10eg_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "%", "10eg_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \":onezero\", \"%\", \"10eg_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":cub", "<-", ":onezero", ">>", "9059_14"};
    ASSERT_EQ(":cub", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":cub\", \"<-\", \":onezero\", \">>\", \"9059_14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", ">>", "9059_14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":cub\", \"<-\", \":onezero\", \">>\", \"9059_14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "j5g_30", "/", "62643"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"j5g_30\", \"/\", \"62643\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"j5g_30", "/", "62643"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"j5g_30\", \"/\", \"62643\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", "176k_32", "+", "oin_32"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \"176k_32\", \"+\", \"oin_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"176k_32", "+", "oin_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \"176k_32\", \"+\", \"oin_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", ":onezerozero", "+", ":twotwo"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \":onezerozero\", \"+\", \":twotwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozero", "+", ":twotwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \":onezerozero\", \"+\", \":twotwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", "43013", "-", "10292_12"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \"43013\", \"-\", \"10292_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"43013", "-", "10292_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \"43013\", \"-\", \"10292_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", "7dj4_21", ">>", "58605"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \"7dj4_21\", \">>\", \"58605\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"7dj4_21", ">>", "58605"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \"7dj4_21\", \">>\", \"58605\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "30743", "+", "4n7e_25"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"30743\", \"+\", \"4n7e_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"30743", "+", "4n7e_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"30743\", \"+\", \"4n7e_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":eah", "<-", "2dtq_30", "/", "100623_7"};
    ASSERT_EQ(":eah", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":eah\", \"<-\", \"2dtq_30\", \"/\", \"100623_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2dtq_30", "/", "100623_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":eah\", \"<-\", \"2dtq_30\", \"/\", \"100623_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", ":onezero", "*", ":onezerozerothree"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \":onezero\", \"*\", \":onezerozerothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "*", ":onezerozerothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \":onezero\", \"*\", \":onezerozerothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "263225_8", "-", "b80_26"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"263225_8\", \"-\", \"b80_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"263225_8", "-", "b80_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"263225_8\", \"-\", \"b80_26\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xz", "<-", "1ags_34", "+", "hfx_34"};
    ASSERT_EQ(":xz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xz\", \"<-\", \"1ags_34\", \"+\", \"hfx_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1ags_34", "+", "hfx_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xz\", \"<-\", \"1ags_34\", \"+\", \"hfx_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", ":eighteightseven", "+", ":onezerozerothree"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \":eighteightseven\", \"+\", \":onezerozerothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "+", ":onezerozerothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \":eighteightseven\", \"+\", \":onezerozerothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", ":onezero", "%", ":fivesixtwo"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \":onezero\", \"%\", \":fivesixtwo\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "%", ":fivesixtwo"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \":onezero\", \"%\", \":fivesixtwo\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":eighteightseven", "/", "341502_6"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":eighteightseven\", \"/\", \"341502_6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "/", "341502_6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":eighteightseven\", \"/\", \"341502_6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "2h9h_27", "*", ":nineninenine"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"2h9h_27\", \"*\", \":nineninenine\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2h9h_27", "*", ":nineninenine"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"2h9h_27\", \"*\", \":nineninenine\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", ":eighteightseven", "+", ":onetwothree"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \":eighteightseven\", \"+\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "+", ":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \":eighteightseven\", \"+\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":af", "<-", "24286", ">>", "24ed_22"};
    ASSERT_EQ(":af", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":af\", \"<-\", \"24286\", \">>\", \"24ed_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"24286", ">>", "24ed_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":af\", \"<-\", \"24286\", \">>\", \"24ed_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "48063", ">>", ":threeseven"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"48063\", \">>\", \":threeseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"48063", ">>", ":threeseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"48063\", \">>\", \":threeseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", ":fivesixtwo", "*", "52248"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \":fivesixtwo\", \"*\", \"52248\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "*", "52248"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \":fivesixtwo\", \"*\", \"52248\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "7ch7_21", "/", "11214"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"7ch7_21\", \"/\", \"11214\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"7ch7_21", "/", "11214"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"7ch7_21\", \"/\", \"11214\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "6108_12", "/", ":onetwothree"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"6108_12\", \"/\", \":onetwothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"6108_12", "/", ":onetwothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"6108_12\", \"/\", \":onetwothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", ":onefivenineeight", "+", "1g2j_29"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \":onefivenineeight\", \"+\", \"1g2j_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "+", "1g2j_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \":onefivenineeight\", \"+\", \"1g2j_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "1tlk_30", "/", "87391"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"1tlk_30\", \"/\", \"87391\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1tlk_30", "/", "87391"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"1tlk_30\", \"/\", \"87391\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "3h06_21", "+", "2qjn_28"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"3h06_21\", \"+\", \"2qjn_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3h06_21", "+", "2qjn_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"3h06_21\", \"+\", \"2qjn_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":onetwothree", "%", "m0_27"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":onetwothree\", \"%\", \"m0_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "%", "m0_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":onetwothree\", \"%\", \"m0_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xz", "<-", "3684", "*", ":eighteightseven"};
    ASSERT_EQ(":xz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xz\", \"<-\", \"3684\", \"*\", \":eighteightseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3684", "*", ":eighteightseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xz\", \"<-\", \"3684\", \"*\", \":eighteightseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "onm_27", "*", ":eighteightseven"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"onm_27\", \"*\", \":eighteightseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"onm_27", "*", ":eighteightseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"onm_27\", \"*\", \":eighteightseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":iadge", "<-", "gud_31", "*", "119o_34"};
    ASSERT_EQ(":iadge", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":iadge\", \"<-\", \"gud_31\", \"*\", \"119o_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"gud_31", "*", "119o_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":iadge\", \"<-\", \"gud_31\", \"*\", \"119o_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":s", "<-", ":onefivenineeight", "+", "224c0_14"};
    ASSERT_EQ(":s", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":s\", \"<-\", \":onefivenineeight\", \"+\", \"224c0_14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "+", "224c0_14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":s\", \"<-\", \":onefivenineeight\", \"+\", \"224c0_14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "393i_21", "%", "6cf8_17"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"393i_21\", \"%\", \"6cf8_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"393i_21", "%", "6cf8_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"393i_21\", \"%\", \"6cf8_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ndh", "<-", "62861", "%", "5d1a_21"};
    ASSERT_EQ(":ndh", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ndh\", \"<-\", \"62861\", \"%\", \"5d1a_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"62861", "%", "5d1a_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ndh\", \"<-\", \"62861\", \"%\", \"5d1a_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", "f31e_16", "+", "11728"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \"f31e_16\", \"+\", \"11728\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"f31e_16", "+", "11728"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \"f31e_16\", \"+\", \"11728\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "664f_21", "+", "1j6p_33"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"664f_21\", \"+\", \"1j6p_33\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"664f_21", "+", "1j6p_33"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"664f_21\", \"+\", \"1j6p_33\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "101322_9", "*", "14b8_21"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"101322_9\", \"*\", \"14b8_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"101322_9", "*", "14b8_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"101322_9\", \"*\", \"14b8_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "10100122000_3", "+", "63924"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"10100122000_3\", \"+\", \"63924\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10100122000_3", "+", "63924"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"10100122000_3\", \"+\", \"63924\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "dia_34", ">>", "67237"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"dia_34\", \">>\", \"67237\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"dia_34", ">>", "67237"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"dia_34\", \">>\", \"67237\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":k", "<-", "53303", "/", ":onezerozerothree"};
    ASSERT_EQ(":k", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":k\", \"<-\", \"53303\", \"/\", \":onezerozerothree\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"53303", "/", ":onezerozerothree"}), tokens) << "I tried calling ExtractTargetID on the token list {\":k\", \"<-\", \"53303\", \"/\", \":onezerozerothree\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "100011110100100_2", "/", "288_29"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"100011110100100_2\", \"/\", \"288_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"100011110100100_2", "/", "288_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"100011110100100_2\", \"/\", \"288_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":dl", "<-", ":threeseven", ">>", ":eighteightseven"};
    ASSERT_EQ(":dl", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":dl\", \"<-\", \":threeseven\", \">>\", \":eighteightseven\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", ">>", ":eighteightseven"}), tokens) << "I tried calling ExtractTargetID on the token list {\":dl\", \"<-\", \":threeseven\", \">>\", \":eighteightseven\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "113130103_4", "-", "31617_9"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"113130103_4\", \"-\", \"31617_9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"113130103_4", "-", "31617_9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"113130103_4\", \"-\", \"31617_9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":fdxd", "<-", "9cce_17", ">>", "idk_29"};
    ASSERT_EQ(":fdxd", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":fdxd\", \"<-\", \"9cce_17\", \">>\", \"idk_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"9cce_17", ">>", "idk_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":fdxd\", \"<-\", \"9cce_17\", \">>\", \"idk_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":adw", "<-", "2d7h_20", "/", "140507_9"};
    ASSERT_EQ(":adw", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":adw\", \"<-\", \"2d7h_20\", \"/\", \"140507_9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2d7h_20", "/", "140507_9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":adw\", \"<-\", \"2d7h_20\", \"/\", \"140507_9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "11001401_5", ">>", "6d88_22"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"11001401_5\", \">>\", \"6d88_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"11001401_5", ">>", "6d88_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"11001401_5\", \">>\", \"6d88_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", ":nineninenine", "+", "11b70_17"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \":nineninenine\", \"+\", \"11b70_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine", "+", "11b70_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \":nineninenine\", \"+\", \"11b70_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "9657_18", "/", "66ef_21"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"9657_18\", \"/\", \"66ef_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"9657_18", "/", "66ef_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"9657_18\", \"/\", \"66ef_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", ":eighteightseven", "/", "195a_30"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \":eighteightseven\", \"/\", \"195a_30\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "/", "195a_30"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \":eighteightseven\", \"/\", \"195a_30\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":mwkqfh", "<-", ":onezero", "/", "35687"};
    ASSERT_EQ(":mwkqfh", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":mwkqfh\", \"<-\", \":onezero\", \"/\", \"35687\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "/", "35687"}), tokens) << "I tried calling ExtractTargetID on the token list {\":mwkqfh\", \"<-\", \":onezero\", \"/\", \"35687\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":vvrmfg", "<-", ":nineninenine", "/", "4f95_25"};
    ASSERT_EQ(":vvrmfg", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":vvrmfg\", \"<-\", \":nineninenine\", \"/\", \"4f95_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine", "/", "4f95_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":vvrmfg\", \"<-\", \":nineninenine\", \"/\", \"4f95_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "1252_30", "/", "29417"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"1252_30\", \"/\", \"29417\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1252_30", "/", "29417"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"1252_30\", \"/\", \"29417\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ic", "<-", "94233", "%", "6813_20"};
    ASSERT_EQ(":ic", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ic\", \"<-\", \"94233\", \"%\", \"6813_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"94233", "%", "6813_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ic\", \"<-\", \"94233\", \"%\", \"6813_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "28817", "+", "2c1e_32"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"28817\", \"+\", \"2c1e_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"28817", "+", "2c1e_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"28817\", \"+\", \"2c1e_32\"}, but it didn't prune the token list in the way I expected.";
  }
 
  // Operation with target base
  {
    vector<string> tokens = {":d", "<-", "25fb_24", "%", "17lh_24", "->", "14_5"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"25fb_24\", \"%\", \"17lh_24\", \"->\", \"14_5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"25fb_24", "%", "17lh_24", "->", "14_5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"25fb_24\", \"%\", \"17lh_24\", \"->\", \"14_5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":jzz", "<-", "fb3_28", "+", "12fd_34", "->", "29"};
    ASSERT_EQ(":jzz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":jzz\", \"<-\", \"fb3_28\", \"+\", \"12fd_34\", \"->\", \"29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"fb3_28", "+", "12fd_34", "->", "29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":jzz\", \"<-\", \"fb3_28\", \"+\", \"12fd_34\", \"->\", \"29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "514005_6", "-", "9911_14", "->", "6_32"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"514005_6\", \"-\", \"9911_14\", \"->\", \"6_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"514005_6", "-", "9911_14", "->", "6_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"514005_6\", \"-\", \"9911_14\", \"->\", \"6_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":iuq", "<-", ":onetwothree", "%", "v36_32", "->", "42_6"};
    ASSERT_EQ(":iuq", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":iuq\", \"<-\", \":onetwothree\", \"%\", \"v36_32\", \"->\", \"42_6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "%", "v36_32", "->", "42_6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":iuq\", \"<-\", \":onetwothree\", \"%\", \"v36_32\", \"->\", \"42_6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":aa", "<-", ":fivesixtwo", "/", "10110221121_3", "->", "25"};
    ASSERT_EQ(":aa", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":aa\", \"<-\", \":fivesixtwo\", \"/\", \"10110221121_3\", \"->\", \"25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "/", "10110221121_3", "->", "25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":aa\", \"<-\", \":fivesixtwo\", \"/\", \"10110221121_3\", \"->\", \"25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":er", "<-", "2mmh_31", "*", ":onezerozerothree", "->", "5"};
    ASSERT_EQ(":er", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":er\", \"<-\", \"2mmh_31\", \"*\", \":onezerozerothree\", \"->\", \"5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2mmh_31", "*", ":onezerozerothree", "->", "5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":er\", \"<-\", \"2mmh_31\", \"*\", \":onezerozerothree\", \"->\", \"5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":pz", "<-", "4dc9_16", "%", "325_24", "->", "20_5"};
    ASSERT_EQ(":pz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":pz\", \"<-\", \"4dc9_16\", \"%\", \"325_24\", \"->\", \"20_5\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4dc9_16", "%", "325_24", "->", "20_5"}), tokens) << "I tried calling ExtractTargetID on the token list {\":pz\", \"<-\", \"4dc9_16\", \"%\", \"325_24\", \"->\", \"20_5\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "1510_6", "*", "33cd_14", "->", "15_28"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"1510_6\", \"*\", \"33cd_14\", \"->\", \"15_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1510_6", "*", "33cd_14", "->", "15_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"1510_6\", \"*\", \"33cd_14\", \"->\", \"15_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "vft_34", ">>", "3ck_33", "->", "h_20"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"vft_34\", \">>\", \"3ck_33\", \"->\", \"h_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"vft_34", ">>", "3ck_33", "->", "h_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"vft_34\", \">>\", \"3ck_33\", \"->\", \"h_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "80890", "*", ":onezero", "->", "f_22"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"80890\", \"*\", \":onezero\", \"->\", \"f_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"80890", "*", ":onezero", "->", "f_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"80890\", \"*\", \":onezero\", \"->\", \"f_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", ":fivesixtwo", "%", ":eighteightseven", "->", "2"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \":fivesixtwo\", \"%\", \":eighteightseven\", \"->\", \"2\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "%", ":eighteightseven", "->", "2"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \":fivesixtwo\", \"%\", \":eighteightseven\", \"->\", \"2\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "78721", "/", "82895", "->", "24_8"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"78721\", \"/\", \"82895\", \"->\", \"24_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"78721", "/", "82895", "->", "24_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"78721\", \"/\", \"82895\", \"->\", \"24_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", ":nineninenine", "/", "pa9_28", "->", "11110_2"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \":nineninenine\", \"/\", \"pa9_28\", \"->\", \"11110_2\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":nineninenine", "/", "pa9_28", "->", "11110_2"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \":nineninenine\", \"/\", \"pa9_28\", \"->\", \"11110_2\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", "10850_9", ">>", "63129", "->", "e_28"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \"10850_9\", \">>\", \"63129\", \"->\", \"e_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10850_9", ">>", "63129", "->", "e_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \"10850_9\", \">>\", \"63129\", \"->\", \"e_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", ":onezero", "%", "33938", "->", "7_10"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \":onezero\", \"%\", \"33938\", \"->\", \"7_10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "%", "33938", "->", "7_10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \":onezero\", \"%\", \"33938\", \"->\", \"7_10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":h", "<-", "79860", ">>", ":twotwo", "->", "8_26"};
    ASSERT_EQ(":h", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":h\", \"<-\", \"79860\", \">>\", \":twotwo\", \"->\", \"8_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"79860", ">>", ":twotwo", "->", "8_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":h\", \"<-\", \"79860\", \">>\", \":twotwo\", \"->\", \"8_26\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "96864", "%", ":onezero", "->", "29"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"96864\", \"%\", \":onezero\", \"->\", \"29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"96864", "%", ":onezero", "->", "29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"96864\", \"%\", \":onezero\", \"->\", \"29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "c932_16", "/", "1ia6_26", "->", "12_6"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"c932_16\", \"/\", \"1ia6_26\", \"->\", \"12_6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"c932_16", "/", "1ia6_26", "->", "12_6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"c932_16\", \"/\", \"1ia6_26\", \"->\", \"12_6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", ":threeseven", "*", ":onezerozerothree", "->", "c_13"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \":threeseven\", \"*\", \":onezerozerothree\", \"->\", \"c_13\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "*", ":onezerozerothree", "->", "c_13"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \":threeseven\", \"*\", \":onezerozerothree\", \"->\", \"c_13\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", ":eighteightseven", "<<", ":twotwo", "->", "5_28"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \":eighteightseven\", \"<<\", \":twotwo\", \"->\", \"5_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "<<", ":twotwo", "->", "5_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \":eighteightseven\", \"<<\", \":twotwo\", \"->\", \"5_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":mi", "<-", "24055", "*", ":onezero", "->", "c_15"};
    ASSERT_EQ(":mi", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":mi\", \"<-\", \"24055\", \"*\", \":onezero\", \"->\", \"c_15\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"24055", "*", ":onezero", "->", "c_15"}), tokens) << "I tried calling ExtractTargetID on the token list {\":mi\", \"<-\", \"24055\", \"*\", \":onezero\", \"->\", \"c_15\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "171156_8", "%", "24ue_31", "->", "16"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"171156_8\", \"%\", \"24ue_31\", \"->\", \"16\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"171156_8", "%", "24ue_31", "->", "16"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"171156_8\", \"%\", \"24ue_31\", \"->\", \"16\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":r", "<-", "2e7p_29", "%", "9e5_27", "->", "2_32"};
    ASSERT_EQ(":r", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":r\", \"<-\", \"2e7p_29\", \"%\", \"9e5_27\", \"->\", \"2_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"2e7p_29", "%", "9e5_27", "->", "2_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":r\", \"<-\", \"2e7p_29\", \"%\", \"9e5_27\", \"->\", \"2_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ett", "<-", "692k_25", ">>", "1ubx_34", "->", "12"};
    ASSERT_EQ(":ett", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ett\", \"<-\", \"692k_25\", \">>\", \"1ubx_34\", \"->\", \"12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"692k_25", ">>", "1ubx_34", "->", "12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ett\", \"<-\", \"692k_25\", \">>\", \"1ubx_34\", \"->\", \"12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", "1qoc_34", "+", "318c8_13", "->", "3_7"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \"1qoc_34\", \"+\", \"318c8_13\", \"->\", \"3_7\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1qoc_34", "+", "318c8_13", "->", "3_7"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \"1qoc_34\", \"+\", \"318c8_13\", \"->\", \"3_7\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", "99034", "/", ":onezerozero", "->", "a_28"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \"99034\", \"/\", \":onezerozero\", \"->\", \"a_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"99034", "/", ":onezerozero", "->", "a_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \"99034\", \"/\", \":onezerozero\", \"->\", \"a_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", ":onezero", "/", "2020_23", "->", "d_28"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \":onezero\", \"/\", \"2020_23\", \"->\", \"d_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", "/", "2020_23", "->", "d_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \":onezero\", \"/\", \"2020_23\", \"->\", \"d_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":wn", "<-", "11010202100_3", "+", "10e3_18", "->", "15_8"};
    ASSERT_EQ(":wn", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":wn\", \"<-\", \"11010202100_3\", \"+\", \"10e3_18\", \"->\", \"15_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"11010202100_3", "+", "10e3_18", "->", "15_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":wn\", \"<-\", \"11010202100_3\", \"+\", \"10e3_18\", \"->\", \"15_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":pxei", "<-", "201036_8", "+", "60hb_18", "->", "29"};
    ASSERT_EQ(":pxei", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":pxei\", \"<-\", \"201036_8\", \"+\", \"60hb_18\", \"->\", \"29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"201036_8", "+", "60hb_18", "->", "29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":pxei\", \"<-\", \"201036_8\", \"+\", \"60hb_18\", \"->\", \"29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":md", "<-", "1ncm_25", ">>", ":onezero", "->", "34"};
    ASSERT_EQ(":md", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":md\", \"<-\", \"1ncm_25\", \">>\", \":onezero\", \"->\", \"34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1ncm_25", ">>", ":onezero", "->", "34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":md\", \"<-\", \"1ncm_25\", \">>\", \":onezero\", \"->\", \"34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":qzs", "<-", "82853", "/", "14506_10", "->", "5_24"};
    ASSERT_EQ(":qzs", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":qzs\", \"<-\", \"82853\", \"/\", \"14506_10\", \"->\", \"5_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"82853", "/", "14506_10", "->", "5_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":qzs\", \"<-\", \"82853\", \"/\", \"14506_10\", \"->\", \"5_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":d", "<-", "e4c1_16", "%", "21102001_3", "->", "m_34"};
    ASSERT_EQ(":d", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":d\", \"<-\", \"e4c1_16\", \"%\", \"21102001_3\", \"->\", \"m_34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"e4c1_16", "%", "21102001_3", "->", "m_34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":d\", \"<-\", \"e4c1_16\", \"%\", \"21102001_3\", \"->\", \"m_34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "236305_8", "+", ":twotwo", "->", "202_3"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"236305_8\", \"+\", \":twotwo\", \"->\", \"202_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"236305_8", "+", ":twotwo", "->", "202_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"236305_8\", \"+\", \":twotwo\", \"->\", \"202_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":uf", "<-", ":onezerozero", "+", ":onefivenineeight", "->", "e_26"};
    ASSERT_EQ(":uf", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":uf\", \"<-\", \":onezerozero\", \"+\", \":onefivenineeight\", \"->\", \"e_26\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozero", "+", ":onefivenineeight", "->", "e_26"}), tokens) << "I tried calling ExtractTargetID on the token list {\":uf\", \"<-\", \":onezerozero\", \"+\", \":onefivenineeight\", \"->\", \"e_26\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":i", "<-", "93225", "+", "46024", "->", "19_19"};
    ASSERT_EQ(":i", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":i\", \"<-\", \"93225\", \"+\", \"46024\", \"->\", \"19_19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"93225", "+", "46024", "->", "19_19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":i\", \"<-\", \"93225\", \"+\", \"46024\", \"->\", \"19_19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "62558", "/", ":onezerozero", "->", "33_4"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"62558\", \"/\", \":onezerozero\", \"->\", \"33_4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"62558", "/", ":onezerozero", "->", "33_4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"62558\", \"/\", \":onezerozero\", \"->\", \"33_4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "11120404_5", "-", "3na4_29", "->", "100001_2"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"11120404_5\", \"-\", \"3na4_29\", \"->\", \"100001_2\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"11120404_5", "-", "3na4_29", "->", "100001_2"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"11120404_5\", \"-\", \"3na4_29\", \"->\", \"100001_2\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "120560_7", "+", "43980", "->", "7_32"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"120560_7\", \"+\", \"43980\", \"->\", \"7_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"120560_7", "+", "43980", "->", "7_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"120560_7\", \"+\", \"43980\", \"->\", \"7_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":vz", "<-", "39209", ">>", "93439_10", "->", "23_8"};
    ASSERT_EQ(":vz", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":vz\", \"<-\", \"39209\", \">>\", \"93439_10\", \"->\", \"23_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"39209", ">>", "93439_10", "->", "23_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":vz\", \"<-\", \"39209\", \">>\", \"93439_10\", \"->\", \"23_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":bwvj", "<-", "3kl7_23", "-", "41186", "->", "2_18"};
    ASSERT_EQ(":bwvj", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":bwvj\", \"<-\", \"3kl7_23\", \"-\", \"41186\", \"->\", \"2_18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3kl7_23", "-", "41186", "->", "2_18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":bwvj\", \"<-\", \"3kl7_23\", \"-\", \"41186\", \"->\", \"2_18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "144081_9", ">>", "n5d_32", "->", "j_25"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"144081_9\", \">>\", \"n5d_32\", \"->\", \"j_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"144081_9", ">>", "n5d_32", "->", "j_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"144081_9\", \">>\", \"n5d_32\", \"->\", \"j_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", ":onezerozerothree", "+", "67452", "->", "5_17"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \":onezerozerothree\", \"+\", \"67452\", \"->\", \"5_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozerothree", "+", "67452", "->", "5_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \":onezerozerothree\", \"+\", \"67452\", \"->\", \"5_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", ":onezerozerothree", "/", "7gjd_21", "->", "22"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \":onezerozerothree\", \"/\", \"7gjd_21\", \"->\", \"22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezerozerothree", "/", "7gjd_21", "->", "22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \":onezerozerothree\", \"/\", \"7gjd_21\", \"->\", \"22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "3dha_22", "%", "1bcl_26", "->", "17"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"3dha_22\", \"%\", \"1bcl_26\", \"->\", \"17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3dha_22", "%", "1bcl_26", "->", "17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"3dha_22\", \"%\", \"1bcl_26\", \"->\", \"17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":eo", "<-", "4962_17", "+", "24a7_16", "->", "1a_23"};
    ASSERT_EQ(":eo", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":eo\", \"<-\", \"4962_17\", \"+\", \"24a7_16\", \"->\", \"1a_23\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"4962_17", "+", "24a7_16", "->", "1a_23"}), tokens) << "I tried calling ExtractTargetID on the token list {\":eo\", \"<-\", \"4962_17\", \"+\", \"24a7_16\", \"->\", \"1a_23\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":ul", "<-", "94285", ">>", "19768", "->", "13_11"};
    ASSERT_EQ(":ul", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":ul\", \"<-\", \"94285\", \">>\", \"19768\", \"->\", \"13_11\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"94285", ">>", "19768", "->", "13_11"}), tokens) << "I tried calling ExtractTargetID on the token list {\":ul\", \"<-\", \"94285\", \">>\", \"19768\", \"->\", \"13_11\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", ":onefivenineeight", "%", ":onetwothree", "->", "6"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \":onefivenineeight\", \"%\", \":onetwothree\", \"->\", \"6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "%", ":onetwothree", "->", "6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \":onefivenineeight\", \"%\", \":onetwothree\", \"->\", \"6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "57k4_21", "<<", ":onezero", "->", "29"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"57k4_21\", \"<<\", \":onezero\", \"->\", \"29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"57k4_21", "<<", ":onezero", "->", "29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"57k4_21\", \"<<\", \":onezero\", \"->\", \"29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", ":onefivenineeight", ">>", "6ffd_18", "->", "6_25"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \":onefivenineeight\", \">>\", \"6ffd_18\", \"->\", \"6_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", ">>", "6ffd_18", "->", "6_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \":onefivenineeight\", \">>\", \"6ffd_18\", \"->\", \"6_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":j", "<-", "1o59_29", "/", "56c5_14", "->", "k_23"};
    ASSERT_EQ(":j", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":j\", \"<-\", \"1o59_29\", \"/\", \"56c5_14\", \"->\", \"k_23\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1o59_29", "/", "56c5_14", "->", "k_23"}), tokens) << "I tried calling ExtractTargetID on the token list {\":j\", \"<-\", \"1o59_29\", \"/\", \"56c5_14\", \"->\", \"k_23\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "154i_21", "*", "9552", "->", "d_24"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"154i_21\", \"*\", \"9552\", \"->\", \"d_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"154i_21", "*", "9552", "->", "d_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"154i_21\", \"*\", \"9552\", \"->\", \"d_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":t", "<-", "69884", "%", "5f18_19", "->", "6_27"};
    ASSERT_EQ(":t", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":t\", \"<-\", \"69884\", \"%\", \"5f18_19\", \"->\", \"6_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"69884", "%", "5f18_19", "->", "6_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":t\", \"<-\", \"69884\", \"%\", \"5f18_19\", \"->\", \"6_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":of", "<-", ":onetwothree", "+", "3mmj_29", "->", "12"};
    ASSERT_EQ(":of", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":of\", \"<-\", \":onetwothree\", \"+\", \"3mmj_29\", \"->\", \"12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "+", "3mmj_29", "->", "12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":of\", \"<-\", \":onetwothree\", \"+\", \"3mmj_29\", \"->\", \"12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", ":twotwo", "/", "163h_29", "->", "22_4"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \":twotwo\", \"/\", \"163h_29\", \"->\", \"22_4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":twotwo", "/", "163h_29", "->", "22_4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \":twotwo\", \"/\", \"163h_29\", \"->\", \"22_4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "83065", ">>", ":onefivenineeight", "->", "t_31"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"83065\", \">>\", \":onefivenineeight\", \"->\", \"t_31\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"83065", ">>", ":onefivenineeight", "->", "t_31"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"83065\", \">>\", \":onefivenineeight\", \"->\", \"t_31\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", ":onetwothree", "-", ":threeseven", "->", "1c_22"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \":onetwothree\", \"-\", \":threeseven\", \"->\", \"1c_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "-", ":threeseven", "->", "1c_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \":onetwothree\", \"-\", \":threeseven\", \"->\", \"1c_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", "21gr_29", "%", "4h7e_27", "->", "14_9"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \"21gr_29\", \"%\", \"4h7e_27\", \"->\", \"14_9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"21gr_29", "%", "4h7e_27", "->", "14_9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \"21gr_29\", \"%\", \"4h7e_27\", \"->\", \"14_9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "32an_30", ">>", "8d6c_17", "->", "29"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"32an_30\", \">>\", \"8d6c_17\", \"->\", \"29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"32an_30", ">>", "8d6c_17", "->", "29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"32an_30\", \">>\", \"8d6c_17\", \"->\", \"29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", ":onezero", ">>", "404220_7", "->", "7_10"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \":onezero\", \">>\", \"404220_7\", \"->\", \"7_10\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", ">>", "404220_7", "->", "7_10"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \":onezero\", \">>\", \"404220_7\", \"->\", \"7_10\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", ":onefivenineeight", "/", ":onezerozerothree", "->", "17_28"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \":onefivenineeight\", \"/\", \":onezerozerothree\", \"->\", \"17_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "/", ":onezerozerothree", "->", "17_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \":onefivenineeight\", \"/\", \":onezerozerothree\", \"->\", \"17_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":b", "<-", ":onetwothree", "/", "5299_21", "->", "6_18"};
    ASSERT_EQ(":b", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":b\", \"<-\", \":onetwothree\", \"/\", \"5299_21\", \"->\", \"6_18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "/", "5299_21", "->", "6_18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":b\", \"<-\", \":onetwothree\", \"/\", \"5299_21\", \"->\", \"6_18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "39942_10", ">>", "3ffj_28", "->", "110_3"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"39942_10\", \">>\", \"3ffj_28\", \"->\", \"110_3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"39942_10", ">>", "3ffj_28", "->", "110_3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"39942_10\", \">>\", \"3ffj_28\", \"->\", \"110_3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "1b339_13", "*", "140054_7", "->", "g_33"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"1b339_13\", \"*\", \"140054_7\", \"->\", \"g_33\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1b339_13", "*", "140054_7", "->", "g_33"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"1b339_13\", \"*\", \"140054_7\", \"->\", \"g_33\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", ":onetwothree", "%", "2001_3", "->", "34"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \":onetwothree\", \"%\", \"2001_3\", \"->\", \"34\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "%", "2001_3", "->", "34"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \":onetwothree\", \"%\", \"2001_3\", \"->\", \"34\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":fws", "<-", ":threeseven", "*", "81129", "->", "19_24"};
    ASSERT_EQ(":fws", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":fws\", \"<-\", \":threeseven\", \"*\", \"81129\", \"->\", \"19_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":threeseven", "*", "81129", "->", "19_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":fws\", \"<-\", \":threeseven\", \"*\", \"81129\", \"->\", \"19_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":mmx", "<-", "1ad6_22", "%", "32215", "->", "j_27"};
    ASSERT_EQ(":mmx", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":mmx\", \"<-\", \"1ad6_22\", \"%\", \"32215\", \"->\", \"j_27\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"1ad6_22", "%", "32215", "->", "j_27"}), tokens) << "I tried calling ExtractTargetID on the token list {\":mmx\", \"<-\", \"1ad6_22\", \"%\", \"32215\", \"->\", \"j_27\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "25l2_29", "%", ":onetwothree", "->", "28"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"25l2_29\", \"%\", \":onetwothree\", \"->\", \"28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"25l2_29", "%", ":onetwothree", "->", "28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"25l2_29\", \"%\", \":onetwothree\", \"->\", \"28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", "93953_10", ">>", ":eighteightseven", "->", "10_25"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \"93953_10\", \">>\", \":eighteightseven\", \"->\", \"10_25\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"93953_10", ">>", ":eighteightseven", "->", "10_25"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \"93953_10\", \">>\", \":eighteightseven\", \"->\", \"10_25\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", "79884", "+", "19dq_27", "->", "18"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \"79884\", \"+\", \"19dq_27\", \"->\", \"18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"79884", "+", "19dq_27", "->", "18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \"79884\", \"+\", \"19dq_27\", \"->\", \"18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "41534_8", ">>", "4771_14", "->", "h_22"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"41534_8\", \">>\", \"4771_14\", \"->\", \"h_22\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"41534_8", ">>", "4771_14", "->", "h_22"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"41534_8\", \">>\", \"4771_14\", \"->\", \"h_22\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "10211210200_3", "%", "7583_10", "->", "a_29"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"10211210200_3\", \"%\", \"7583_10\", \"->\", \"a_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10211210200_3", "%", "7583_10", "->", "a_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"10211210200_3\", \"%\", \"7583_10\", \"->\", \"a_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "8c4g_22", "/", "513306_7", "->", "27_13"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"8c4g_22\", \"/\", \"513306_7\", \"->\", \"27_13\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"8c4g_22", "/", "513306_7", "->", "27_13"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"8c4g_22\", \"/\", \"513306_7\", \"->\", \"27_13\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":n", "<-", "d3gc_17", "*", ":onezero", "->", "6_17"};
    ASSERT_EQ(":n", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":n\", \"<-\", \"d3gc_17\", \"*\", \":onezero\", \"->\", \"6_17\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"d3gc_17", "*", ":onezero", "->", "6_17"}), tokens) << "I tried calling ExtractTargetID on the token list {\":n\", \"<-\", \"d3gc_17\", \"*\", \":onezero\", \"->\", \"6_17\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":o", "<-", "48555", "%", "15b7_25", "->", "25_8"};
    ASSERT_EQ(":o", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":o\", \"<-\", \"48555\", \"%\", \"15b7_25\", \"->\", \"25_8\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"48555", "%", "15b7_25", "->", "25_8"}), tokens) << "I tried calling ExtractTargetID on the token list {\":o\", \"<-\", \"48555\", \"%\", \"15b7_25\", \"->\", \"25_8\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "38597_11", ">>", "86325", "->", "2_33"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"38597_11\", \">>\", \"86325\", \"->\", \"2_33\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"38597_11", ">>", "86325", "->", "2_33"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"38597_11\", \">>\", \"86325\", \"->\", \"2_33\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":l", "<-", "dj2_35", "/", ":onezerozerothree", "->", "19"};
    ASSERT_EQ(":l", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":l\", \"<-\", \"dj2_35\", \"/\", \":onezerozerothree\", \"->\", \"19\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"dj2_35", "/", ":onezerozerothree", "->", "19"}), tokens) << "I tried calling ExtractTargetID on the token list {\":l\", \"<-\", \"dj2_35\", \"/\", \":onezerozerothree\", \"->\", \"19\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "31ll_23", "%", "bcc6_15", "->", "6"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"31ll_23\", \"%\", \"bcc6_15\", \"->\", \"6\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"31ll_23", "%", "bcc6_15", "->", "6"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"31ll_23\", \"%\", \"bcc6_15\", \"->\", \"6\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":p", "<-", "32050_12", "-", ":onetwothree", "->", "11_4"};
    ASSERT_EQ(":p", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":p\", \"<-\", \"32050_12\", \"-\", \":onetwothree\", \"->\", \"11_4\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"32050_12", "-", ":onetwothree", "->", "11_4"}), tokens) << "I tried calling ExtractTargetID on the token list {\":p\", \"<-\", \"32050_12\", \"-\", \":onetwothree\", \"->\", \"11_4\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", ":onetwothree", "+", "66972", "->", "15_12"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \":onetwothree\", \"+\", \"66972\", \"->\", \"15_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onetwothree", "+", "66972", "->", "15_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \":onetwothree\", \"+\", \"66972\", \"->\", \"15_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":m", "<-", "965b_12", "*", ":onezerozerothree", "->", "1f_20"};
    ASSERT_EQ(":m", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":m\", \"<-\", \"965b_12\", \"*\", \":onezerozerothree\", \"->\", \"1f_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"965b_12", "*", ":onezerozerothree", "->", "1f_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":m\", \"<-\", \"965b_12\", \"*\", \":onezerozerothree\", \"->\", \"1f_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", ":onefivenineeight", "*", "4aib_19", "->", "36"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \":onefivenineeight\", \"*\", \"4aib_19\", \"->\", \"36\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onefivenineeight", "*", "4aib_19", "->", "36"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \":onefivenineeight\", \"*\", \"4aib_19\", \"->\", \"36\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", ":onezero", ">>", ":fivesixtwo", "->", "5_24"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \":onezero\", \">>\", \":fivesixtwo\", \"->\", \"5_24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":onezero", ">>", ":fivesixtwo", "->", "5_24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \":onezero\", \">>\", \":fivesixtwo\", \"->\", \"5_24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":wa", "<-", "10bde_16", ">>", ":threeseven", "->", "1a_20"};
    ASSERT_EQ(":wa", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":wa\", \"<-\", \"10bde_16\", \">>\", \":threeseven\", \"->\", \"1a_20\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"10bde_16", ">>", ":threeseven", "->", "1a_20"}), tokens) << "I tried calling ExtractTargetID on the token list {\":wa\", \"<-\", \"10bde_16\", \">>\", \":threeseven\", \"->\", \"1a_20\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":e", "<-", "71144", "%", ":eighteightseven", "->", "15_14"};
    ASSERT_EQ(":e", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":e\", \"<-\", \"71144\", \"%\", \":eighteightseven\", \"->\", \"15_14\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"71144", "%", ":eighteightseven", "->", "15_14"}), tokens) << "I tried calling ExtractTargetID on the token list {\":e\", \"<-\", \"71144\", \"%\", \":eighteightseven\", \"->\", \"15_14\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", ":eighteightseven", "%", "17gc_26", "->", "9_28"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \":eighteightseven\", \"%\", \"17gc_26\", \"->\", \"9_28\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "%", "17gc_26", "->", "9_28"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \":eighteightseven\", \"%\", \"17gc_26\", \"->\", \"9_28\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":z", "<-", "542121_6", "/", "19bb7_14", "->", "r_35"};
    ASSERT_EQ(":z", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":z\", \"<-\", \"542121_6\", \"/\", \"19bb7_14\", \"->\", \"r_35\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"542121_6", "/", "19bb7_14", "->", "r_35"}), tokens) << "I tried calling ExtractTargetID on the token list {\":z\", \"<-\", \"542121_6\", \"/\", \"19bb7_14\", \"->\", \"r_35\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":q", "<-", ":fivesixtwo", "/", "10100111110010000_2", "->", "9_12"};
    ASSERT_EQ(":q", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":q\", \"<-\", \":fivesixtwo\", \"/\", \"10100111110010000_2\", \"->\", \"9_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "/", "10100111110010000_2", "->", "9_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":q\", \"<-\", \":fivesixtwo\", \"/\", \"10100111110010000_2\", \"->\", \"9_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":c", "<-", ":fivesixtwo", "+", "84795", "->", "100001_2"};
    ASSERT_EQ(":c", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":c\", \"<-\", \":fivesixtwo\", \"+\", \"84795\", \"->\", \"100001_2\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":fivesixtwo", "+", "84795", "->", "100001_2"}), tokens) << "I tried calling ExtractTargetID on the token list {\":c\", \"<-\", \":fivesixtwo\", \"+\", \"84795\", \"->\", \"100001_2\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":xj", "<-", "hr3_33", "/", "66778", "->", "j_29"};
    ASSERT_EQ(":xj", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":xj\", \"<-\", \"hr3_33\", \"/\", \"66778\", \"->\", \"j_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"hr3_33", "/", "66778", "->", "j_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":xj\", \"<-\", \"hr3_33\", \"/\", \"66778\", \"->\", \"j_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":a", "<-", "36964", "-", "4080", "->", "3"};
    ASSERT_EQ(":a", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":a\", \"<-\", \"36964\", \"-\", \"4080\", \"->\", \"3\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"36964", "-", "4080", "->", "3"}), tokens) << "I tried calling ExtractTargetID on the token list {\":a\", \"<-\", \"36964\", \"-\", \"4080\", \"->\", \"3\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":u", "<-", ":eighteightseven", "+", "341202_7", "->", "9"};
    ASSERT_EQ(":u", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":u\", \"<-\", \":eighteightseven\", \"+\", \"341202_7\", \"->\", \"9\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({":eighteightseven", "+", "341202_7", "->", "9"}), tokens) << "I tried calling ExtractTargetID on the token list {\":u\", \"<-\", \":eighteightseven\", \"+\", \"341202_7\", \"->\", \"9\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":qr", "<-", "36o0_29", "%", "23a74_14", "->", "18"};
    ASSERT_EQ(":qr", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":qr\", \"<-\", \"36o0_29\", \"%\", \"23a74_14\", \"->\", \"18\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"36o0_29", "%", "23a74_14", "->", "18"}), tokens) << "I tried calling ExtractTargetID on the token list {\":qr\", \"<-\", \"36o0_29\", \"%\", \"23a74_14\", \"->\", \"18\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":y", "<-", "57230", ">>", "b9a_30", "->", "24"};
    ASSERT_EQ(":y", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":y\", \"<-\", \"57230\", \">>\", \"b9a_30\", \"->\", \"24\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"57230", ">>", "b9a_30", "->", "24"}), tokens) << "I tried calling ExtractTargetID on the token list {\":y\", \"<-\", \"57230\", \">>\", \"b9a_30\", \"->\", \"24\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "96517", "/", "1k38_22", "->", "h_29"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"96517\", \"/\", \"1k38_22\", \"->\", \"h_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"96517", "/", "1k38_22", "->", "h_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"96517\", \"/\", \"1k38_22\", \"->\", \"h_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "16gf_21", "*", "12gdg_17", "->", "8_32"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"16gf_21\", \"*\", \"12gdg_17\", \"->\", \"8_32\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"16gf_21", "*", "12gdg_17", "->", "8_32"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"16gf_21\", \"*\", \"12gdg_17\", \"->\", \"8_32\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":f", "<-", "5c73_19", ">>", ":twotwo", "->", "9_29"};
    ASSERT_EQ(":f", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":f\", \"<-\", \"5c73_19\", \">>\", \":twotwo\", \"->\", \"9_29\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"5c73_19", ">>", ":twotwo", "->", "9_29"}), tokens) << "I tried calling ExtractTargetID on the token list {\":f\", \"<-\", \"5c73_19\", \">>\", \":twotwo\", \"->\", \"9_29\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":g", "<-", "ldl_27", "+", "49167", "->", "6_21"};
    ASSERT_EQ(":g", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":g\", \"<-\", \"ldl_27\", \"+\", \"49167\", \"->\", \"6_21\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"ldl_27", "+", "49167", "->", "6_21"}), tokens) << "I tried calling ExtractTargetID on the token list {\":g\", \"<-\", \"ldl_27\", \"+\", \"49167\", \"->\", \"6_21\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":v", "<-", "26576_8", "%", ":threeseven", "->", "12_12"};
    ASSERT_EQ(":v", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":v\", \"<-\", \"26576_8\", \"%\", \":threeseven\", \"->\", \"12_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"26576_8", "%", ":threeseven", "->", "12_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":v\", \"<-\", \"26576_8\", \"%\", \":threeseven\", \"->\", \"12_12\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":x", "<-", "22007_10", "/", "27107_9", "->", "11_35"};
    ASSERT_EQ(":x", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":x\", \"<-\", \"22007_10\", \"/\", \"27107_9\", \"->\", \"11_35\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"22007_10", "/", "27107_9", "->", "11_35"}), tokens) << "I tried calling ExtractTargetID on the token list {\":x\", \"<-\", \"22007_10\", \"/\", \"27107_9\", \"->\", \"11_35\"}, but it didn't prune the token list in the way I expected.";
  }
  {
    vector<string> tokens = {":w", "<-", "3496", "%", "2b145_13", "->", "13_12"};
    ASSERT_EQ(":w", Baseball::ExtractTargetID(tokens)) << "I tried calling ExtractTargetID to extract the name of destination variable from the token list {\":w\", \"<-\", \"3496\", \"%\", \"2b145_13\", \"->\", \"13_12\"}, but I didn't get back the value I expected.";
    ASSERT_EQ(vector<string>({"3496", "%", "2b145_13", "->", "13_12"}), tokens) << "I tried calling ExtractTargetID on the token list {\":w\", \"<-\", \"3496\", \"%\", \"2b145_13\", \"->\", \"13_12\"}, but it didn't prune the token list in the way I expected.";
  }
}

TEST(Baseball, Tokenize) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ(vector<string>({":a", "<-", ":onetwothree", "+", "155b4_15"}), Baseball::Tokenize(":a <- :onetwothree + 155b4_15"));
  ASSERT_EQ(vector<string>({"g0k_29", "->", "43_6"}), Baseball::Tokenize("g0k_29 -> 43_6"));
  ASSERT_EQ(vector<string>({":g", "<-", ":threeseven", "->", "3"}), Baseball::Tokenize(":g <- :threeseven -> 3"));
  ASSERT_EQ(vector<string>({":y", "<-", "16b09_13", "->", "e_22"}), Baseball::Tokenize(":y <- 16b09_13 -> e_22"));
  ASSERT_EQ(vector<string>({":h", "<-", "445005_6", "+", "1nda_26"}), Baseball::Tokenize(":h <- 445005_6 + 1nda_26"));
  ASSERT_EQ(vector<string>({"25982", "/", "80060"}), Baseball::Tokenize("25982 / 80060"));
  ASSERT_EQ(vector<string>({"3el4_24", "%", "70248", "->", "6"}), Baseball::Tokenize("3el4_24 % 70248 -> 6"));
  ASSERT_EQ(vector<string>({":s", "<-", "1a2x_34", "->", "1c_24"}), Baseball::Tokenize(":s <- 1a2x_34 -> 1c_24"));
  ASSERT_EQ(vector<string>({":t", "<-", ":onezero", "*", ":eighteightseven", "->", "j_32"}), Baseball::Tokenize(":t <- :onezero * :eighteightseven -> j_32"));
  ASSERT_EQ(vector<string>({":threeseven", "->", "19_24"}), Baseball::Tokenize(":threeseven -> 19_24"));
  ASSERT_EQ(vector<string>({":w", "<-", "5628_26"}), Baseball::Tokenize(":w <- 5628_26"));
  ASSERT_EQ(vector<string>({":onezero", "->", "222_3"}), Baseball::Tokenize(":onezero -> 222_3"));
  ASSERT_EQ(vector<string>({"1340b_14", "->", "o_30"}), Baseball::Tokenize("1340b_14 -> o_30"));
  ASSERT_EQ(vector<string>({":c", "<-", "70423_9", "->", "1c_17"}), Baseball::Tokenize(":c <- 70423_9 -> 1c_17"));
  ASSERT_EQ(vector<string>({":n", "<-", "5d5c_23", "->", "12_3"}), Baseball::Tokenize(":n <- 5d5c_23 -> 12_3"));
  ASSERT_EQ(vector<string>({"16376", "->", "20"}), Baseball::Tokenize("16376 -> 20"));
  ASSERT_EQ(vector<string>({"c3ad_17", "%", ":onetwothree", "->", "11_3"}), Baseball::Tokenize("c3ad_17 % :onetwothree -> 11_3"));
  ASSERT_EQ(vector<string>({":n", "<-", "158d5_16", "*", "32bd_15"}), Baseball::Tokenize(":n <- 158d5_16 * 32bd_15"));
  ASSERT_EQ(vector<string>({":g", "<-", "2bqq_31", "->", "3_33"}), Baseball::Tokenize(":g <- 2bqq_31 -> 3_33"));
  ASSERT_EQ(vector<string>({"4190_23"}), Baseball::Tokenize("4190_23"));
  ASSERT_EQ(vector<string>({":r", "<-", "251030_7"}), Baseball::Tokenize(":r <- 251030_7"));
  ASSERT_EQ(vector<string>({":e", "<-", "2200021110_3", "->", "9_11"}), Baseball::Tokenize(":e <- 2200021110_3 -> 9_11"));
  ASSERT_EQ(vector<string>({"2d9e_34", ">>", "4gqh_27", "->", "b_22"}), Baseball::Tokenize("2d9e_34 >> 4gqh_27 -> b_22"));
  ASSERT_EQ(vector<string>({"111100112_3", "*", "b74c_15"}), Baseball::Tokenize("111100112_3 * b74c_15"));
  ASSERT_EQ(vector<string>({"56075_9", "->", "1b_22"}), Baseball::Tokenize("56075_9 -> 1b_22"));
  ASSERT_EQ(vector<string>({":onezerozerothree", "->", "31_8"}), Baseball::Tokenize(":onezerozerothree -> 31_8"));
  ASSERT_EQ(vector<string>({"82497", "-", "1ko3_35", "->", "25"}), Baseball::Tokenize("82497 - 1ko3_35 -> 25"));
  ASSERT_EQ(vector<string>({"88202", "*", ":onetwothree", "->", "7_31"}), Baseball::Tokenize("88202 * :onetwothree -> 7_31"));
  ASSERT_EQ(vector<string>({":x", "<-", "5095_12", "-", ":onetwothree"}), Baseball::Tokenize(":x <- 5095_12 - :onetwothree"));
  ASSERT_EQ(vector<string>({":y", "<-", ":nineninenine"}), Baseball::Tokenize(":y <- :nineninenine"));
  ASSERT_EQ(vector<string>({":b", "<-", "9675_19", "+", "2547_34", "->", "15"}), Baseball::Tokenize(":b <- 9675_19 + 2547_34 -> 15"));
  ASSERT_EQ(vector<string>({"4h4h_18", "->", "5_29"}), Baseball::Tokenize("4h4h_18 -> 5_29"));
  ASSERT_EQ(vector<string>({":s", "<-", "1qn3_35", "*", "9365", "->", "t_34"}), Baseball::Tokenize(":s <- 1qn3_35 * 9365 -> t_34"));
  ASSERT_EQ(vector<string>({":nineninenine"}), Baseball::Tokenize(":nineninenine"));
  ASSERT_EQ(vector<string>({":hygk", "<-", "25715"}), Baseball::Tokenize(":hygk <- 25715"));
  ASSERT_EQ(vector<string>({"1101120022_3", "/", "1f60_27"}), Baseball::Tokenize("1101120022_3 / 1f60_27"));
  ASSERT_EQ(vector<string>({":eighteightseven", "+", "3i8b_29", "->", "23_6"}), Baseball::Tokenize(":eighteightseven + 3i8b_29 -> 23_6"));
  ASSERT_EQ(vector<string>({":w", "<-", "1j12_29", "-", ":fivesixtwo", "->", "18_18"}), Baseball::Tokenize(":w <- 1j12_29 - :fivesixtwo -> 18_18"));
  ASSERT_EQ(vector<string>({":w", "<-", ":onezero", ">>", "358m_28"}), Baseball::Tokenize(":w <- :onezero >> 358m_28"));
  ASSERT_EQ(vector<string>({":l", "<-", "2i6m_23", "+", "38452", "->", "10_12"}), Baseball::Tokenize(":l <- 2i6m_23 + 38452 -> 10_12"));
  ASSERT_EQ(vector<string>({"1021211220_3", "->", "k_29"}), Baseball::Tokenize("1021211220_3 -> k_29"));
  ASSERT_EQ(vector<string>({":i", "<-", "77af_23", "->", "37_8"}), Baseball::Tokenize(":i <- 77af_23 -> 37_8"));
  ASSERT_EQ(vector<string>({":q", "<-", "5e61_22"}), Baseball::Tokenize(":q <- 5e61_22"));
  ASSERT_EQ(vector<string>({":threeseven", ">>", ":onezero"}), Baseball::Tokenize(":threeseven >> :onezero"));
  ASSERT_EQ(vector<string>({":v", "<-", "74777"}), Baseball::Tokenize(":v <- 74777"));
  ASSERT_EQ(vector<string>({":fivesixtwo", "->", "4_11"}), Baseball::Tokenize(":fivesixtwo -> 4_11"));
  ASSERT_EQ(vector<string>({"2343313_5", "%", "3l9f_29", "->", "j_29"}), Baseball::Tokenize("2343313_5 % 3l9f_29 -> j_29"));
  ASSERT_EQ(vector<string>({"6d5d_18", "-", "27ak_23"}), Baseball::Tokenize("6d5d_18 - 27ak_23"));
  ASSERT_EQ(vector<string>({"387_21", ">>", "76994"}), Baseball::Tokenize("387_21 >> 76994"));
  ASSERT_EQ(vector<string>({":eh", "<-", "9qh_30"}), Baseball::Tokenize(":eh <- 9qh_30"));
  ASSERT_EQ(vector<string>({":z", "<-", "2609", "->", "24"}), Baseball::Tokenize(":z <- 2609 -> 24"));
  ASSERT_EQ(vector<string>({":wbb", "<-", "113232222_4", ">>", "1bdf_18"}), Baseball::Tokenize(":wbb <- 113232222_4 >> 1bdf_18"));
  ASSERT_EQ(vector<string>({"34904_10", ">>", "251214_8", "->", "2_17"}), Baseball::Tokenize("34904_10 >> 251214_8 -> 2_17"));
  ASSERT_EQ(vector<string>({"3g6f_17", "->", "9_33"}), Baseball::Tokenize("3g6f_17 -> 9_33"));
  ASSERT_EQ(vector<string>({":onezerozero", "*", ":eighteightseven", "->", "s_31"}), Baseball::Tokenize(":onezerozero * :eighteightseven -> s_31"));
  ASSERT_EQ(vector<string>({":h", "<-", "71320_10", ">>", "a8aa_20"}), Baseball::Tokenize(":h <- 71320_10 >> a8aa_20"));
  ASSERT_EQ(vector<string>({"24yn_35", "->", "2a_13"}), Baseball::Tokenize("24yn_35 -> 2a_13"));
  ASSERT_EQ(vector<string>({":k", "<-", "85683", "->", "24"}), Baseball::Tokenize(":k <- 85683 -> 24"));
  ASSERT_EQ(vector<string>({":onezerozero"}), Baseball::Tokenize(":onezerozero"));
  ASSERT_EQ(vector<string>({":kl", "<-", "4hdh_20", "->", "19_15"}), Baseball::Tokenize(":kl <- 4hdh_20 -> 19_15"));
  ASSERT_EQ(vector<string>({"6c4_31", "/", ":nineninenine"}), Baseball::Tokenize("6c4_31 / :nineninenine"));
  ASSERT_EQ(vector<string>({":eighteightseven"}), Baseball::Tokenize(":eighteightseven"));
  ASSERT_EQ(vector<string>({":h", "<-", ":onetwothree"}), Baseball::Tokenize(":h <- :onetwothree"));
  ASSERT_EQ(vector<string>({"1111010001101101_2", "*", "10947", "->", "h_30"}), Baseball::Tokenize("1111010001101101_2 * 10947 -> h_30"));
  ASSERT_EQ(vector<string>({"11712_9", "->", "11_25"}), Baseball::Tokenize("11712_9 -> 11_25"));
  ASSERT_EQ(vector<string>({":f", "<-", "1pue_32"}), Baseball::Tokenize(":f <- 1pue_32"));
  ASSERT_EQ(vector<string>({":z", "<-", "1cd1c_14"}), Baseball::Tokenize(":z <- 1cd1c_14"));
  ASSERT_EQ(vector<string>({"59319_11", ">>", ":onefivenineeight", "->", "202_3"}), Baseball::Tokenize("59319_11 >> :onefivenineeight -> 202_3"));
  ASSERT_EQ(vector<string>({":i", "<-", "q2n_34"}), Baseball::Tokenize(":i <- q2n_34"));
  ASSERT_EQ(vector<string>({":p", "<-", ":fivesixtwo", "->", "h_31"}), Baseball::Tokenize(":p <- :fivesixtwo -> h_31"));
  ASSERT_EQ(vector<string>({":x", "<-", "1kd4_23", "->", "36_10"}), Baseball::Tokenize(":x <- 1kd4_23 -> 36_10"));
  ASSERT_EQ(vector<string>({"59288_11"}), Baseball::Tokenize("59288_11"));
  ASSERT_EQ(vector<string>({"802_35"}), Baseball::Tokenize("802_35"));
  ASSERT_EQ(vector<string>({":itsse", "<-", ":fivesixtwo", "+", ":onezero"}), Baseball::Tokenize(":itsse <- :fivesixtwo + :onezero"));
  ASSERT_EQ(vector<string>({":q", "<-", "84f7_16", "->", "5_20"}), Baseball::Tokenize(":q <- 84f7_16 -> 5_20"));
  ASSERT_EQ(vector<string>({":onezerozero", "-", ":onezero", "->", "36"}), Baseball::Tokenize(":onezerozero - :onezero -> 36"));
  ASSERT_EQ(vector<string>({":r", "<-", ":threeseven", "/", "45443_9"}), Baseball::Tokenize(":r <- :threeseven / 45443_9"));
  ASSERT_EQ(vector<string>({":onezerozero", "+", ":threeseven", "->", "23_9"}), Baseball::Tokenize(":onezerozero + :threeseven -> 23_9"));
  ASSERT_EQ(vector<string>({":i", "<-", "jfa_20", ">>", "5b78_17", "->", "4_30"}), Baseball::Tokenize(":i <- jfa_20 >> 5b78_17 -> 4_30"));
  ASSERT_EQ(vector<string>({":u", "<-", ":onezero", "%", "39551", "->", "16_18"}), Baseball::Tokenize(":u <- :onezero % 39551 -> 16_18"));
  ASSERT_EQ(vector<string>({":l", "<-", "4b0l_22", "->", "35"}), Baseball::Tokenize(":l <- 4b0l_22 -> 35"));
  ASSERT_EQ(vector<string>({":x", "<-", "16294_15", "%", "23210112_4", "->", "19_18"}), Baseball::Tokenize(":x <- 16294_15 % 23210112_4 -> 19_18"));
  ASSERT_EQ(vector<string>({":g", "<-", ":onezerozerothree", ">>", ":onezerozerothree", "->", "m_26"}), Baseball::Tokenize(":g <- :onezerozerothree >> :onezerozerothree -> m_26"));
  ASSERT_EQ(vector<string>({":onefivenineeight", ">>", "5j78_22", "->", "1010_3"}), Baseball::Tokenize(":onefivenineeight >> 5j78_22 -> 1010_3"));
  ASSERT_EQ(vector<string>({":m", "<-", "51575_8", "->", "1c_14"}), Baseball::Tokenize(":m <- 51575_8 -> 1c_14"));
  ASSERT_EQ(vector<string>({":ydvw", "<-", ":nineninenine", "*", "87919"}), Baseball::Tokenize(":ydvw <- :nineninenine * 87919"));
  ASSERT_EQ(vector<string>({"1fg8_17", "+", "50496"}), Baseball::Tokenize("1fg8_17 + 50496"));
  ASSERT_EQ(vector<string>({":l", "<-", "142032_8", "/", "13203113_4", "->", "121_5"}), Baseball::Tokenize(":l <- 142032_8 / 13203113_4 -> 121_5"));
  ASSERT_EQ(vector<string>({":jqqhje", "<-", "73279", "+", "8670"}), Baseball::Tokenize(":jqqhje <- 73279 + 8670"));
  ASSERT_EQ(vector<string>({":l", "<-", "3g5e_29", "/", "62038"}), Baseball::Tokenize(":l <- 3g5e_29 / 62038"));
  ASSERT_EQ(vector<string>({":z", "<-", ":nineninenine", "->", "12_4"}), Baseball::Tokenize(":z <- :nineninenine -> 12_4"));
  ASSERT_EQ(vector<string>({"1gei_24", ">>", "28266_11", "->", "12_21"}), Baseball::Tokenize("1gei_24 >> 28266_11 -> 12_21"));
  ASSERT_EQ(vector<string>({":boau", "<-", "551534_7"}), Baseball::Tokenize(":boau <- 551534_7"));
  ASSERT_EQ(vector<string>({":q", "<-", "19893"}), Baseball::Tokenize(":q <- 19893"));
  ASSERT_EQ(vector<string>({":l", "<-", "101c0_16", "->", "5_12"}), Baseball::Tokenize(":l <- 101c0_16 -> 5_12"));
  ASSERT_EQ(vector<string>({":threeseven", ">>", ":fivesixtwo", "->", "f_27"}), Baseball::Tokenize(":threeseven >> :fivesixtwo -> f_27"));
  ASSERT_EQ(vector<string>({":z", "<-", "28865", "/", "46993"}), Baseball::Tokenize(":z <- 28865 / 46993"));
  ASSERT_EQ(vector<string>({":w", "<-", "64534_8", "/", "31e7_24", "->", "c_26"}), Baseball::Tokenize(":w <- 64534_8 / 31e7_24 -> c_26"));
  ASSERT_EQ(vector<string>({":g", "<-", "d77_29", ">>", ":onetwothree"}), Baseball::Tokenize(":g <- d77_29 >> :onetwothree"));
  ASSERT_EQ(vector<string>({"7jfe_23", "->", "27_10"}), Baseball::Tokenize("7jfe_23 -> 27_10"));
  ASSERT_EQ(vector<string>({"46188", "->", "d_25"}), Baseball::Tokenize("46188 -> d_25"));
  ASSERT_EQ(vector<string>({"66455", ">>", "3idh_25"}), Baseball::Tokenize("66455 >> 3idh_25"));
  ASSERT_EQ(vector<string>({":n", "<-", ":fivesixtwo", "->", "5_14"}), Baseball::Tokenize(":n <- :fivesixtwo -> 5_14"));
  ASSERT_EQ(vector<string>({":onetwothree", "->", "10"}), Baseball::Tokenize(":onetwothree -> 10"));
  ASSERT_EQ(vector<string>({"1gl3_31", "%", "8be7_22", "->", "22"}), Baseball::Tokenize("1gl3_31 % 8be7_22 -> 22"));
  ASSERT_EQ(vector<string>({":v", "<-", ":onefivenineeight", "*", "52189", "->", "27"}), Baseball::Tokenize(":v <- :onefivenineeight * 52189 -> 27"));
  ASSERT_EQ(vector<string>({":onetwothree", "->", "33"}), Baseball::Tokenize(":onetwothree -> 33"));
  ASSERT_EQ(vector<string>({":ik", "<-", ":onetwothree", "*", ":onetwothree", "->", "8_12"}), Baseball::Tokenize(":ik <- :onetwothree * :onetwothree -> 8_12"));
  ASSERT_EQ(vector<string>({":onezerozerothree", "/", "20133111_4"}), Baseball::Tokenize(":onezerozerothree / 20133111_4"));
  ASSERT_EQ(vector<string>({"1tch_34"}), Baseball::Tokenize("1tch_34"));
  ASSERT_EQ(vector<string>({":fivesixtwo", "-", ":threeseven"}), Baseball::Tokenize(":fivesixtwo - :threeseven"));
  ASSERT_EQ(vector<string>({":m", "<-", "8d6e_20"}), Baseball::Tokenize(":m <- 8d6e_20"));
  ASSERT_EQ(vector<string>({":onezerozerothree"}), Baseball::Tokenize(":onezerozerothree"));
  ASSERT_EQ(vector<string>({"9513", "+", "37720", "->", "30_9"}), Baseball::Tokenize("9513 + 37720 -> 30_9"));
  ASSERT_EQ(vector<string>({"2290"}), Baseball::Tokenize("2290"));
  ASSERT_EQ(vector<string>({"57995", "/", "19pg_28"}), Baseball::Tokenize("57995 / 19pg_28"));
  ASSERT_EQ(vector<string>({":fivesixtwo"}), Baseball::Tokenize(":fivesixtwo"));
  ASSERT_EQ(vector<string>({":uj", "<-", ":threeseven", "/", "21221213_4"}), Baseball::Tokenize(":uj <- :threeseven / 21221213_4"));
  ASSERT_EQ(vector<string>({"10212211101_3"}), Baseball::Tokenize("10212211101_3"));
  ASSERT_EQ(vector<string>({":dl", "<-", "9527", ">>", "649", "->", "l_28"}), Baseball::Tokenize(":dl <- 9527 >> 649 -> l_28"));
  ASSERT_EQ(vector<string>({"68326", "->", "18"}), Baseball::Tokenize("68326 -> 18"));
  ASSERT_EQ(vector<string>({":b", "<-", ":onezerozero"}), Baseball::Tokenize(":b <- :onezerozero"));
  ASSERT_EQ(vector<string>({":w", "<-", "61546_11", "*", ":onezero"}), Baseball::Tokenize(":w <- 61546_11 * :onezero"));
  ASSERT_EQ(vector<string>({"86596"}), Baseball::Tokenize("86596"));
  ASSERT_EQ(vector<string>({":la", "<-", ":onefivenineeight", "->", "30_12"}), Baseball::Tokenize(":la <- :onefivenineeight -> 30_12"));
  ASSERT_EQ(vector<string>({"c37a_17"}), Baseball::Tokenize("c37a_17"));
  ASSERT_EQ(vector<string>({":e", "<-", "76425", "*", "23277_9", "->", "19_27"}), Baseball::Tokenize(":e <- 76425 * 23277_9 -> 19_27"));
  ASSERT_EQ(vector<string>({"78660", "%", ":onetwothree"}), Baseball::Tokenize("78660 % :onetwothree"));
  ASSERT_EQ(vector<string>({"1216b_12"}), Baseball::Tokenize("1216b_12"));
  ASSERT_EQ(vector<string>({":a", "<-", "1b75_21", "-", "10010011110001_2"}), Baseball::Tokenize(":a <- 1b75_21 - 10010011110001_2"));
  ASSERT_EQ(vector<string>({"h1h_32", "->", "13_6"}), Baseball::Tokenize("h1h_32 -> 13_6"));
  ASSERT_EQ(vector<string>({"2loi_27", "->", "33"}), Baseball::Tokenize("2loi_27 -> 33"));
  ASSERT_EQ(vector<string>({":s", "<-", ":onefivenineeight", "*", "47511"}), Baseball::Tokenize(":s <- :onefivenineeight * 47511"));
  ASSERT_EQ(vector<string>({":c", "<-", "18ph_29", "/", ":onezero"}), Baseball::Tokenize(":c <- 18ph_29 / :onezero"));
  ASSERT_EQ(vector<string>({"445136_7", "->", "17_25"}), Baseball::Tokenize("445136_7 -> 17_25"));
  ASSERT_EQ(vector<string>({"40771_8"}), Baseball::Tokenize("40771_8"));
  ASSERT_EQ(vector<string>({":n", "<-", ":onefivenineeight", "%", "71533"}), Baseball::Tokenize(":n <- :onefivenineeight % 71533"));
  ASSERT_EQ(vector<string>({"3heo_26", "->", "113_5"}), Baseball::Tokenize("3heo_26 -> 113_5"));
  ASSERT_EQ(vector<string>({":x", "<-", "kj8_34"}), Baseball::Tokenize(":x <- kj8_34"));
  ASSERT_EQ(vector<string>({"73329", "->", "1a_14"}), Baseball::Tokenize("73329 -> 1a_14"));
  ASSERT_EQ(vector<string>({"2gfs_33", "->", "10_20"}), Baseball::Tokenize("2gfs_33 -> 10_20"));
  ASSERT_EQ(vector<string>({":y", "<-", "17061", "/", "2ml3_26"}), Baseball::Tokenize(":y <- 17061 / 2ml3_26"));
  ASSERT_EQ(vector<string>({"99126", ">>", "95655_10"}), Baseball::Tokenize("99126 >> 95655_10"));
  ASSERT_EQ(vector<string>({":u", "<-", ":onefivenineeight", ">>", ":onezerozerothree", "->", "15"}), Baseball::Tokenize(":u <- :onefivenineeight >> :onezerozerothree -> 15"));
  ASSERT_EQ(vector<string>({":j", "<-", "17dh_26"}), Baseball::Tokenize(":j <- 17dh_26"));
  ASSERT_EQ(vector<string>({":xz", "<-", ":onezerozerothree", "*", "1s9k_35", "->", "15"}), Baseball::Tokenize(":xz <- :onezerozerothree * 1s9k_35 -> 15"));
  ASSERT_EQ(vector<string>({"2346", "->", "h_29"}), Baseball::Tokenize("2346 -> h_29"));
  ASSERT_EQ(vector<string>({"25fo_28", "->", "100_3"}), Baseball::Tokenize("25fo_28 -> 100_3"));
  ASSERT_EQ(vector<string>({"19n0_27"}), Baseball::Tokenize("19n0_27"));
  ASSERT_EQ(vector<string>({"6aeg_20", "+", ":fivesixtwo", "->", "a_26"}), Baseball::Tokenize("6aeg_20 + :fivesixtwo -> a_26"));
  ASSERT_EQ(vector<string>({"10666", "->", "35"}), Baseball::Tokenize("10666 -> 35"));
  ASSERT_EQ(vector<string>({"56263", "+", "68267_10", "->", "12_9"}), Baseball::Tokenize("56263 + 68267_10 -> 12_9"));
  ASSERT_EQ(vector<string>({":twotwo"}), Baseball::Tokenize(":twotwo"));
  ASSERT_EQ(vector<string>({":i", "<-", "4ci9_21"}), Baseball::Tokenize(":i <- 4ci9_21"));
  ASSERT_EQ(vector<string>({":t", "<-", "1184"}), Baseball::Tokenize(":t <- 1184"));
  ASSERT_EQ(vector<string>({":e", "<-", ":onefivenineeight", "->", "11_27"}), Baseball::Tokenize(":e <- :onefivenineeight -> 11_27"));
  ASSERT_EQ(vector<string>({":a", "<-", "1hmn_26", "*", "16dg_35"}), Baseball::Tokenize(":a <- 1hmn_26 * 16dg_35"));
  ASSERT_EQ(vector<string>({":fivesixtwo", "-", ":onezero"}), Baseball::Tokenize(":fivesixtwo - :onezero"));
  ASSERT_EQ(vector<string>({":onezerozerothree"}), Baseball::Tokenize(":onezerozerothree"));
  ASSERT_EQ(vector<string>({"1020211210_3"}), Baseball::Tokenize("1020211210_3"));
  ASSERT_EQ(vector<string>({":g", "<-", "1vf0_35", "/", "44924"}), Baseball::Tokenize(":g <- 1vf0_35 / 44924"));
  ASSERT_EQ(vector<string>({":s", "<-", "8285_11", "+", "33361", "->", "5_19"}), Baseball::Tokenize(":s <- 8285_11 + 33361 -> 5_19"));
  ASSERT_EQ(vector<string>({":a", "<-", "63106"}), Baseball::Tokenize(":a <- 63106"));
  ASSERT_EQ(vector<string>({"60205", ">>", "4530_12", "->", "1d_19"}), Baseball::Tokenize("60205 >> 4530_12 -> 1d_19"));
  ASSERT_EQ(vector<string>({":e", "<-", ":nineninenine"}), Baseball::Tokenize(":e <- :nineninenine"));
  ASSERT_EQ(vector<string>({"10111220022_3"}), Baseball::Tokenize("10111220022_3"));
  ASSERT_EQ(vector<string>({":u", "<-", "32852", ">>", "11ff_27"}), Baseball::Tokenize(":u <- 32852 >> 11ff_27"));
  ASSERT_EQ(vector<string>({"87812_9"}), Baseball::Tokenize("87812_9"));
  ASSERT_EQ(vector<string>({"26120", "+", ":nineninenine", "->", "11_20"}), Baseball::Tokenize("26120 + :nineninenine -> 11_20"));
  ASSERT_EQ(vector<string>({":k", "<-", ":eighteightseven"}), Baseball::Tokenize(":k <- :eighteightseven"));
  ASSERT_EQ(vector<string>({"2ahs_35", ">>", "2462d_14"}), Baseball::Tokenize("2ahs_35 >> 2462d_14"));
  ASSERT_EQ(vector<string>({":g", "<-", "h44_31", "+", "35jr_31"}), Baseball::Tokenize(":g <- h44_31 + 35jr_31"));
  ASSERT_EQ(vector<string>({"5b67_13"}), Baseball::Tokenize("5b67_13"));
  ASSERT_EQ(vector<string>({"306bb_12", "/", ":onezerozero", "->", "14_21"}), Baseball::Tokenize("306bb_12 / :onezerozero -> 14_21"));
  ASSERT_EQ(vector<string>({"67727_10", "-", ":onetwothree", "->", "13_7"}), Baseball::Tokenize("67727_10 - :onetwothree -> 13_7"));
  ASSERT_EQ(vector<string>({"16645_10"}), Baseball::Tokenize("16645_10"));
  ASSERT_EQ(vector<string>({":j", "<-", "3420"}), Baseball::Tokenize(":j <- 3420"));
  ASSERT_EQ(vector<string>({"72405", "%", "31998", "->", "19_11"}), Baseball::Tokenize("72405 % 31998 -> 19_11"));
  ASSERT_EQ(vector<string>({":j", "<-", "37957", "->", "26_11"}), Baseball::Tokenize(":j <- 37957 -> 26_11"));
  ASSERT_EQ(vector<string>({":nt", "<-", ":onezerozero", ">>", ":threeseven", "->", "2_19"}), Baseball::Tokenize(":nt <- :onezerozero >> :threeseven -> 2_19"));
  ASSERT_EQ(vector<string>({":u", "<-", "1100011100000110_2", "->", "7"}), Baseball::Tokenize(":u <- 1100011100000110_2 -> 7"));
  ASSERT_EQ(vector<string>({":k", "<-", ":twotwo"}), Baseball::Tokenize(":k <- :twotwo"));
  ASSERT_EQ(vector<string>({":h", "<-", "2b69_24", ">>", "10182", "->", "1b_23"}), Baseball::Tokenize(":h <- 2b69_24 >> 10182 -> 1b_23"));
  ASSERT_EQ(vector<string>({":t", "<-", ":onezero", "/", "cl8_31", "->", "17_25"}), Baseball::Tokenize(":t <- :onezero / cl8_31 -> 17_25"));
  ASSERT_EQ(vector<string>({"18im_34", "->", "33_11"}), Baseball::Tokenize("18im_34 -> 33_11"));
  ASSERT_EQ(vector<string>({":onezero", "->", "n_25"}), Baseball::Tokenize(":onezero -> n_25"));
  ASSERT_EQ(vector<string>({"18rh_30", "*", ":fivesixtwo", "->", "e_21"}), Baseball::Tokenize("18rh_30 * :fivesixtwo -> e_21"));
  ASSERT_EQ(vector<string>({":u", "<-", "1l8h_25", "%", ":nineninenine", "->", "20"}), Baseball::Tokenize(":u <- 1l8h_25 % :nineninenine -> 20"));
  ASSERT_EQ(vector<string>({":onezero"}), Baseball::Tokenize(":onezero"));
  ASSERT_EQ(vector<string>({":nineninenine", "*", "20922", "->", "11_2"}), Baseball::Tokenize(":nineninenine * 20922 -> 11_2"));
  ASSERT_EQ(vector<string>({":q", "<-", ":onezero", "->", "d_16"}), Baseball::Tokenize(":q <- :onezero -> d_16"));
  ASSERT_EQ(vector<string>({"64909", "->", "8_18"}), Baseball::Tokenize("64909 -> 8_18"));
  ASSERT_EQ(vector<string>({"3231223_5", "->", "m_23"}), Baseball::Tokenize("3231223_5 -> m_23"));
  ASSERT_EQ(vector<string>({":f", "<-", "90426", "*", ":onezerozerothree"}), Baseball::Tokenize(":f <- 90426 * :onezerozerothree"));
  ASSERT_EQ(vector<string>({"10820"}), Baseball::Tokenize("10820"));
  ASSERT_EQ(vector<string>({"f8h_26", "*", ":onezerozerothree"}), Baseball::Tokenize("f8h_26 * :onezerozerothree"));
  ASSERT_EQ(vector<string>({":r", "<-", "2g15_23", "+", "2102201021_3"}), Baseball::Tokenize(":r <- 2g15_23 + 2102201021_3"));
  ASSERT_EQ(vector<string>({":s", "<-", "53775", "->", "b_19"}), Baseball::Tokenize(":s <- 53775 -> b_19"));
  ASSERT_EQ(vector<string>({"120032_5"}), Baseball::Tokenize("120032_5"));
  ASSERT_EQ(vector<string>({"3l8a_27", ">>", "65999"}), Baseball::Tokenize("3l8a_27 >> 65999"));
}

TEST(Baseball, EvaluateTokens) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ(21253, calc.Evaluate(vector<string>({"1lk1_22"})));
  ASSERT_EQ(42878, calc.Evaluate(vector<string>({"42878"})));
  ASSERT_EQ(21747, calc.Evaluate(vector<string>({"2gb4_26", "-", "26e3_22"})));
  ASSERT_EQ(94571, calc.Evaluate(vector<string>({"542501_7"})));
  ASSERT_EQ(2045952, calc.Evaluate(vector<string>({":nineninenine", "<<", "b_32"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"79a8_15", ">>", "21_15"})));
  ASSERT_EQ(45707997, calc.Evaluate(vector<string>({":eighteightseven", "*", "51531_10"})));
  ASSERT_EQ(887, calc.Evaluate(vector<string>({":eighteightseven"})));
  ASSERT_EQ(10, calc.Evaluate(vector<string>({":onezero"})));
  ASSERT_EQ(22000, calc.Evaluate(vector<string>({"22000"})));
  ASSERT_EQ(61985, calc.Evaluate(vector<string>({"340k_27"})));
  ASSERT_EQ(68516, calc.Evaluate(vector<string>({"68516"})));
  ASSERT_EQ(3624, calc.Evaluate(vector<string>({"103444_5"})));
  ASSERT_EQ(94132, calc.Evaluate(vector<string>({"11003012_5"})));
  ASSERT_EQ(52402, calc.Evaluate(vector<string>({":onezero", "+", "52392"})));
  ASSERT_EQ(3464079090, calc.Evaluate(vector<string>({"10020310_5", "*", "2012210202_3"})));
  ASSERT_EQ(562, calc.Evaluate(vector<string>({":fivesixtwo"})));
  ASSERT_EQ(90523, calc.Evaluate(vector<string>({"90523"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":onezerozero", "/", "10023423_5"})));
  ASSERT_EQ(9615, calc.Evaluate(vector<string>({"9615"})));
  ASSERT_EQ(39808, calc.Evaluate(vector<string>({"2dh8_25"})));
  ASSERT_EQ(80071496, calc.Evaluate(vector<string>({":onezerozerothree", "*", "1413332_6"})));
  ASSERT_EQ(20794, calc.Evaluate(vector<string>({":fivesixtwo", "*", ":threeseven"})));
  ASSERT_EQ(96177, calc.Evaluate(vector<string>({"96177"})));
  ASSERT_EQ(1, calc.Evaluate(vector<string>({"f0g4_17", "/", "38893"})));
  ASSERT_EQ(376659968, calc.Evaluate(vector<string>({"2iek_33", "<<", "c_18"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":onetwothree", ">>", "14_6"})));
  ASSERT_EQ(74614, calc.Evaluate(vector<string>({"12376_16"})));
  ASSERT_EQ(65104, calc.Evaluate(vector<string>({"32151_6", "+", "27dr_30"})));
  ASSERT_EQ(7, calc.Evaluate(vector<string>({"17995_10", "/", "45i_24"})));
  ASSERT_EQ(8992, calc.Evaluate(vector<string>({":fivesixtwo", "<<", "4_29"})));
  ASSERT_EQ(60258, calc.Evaluate(vector<string>({"eae7_16", "+", ":onetwothree"})));
  ASSERT_EQ(25328, calc.Evaluate(vector<string>({"25328"})));
  ASSERT_EQ(80477, calc.Evaluate(vector<string>({"53j2_25"})));
  ASSERT_EQ(37, calc.Evaluate(vector<string>({":threeseven"})));
  ASSERT_EQ(98423, calc.Evaluate(vector<string>({"ad21_21", "+", ":threeseven"})));
  ASSERT_EQ(887, calc.Evaluate(vector<string>({":eighteightseven"})));
  ASSERT_EQ(2, calc.Evaluate(vector<string>({":onezerozero", "/", ":threeseven"})));
  ASSERT_EQ(49833, calc.Evaluate(vector<string>({"424f_23"})));
  ASSERT_EQ(3, calc.Evaluate(vector<string>({"283_30", ">>", "9"})));
  ASSERT_EQ(2814097800, calc.Evaluate(vector<string>({"4bb4_24", "*", "22386_12"})));
  ASSERT_EQ(67137, calc.Evaluate(vector<string>({"5bl0_23"})));
  ASSERT_EQ(1060, calc.Evaluate(vector<string>({"10603", "/", ":onezero"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":fivesixtwo", ">>", "31"})));
  ASSERT_EQ(60573, calc.Evaluate(vector<string>({"5f37_22"})));
  ASSERT_EQ(1, calc.Evaluate(vector<string>({"152d2_16", "/", "4a9i_24"})));
  ASSERT_EQ(97705, calc.Evaluate(vector<string>({"71f1_24"})));
  ASSERT_EQ(13923, calc.Evaluate(vector<string>({"gg3_29"})));
  ASSERT_EQ(32667, calc.Evaluate(vector<string>({"32667"})));
  ASSERT_EQ(123, calc.Evaluate(vector<string>({":onetwothree"})));
  ASSERT_EQ(18285693, calc.Evaluate(vector<string>({"ljj_29", "*", ":onezerozerothree"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":fivesixtwo", ">>", "13_28"})));
  ASSERT_EQ(3991, calc.Evaluate(vector<string>({"6ch2_19", "%", "20bd_19"})));
  ASSERT_EQ(47797, calc.Evaluate(vector<string>({"2ii9_26"})));
  ASSERT_EQ(21620, calc.Evaluate(vector<string>({"1hk0_23"})));
  ASSERT_EQ(1598, calc.Evaluate(vector<string>({":onefivenineeight"})));
  ASSERT_EQ(4623, calc.Evaluate(vector<string>({"4623"})));
  ASSERT_EQ(276, calc.Evaluate(vector<string>({"1341040_5", "/", ":onezerozero"})));
  ASSERT_EQ(48428, calc.Evaluate(vector<string>({"3010131_5", "+", ":eighteightseven"})));
  ASSERT_EQ(69896, calc.Evaluate(vector<string>({"69896"})));
  ASSERT_EQ(52384, calc.Evaluate(vector<string>({"52384"})));
  ASSERT_EQ(10, calc.Evaluate(vector<string>({":onezero", "%", "76171"})));
  ASSERT_EQ(8142818, calc.Evaluate(vector<string>({"151025_6", "*", ":fivesixtwo"})));
  ASSERT_EQ(71352, calc.Evaluate(vector<string>({"26628_13"})));
  ASSERT_EQ(51520, calc.Evaluate(vector<string>({"9560_14", "<<", "1_22"})));
  ASSERT_EQ(8, calc.Evaluate(vector<string>({"6w1_35", ">>", "a_34"})));
  ASSERT_EQ(26814464, calc.Evaluate(vector<string>({"fge_29", "<<", "b_29"})));
  ASSERT_EQ(56165, calc.Evaluate(vector<string>({"4498", "+", "51667"})));
  ASSERT_EQ(89642, calc.Evaluate(vector<string>({"39i2_30"})));
  ASSERT_EQ(2087, calc.Evaluate(vector<string>({"1om_35"})));
  ASSERT_EQ(352813596, calc.Evaluate(vector<string>({"76k8_21", "*", "1816_15"})));
  ASSERT_EQ(20005, calc.Evaluate(vector<string>({"10320211_4"})));
  ASSERT_EQ(37234, calc.Evaluate(vector<string>({"17n3_31"})));
  ASSERT_EQ(71201, calc.Evaluate(vector<string>({"4e33_16", "+", "c7ee_16"})));
  ASSERT_EQ(4934, calc.Evaluate(vector<string>({"124214_5"})));
  ASSERT_EQ(887, calc.Evaluate(vector<string>({":eighteightseven"})));
  ASSERT_EQ(86131, calc.Evaluate(vector<string>({"28456", "+", "bc9b_17"})));
  ASSERT_EQ(887, calc.Evaluate(vector<string>({":eighteightseven"})));
  ASSERT_EQ(67033, calc.Evaluate(vector<string>({"7512_21", "-", ":twotwo"})));
  ASSERT_EQ(18816, calc.Evaluate(vector<string>({"g8b_34", "+", ":threeseven"})));
  ASSERT_EQ(1003, calc.Evaluate(vector<string>({":onezerozerothree"})));
  ASSERT_EQ(24703, calc.Evaluate(vector<string>({":nineninenine", "+", "23704"})));
  ASSERT_EQ(25651, calc.Evaluate(vector<string>({"62063_8"})));
  ASSERT_EQ(100, calc.Evaluate(vector<string>({":onezerozero"})));
  ASSERT_EQ(82203, calc.Evaluate(vector<string>({"3no7_27", "+", "5732"})));
  ASSERT_EQ(41080, calc.Evaluate(vector<string>({"41080"})));
  ASSERT_EQ(114856, calc.Evaluate(vector<string>({"nfe_35", "<<", "2_9"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":threeseven", "/", ":onefivenineeight"})));
  ASSERT_EQ(24337, calc.Evaluate(vector<string>({"3kl6_24", "-", "29165"})));
  ASSERT_EQ(37, calc.Evaluate(vector<string>({":threeseven"})));
  ASSERT_EQ(845608894, calc.Evaluate(vector<string>({"8ide_20", "*", "m89_23"})));
  ASSERT_EQ(86336, calc.Evaluate(vector<string>({"26na_34"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"651_8", ">>", "15_23"})));
  ASSERT_EQ(20110080, calc.Evaluate(vector<string>({"1xwf_34", "<<", "8_16"})));
  ASSERT_EQ(53662, calc.Evaluate(vector<string>({"53662"})));
  ASSERT_EQ(71249190, calc.Evaluate(vector<string>({"3966", "*", "2bea_19"})));
  ASSERT_EQ(45863, calc.Evaluate(vector<string>({"22dr_28"})));
  ASSERT_EQ(63480, calc.Evaluate(vector<string>({"63480"})));
  ASSERT_EQ(4, calc.Evaluate(vector<string>({"882k_22", "/", "gpc_35"})));
  ASSERT_EQ(79557691, calc.Evaluate(vector<string>({":eighteightseven", "*", "6bh5_24"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"100101010011100_2", ">>", "u_35"})));
  ASSERT_EQ(22, calc.Evaluate(vector<string>({":twotwo"})));
  ASSERT_EQ(91066824, calc.Evaluate(vector<string>({"1s9a_31", "*", ":onefivenineeight"})));
  ASSERT_EQ(1, calc.Evaluate(vector<string>({":eighteightseven", ">>", "9_13"})));
  ASSERT_EQ(16891, calc.Evaluate(vector<string>({"16891"})));
  ASSERT_EQ(10866432, calc.Evaluate(vector<string>({"20693_12", "<<", "8_11"})));
  ASSERT_EQ(51489, calc.Evaluate(vector<string>({"236e_29"})));
  ASSERT_EQ(40454, calc.Evaluate(vector<string>({"1b4b2_12"})));
  ASSERT_EQ(1598, calc.Evaluate(vector<string>({":onefivenineeight"})));
  ASSERT_EQ(1598, calc.Evaluate(vector<string>({":onefivenineeight", "%", "32312011_4"})));
  ASSERT_EQ(1010, calc.Evaluate(vector<string>({":eighteightseven", "+", ":onetwothree"})));
  ASSERT_EQ(94063, calc.Evaluate(vector<string>({"2rrf_32"})));
  ASSERT_EQ(12172, calc.Evaluate(vector<string>({"97381", ">>", "3_22"})));
  ASSERT_EQ(22, calc.Evaluate(vector<string>({":twotwo"})));
  ASSERT_EQ(49096, calc.Evaluate(vector<string>({"49196_10", "-", ":onezerozero"})));
  ASSERT_EQ(93657, calc.Evaluate(vector<string>({"152423_9"})));
  ASSERT_EQ(3379968, calc.Evaluate(vector<string>({"2ac6_22", "<<", "7"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":twotwo", "/", "3nrq_28"})));
  ASSERT_EQ(4013056, calc.Evaluate(vector<string>({"31352", "<<", "7_17"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"3o4_29", "/", "a3e7_19"})));
  ASSERT_EQ(97791, calc.Evaluate(vector<string>({"1bc0b_13", "+", "57b4_20"})));
  ASSERT_EQ(12215, calc.Evaluate(vector<string>({"27667_8"})));
  ASSERT_EQ(37416, calc.Evaluate(vector<string>({"7a7g_17"})));
  ASSERT_EQ(123, calc.Evaluate(vector<string>({"123_10"})));
  ASSERT_EQ(123, calc.Evaluate(vector<string>({":onetwothree"})));
  ASSERT_EQ(66592, calc.Evaluate(vector<string>({"32654_12"})));
  ASSERT_EQ(37, calc.Evaluate(vector<string>({":threeseven"})));
  ASSERT_EQ(23910, calc.Evaluate(vector<string>({"23910_10"})));
  ASSERT_EQ(10, calc.Evaluate(vector<string>({":onezero"})));
  ASSERT_EQ(168888320, calc.Evaluate(vector<string>({"82465", "<<", "b_28"})));
  ASSERT_EQ(2, calc.Evaluate(vector<string>({"72528", "/", "47i1_20"})));
  ASSERT_EQ(1003, calc.Evaluate(vector<string>({":onezerozerothree"})));
  ASSERT_EQ(123, calc.Evaluate(vector<string>({":onetwothree"})));
  ASSERT_EQ(81699, calc.Evaluate(vector<string>({"e02f_18"})));
  ASSERT_EQ(55396, calc.Evaluate(vector<string>({"28084_12", "%", "131002_9"})));
  ASSERT_EQ(35156, calc.Evaluate(vector<string>({":twotwo", "*", ":onefivenineeight"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"99425", ">>", "212_3"})));
  ASSERT_EQ(10, calc.Evaluate(vector<string>({":onezero"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({":onezero", "/", "5838"})));
  ASSERT_EQ(56256, calc.Evaluate(vector<string>({"1mu0_32"})));
  ASSERT_EQ(33059, calc.Evaluate(vector<string>({"skb_34"})));
  ASSERT_EQ(43717, calc.Evaluate(vector<string>({"671h_19"})));
  ASSERT_EQ(43344, calc.Evaluate(vector<string>({"1i4o_30"})));
  ASSERT_EQ(14266, calc.Evaluate(vector<string>({"fpg_30"})));
  ASSERT_EQ(42388, calc.Evaluate(vector<string>({"2ai8_26"})));
  ASSERT_EQ(999, calc.Evaluate(vector<string>({":nineninenine"})));
  ASSERT_EQ(18414, calc.Evaluate(vector<string>({"18414"})));
  ASSERT_EQ(53949, calc.Evaluate(vector<string>({"49me_23", "%", "484aa_11"})));
  ASSERT_EQ(2480209920, calc.Evaluate(vector<string>({"75690", "<<", "15"})));
  ASSERT_EQ(2226, calc.Evaluate(vector<string>({"3are_29", "/", ":threeseven"})));
  ASSERT_EQ(49770, calc.Evaluate(vector<string>({"30021222_4"})));
  ASSERT_EQ(88619, calc.Evaluate(vector<string>({"28mf_34"})));
  ASSERT_EQ(1003, calc.Evaluate(vector<string>({":onezerozerothree"})));
  ASSERT_EQ(123, calc.Evaluate(vector<string>({":onetwothree"})));
  ASSERT_EQ(8870, calc.Evaluate(vector<string>({":eighteightseven", "*", ":onezero"})));
  ASSERT_EQ(5477, calc.Evaluate(vector<string>({"7dn_27"})));
  ASSERT_EQ(3403, calc.Evaluate(vector<string>({"94971", "-", "530651_7"})));
  ASSERT_EQ(9527, calc.Evaluate(vector<string>({"d1n_27"})));
  ASSERT_EQ(96748, calc.Evaluate(vector<string>({"179ec_16"})));
  ASSERT_EQ(1293312, calc.Evaluate(vector<string>({"41313_7", "<<", "7_28"})));
  ASSERT_EQ(9, calc.Evaluate(vector<string>({"98242", "/", "9871"})));
  ASSERT_EQ(37, calc.Evaluate(vector<string>({":threeseven"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"nom_28", "/", "7j56_21"})));
  ASSERT_EQ(23657, calc.Evaluate(vector<string>({"2jje_32", "-", "61957"})));
  ASSERT_EQ(100, calc.Evaluate(vector<string>({":onezerozero"})));
  ASSERT_EQ(123, calc.Evaluate(vector<string>({":onetwothree", "%", "22c10_14"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"22707", ">>", "17"})));
  ASSERT_EQ(70635, calc.Evaluate(vector<string>({"1303003_6"})));
  ASSERT_EQ(22, calc.Evaluate(vector<string>({":twotwo"})));
  ASSERT_EQ(140569, calc.Evaluate(vector<string>({"1r4n_30", "+", "3174b_13"})));
  ASSERT_EQ(88148, calc.Evaluate(vector<string>({"143822_9"})));
  ASSERT_EQ(42376, calc.Evaluate(vector<string>({"42376"})));
  ASSERT_EQ(13919, calc.Evaluate(vector<string>({"2718_33", "-", "2k0l_29"})));
  ASSERT_EQ(85000, calc.Evaluate(vector<string>({"2c8c6_13"})));
  ASSERT_EQ(49248, calc.Evaluate(vector<string>({"6328_20"})));
  ASSERT_EQ(31399, calc.Evaluate(vector<string>({":onezerozerothree", "+", "1744_29"})));
  ASSERT_EQ(83253, calc.Evaluate(vector<string>({"83253"})));
  ASSERT_EQ(1003, calc.Evaluate(vector<string>({":onezerozerothree"})));
  ASSERT_EQ(562, calc.Evaluate(vector<string>({":fivesixtwo"})));
  ASSERT_EQ(16696, calc.Evaluate(vector<string>({"16696"})));
  ASSERT_EQ(27619, calc.Evaluate(vector<string>({"mj4_35", "%", "83907"})));
  ASSERT_EQ(67475, calc.Evaluate(vector<string>({"94579", "-", "1331404_5"})));
  ASSERT_EQ(24355, calc.Evaluate(vector<string>({"12117_12"})));
  ASSERT_EQ(2, calc.Evaluate(vector<string>({"51566", "/", "26404_9"})));
  ASSERT_EQ(0, calc.Evaluate(vector<string>({"1a1a_22", ">>", "10_25"})));
  ASSERT_EQ(49380, calc.Evaluate(vector<string>({"49380"})));
  ASSERT_EQ(999, calc.Evaluate(vector<string>({":nineninenine"})));
  ASSERT_EQ(1, calc.Evaluate(vector<string>({":onetwothree", "/", ":onezerozero"})));
  ASSERT_EQ(31227, calc.Evaluate(vector<string>({"1444402_5"})));
  ASSERT_EQ(1003, calc.Evaluate(vector<string>({":onezerozerothree"})));
  ASSERT_EQ(1043316762, calc.Evaluate(vector<string>({"1l82_30", "*", "3fe3_18"})));
  ASSERT_EQ(63045, calc.Evaluate(vector<string>({"40lk_25"})));
  ASSERT_EQ(23243, calc.Evaluate(vector<string>({"66581_9", "-", "11kn_27"})));
  ASSERT_EQ(1, calc.Evaluate(vector<string>({"b6d3_17", ">>", "f_23"})));
  ASSERT_EQ(361372, calc.Evaluate(vector<string>({":twotwo", "*", "65614_7"})));
  ASSERT_EQ(3222970520, calc.Evaluate(vector<string>({"c631_17", "*", "2200210012_3"})));
  ASSERT_EQ(446, calc.Evaluate(vector<string>({"54926", "/", ":onetwothree"})));
  ASSERT_EQ(1, calc.Evaluate(vector<string>({"96777", "/", "43555_12"})));
  ASSERT_EQ(164315, calc.Evaluate(vector<string>({"141747_9", "+", "12f73_16"})));
  ASSERT_EQ(174, calc.Evaluate(vector<string>({"24788_14", ">>", "9_26"})));
}

TEST(Baseball, EvaluateString) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ("394q", calc.Evaluate(":o <- 10001110101011010_2 -> 22_13"));
  ASSERT_EQ("73050", calc.Evaluate(":o"));
  ASSERT_EQ("1lps", calc.Evaluate(":u <- 55100 -> 32"));
  ASSERT_EQ("55100", calc.Evaluate(":u"));
  ASSERT_EQ("100", calc.Evaluate(":t <- :onezerozero"));
  ASSERT_EQ("100", calc.Evaluate(":t"));
  ASSERT_EQ("26a121386", calc.Evaluate("142507_8 * 557a_16 -> 10_12"));
  ASSERT_EQ("123", calc.Evaluate(":jg <- :onetwothree"));
  ASSERT_EQ("123", calc.Evaluate(":jg"));
  ASSERT_EQ("999", calc.Evaluate(":nineninenine"));
  ASSERT_EQ("44304", calc.Evaluate("44304"));
  ASSERT_EQ("34038", calc.Evaluate(":w <- 34038"));
  ASSERT_EQ("34038", calc.Evaluate(":w"));
  ASSERT_EQ("11230", calc.Evaluate("cea_30"));
  ASSERT_EQ("111d", calc.Evaluate(":y <- 136c9_14 % 28n5_34 -> 36"));
  ASSERT_EQ("48001", calc.Evaluate(":y"));
  ASSERT_EQ("2135", calc.Evaluate(":n <- 27bb_14 -> 17_8"));
  ASSERT_EQ("7025", calc.Evaluate(":n"));
  ASSERT_EQ("2nro", calc.Evaluate("138b1_15 -> 16_22"));
  ASSERT_EQ("79039", calc.Evaluate(":x <- 36se_29"));
  ASSERT_EQ("79039", calc.Evaluate(":x"));
  ASSERT_EQ("28971", calc.Evaluate(":b <- 8ci2_22 - 62419"));
  ASSERT_EQ("28971", calc.Evaluate(":b"));
  ASSERT_EQ("16497", calc.Evaluate("jhp_29"));
  ASSERT_EQ("a372", calc.Evaluate("1400003_5 -> 24_5"));
  ASSERT_EQ("18491", calc.Evaluate(":v <- 3kfn_30 -> 16"));
  ASSERT_EQ("99473", calc.Evaluate(":v"));
  ASSERT_EQ("876", calc.Evaluate(":nineninenine - :onetwothree"));
  ASSERT_EQ("160285", calc.Evaluate(":j <- 82b7_23 -> 9_15"));
  ASSERT_EQ("98654", calc.Evaluate(":j"));
  ASSERT_EQ("27a657", calc.Evaluate(":f <- :onetwothree * 28k9_30 -> 20"));
  ASSERT_EQ("7602507", calc.Evaluate(":f"));
  ASSERT_EQ("216556", calc.Evaluate("13eo_30 + b77_27 -> 7"));
  ASSERT_EQ("33200", calc.Evaluate("17268_12"));
  ASSERT_EQ("28238", calc.Evaluate(":x <- 28238 % 103a8_16"));
  ASSERT_EQ("28238", calc.Evaluate(":x"));
  ASSERT_EQ("0", calc.Evaluate(":g <- 70813 / 51ib_26 -> 6_22"));
  ASSERT_EQ("0", calc.Evaluate(":g"));
  ASSERT_EQ("290u", calc.Evaluate("2fpa_31 -> 24_14"));
  ASSERT_EQ("45752139", calc.Evaluate(":x <- s3_30 * 54273"));
  ASSERT_EQ("45752139", calc.Evaluate(":x"));
  ASSERT_EQ("1100101100101011", calc.Evaluate("6a0b_20 -> 2_9"));
  ASSERT_EQ("100", calc.Evaluate(":r <- :onezerozero"));
  ASSERT_EQ("100", calc.Evaluate(":r"));
  ASSERT_EQ("1ojo", calc.Evaluate(":yhy <- 20ea_29 -> 1b_19"));
  ASSERT_EQ("49194", calc.Evaluate(":yhy"));
  ASSERT_EQ("15", calc.Evaluate(":m <- :twotwo -> h_21"));
  ASSERT_EQ("22", calc.Evaluate(":m"));
  ASSERT_EQ("0", calc.Evaluate(":md <- 12wn_34 >> 31 -> 8"));
  ASSERT_EQ("0", calc.Evaluate(":md"));
  ASSERT_EQ("2d5", calc.Evaluate(":eighteightseven -> 18"));
  ASSERT_EQ("123", calc.Evaluate(":onetwothree"));
  ASSERT_EQ("83869", calc.Evaluate(":t <- 57ek_25 + :nineninenine"));
  ASSERT_EQ("83869", calc.Evaluate(":t"));
  ASSERT_EQ("5513", calc.Evaluate("f53_19 % 233220_8"));
  ASSERT_EQ("4sj", calc.Evaluate(":q <- 114141_5 + :onezerozerothree -> 17_26"));
  ASSERT_EQ("5299", calc.Evaluate(":q"));
  ASSERT_EQ("6", calc.Evaluate("134014_7 >> 15_7"));
  ASSERT_EQ("65689", calc.Evaluate("65689"));
  ASSERT_EQ("44432", calc.Evaluate("44432 % 3342122_5"));
  ASSERT_EQ("ac7b", calc.Evaluate("52728 -> 11_16"));
  ASSERT_EQ("20", calc.Evaluate(":onezero -> 11_4"));
  ASSERT_EQ("10", calc.Evaluate(":e <- :onezero % 79625"));
  ASSERT_EQ("10", calc.Evaluate(":e"));
  ASSERT_EQ("19k", calc.Evaluate(":nineninenine + :onetwothree -> 29"));
  ASSERT_EQ("55047", calc.Evaluate("40244 + 72131 -> c_34"));
  ASSERT_EQ("2l7r", calc.Evaluate(":kib <- g4e5_17 -> 1f_16"));
  ASSERT_EQ("80007", calc.Evaluate(":kib"));
  ASSERT_EQ("100", calc.Evaluate(":onezerozero -> a_33"));
  ASSERT_EQ("8116900", calc.Evaluate(":r <- 54lj_25 * :onezerozero"));
  ASSERT_EQ("8116900", calc.Evaluate(":r"));
  ASSERT_EQ("11kaao6", calc.Evaluate(":m <- :nineninenine << 10010_2 -> 25"));
  ASSERT_EQ("261881856", calc.Evaluate(":m"));
  ASSERT_EQ("a", calc.Evaluate(":o <- :onezero -> 1h_19"));
  ASSERT_EQ("10", calc.Evaluate(":o"));
  ASSERT_EQ("hi000", calc.Evaluate(":g <- :fivesixtwo << 23_6 -> 1b_21"));
  ASSERT_EQ("18415616", calc.Evaluate(":g"));
  ASSERT_EQ("12502", calc.Evaluate(":j <- 12502"));
  ASSERT_EQ("12502", calc.Evaluate(":j"));
  ASSERT_EQ("2311", calc.Evaluate(":j <- 69367 % :eighteightseven -> 4_30"));
  ASSERT_EQ("181", calc.Evaluate(":j"));
  ASSERT_EQ("a", calc.Evaluate(":e <- :onezero -> 17_21"));
  ASSERT_EQ("10", calc.Evaluate(":e"));
  ASSERT_EQ("5", calc.Evaluate("1tf6_31 / 32dd_15 -> 7"));
  ASSERT_EQ("89445", calc.Evaluate("fa24_18 - 10031_6"));
  ASSERT_EQ("4bl9", calc.Evaluate(":h <- 11454_15 -> 15_18"));
  ASSERT_EQ("54979", calc.Evaluate(":h"));
  ASSERT_EQ("99978", calc.Evaluate(":b <- 2pql_33"));
  ASSERT_EQ("99978", calc.Evaluate(":b"));
  ASSERT_EQ("4ji4", calc.Evaluate(":q <- 86dg_20 -> o_31"));
  ASSERT_EQ("66676", calc.Evaluate(":q"));
  ASSERT_EQ("b113", calc.Evaluate("54352 -> h_23"));
  ASSERT_EQ("76733", calc.Evaluate(":x <- 11t3_34 + 1964_30"));
  ASSERT_EQ("76733", calc.Evaluate(":x"));
  ASSERT_EQ("887", calc.Evaluate(":d <- :eighteightseven"));
  ASSERT_EQ("887", calc.Evaluate(":d"));
  ASSERT_EQ("1598", calc.Evaluate(":onefivenineeight"));
  ASSERT_EQ("4341", calc.Evaluate(":rxfxhz <- :onefivenineeight + :onefivenineeight -> 9_12"));
  ASSERT_EQ("3196", calc.Evaluate(":rxfxhz"));
  ASSERT_EQ("86517", calc.Evaluate("86517"));
  ASSERT_EQ("1ja3", calc.Evaluate("13p7_28 -> o_26"));
  ASSERT_EQ("136131", calc.Evaluate(":n <- 26139 -> 7_26"));
  ASSERT_EQ("26139", calc.Evaluate(":n"));
  ASSERT_EQ("100100000010100", calc.Evaluate("14d2_25 -> 2_35"));
  ASSERT_EQ("21685", calc.Evaluate("21685"));
  ASSERT_EQ("27033", calc.Evaluate("27033 % 78171"));
  ASSERT_EQ("887", calc.Evaluate(":m <- :eighteightseven"));
  ASSERT_EQ("887", calc.Evaluate(":m"));
  ASSERT_EQ("100", calc.Evaluate(":onezerozero"));
  ASSERT_EQ("35474", calc.Evaluate("1bacd_15 % 54719"));
  ASSERT_EQ("ca4c", calc.Evaluate("3611_25 + 49441 -> 40_5"));
  ASSERT_EQ("b7ajfg2", calc.Evaluate("91330 * b49b_15 -> 11010_2"));
  ASSERT_EQ("0", calc.Evaluate(":l <- 1ar9_31 / 6212_24 -> 9_14"));
  ASSERT_EQ("0", calc.Evaluate(":l"));
  ASSERT_EQ("ab57", calc.Evaluate("264f_27 % 93981 -> g_32"));
  ASSERT_EQ("0", calc.Evaluate("2011524_6 / 12a23_17 -> 9_12"));
  ASSERT_EQ("49504", calc.Evaluate("49504"));
  ASSERT_EQ("887", calc.Evaluate(":p <- :eighteightseven"));
  ASSERT_EQ("887", calc.Evaluate(":p"));
  ASSERT_EQ("17n", calc.Evaluate(":onezerozerothree -> s_31"));
  ASSERT_EQ("45831", calc.Evaluate(":s <- 45831"));
  ASSERT_EQ("45831", calc.Evaluate(":s"));
  ASSERT_EQ("u0v", calc.Evaluate(":f <- 34711 -> 37_9"));
  ASSERT_EQ("34711", calc.Evaluate(":f"));
  ASSERT_EQ("1598", calc.Evaluate(":m <- :onefivenineeight"));
  ASSERT_EQ("1598", calc.Evaluate(":m"));
  ASSERT_EQ("7521", calc.Evaluate("1d61_16"));
  ASSERT_EQ("1", calc.Evaluate(":i <- 64091 % :onezero"));
  ASSERT_EQ("1", calc.Evaluate(":i"));
  ASSERT_EQ("73196", calc.Evaluate("10001110111101100_2"));
  ASSERT_EQ("887", calc.Evaluate(":eighteightseven % 320112_4"));
  ASSERT_EQ("5d3", calc.Evaluate(":i <- 2dqf_27 % h4b_20 -> f_23"));
  ASSERT_EQ("1323", calc.Evaluate(":i"));
  ASSERT_EQ("22", calc.Evaluate(":twotwo"));
  ASSERT_EQ("27973", calc.Evaluate("1102101001_3"));
  ASSERT_EQ("df", calc.Evaluate("3302102_5 % :fivesixtwo -> 24"));
  ASSERT_EQ("887", calc.Evaluate(":eighteightseven % 65a0_14"));
  ASSERT_EQ("14677", calc.Evaluate(":j <- 19b6a_15 -> 16"));
  ASSERT_EQ("83575", calc.Evaluate(":j"));
  ASSERT_EQ("pc", calc.Evaluate(":eighteightseven -> 1e_21"));
  ASSERT_EQ("2ojc", calc.Evaluate(":mw <- 7908 << 3 -> 11100_2"));
  ASSERT_EQ("63264", calc.Evaluate(":mw"));
  ASSERT_EQ("66835", calc.Evaluate(":ut <- 10513_16"));
  ASSERT_EQ("66835", calc.Evaluate(":ut"));
  ASSERT_EQ("4gec", calc.Evaluate(":d <- :fivesixtwo + 120153_9 -> 13_22"));
  ASSERT_EQ("72862", calc.Evaluate(":d"));
  ASSERT_EQ("0", calc.Evaluate(":w <- 27637_9 / 9bae_21"));
  ASSERT_EQ("0", calc.Evaluate(":w"));
  ASSERT_EQ("4", calc.Evaluate(":l <- 28108 / 6445"));
  ASSERT_EQ("4", calc.Evaluate(":l"));
  ASSERT_EQ("50187", calc.Evaluate(":v <- 6597_20"));
  ASSERT_EQ("50187", calc.Evaluate(":v"));
  ASSERT_EQ("94d1", calc.Evaluate(":g <- 30nr_29 -> 20"));
  ASSERT_EQ("73861", calc.Evaluate(":g"));
  ASSERT_EQ("9356", calc.Evaluate("46380 - 22k0_26"));
  ASSERT_EQ("1a3ba", calc.Evaluate(":l <- :onetwothree + 10039_14 -> c_28"));
  ASSERT_EQ("38590", calc.Evaluate(":l"));
  ASSERT_EQ("96v", calc.Evaluate(":b <- :onezerozerothree * :onezero -> 1e_19"));
  ASSERT_EQ("10030", calc.Evaluate(":b"));
  ASSERT_EQ("8aec", calc.Evaluate(":m <- 29472 -> 11_14"));
  ASSERT_EQ("29472", calc.Evaluate(":m"));
  ASSERT_EQ("1", calc.Evaluate("5934_25 >> g_30 -> 20"));
  ASSERT_EQ("531a", calc.Evaluate(":dyq <- 28mf_31 % 91i_29 -> b_17"));
  ASSERT_EQ("7039", calc.Evaluate(":dyq"));
  ASSERT_EQ("89581", calc.Evaluate("111313231_4"));
  ASSERT_EQ("3975942513", calc.Evaluate(":m <- 70647 * 323036_7"));
  ASSERT_EQ("3975942513", calc.Evaluate(":m"));
  ASSERT_EQ("0", calc.Evaluate(":g <- 5gb1_21 / 502615_7 -> 5"));
  ASSERT_EQ("0", calc.Evaluate(":g"));
  ASSERT_EQ("p1e2i", calc.Evaluate(":jw <- :nineninenine * 1ac3_23 -> 1b_18"));
  ASSERT_EQ("17718264", calc.Evaluate(":jw"));
  ASSERT_EQ("359536086", calc.Evaluate("a646_14 * 12537"));
  ASSERT_EQ("0", calc.Evaluate(":nineninenine / 6801_19 -> 26_7"));
  ASSERT_EQ("2", calc.Evaluate(":w <- 71465 / 618f_18 -> 6_31"));
  ASSERT_EQ("2", calc.Evaluate(":w"));
  ASSERT_EQ("63e", calc.Evaluate(":onefivenineeight -> 16"));
  ASSERT_EQ("55791", calc.Evaluate("10011101110100111_2 -> 11"));
  ASSERT_EQ("7p", calc.Evaluate("199a5_14 % :eighteightseven -> 35"));
  ASSERT_EQ("u3m", calc.Evaluate("28945 -> 31"));
  ASSERT_EQ("an1", calc.Evaluate("12343_10 -> 34"));
  ASSERT_EQ("nls", calc.Evaluate(":onezerozero + sfi_30 -> 25_14"));
  ASSERT_EQ("256040720", calc.Evaluate(":h <- :fivesixtwo * 81192 -> 20_4"));
  ASSERT_EQ("45629904", calc.Evaluate(":h"));
  ASSERT_EQ("45913", calc.Evaluate("1ph6_29 -> 10"));
  ASSERT_EQ("100", calc.Evaluate(":de <- :onezerozero"));
  ASSERT_EQ("100", calc.Evaluate(":de"));
  ASSERT_EQ("52695", calc.Evaluate("1bjt_34"));
  ASSERT_EQ("13212033", calc.Evaluate("31119 -> 4_22"));
  ASSERT_EQ("1hn4p", calc.Evaluate(":o <- :onezerozerothree * :onezerozerothree -> 28"));
  ASSERT_EQ("1006009", calc.Evaluate(":o"));
  ASSERT_EQ("53598", calc.Evaluate("53598"));
  ASSERT_EQ("50146", calc.Evaluate(":u <- 423632_7 -> b_14"));
  ASSERT_EQ("73376", calc.Evaluate(":u"));
  ASSERT_EQ("5ne6", calc.Evaluate("25s1_35 -> 25"));
  ASSERT_EQ("3l2b", calc.Evaluate("3l2b_29 -> 15_24"));
  ASSERT_EQ("a", calc.Evaluate(":onezero -> s_30"));
  ASSERT_EQ("419", calc.Evaluate("67297 % :fivesixtwo"));
  ASSERT_EQ("b31b", calc.Evaluate("24a2_33 -> 17_12"));
  ASSERT_EQ("3", calc.Evaluate("1i0m_30 / 18cf_20 -> 9_31"));
  ASSERT_EQ("53", calc.Evaluate(":onetwothree -> 24"));
  ASSERT_EQ("55070", calc.Evaluate("6hda_20"));
  ASSERT_EQ("10e8c", calc.Evaluate("87715 -> 14_13"));
  ASSERT_EQ("0", calc.Evaluate(":d <- :nineninenine / s0p_34 -> 21"));
  ASSERT_EQ("0", calc.Evaluate(":d"));
  ASSERT_EQ("55kf", calc.Evaluate("292o_33 -> 11_24"));
  ASSERT_EQ("1051721728", calc.Evaluate(":u <- :onezerozerothree << k_21"));
  ASSERT_EQ("1051721728", calc.Evaluate(":u"));
  ASSERT_EQ("419e", calc.Evaluate(":a <- 49418 -> 35_6"));
  ASSERT_EQ("49418", calc.Evaluate(":a"));
  ASSERT_EQ("2fgi", calc.Evaluate("24892 + 442a_14 -> 24"));
  ASSERT_EQ("28fe", calc.Evaluate(":twotwo * :eighteightseven -> 10100_2"));
  ASSERT_EQ("m", calc.Evaluate(":twotwo -> 33"));
  ASSERT_EQ("0", calc.Evaluate(":onezero / 24569 -> h_28"));
  ASSERT_EQ("98822", calc.Evaluate(":o <- 98822"));
  ASSERT_EQ("98822", calc.Evaluate(":o"));
  ASSERT_EQ("16568", calc.Evaluate("23306 -> b_35"));
  ASSERT_EQ("b1f", calc.Evaluate(":w <- ci3_29 -> 1e_17"));
  ASSERT_EQ("10617", calc.Evaluate(":w"));
  ASSERT_EQ("11cb", calc.Evaluate("34187 -> 1e_18"));
  ASSERT_EQ("1190912", calc.Evaluate("213334_7 << 5"));
  ASSERT_EQ("1003", calc.Evaluate(":c <- :onezerozerothree"));
  ASSERT_EQ("1003", calc.Evaluate(":c"));
  ASSERT_EQ("26", calc.Evaluate(":l <- :twotwo -> 8"));
  ASSERT_EQ("22", calc.Evaluate(":l"));
  ASSERT_EQ("16642", calc.Evaluate("40402_8"));
  ASSERT_EQ("20056", calc.Evaluate("20056"));
  ASSERT_EQ("0", calc.Evaluate("4725 / 27431_13"));
  ASSERT_EQ("22", calc.Evaluate(":twotwo"));
  ASSERT_EQ("440214", calc.Evaluate("202121101_3 + :threeseven -> 5_9"));
  ASSERT_EQ("50622", calc.Evaluate("66b2_20"));
  ASSERT_EQ("20423", calc.Evaluate(":onezerozero + 604d_15"));
  ASSERT_EQ("68663", calc.Evaluate("10111012002_3"));
  ASSERT_EQ("25g", calc.Evaluate(":r <- :onezerozerothree -> l_31"));
  ASSERT_EQ("1003", calc.Evaluate(":r"));
  ASSERT_EQ("57re", calc.Evaluate(":o <- 32032 + 3cp2_29 -> 16_22"));
  ASSERT_EQ("116018", calc.Evaluate(":o"));
  ASSERT_EQ("22", calc.Evaluate(":twotwo"));
  ASSERT_EQ("29352", calc.Evaluate(":a <- 8a6c_15"));
  ASSERT_EQ("29352", calc.Evaluate(":a"));
  ASSERT_EQ("62224", calc.Evaluate(":au <- 52e9_23"));
  ASSERT_EQ("62224", calc.Evaluate(":au"));
  ASSERT_EQ("85lj", calc.Evaluate("88085 -> 22"));
  ASSERT_EQ("3nogk6a", calc.Evaluate(":ij <- 18dc_34 * 12002031_4 -> 1b_15"));
  ASSERT_EQ("1211281302", calc.Evaluate(":ij"));
  ASSERT_EQ("65171", calc.Evaluate(":s <- 65171"));
  ASSERT_EQ("65171", calc.Evaluate(":s"));
  ASSERT_EQ("11h", calc.Evaluate(":x <- :eighteightseven -> 41_7"));
  ASSERT_EQ("887", calc.Evaluate(":x"));
  ASSERT_EQ("4igf", calc.Evaluate(":g <- 19404_15 + :nineninenine -> q_33"));
  ASSERT_EQ("82903", calc.Evaluate(":g"));
  ASSERT_EQ("277593b", calc.Evaluate(":v <- jul_35 << 9_15 -> 13"));
  ASSERT_EQ("12465152", calc.Evaluate(":v"));
  ASSERT_EQ("f8c6", calc.Evaluate("76217 -> h_18"));
  ASSERT_EQ("4hn9pmk", calc.Evaluate("111211122_4 * h1e_31 -> 1b_15"));
  ASSERT_EQ("1", calc.Evaluate("88779 / 86278"));
  ASSERT_EQ("14398", calc.Evaluate("3bb34_12 -> g_26"));
  ASSERT_EQ("89047", calc.Evaluate("4e41_27"));
  ASSERT_EQ("20lm", calc.Evaluate(":ibt <- 6hlb_22 -> 12_31"));
  ASSERT_EQ("72589", calc.Evaluate(":ibt"));
  ASSERT_EQ("73457", calc.Evaluate("73457 << 0_5"));
  ASSERT_EQ("0", calc.Evaluate(":nineninenine / 3d43_25"));
  ASSERT_EQ("1ghp", calc.Evaluate(":i <- 41935 -> 12_28"));
  ASSERT_EQ("41935", calc.Evaluate(":i"));
  ASSERT_EQ("1598", calc.Evaluate(":onefivenineeight"));
  ASSERT_EQ("127627", calc.Evaluate("1401b_15 + 63476"));
  ASSERT_EQ("1blg", calc.Evaluate("9320_15 + :onezerozero -> s_34"));
  ASSERT_EQ("0", calc.Evaluate(":onefivenineeight / 69439 -> 20"));
  ASSERT_EQ("1", calc.Evaluate(":r <- 372n_30 / 29907_13"));
  ASSERT_EQ("1", calc.Evaluate(":r"));
  ASSERT_EQ("1g", calc.Evaluate(":uv <- 5330_17 >> 9_30 -> 33"));
  ASSERT_EQ("49", calc.Evaluate(":uv"));
  ASSERT_EQ("1759", calc.Evaluate("3kg_21"));
  ASSERT_EQ("a5a", calc.Evaluate("91864 % 13979 -> 28"));
  ASSERT_EQ("123", calc.Evaluate(":frj <- :onetwothree"));
  ASSERT_EQ("123", calc.Evaluate(":frj"));
  ASSERT_EQ("0", calc.Evaluate(":fg <- 1xgx_34 >> k_24 -> 34"));
  ASSERT_EQ("0", calc.Evaluate(":fg"));
  ASSERT_EQ("150072", calc.Evaluate("91919 -> 9"));
  ASSERT_EQ("68897", calc.Evaluate("33a55_12"));
  ASSERT_EQ("25923", calc.Evaluate(":m <- 25923"));
  ASSERT_EQ("25923", calc.Evaluate(":m"));
  ASSERT_EQ("100", calc.Evaluate(":u <- :onezerozero"));
  ASSERT_EQ("100", calc.Evaluate(":u"));
  ASSERT_EQ("1123e01", calc.Evaluate(":h <- :fivesixtwo * 101010100111111_2 -> f_29"));
  ASSERT_EQ("12264526", calc.Evaluate(":h"));
  ASSERT_EQ("28d", calc.Evaluate("63704 % :eighteightseven -> 16_11"));
  ASSERT_EQ("100", calc.Evaluate(":k <- :onezerozero"));
  ASSERT_EQ("100", calc.Evaluate(":k"));
  ASSERT_EQ("1", calc.Evaluate(":q <- 77603 / 61g2_19"));
  ASSERT_EQ("1", calc.Evaluate(":q"));
  ASSERT_EQ("49969", calc.Evaluate(":ovg <- 49969 % 78458"));
  ASSERT_EQ("49969", calc.Evaluate(":ovg"));
  ASSERT_EQ("22779", calc.Evaluate(":w <- 22779"));
  ASSERT_EQ("22779", calc.Evaluate(":w"));
}

TEST(Baseball, ExtractTargetBaseWithOperationWithTarget) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  {
     std::vector<std::string> tokens = {"1982_11", "%", "gt3_32", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1982_11\", \"%\", \"gt3_32\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1982_11", "%", "gt3_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1982_11\", \"%\", \"gt3_32\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11100001010110_2", "/", "5320_21", "->", "170560_8"};
     ASSERT_EQ(61808, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11100001010110_2\", \"/\", \"5320_21\", \"->\", \"170560_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11100001010110_2", "/", "5320_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11100001010110_2\", \"/\", \"5320_21\", \"->\", \"170560_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"13266_11", "+", ":threeseven", "->", "626k_22"};
     ASSERT_EQ(65008, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"13266_11\", \"+\", \":threeseven\", \"->\", \"626k_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"13266_11", "+", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"13266_11\", \"+\", \":threeseven\", \"->\", \"626k_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2ek_22", "<<", "4937_12", "->", "1bfh_26"};
     ASSERT_EQ(25419, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2ek_22\", \"<<\", \"4937_12\", \"->\", \"1bfh_26\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2ek_22", "<<", "4937_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2ek_22\", \"<<\", \"4937_12\", \"->\", \"1bfh_26\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"31b7_15", "<<", ":onefivenineeight", "->", "6fgk_21"};
     ASSERT_EQ(62537, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31b7_15\", \"<<\", \":onefivenineeight\", \"->\", \"6fgk_21\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"31b7_15", "<<", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31b7_15\", \"<<\", \":onefivenineeight\", \"->\", \"6fgk_21\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"59205", "*", "270a4_11", "->", "4484_26"};
     ASSERT_EQ(73220, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"59205\", \"*\", \"270a4_11\", \"->\", \"4484_26\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"59205", "*", "270a4_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"59205\", \"*\", \"270a4_11\", \"->\", \"4484_26\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", ">>", "k3s_35", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \">>\", \"k3s_35\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", ">>", "k3s_35"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \">>\", \"k3s_35\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"a875_20", "*", ":threeseven", "->", "d305_18"};
     ASSERT_EQ(76793, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"a875_20\", \"*\", \":threeseven\", \"->\", \"d305_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"a875_20", "*", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"a875_20\", \"*\", \":threeseven\", \"->\", \"d305_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "*", "ij6_23", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"*\", \"ij6_23\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", "*", "ij6_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"*\", \"ij6_23\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "%", "22626", "->", "c79i_20"};
     ASSERT_EQ(98998, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"%\", \"22626\", \"->\", \"c79i_20\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "%", "22626"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"%\", \"22626\", \"->\", \"c79i_20\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1444055_6", "/", "269a_32", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1444055_6\", \"/\", \"269a_32\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1444055_6", "/", "269a_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1444055_6\", \"/\", \"269a_32\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6p6_27", "-", "62659", "->", "2ejo_25"};
     ASSERT_EQ(40499, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6p6_27\", \"-\", \"62659\", \"->\", \"2ejo_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6p6_27", "-", "62659"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6p6_27\", \"-\", \"62659\", \"->\", \"2ejo_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"37o_31", "%", "4aib_22", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37o_31\", \"%\", \"4aib_22\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"37o_31", "%", "4aib_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37o_31\", \"%\", \"4aib_22\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3ia_28", ">>", "1a319_13", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3ia_28\", \">>\", \"1a319_13\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3ia_28", ">>", "1a319_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3ia_28\", \">>\", \"1a319_13\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10841", "<<", "10352_16", "->", "23kh_25"};
     ASSERT_EQ(33642, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10841\", \"<<\", \"10352_16\", \"->\", \"23kh_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10841", "<<", "10352_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10841\", \"<<\", \"10352_16\", \"->\", \"23kh_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"b809_20", ">>", "2915_19", "->", "42494"};
     ASSERT_EQ(42494, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"b809_20\", \">>\", \"2915_19\", \"->\", \"42494\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"b809_20", ">>", "2915_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"b809_20\", \">>\", \"2915_19\", \"->\", \"42494\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "<<", "97212", "->", "3389"};
     ASSERT_EQ(3389, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"<<\", \"97212\", \"->\", \"3389\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", "<<", "97212"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"<<\", \"97212\", \"->\", \"3389\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1343144_5", "+", "cff9_19", "->", "2mkh_29"};
     ASSERT_EQ(67877, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1343144_5\", \"+\", \"cff9_19\", \"->\", \"2mkh_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1343144_5", "+", "cff9_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1343144_5\", \"+\", \"cff9_19\", \"->\", \"2mkh_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "/", "e9d6_16", "->", "70105"};
     ASSERT_EQ(70105, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"/\", \"e9d6_16\", \"->\", \"70105\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "/", "e9d6_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"/\", \"e9d6_16\", \"->\", \"70105\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"31rk_31", "*", ":onezerozero", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31rk_31\", \"*\", \":onezerozero\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"31rk_31", "*", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31rk_31\", \"*\", \":onezerozero\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23199", "/", "33949", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23199\", \"/\", \"33949\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23199", "/", "33949"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23199\", \"/\", \"33949\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"7rp_31", "%", "10oi_31", "->", "1ii3_34"};
     ASSERT_EQ(60727, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7rp_31\", \"%\", \"10oi_31\", \"->\", \"1ii3_34\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"7rp_31", "%", "10oi_31"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7rp_31\", \"%\", \"10oi_31\", \"->\", \"1ii3_34\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"16224", "-", "1jom_34", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16224\", \"-\", \"1jom_34\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"16224", "-", "1jom_34"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16224\", \"-\", \"1jom_34\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"134p_29", "<<", "1u8g_33", "->", "49b7_18"};
     ASSERT_EQ(26449, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"134p_29\", \"<<\", \"1u8g_33\", \"->\", \"49b7_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"134p_29", "<<", "1u8g_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"134p_29\", \"<<\", \"1u8g_33\", \"->\", \"49b7_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2s79_29", "%", "85907", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2s79_29\", \"%\", \"85907\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2s79_29", "%", "85907"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2s79_29\", \"%\", \"85907\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"7209", "<<", ":onezerozerothree", "->", "1j34_20"};
     ASSERT_EQ(15664, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7209\", \"<<\", \":onezerozerothree\", \"->\", \"1j34_20\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"7209", "<<", ":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7209\", \"<<\", \":onezerozerothree\", \"->\", \"1j34_20\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"d4ad_16", "<<", "57fh_24", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d4ad_16\", \"<<\", \"57fh_24\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"d4ad_16", "<<", "57fh_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d4ad_16\", \"<<\", \"57fh_24\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"37506", "/", "5680", "->", "c9o_32"};
     ASSERT_EQ(12600, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37506\", \"/\", \"5680\", \"->\", \"c9o_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"37506", "/", "5680"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37506\", \"/\", \"5680\", \"->\", \"c9o_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"44913", "%", "541a_12", "->", "46819"};
     ASSERT_EQ(46819, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"44913\", \"%\", \"541a_12\", \"->\", \"46819\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"44913", "%", "541a_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"44913\", \"%\", \"541a_12\", \"->\", \"46819\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "+", ":onetwothree", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"+\", \":onetwothree\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "+", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"+\", \":onetwothree\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"49418_10", "-", "153133_7", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"49418_10\", \"-\", \"153133_7\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"49418_10", "-", "153133_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"49418_10\", \"-\", \"153133_7\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"28623", "*", ":fivesixtwo", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"28623\", \"*\", \":fivesixtwo\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"28623", "*", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"28623\", \"*\", \":fivesixtwo\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2g8j_23", "+", ":onezero", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2g8j_23\", \"+\", \":onezero\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2g8j_23", "+", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2g8j_23\", \"+\", \":onezero\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "*", ":threeseven", "->", "2060"};
     ASSERT_EQ(2060, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \":threeseven\", \"->\", \"2060\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "*", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \":threeseven\", \"->\", \"2060\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "+", "3eb6_30", "->", "1e0h_33"};
     ASSERT_EQ(51200, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"+\", \"3eb6_30\", \"->\", \"1e0h_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "+", "3eb6_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"+\", \"3eb6_30\", \"->\", \"1e0h_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"43357", "%", "4263", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"43357\", \"%\", \"4263\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"43357", "%", "4263"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"43357\", \"%\", \"4263\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10211434_5", "*", "34724_10", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10211434_5\", \"*\", \"34724_10\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10211434_5", "*", "34724_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10211434_5\", \"*\", \"34724_10\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "/", "4g7j_26", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"/\", \"4g7j_26\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "/", "4g7j_26"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"/\", \"4g7j_26\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "%", "4468_12", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"%\", \"4468_12\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "%", "4468_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"%\", \"4468_12\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "%", "7124_9", "->", "489g_19"};
     ASSERT_EQ(30511, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"%\", \"7124_9\", \"->\", \"489g_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "%", "7124_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"%\", \"7124_9\", \"->\", \"489g_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"25ac6_14", "-", "67903", "->", "1jh7_33"};
     ASSERT_EQ(57196, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25ac6_14\", \"-\", \"67903\", \"->\", \"1jh7_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"25ac6_14", "-", "67903"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25ac6_14\", \"-\", \"67903\", \"->\", \"1jh7_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"fj3_28", "%", ":eighteightseven", "->", "7673_18"};
     ASSERT_EQ(42897, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"fj3_28\", \"%\", \":eighteightseven\", \"->\", \"7673_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"fj3_28", "%", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"fj3_28\", \"%\", \":eighteightseven\", \"->\", \"7673_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"40106", ">>", "2eb8_23", "->", "99054"};
     ASSERT_EQ(99054, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"40106\", \">>\", \"2eb8_23\", \"->\", \"99054\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"40106", ">>", "2eb8_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"40106\", \">>\", \"2eb8_23\", \"->\", \"99054\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"40a1_22", ">>", "84231_10", "->", "4cf1_28"};
     ASSERT_EQ(97637, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"40a1_22\", \">>\", \"84231_10\", \"->\", \"4cf1_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"40a1_22", ">>", "84231_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"40a1_22\", \">>\", \"84231_10\", \"->\", \"4cf1_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "<<", "bhh_28", "->", "32121112_4"};
     ASSERT_EQ(58966, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"<<\", \"bhh_28\", \"->\", \"32121112_4\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "<<", "bhh_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"<<\", \"bhh_28\", \"->\", \"32121112_4\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "-", ":onezero", "->", "21ik_35"};
     ASSERT_EQ(87625, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"-\", \":onezero\", \"->\", \"21ik_35\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "-", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"-\", \":onezero\", \"->\", \"21ik_35\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4838_28", "-", "10120303_5", "->", "2i18_20"};
     ASSERT_EQ(23228, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4838_28\", \"-\", \"10120303_5\", \"->\", \"2i18_20\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4838_28", "-", "10120303_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4838_28\", \"-\", \"10120303_5\", \"->\", \"2i18_20\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11xl_35", "-", ":onezerozero", "->", "e83g_19"};
     ASSERT_EQ(98987, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11xl_35\", \"-\", \":onezerozero\", \"->\", \"e83g_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11xl_35", "-", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11xl_35\", \"-\", \":onezerozero\", \"->\", \"e83g_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"100011121_4", "/", "53111", "->", "9181_11"};
     ASSERT_EQ(12189, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"100011121_4\", \"/\", \"53111\", \"->\", \"9181_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"100011121_4", "/", "53111"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"100011121_4\", \"/\", \"53111\", \"->\", \"9181_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"50b2_12", "+", "5h3g_22", "->", "1304403_5"};
     ASSERT_EQ(25603, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"50b2_12\", \"+\", \"5h3g_22\", \"->\", \"1304403_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"50b2_12", "+", "5h3g_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"50b2_12\", \"+\", \"5h3g_22\", \"->\", \"1304403_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3g73_25", "/", "21434_9", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3g73_25\", \"/\", \"21434_9\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3g73_25", "/", "21434_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3g73_25\", \"/\", \"21434_9\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2505_24", "<<", ":twotwo", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2505_24\", \"<<\", \":twotwo\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2505_24", "<<", ":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2505_24\", \"<<\", \":twotwo\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"56914", "*", ":onezerozero", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56914\", \"*\", \":onezerozero\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"56914", "*", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56914\", \"*\", \":onezerozero\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"22gt_33", "+", "1cag_18", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22gt_33\", \"+\", \"1cag_18\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"22gt_33", "+", "1cag_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22gt_33\", \"+\", \"1cag_18\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "+", "19993_14", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"+\", \"19993_14\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "+", "19993_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"+\", \"19993_14\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"26570_10", "%", ":onezero", "->", "23305_9"};
     ASSERT_EQ(15557, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26570_10\", \"%\", \":onezero\", \"->\", \"23305_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"26570_10", "%", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26570_10\", \"%\", \":onezero\", \"->\", \"23305_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"c8ee_20", "+", "51c_32", "->", "25071_8"};
     ASSERT_EQ(10809, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"c8ee_20\", \"+\", \"51c_32\", \"->\", \"25071_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"c8ee_20", "+", "51c_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"c8ee_20\", \"+\", \"51c_32\", \"->\", \"25071_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2olj_31", "<<", "3aae_17", "->", "91b_17"};
     ASSERT_EQ(2629, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2olj_31\", \"<<\", \"3aae_17\", \"->\", \"91b_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2olj_31", "<<", "3aae_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2olj_31\", \"<<\", \"3aae_17\", \"->\", \"91b_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"50b_21", "+", "265j_27", "->", "2ei8_30"};
     ASSERT_EQ(67148, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"50b_21\", \"+\", \"265j_27\", \"->\", \"2ei8_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"50b_21", "+", "265j_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"50b_21\", \"+\", \"265j_27\", \"->\", \"2ei8_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "*", "17ed2_15", "->", "64664"};
     ASSERT_EQ(64664, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \"17ed2_15\", \"->\", \"64664\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "*", "17ed2_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \"17ed2_15\", \"->\", \"64664\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "-", "10000111111110001_2", "->", "23928"};
     ASSERT_EQ(23928, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"-\", \"10000111111110001_2\", \"->\", \"23928\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", "-", "10000111111110001_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"-\", \"10000111111110001_2\", \"->\", \"23928\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"31231112_4", "%", "35459", "->", "16129_14"};
     ASSERT_EQ(55113, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31231112_4\", \"%\", \"35459\", \"->\", \"16129_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"31231112_4", "%", "35459"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31231112_4\", \"%\", \"35459\", \"->\", \"16129_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1110133_6", "+", "3l25_30", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1110133_6\", \"+\", \"3l25_30\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1110133_6", "+", "3l25_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1110133_6\", \"+\", \"3l25_30\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1e2t_30", "%", "23616", "->", "44h9_23"};
     ASSERT_EQ(51184, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1e2t_30\", \"%\", \"23616\", \"->\", \"44h9_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1e2t_30", "%", "23616"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1e2t_30\", \"%\", \"23616\", \"->\", \"44h9_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"79268", "-", ":nineninenine", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"79268\", \"-\", \":nineninenine\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"79268", "-", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"79268\", \"-\", \":nineninenine\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1j84_20", "-", ":eighteightseven", "->", "39na_24"};
     ASSERT_EQ(47218, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1j84_20\", \"-\", \":eighteightseven\", \"->\", \"39na_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1j84_20", "-", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1j84_20\", \"-\", \":eighteightseven\", \"->\", \"39na_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"15kd_35", "-", "cac_35", "->", "380q_30"};
     ASSERT_EQ(88226, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"15kd_35\", \"-\", \"cac_35\", \"->\", \"380q_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"15kd_35", "-", "cac_35"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"15kd_35\", \"-\", \"cac_35\", \"->\", \"380q_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1h3u_34", "%", ":nineninenine", "->", "17237"};
     ASSERT_EQ(17237, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1h3u_34\", \"%\", \":nineninenine\", \"->\", \"17237\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1h3u_34", "%", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1h3u_34\", \"%\", \":nineninenine\", \"->\", \"17237\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3a36_24", "-", "34482_10", "->", "68724"};
     ASSERT_EQ(68724, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3a36_24\", \"-\", \"34482_10\", \"->\", \"68724\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3a36_24", "-", "34482_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3a36_24\", \"-\", \"34482_10\", \"->\", \"68724\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"221162_7", "<<", "240030_6", "->", "20431_12"};
     ASSERT_EQ(42085, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"221162_7\", \"<<\", \"240030_6\", \"->\", \"20431_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"221162_7", "<<", "240030_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"221162_7\", \"<<\", \"240030_6\", \"->\", \"20431_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"d95f_19", "/", "17a78_14", "->", "17574_14"};
     ASSERT_EQ(58706, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d95f_19\", \"/\", \"17a78_14\", \"->\", \"17574_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"d95f_19", "/", "17a78_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d95f_19\", \"/\", \"17a78_14\", \"->\", \"17574_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"99040", "%", "2g75_22", "->", "ln8_33"};
     ASSERT_EQ(23636, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"99040\", \"%\", \"2g75_22\", \"->\", \"ln8_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"99040", "%", "2g75_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"99040\", \"%\", \"2g75_22\", \"->\", \"ln8_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"403a_24", ">>", ":onezerozero", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"403a_24\", \">>\", \":onezerozero\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"403a_24", ">>", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"403a_24\", \">>\", \":onezerozero\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4f0q_27", "*", "2rsj_29", "->", "11414"};
     ASSERT_EQ(11414, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4f0q_27\", \"*\", \"2rsj_29\", \"->\", \"11414\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4f0q_27", "*", "2rsj_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4f0q_27\", \"*\", \"2rsj_29\", \"->\", \"11414\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"216654_7", "/", ":onefivenineeight", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"216654_7\", \"/\", \":onefivenineeight\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"216654_7", "/", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"216654_7\", \"/\", \":onefivenineeight\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"17555", "%", ":threeseven", "->", "19354"};
     ASSERT_EQ(19354, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"17555\", \"%\", \":threeseven\", \"->\", \"19354\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"17555", "%", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"17555\", \"%\", \":threeseven\", \"->\", \"19354\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"32434", "-", ":onezerozero", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"32434\", \"-\", \":onezerozero\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"32434", "-", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"32434\", \"-\", \":onezerozero\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11225", "%", "690g_25", "->", "74977"};
     ASSERT_EQ(74977, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11225\", \"%\", \"690g_25\", \"->\", \"74977\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11225", "%", "690g_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11225\", \"%\", \"690g_25\", \"->\", \"74977\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"43519", "%", "328p_27", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"43519\", \"%\", \"328p_27\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"43519", "%", "328p_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"43519\", \"%\", \"328p_27\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"25274", "%", ":fivesixtwo", "->", "33329"};
     ASSERT_EQ(33329, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25274\", \"%\", \":fivesixtwo\", \"->\", \"33329\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"25274", "%", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25274\", \"%\", \":fivesixtwo\", \"->\", \"33329\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3h58_30", ">>", "5962a_11", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3h58_30\", \">>\", \"5962a_11\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3h58_30", ">>", "5962a_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3h58_30\", \">>\", \"5962a_11\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", ">>", "490b_28", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \">>\", \"490b_28\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", ">>", "490b_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \">>\", \"490b_28\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23082", ">>", "95976", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23082\", \">>\", \"95976\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23082", ">>", "95976"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23082\", \">>\", \"95976\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", ">>", "99555", "->", "b02a_14"};
     ASSERT_EQ(30222, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \">>\", \"99555\", \"->\", \"b02a_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", ">>", "99555"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \">>\", \"99555\", \"->\", \"b02a_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"35496", ">>", "7a6f_20", "->", "1b128_14"};
     ASSERT_EQ(68832, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"35496\", \">>\", \"7a6f_20\", \"->\", \"1b128_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"35496", ">>", "7a6f_20"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"35496\", \">>\", \"7a6f_20\", \"->\", \"1b128_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"49401", "<<", "82154", "->", "3578_15"};
     ASSERT_EQ(11363, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"49401\", \"<<\", \"82154\", \"->\", \"3578_15\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"49401", "<<", "82154"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"49401\", \"<<\", \"82154\", \"->\", \"3578_15\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "/", ":onetwothree", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"/\", \":onetwothree\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "/", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"/\", \":onetwothree\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"89371", "*", ":onefivenineeight", "->", "2kll_33"};
     ASSERT_EQ(94368, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"89371\", \"*\", \":onefivenineeight\", \"->\", \"2kll_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"89371", "*", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"89371\", \"*\", \":onefivenineeight\", \"->\", \"2kll_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10448", "<<", ":onefivenineeight", "->", "69453"};
     ASSERT_EQ(69453, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10448\", \"<<\", \":onefivenineeight\", \"->\", \"69453\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10448", "<<", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10448\", \"<<\", \":onefivenineeight\", \"->\", \"69453\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"90159", "%", ":fivesixtwo", "->", "1458_30"};
     ASSERT_EQ(30758, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"90159\", \"%\", \":fivesixtwo\", \"->\", \"1458_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"90159", "%", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"90159\", \"%\", \":fivesixtwo\", \"->\", \"1458_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1o5x_35", ">>", ":threeseven", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1o5x_35\", \">>\", \":threeseven\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1o5x_35", ">>", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1o5x_35\", \">>\", \":threeseven\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "+", ":eighteightseven", "->", "34630"};
     ASSERT_EQ(34630, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"+\", \":eighteightseven\", \"->\", \"34630\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "+", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"+\", \":eighteightseven\", \"->\", \"34630\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"kd9_27", "/", ":fivesixtwo", "->", "24404"};
     ASSERT_EQ(24404, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"kd9_27\", \"/\", \":fivesixtwo\", \"->\", \"24404\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"kd9_27", "/", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"kd9_27\", \"/\", \":fivesixtwo\", \"->\", \"24404\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"38133", "-", "3079_30", "->", "tmu_32"};
     ASSERT_EQ(30430, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"38133\", \"-\", \"3079_30\", \"->\", \"tmu_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"38133", "-", "3079_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"38133\", \"-\", \"3079_30\", \"->\", \"tmu_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"27547", "%", "b403_12", "->", "1ifb_33"};
     ASSERT_EQ(56045, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27547\", \"%\", \"b403_12\", \"->\", \"1ifb_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"27547", "%", "b403_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27547\", \"%\", \"b403_12\", \"->\", \"1ifb_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2422342_5", "*", "102030203_4", "->", "1268_21"};
     ASSERT_EQ(10277, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2422342_5\", \"*\", \"102030203_4\", \"->\", \"1268_21\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2422342_5", "*", "102030203_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2422342_5\", \"*\", \"102030203_4\", \"->\", \"1268_21\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "+", ":eighteightseven", "->", "61356"};
     ASSERT_EQ(61356, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \":eighteightseven\", \"->\", \"61356\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "+", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \":eighteightseven\", \"->\", \"61356\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"27257", "-", ":fivesixtwo", "->", "78300"};
     ASSERT_EQ(78300, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27257\", \"-\", \":fivesixtwo\", \"->\", \"78300\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"27257", "-", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27257\", \"-\", \":fivesixtwo\", \"->\", \"78300\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10120000010_3", ">>", ":twotwo", "->", "4k56_27"};
     ASSERT_EQ(93453, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10120000010_3\", \">>\", \":twotwo\", \"->\", \"4k56_27\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10120000010_3", ">>", ":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10120000010_3\", \">>\", \":twotwo\", \"->\", \"4k56_27\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"454c_15", "*", "5ec8_21", "->", "19d1_14"};
     ASSERT_EQ(4691, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"454c_15\", \"*\", \"5ec8_21\", \"->\", \"19d1_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"454c_15", "*", "5ec8_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"454c_15\", \"*\", \"5ec8_21\", \"->\", \"19d1_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"361632_7", "-", "10000013_4", "->", "36140"};
     ASSERT_EQ(36140, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"361632_7\", \"-\", \"10000013_4\", \"->\", \"36140\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"361632_7", "-", "10000013_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"361632_7\", \"-\", \"10000013_4\", \"->\", \"36140\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1dg6_21", "<<", "dg0_27", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1dg6_21\", \"<<\", \"dg0_27\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1dg6_21", "<<", "dg0_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1dg6_21\", \"<<\", \"dg0_27\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"9kh_35", "/", "5f03_21", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"9kh_35\", \"/\", \"5f03_21\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"9kh_35", "/", "5f03_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"9kh_35\", \"/\", \"5f03_21\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "-", "10d1e_15", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"-\", \"10d1e_15\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "-", "10d1e_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"-\", \"10d1e_15\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"hgy_35", "+", ":nineninenine", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"hgy_35\", \"+\", \":nineninenine\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"hgy_35", "+", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"hgy_35\", \"+\", \":nineninenine\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", ">>", "241512_6", "->", "4921_24"};
     ASSERT_EQ(60529, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \">>\", \"241512_6\", \"->\", \"4921_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", ">>", "241512_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \">>\", \"241512_6\", \"->\", \"4921_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"72657", "+", "3aia_27", "->", "ca7_22"};
     ASSERT_EQ(6035, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"72657\", \"+\", \"3aia_27\", \"->\", \"ca7_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"72657", "+", "3aia_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"72657\", \"+\", \"3aia_27\", \"->\", \"ca7_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"155011_9", "*", "3a433_12", "->", "59412_10"};
     ASSERT_EQ(59412, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"155011_9\", \"*\", \"3a433_12\", \"->\", \"59412_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"155011_9", "*", "3a433_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"155011_9\", \"*\", \"3a433_12\", \"->\", \"59412_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"70782_9", "*", ":nineninenine", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70782_9\", \"*\", \":nineninenine\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"70782_9", "*", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70782_9\", \"*\", \":nineninenine\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", ">>", "1gb8_20", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \">>\", \"1gb8_20\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", ">>", "1gb8_20"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \">>\", \"1gb8_20\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"b486_13", "%", "10020420_5", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"b486_13\", \"%\", \"10020420_5\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"b486_13", "%", "10020420_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"b486_13\", \"%\", \"10020420_5\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2uvk_32", "/", ":threeseven", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2uvk_32\", \"/\", \":threeseven\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2uvk_32", "/", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2uvk_32\", \"/\", \":threeseven\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"220543_7", "<<", ":onetwothree", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"220543_7\", \"<<\", \":onetwothree\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"220543_7", "<<", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"220543_7\", \"<<\", \":onetwothree\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"47859", "/", "1ce6_27", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"47859\", \"/\", \"1ce6_27\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"47859", "/", "1ce6_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"47859\", \"/\", \"1ce6_27\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"463d_23", "+", "7b0a_21", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"463d_23\", \"+\", \"7b0a_21\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"463d_23", "+", "7b0a_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"463d_23\", \"+\", \"7b0a_21\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"26438_9", "/", ":eighteightseven", "->", "1m2n_31"};
     ASSERT_EQ(51018, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26438_9\", \"/\", \":eighteightseven\", \"->\", \"1m2n_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"26438_9", "/", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26438_9\", \"/\", \":eighteightseven\", \"->\", \"1m2n_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "*", "1f2m_25", "->", "106317_8"};
     ASSERT_EQ(36047, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"*\", \"1f2m_25\", \"->\", \"106317_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "*", "1f2m_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"*\", \"1f2m_25\", \"->\", \"106317_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4d96_19", "*", "12596_11", "->", "18944"};
     ASSERT_EQ(18944, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4d96_19\", \"*\", \"12596_11\", \"->\", \"18944\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4d96_19", "*", "12596_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4d96_19\", \"*\", \"12596_11\", \"->\", \"18944\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"35230", ">>", "3plm_28", "->", "63768"};
     ASSERT_EQ(63768, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"35230\", \">>\", \"3plm_28\", \"->\", \"63768\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"35230", ">>", "3plm_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"35230\", \">>\", \"3plm_28\", \"->\", \"63768\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"36969_11", "-", ":onezerozero", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"36969_11\", \"-\", \":onezerozero\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"36969_11", "-", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"36969_11\", \"-\", \":onezerozero\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"84s_32", "/", ":onezerozero", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"84s_32\", \"/\", \":onezerozero\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"84s_32", "/", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"84s_32\", \"/\", \":onezerozero\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "*", ":onefivenineeight", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"*\", \":onefivenineeight\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "*", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"*\", \":onefivenineeight\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"304364_7", "*", "5gec_17", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"304364_7\", \"*\", \"5gec_17\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"304364_7", "*", "5gec_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"304364_7\", \"*\", \"5gec_17\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"cdbd_15", "-", "52890", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"cdbd_15\", \"-\", \"52890\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"cdbd_15", "-", "52890"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"cdbd_15\", \"-\", \"52890\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"56997_10", "-", "1b1d_25", "->", "74692"};
     ASSERT_EQ(74692, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56997_10\", \"-\", \"1b1d_25\", \"->\", \"74692\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"56997_10", "-", "1b1d_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56997_10\", \"-\", \"1b1d_25\", \"->\", \"74692\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "-", ":twotwo", "->", "3331033_5"};
     ASSERT_EQ(58268, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"-\", \":twotwo\", \"->\", \"3331033_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "-", ":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"-\", \":twotwo\", \"->\", \"3331033_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"61614", ">>", "ci6b_19", "->", "2004420_6"};
     ASSERT_EQ(94332, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"61614\", \">>\", \"ci6b_19\", \"->\", \"2004420_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"61614", ">>", "ci6b_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"61614\", \">>\", \"ci6b_19\", \"->\", \"2004420_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6825_17", "-", ":onezero", "->", "106b1_17"};
     ASSERT_EQ(85443, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6825_17\", \"-\", \":onezero\", \"->\", \"106b1_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6825_17", "-", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6825_17\", \"-\", \":onezero\", \"->\", \"106b1_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", ">>", "2854_33", "->", "7b59_15"};
     ASSERT_EQ(26184, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \">>\", \"2854_33\", \"->\", \"7b59_15\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", ">>", "2854_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \">>\", \"2854_33\", \"->\", \"7b59_15\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", ">>", "39813", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \">>\", \"39813\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", ">>", "39813"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \">>\", \"39813\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", ">>", "a378_11", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \">>\", \"a378_11\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", ">>", "a378_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \">>\", \"a378_11\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"543001_7", "<<", "13828_16", "->", "5dd9_26"};
     ASSERT_EQ(97015, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"543001_7\", \"<<\", \"13828_16\", \"->\", \"5dd9_26\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"543001_7", "<<", "13828_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"543001_7\", \"<<\", \"13828_16\", \"->\", \"5dd9_26\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"12907_12", "*", "422002_5", "->", "3pb_29"};
     ASSERT_EQ(3259, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12907_12\", \"*\", \"422002_5\", \"->\", \"3pb_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"12907_12", "*", "422002_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12907_12\", \"*\", \"422002_5\", \"->\", \"3pb_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3e9i_27", "+", "1r2k_30", "->", "223110_8"};
     ASSERT_EQ(75336, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3e9i_27\", \"+\", \"1r2k_30\", \"->\", \"223110_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3e9i_27", "+", "1r2k_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3e9i_27\", \"+\", \"1r2k_30\", \"->\", \"223110_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3kt_31", "/", "165i_19", "->", "162s_33"};
     ASSERT_EQ(42565, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3kt_31\", \"/\", \"165i_19\", \"->\", \"162s_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3kt_31", "/", "165i_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3kt_31\", \"/\", \"165i_19\", \"->\", \"162s_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "<<", "42173", "->", "96309"};
     ASSERT_EQ(96309, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"<<\", \"42173\", \"->\", \"96309\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "<<", "42173"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"<<\", \"42173\", \"->\", \"96309\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"39457", "/", "19f5_23", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"39457\", \"/\", \"19f5_23\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"39457", "/", "19f5_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"39457\", \"/\", \"19f5_23\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"27929", "<<", "rsq_31", "->", "95718"};
     ASSERT_EQ(95718, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27929\", \"<<\", \"rsq_31\", \"->\", \"95718\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"27929", "<<", "rsq_31"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27929\", \"<<\", \"rsq_31\", \"->\", \"95718\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"64125", "/", ":onezerozero", "->", "31304"};
     ASSERT_EQ(31304, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"64125\", \"/\", \":onezerozero\", \"->\", \"31304\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"64125", "/", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"64125\", \"/\", \":onezerozero\", \"->\", \"31304\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"68739", "+", "k56_30", "->", "28919"};
     ASSERT_EQ(28919, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68739\", \"+\", \"k56_30\", \"->\", \"28919\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"68739", "+", "k56_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68739\", \"+\", \"k56_30\", \"->\", \"28919\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2c9r_33", "<<", "14919", "->", "75426"};
     ASSERT_EQ(75426, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2c9r_33\", \"<<\", \"14919\", \"->\", \"75426\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2c9r_33", "<<", "14919"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2c9r_33\", \"<<\", \"14919\", \"->\", \"75426\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "-", ":eighteightseven", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"-\", \":eighteightseven\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "-", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"-\", \":eighteightseven\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1t4h_33", "<<", "93611_10", "->", "r2h_29"};
     ASSERT_EQ(22782, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1t4h_33\", \"<<\", \"93611_10\", \"->\", \"r2h_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1t4h_33", "<<", "93611_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1t4h_33\", \"<<\", \"93611_10\", \"->\", \"r2h_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "<<", "8cea_20", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"<<\", \"8cea_20\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "<<", "8cea_20"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"<<\", \"8cea_20\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3c4q_29", ">>", "42112", "->", "34367"};
     ASSERT_EQ(34367, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3c4q_29\", \">>\", \"42112\", \"->\", \"34367\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3c4q_29", ">>", "42112"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3c4q_29\", \">>\", \"42112\", \"->\", \"34367\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"31100022_4", ">>", ":fivesixtwo", "->", "15991_13"};
     ASSERT_EQ(41185, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31100022_4\", \">>\", \":fivesixtwo\", \"->\", \"15991_13\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"31100022_4", ">>", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31100022_4\", \">>\", \":fivesixtwo\", \"->\", \"15991_13\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8e3d_18", "-", "2185_12", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8e3d_18\", \"-\", \"2185_12\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8e3d_18", "-", "2185_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8e3d_18\", \"-\", \"2185_12\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"145762_8", "%", "3c98_24", "->", "10200"};
     ASSERT_EQ(10200, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"145762_8\", \"%\", \"3c98_24\", \"->\", \"10200\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"145762_8", "%", "3c98_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"145762_8\", \"%\", \"3c98_24\", \"->\", \"10200\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1204554_6", "-", "89123", "->", "11032103_5"};
     ASSERT_EQ(95903, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1204554_6\", \"-\", \"89123\", \"->\", \"11032103_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1204554_6", "-", "89123"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1204554_6\", \"-\", \"89123\", \"->\", \"11032103_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11103_12", "%", "62998", "->", "1714"};
     ASSERT_EQ(1714, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11103_12\", \"%\", \"62998\", \"->\", \"1714\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11103_12", "%", "62998"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11103_12\", \"%\", \"62998\", \"->\", \"1714\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"46853", "/", "5em_30", "->", "83131"};
     ASSERT_EQ(83131, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"46853\", \"/\", \"5em_30\", \"->\", \"83131\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"46853", "/", "5em_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"46853\", \"/\", \"5em_30\", \"->\", \"83131\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"54986", "/", "3a58_31", "->", "38nr_29"};
     ASSERT_EQ(80589, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"54986\", \"/\", \"3a58_31\", \"->\", \"38nr_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"54986", "/", "3a58_31"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"54986\", \"/\", \"3a58_31\", \"->\", \"38nr_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2blw_34", "*", "10000100000110010_2", "->", "17o_33"};
     ASSERT_EQ(1344, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2blw_34\", \"*\", \"10000100000110010_2\", \"->\", \"17o_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2blw_34", "*", "10000100000110010_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2blw_34\", \"*\", \"10000100000110010_2\", \"->\", \"17o_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", ">>", ":fivesixtwo", "->", "24025"};
     ASSERT_EQ(24025, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \">>\", \":fivesixtwo\", \"->\", \"24025\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", ">>", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \">>\", \":fivesixtwo\", \"->\", \"24025\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"144e_31", "*", "47661_8", "->", "93313"};
     ASSERT_EQ(93313, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"144e_31\", \"*\", \"47661_8\", \"->\", \"93313\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"144e_31", "*", "47661_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"144e_31\", \"*\", \"47661_8\", \"->\", \"93313\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6aee_24", "/", "14828", "->", "4592_23"};
     ASSERT_EQ(51522, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6aee_24\", \"/\", \"14828\", \"->\", \"4592_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6aee_24", "/", "14828"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6aee_24\", \"/\", \"14828\", \"->\", \"4592_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "+", "1022110221_3", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \"1022110221_3\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "+", "1022110221_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \"1022110221_3\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"86217", "*", "27698", "->", "chbf_19"};
     ASSERT_EQ(88669, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"86217\", \"*\", \"27698\", \"->\", \"chbf_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"86217", "*", "27698"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"86217\", \"*\", \"27698\", \"->\", \"chbf_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8576", "*", ":fivesixtwo", "->", "107416_9"};
     ASSERT_EQ(64491, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8576\", \"*\", \":fivesixtwo\", \"->\", \"107416_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8576", "*", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8576\", \"*\", \":fivesixtwo\", \"->\", \"107416_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"174bd_15", "+", ":nineninenine", "->", "46kk_23"};
     ASSERT_EQ(52322, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"174bd_15\", \"+\", \":nineninenine\", \"->\", \"46kk_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"174bd_15", "+", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"174bd_15\", \"+\", \":nineninenine\", \"->\", \"46kk_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "/", "i07_24", "->", "94944"};
     ASSERT_EQ(94944, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"/\", \"i07_24\", \"->\", \"94944\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "/", "i07_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"/\", \"i07_24\", \"->\", \"94944\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5826", "-", "222431_6", "->", "85076"};
     ASSERT_EQ(85076, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5826\", \"-\", \"222431_6\", \"->\", \"85076\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5826", "-", "222431_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5826\", \"-\", \"222431_6\", \"->\", \"85076\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"133516_9", "/", "10010020010_3", "->", "42926"};
     ASSERT_EQ(42926, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"133516_9\", \"/\", \"10010020010_3\", \"->\", \"42926\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"133516_9", "/", "10010020010_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"133516_9\", \"/\", \"10010020010_3\", \"->\", \"42926\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "*", "73231_9", "->", "b28d_16"};
     ASSERT_EQ(45709, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"*\", \"73231_9\", \"->\", \"b28d_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "*", "73231_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"*\", \"73231_9\", \"->\", \"b28d_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "%", "10001233_4", "->", "1fq5_35"};
     ASSERT_EQ(62165, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"%\", \"10001233_4\", \"->\", \"1fq5_35\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", "%", "10001233_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"%\", \"10001233_4\", \"->\", \"1fq5_35\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"70688", ">>", "1112011120_3", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70688\", \">>\", \"1112011120_3\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"70688", ">>", "1112011120_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70688\", \">>\", \"1112011120_3\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"16334", "/", "4hh1_27", "->", "5lo_32"};
     ASSERT_EQ(5816, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16334\", \"/\", \"4hh1_27\", \"->\", \"5lo_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"16334", "/", "4hh1_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16334\", \"/\", \"4hh1_27\", \"->\", \"5lo_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"62493", "+", "a2a9_18", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"62493\", \"+\", \"a2a9_18\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"62493", "+", "a2a9_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"62493\", \"+\", \"a2a9_18\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"100100122_4", ">>", "1fee_34", "->", "276760_8"};
     ASSERT_EQ(97776, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"100100122_4\", \">>\", \"1fee_34\", \"->\", \"276760_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"100100122_4", ">>", "1fee_34"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"100100122_4\", \">>\", \"1fee_34\", \"->\", \"276760_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"71439", "<<", ":fivesixtwo", "->", "12820"};
     ASSERT_EQ(12820, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"71439\", \"<<\", \":fivesixtwo\", \"->\", \"12820\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"71439", "<<", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"71439\", \"<<\", \":fivesixtwo\", \"->\", \"12820\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "%", ":twotwo", "->", "89343"};
     ASSERT_EQ(89343, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"%\", \":twotwo\", \"->\", \"89343\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "%", ":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"%\", \":twotwo\", \"->\", \"89343\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "-", "75225_8", "->", "16699_15"};
     ASSERT_EQ(72369, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"-\", \"75225_8\", \"->\", \"16699_15\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "-", "75225_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"-\", \"75225_8\", \"->\", \"16699_15\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10bef_17", "*", "749d_24", "->", "71427"};
     ASSERT_EQ(71427, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10bef_17\", \"*\", \"749d_24\", \"->\", \"71427\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10bef_17", "*", "749d_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10bef_17\", \"*\", \"749d_24\", \"->\", \"71427\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"72186", ">>", "341134_6", "->", "2bnf_34"};
     ASSERT_EQ(92121, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"72186\", \">>\", \"341134_6\", \"->\", \"2bnf_34\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"72186", ">>", "341134_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"72186\", \">>\", \"341134_6\", \"->\", \"2bnf_34\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "<<", "1c431_14", "->", "11012220102_3"};
     ASSERT_EQ(83036, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"<<\", \"1c431_14\", \"->\", \"11012220102_3\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "<<", "1c431_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"<<\", \"1c431_14\", \"->\", \"11012220102_3\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "+", "1422042_6", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"+\", \"1422042_6\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "+", "1422042_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"+\", \"1422042_6\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1011011101011_2", "<<", "u2h_31", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1011011101011_2\", \"<<\", \"u2h_31\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1011011101011_2", "<<", "u2h_31"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1011011101011_2\", \"<<\", \"u2h_31\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "<<", "1d9c5_14", "->", "11010000101011_2"};
     ASSERT_EQ(13355, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"<<\", \"1d9c5_14\", \"->\", \"11010000101011_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "<<", "1d9c5_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"<<\", \"1d9c5_14\", \"->\", \"11010000101011_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"77301", "<<", "104030_5", "->", "b4b_30"};
     ASSERT_EQ(10031, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"77301\", \"<<\", \"104030_5\", \"->\", \"b4b_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"77301", "<<", "104030_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"77301\", \"<<\", \"104030_5\", \"->\", \"b4b_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "+", "1933_11", "->", "5496"};
     ASSERT_EQ(5496, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"+\", \"1933_11\", \"->\", \"5496\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", "+", "1933_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"+\", \"1933_11\", \"->\", \"5496\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"18101", "*", ":threeseven", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"18101\", \"*\", \":threeseven\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"18101", "*", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"18101\", \"*\", \":threeseven\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2e70_29", ">>", ":onefivenineeight", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2e70_29\", \">>\", \":onefivenineeight\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2e70_29", ">>", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2e70_29\", \">>\", \":onefivenineeight\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"88815", "-", "67g4_24", "->", "305b_13"};
     ASSERT_EQ(6667, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"88815\", \"-\", \"67g4_24\", \"->\", \"305b_13\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"88815", "-", "67g4_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"88815\", \"-\", \"67g4_24\", \"->\", \"305b_13\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1ba21_13", "*", "nb7_25", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ba21_13\", \"*\", \"nb7_25\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1ba21_13", "*", "nb7_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ba21_13\", \"*\", \"nb7_25\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "<<", ":threeseven", "->", "yag_35"};
     ASSERT_EQ(42016, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"<<\", \":threeseven\", \"->\", \"yag_35\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "<<", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"<<\", \":threeseven\", \"->\", \"yag_35\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "%", "11220212102_3", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"%\", \"11220212102_3\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", "%", "11220212102_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"%\", \"11220212102_3\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"12122233_4", "%", "25120", "->", "cefa_16"};
     ASSERT_EQ(52986, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12122233_4\", \"%\", \"25120\", \"->\", \"cefa_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"12122233_4", "%", "25120"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12122233_4\", \"%\", \"25120\", \"->\", \"cefa_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"95328", "+", "42942", "->", "14502"};
     ASSERT_EQ(14502, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"95328\", \"+\", \"42942\", \"->\", \"14502\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"95328", "+", "42942"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"95328\", \"+\", \"42942\", \"->\", \"14502\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "+", "52924", "->", "13c6c_14"};
     ASSERT_EQ(49096, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \"52924\", \"->\", \"13c6c_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "+", "52924"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \"52924\", \"->\", \"13c6c_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"16d_24", "*", "330_33", "->", "2ci4_28"};
     ASSERT_EQ(53820, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16d_24\", \"*\", \"330_33\", \"->\", \"2ci4_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"16d_24", "*", "330_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16d_24\", \"*\", \"330_33\", \"->\", \"2ci4_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1xm8_35", "+", "35252_9", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1xm8_35\", \"+\", \"35252_9\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1xm8_35", "+", "35252_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1xm8_35\", \"+\", \"35252_9\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"480aa_12", ">>", "64547_8", "->", "4da_25"};
     ASSERT_EQ(2835, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"480aa_12\", \">>\", \"64547_8\", \"->\", \"4da_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"480aa_12", ">>", "64547_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"480aa_12\", \">>\", \"64547_8\", \"->\", \"4da_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"66233_9", "<<", "a8b_13", "->", "1jdt_32"};
     ASSERT_EQ(52669, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"66233_9\", \"<<\", \"a8b_13\", \"->\", \"1jdt_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"66233_9", "<<", "a8b_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"66233_9\", \"<<\", \"a8b_13\", \"->\", \"1jdt_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "/", ":onefivenineeight", "->", "3g0f_25"};
     ASSERT_EQ(56890, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"/\", \":onefivenineeight\", \"->\", \"3g0f_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "/", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"/\", \":onefivenineeight\", \"->\", \"3g0f_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", ">>", ":onezero", "->", "62237"};
     ASSERT_EQ(62237, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \">>\", \":onezero\", \"->\", \"62237\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", ">>", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \">>\", \":onezero\", \"->\", \"62237\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "<<", "3ced_19", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"<<\", \"3ced_19\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "<<", "3ced_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"<<\", \"3ced_19\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "<<", "110530_7", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"<<\", \"110530_7\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", "<<", "110530_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"<<\", \"110530_7\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1210142_6", "/", "66113_8", "->", "5708_11"};
     ASSERT_EQ(7510, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1210142_6\", \"/\", \"66113_8\", \"->\", \"5708_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1210142_6", "/", "66113_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1210142_6\", \"/\", \"66113_8\", \"->\", \"5708_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2513_35", "/", ":nineninenine", "->", "1_17"};
     ASSERT_EQ(1, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2513_35\", \"/\", \":nineninenine\", \"->\", \"1_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2513_35", "/", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2513_35\", \"/\", \":nineninenine\", \"->\", \"1_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1soi_35", "%", "84029", "->", "207a_12"};
     ASSERT_EQ(3550, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1soi_35\", \"%\", \"84029\", \"->\", \"207a_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1soi_35", "%", "84029"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1soi_35\", \"%\", \"84029\", \"->\", \"207a_12\"}, but the vector wasn't pruned as I expected.";
  }
}

TEST(Baseball, ExtractTargetBaseWithoutOperationWithTarget) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  {
     std::vector<std::string> tokens = {"50ak_21", "->", "99984"};
     ASSERT_EQ(99984, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"50ak_21\", \"->\", \"99984\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"50ak_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"50ak_21\", \"->\", \"99984\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3s2c_29", "->", "141634_7"};
     ASSERT_EQ(27073, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3s2c_29\", \"->\", \"141634_7\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3s2c_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3s2c_29\", \"->\", \"141634_7\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2145_15", "->", "5ha3_18"};
     ASSERT_EQ(34851, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2145_15\", \"->\", \"5ha3_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2145_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2145_15\", \"->\", \"5ha3_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "->", "4fbh_25"};
     ASSERT_EQ(72167, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"4fbh_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"4fbh_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2mf0_28", "->", "103850_9"};
     ASSERT_EQ(61929, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2mf0_28\", \"->\", \"103850_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2mf0_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2mf0_28\", \"->\", \"103850_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "95437_10"};
     ASSERT_EQ(95437, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"95437_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"95437_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2375", "->", "1ba77_12"};
     ASSERT_EQ(41275, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2375\", \"->\", \"1ba77_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2375"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2375\", \"->\", \"1ba77_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"70348", "->", "58902"};
     ASSERT_EQ(58902, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70348\", \"->\", \"58902\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"70348"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70348\", \"->\", \"58902\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"20716_9", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20716_9\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"20716_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20716_9\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"688d_22", "->", "522522_7"};
     ASSERT_EQ(89784, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"688d_22\", \"->\", \"522522_7\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"688d_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"688d_22\", \"->\", \"522522_7\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1c36_24", "->", "2s7_30"};
     ASSERT_EQ(2647, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1c36_24\", \"->\", \"2s7_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1c36_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1c36_24\", \"->\", \"2s7_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"121212012_3", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"121212012_3\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"121212012_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"121212012_3\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"r6o_33", "->", "7caa_22"};
     ASSERT_EQ(80574, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"r6o_33\", \"->\", \"7caa_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"r6o_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"r6o_33\", \"->\", \"7caa_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3jma_29", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3jma_29\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3jma_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3jma_29\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5333", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5333\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5333"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5333\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"83692", "->", "167606_8"};
     ASSERT_EQ(61318, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"83692\", \"->\", \"167606_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"83692"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"83692\", \"->\", \"167606_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11096_13", "->", "3494a_13"};
     ASSERT_EQ(96054, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11096_13\", \"->\", \"3494a_13\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11096_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11096_13\", \"->\", \"3494a_13\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"51454", "->", "qo3_32"};
     ASSERT_EQ(27395, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"51454\", \"->\", \"qo3_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"51454"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"51454\", \"->\", \"qo3_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11322_15", "->", "20ij_25"};
     ASSERT_EQ(31719, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11322_15\", \"->\", \"20ij_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11322_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11322_15\", \"->\", \"20ij_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23763_10", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23763_10\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23763_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23763_10\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"63542_8", "->", "3kon_25"};
     ASSERT_EQ(59998, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"63542_8\", \"->\", \"3kon_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"63542_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"63542_8\", \"->\", \"3kon_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"32331130_4", "->", "43831"};
     ASSERT_EQ(43831, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"32331130_4\", \"->\", \"43831\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"32331130_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"32331130_4\", \"->\", \"43831\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2k5d_22", "->", "22hq_29"};
     ASSERT_EQ(50979, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2k5d_22\", \"->\", \"22hq_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2k5d_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2k5d_22\", \"->\", \"22hq_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1c0d1_15", "->", "32k6_23"};
     ASSERT_EQ(38025, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1c0d1_15\", \"->\", \"32k6_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1c0d1_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1c0d1_15\", \"->\", \"32k6_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8106_21", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8106_21\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8106_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8106_21\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"242a3_14", "->", "3a39_31"};
     ASSERT_EQ(99085, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"242a3_14\", \"->\", \"3a39_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"242a3_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"242a3_14\", \"->\", \"3a39_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10075", "->", "59753"};
     ASSERT_EQ(59753, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10075\", \"->\", \"59753\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10075"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10075\", \"->\", \"59753\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8827_19", "->", "24961_14"};
     ASSERT_EQ(89657, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8827_19\", \"->\", \"24961_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8827_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8827_19\", \"->\", \"24961_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "334233_6"};
     ASSERT_EQ(28173, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"334233_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"334233_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "29238"};
     ASSERT_EQ(29238, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"29238\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"29238\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "36226"};
     ASSERT_EQ(36226, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"36226\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"36226\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "10111220112_3"};
     ASSERT_EQ(69188, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"10111220112_3\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"10111220112_3\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "1100101000001101_2"};
     ASSERT_EQ(51725, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"1100101000001101_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"1100101000001101_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"37442_10", "->", "8c0_21"};
     ASSERT_EQ(3780, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37442_10\", \"->\", \"8c0_21\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"37442_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37442_10\", \"->\", \"8c0_21\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"84461", "->", "1893_30"};
     ASSERT_EQ(34473, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"84461\", \"->\", \"1893_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"84461"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"84461\", \"->\", \"1893_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8b30_21", "->", "99153"};
     ASSERT_EQ(99153, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8b30_21\", \"->\", \"99153\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8b30_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8b30_21\", \"->\", \"99153\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"156011_8", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"156011_8\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"156011_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"156011_8\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"dc00_19", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"dc00_19\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"dc00_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"dc00_19\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"16aa_14", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16aa_14\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"16aa_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16aa_14\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"62557", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"62557\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"62557"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"62557\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4b5c_15", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4b5c_15\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4b5c_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4b5c_15\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1ns1_33", "->", "420520_7"};
     ASSERT_EQ(72289, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ns1_33\", \"->\", \"420520_7\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1ns1_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ns1_33\", \"->\", \"420520_7\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "->", "10001102122_3"};
     ASSERT_EQ(60092, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"->\", \"10001102122_3\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"->\", \"10001102122_3\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1331155_6", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1331155_6\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1331155_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1331155_6\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"69360", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"69360\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"69360"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"69360\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"il7_35", "->", "18626"};
     ASSERT_EQ(18626, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"il7_35\", \"->\", \"18626\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"il7_35"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"il7_35\", \"->\", \"18626\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5aln_24", "->", "11737_8"};
     ASSERT_EQ(5087, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5aln_24\", \"->\", \"11737_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5aln_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5aln_24\", \"->\", \"11737_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8b1_29", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8b1_29\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8b1_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8b1_29\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10211002102_3", "->", "21343"};
     ASSERT_EQ(21343, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10211002102_3\", \"->\", \"21343\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10211002102_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10211002102_3\", \"->\", \"21343\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"160a_11", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"160a_11\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"160a_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"160a_11\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"123b3_15", "->", "44d1_20"};
     ASSERT_EQ(33861, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"123b3_15\", \"->\", \"44d1_20\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"123b3_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"123b3_15\", \"->\", \"44d1_20\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"12dg_30", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12dg_30\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"12dg_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12dg_30\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"12558", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12558\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"12558"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12558\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "46591"};
     ASSERT_EQ(46591, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"46591\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"46591\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2lb_35", "->", "11903"};
     ASSERT_EQ(11903, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2lb_35\", \"->\", \"11903\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2lb_35"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2lb_35\", \"->\", \"11903\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "12252_16"};
     ASSERT_EQ(74322, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"12252_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"12252_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"88h4_20", "->", "1gud_35"};
     ASSERT_EQ(63538, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"88h4_20\", \"->\", \"1gud_35\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"88h4_20"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"88h4_20\", \"->\", \"1gud_35\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"12001013_4", "->", "45dh_26"};
     ASSERT_EQ(74039, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12001013_4\", \"->\", \"45dh_26\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"12001013_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"12001013_4\", \"->\", \"45dh_26\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "87105_9"};
     ASSERT_EQ(57677, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"87105_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"87105_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"25683_13", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25683_13\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"25683_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25683_13\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5gk0_25", "->", "4b26_22"};
     ASSERT_EQ(47966, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5gk0_25\", \"->\", \"4b26_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5gk0_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5gk0_25\", \"->\", \"4b26_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5a6c_15", "->", "1gh1_31"};
     ASSERT_EQ(45695, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5a6c_15\", \"->\", \"1gh1_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5a6c_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5a6c_15\", \"->\", \"1gh1_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"27719", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27719\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"27719"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"27719\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"206775_8", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"206775_8\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"206775_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"206775_8\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2mms_33", "->", "1011000101111000_2"};
     ASSERT_EQ(45432, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2mms_33\", \"->\", \"1011000101111000_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2mms_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2mms_33\", \"->\", \"1011000101111000_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"113b6_12", "->", "24235"};
     ASSERT_EQ(24235, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"113b6_12\", \"->\", \"24235\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"113b6_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"113b6_12\", \"->\", \"24235\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"41502_12", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41502_12\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"41502_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41502_12\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "->", "57394"};
     ASSERT_EQ(57394, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \"57394\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \"57394\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"47356", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"47356\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"47356"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"47356\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "2ehj_32"};
     ASSERT_EQ(80435, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"2ehj_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"2ehj_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "135d2_17"};
     ASSERT_EQ(99928, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"135d2_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"135d2_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6m8_29", "->", "oif_35"};
     ASSERT_EQ(30045, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6m8_29\", \"->\", \"oif_35\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6m8_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6m8_29\", \"->\", \"oif_35\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "->", "84630_9"};
     ASSERT_EQ(55917, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \"84630_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \"84630_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1d325_14", "->", "6g8_35"};
     ASSERT_EQ(7918, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1d325_14\", \"->\", \"6g8_35\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1d325_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1d325_14\", \"->\", \"6g8_35\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"o9p_29", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"o9p_29\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"o9p_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"o9p_29\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"15212_7", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"15212_7\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"15212_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"15212_7\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "->", ":threeseven"};
     ASSERT_EQ(37, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"509b_12", "->", "c7c8_18"};
     ASSERT_EQ(72476, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"509b_12\", \"->\", \"c7c8_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"509b_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"509b_12\", \"->\", \"c7c8_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2024223_5", "->", "1r94_29"};
     ASSERT_EQ(47361, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2024223_5\", \"->\", \"1r94_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2024223_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2024223_5\", \"->\", \"1r94_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11bj_21", "->", "19458"};
     ASSERT_EQ(19458, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11bj_21\", \"->\", \"19458\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11bj_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11bj_21\", \"->\", \"19458\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"68311", "->", "217c0_14"};
     ASSERT_EQ(81116, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68311\", \"->\", \"217c0_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"68311"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68311\", \"->\", \"217c0_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"41084", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41084\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"41084"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41084\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"247506_8", "->", "10b8d_14"};
     ASSERT_EQ(40697, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"247506_8\", \"->\", \"10b8d_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"247506_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"247506_8\", \"->\", \"10b8d_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"134188_9", "->", "18fi_30"};
     ASSERT_EQ(34668, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"134188_9\", \"->\", \"18fi_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"134188_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"134188_9\", \"->\", \"18fi_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1m1l_34", "->", "11014100_5"};
     ASSERT_EQ(94900, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1m1l_34\", \"->\", \"11014100_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1m1l_34"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1m1l_34\", \"->\", \"11014100_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "->", "2oaf_33"};
     ASSERT_EQ(98355, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \"2oaf_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \"2oaf_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "ona_31"};
     ASSERT_EQ(23787, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"ona_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"ona_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4je6_25", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4je6_25\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4je6_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4je6_25\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "2d9j_31"};
     ASSERT_EQ(72373, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"2d9j_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"2d9j_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"41441_6", "->", "3e32_29"};
     ASSERT_EQ(85030, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41441_6\", \"->\", \"3e32_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"41441_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41441_6\", \"->\", \"3e32_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "->", "34888"};
     ASSERT_EQ(34888, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"->\", \"34888\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"->\", \"34888\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "->", "2oc_32"};
     ASSERT_EQ(2828, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"2oc_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"2oc_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"157e_24", "->", "4adk_25"};
     ASSERT_EQ(69095, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"157e_24\", \"->\", \"4adk_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"157e_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"157e_24\", \"->\", \"4adk_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1344113_5", "->", "10013202_5"};
     ASSERT_EQ(79177, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1344113_5\", \"->\", \"10013202_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1344113_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1344113_5\", \"->\", \"10013202_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "2kp1_31"};
     ASSERT_EQ(79578, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"2kp1_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"2kp1_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"26009", "->", "6752"};
     ASSERT_EQ(6752, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26009\", \"->\", \"6752\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"26009"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26009\", \"->\", \"6752\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"42122", "->", "220740_8"};
     ASSERT_EQ(74208, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"42122\", \"->\", \"220740_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"42122"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"42122\", \"->\", \"220740_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "61211"};
     ASSERT_EQ(61211, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"61211\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"61211\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"83b9_15", "->", "44105"};
     ASSERT_EQ(44105, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"83b9_15\", \"->\", \"44105\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"83b9_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"83b9_15\", \"->\", \"44105\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "bf65_20"};
     ASSERT_EQ(94125, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"bf65_20\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"bf65_20\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"e7b1_17", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"e7b1_17\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"e7b1_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"e7b1_17\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"cc74_16", "->", "3bl6_28"};
     ASSERT_EQ(75074, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"cc74_16\", \"->\", \"3bl6_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"cc74_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"cc74_16\", \"->\", \"3bl6_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "->", "7b9_17"};
     ASSERT_EQ(2219, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"7b9_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"7b9_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"87cb_17", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"87cb_17\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"87cb_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"87cb_17\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "->", "1350431_6"};
     ASSERT_EQ(76627, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"1350431_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"1350431_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"91g_19", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"91g_19\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"91g_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"91g_19\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "6ia8_24"};
     ASSERT_EQ(93560, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"6ia8_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"6ia8_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1qd0_29", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1qd0_29\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1qd0_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1qd0_29\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "84723_10"};
     ASSERT_EQ(84723, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"84723_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"84723_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10040131_5", "->", "ocj_34"};
     ASSERT_EQ(28171, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10040131_5\", \"->\", \"ocj_34\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10040131_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10040131_5\", \"->\", \"ocj_34\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1190b_12", "->", "202300_4"};
     ASSERT_EQ(2224, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1190b_12\", \"->\", \"202300_4\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1190b_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1190b_12\", \"->\", \"202300_4\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"111300313_4", "->", "59775"};
     ASSERT_EQ(59775, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"111300313_4\", \"->\", \"59775\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"111300313_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"111300313_4\", \"->\", \"59775\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"41007", "->", "22443"};
     ASSERT_EQ(22443, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41007\", \"->\", \"22443\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"41007"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"41007\", \"->\", \"22443\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "27244_11"};
     ASSERT_EQ(38889, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"27244_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"27244_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3vq_35", "->", "25680"};
     ASSERT_EQ(25680, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3vq_35\", \"->\", \"25680\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3vq_35"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3vq_35\", \"->\", \"25680\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"385p_26", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"385p_26\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"385p_26"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"385p_26\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"26475", "->", "17hf_22"};
     ASSERT_EQ(14425, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26475\", \"->\", \"17hf_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"26475"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26475\", \"->\", \"17hf_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"24220", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"24220\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"24220"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"24220\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"19a14_11", "->", ":onezerozerothree"};
     ASSERT_EQ(1003, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"19a14_11\", \"->\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"19a14_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"19a14_11\", \"->\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"56j4_24", "->", "107_24"};
     ASSERT_EQ(583, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56j4_24\", \"->\", \"107_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"56j4_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56j4_24\", \"->\", \"107_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"c522_17", "->", "32e2_15"};
     ASSERT_EQ(10787, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"c522_17\", \"->\", \"32e2_15\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"c522_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"c522_17\", \"->\", \"32e2_15\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3g00_18", "->", "23538_12"};
     ASSERT_EQ(47420, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3g00_18\", \"->\", \"23538_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3g00_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3g00_18\", \"->\", \"23538_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "->", "50595"};
     ASSERT_EQ(50595, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"50595\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"->\", \"50595\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "->", "15b75_14"};
     ASSERT_EQ(54395, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"15b75_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"15b75_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"65971_11", "->", ":onezerozero"};
     ASSERT_EQ(100, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"65971_11\", \"->\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"65971_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"65971_11\", \"->\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"430k_23", "->", "575d_22"};
     ASSERT_EQ(56751, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"430k_23\", \"->\", \"575d_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"430k_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"430k_23\", \"->\", \"575d_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3b5o_28", "->", "1ssa_29"};
     ASSERT_EQ(48759, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3b5o_28\", \"->\", \"1ssa_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3b5o_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3b5o_28\", \"->\", \"1ssa_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "->", "130q_31"};
     ASSERT_EQ(32700, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \"130q_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \"130q_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1368_17", "->", "1011123_5"};
     ASSERT_EQ(16413, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1368_17\", \"->\", \"1011123_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1368_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1368_17\", \"->\", \"1011123_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1i5m_23", "->", "8393"};
     ASSERT_EQ(8393, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1i5m_23\", \"->\", \"8393\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1i5m_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1i5m_23\", \"->\", \"8393\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"31133312_4", "->", "i05_24"};
     ASSERT_EQ(10373, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31133312_4\", \"->\", \"i05_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"31133312_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31133312_4\", \"->\", \"i05_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"966", "->", "2b5e_19"};
     ASSERT_EQ(17798, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"966\", \"->\", \"2b5e_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"966"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"966\", \"->\", \"2b5e_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "20849"};
     ASSERT_EQ(20849, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"20849\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"20849\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3p1f_29", "->", "55547"};
     ASSERT_EQ(55547, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3p1f_29\", \"->\", \"55547\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3p1f_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3p1f_29\", \"->\", \"55547\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "->", "4e55_16"};
     ASSERT_EQ(20053, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"4e55_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"4e55_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"51083", "->", "46267_12"};
     ASSERT_EQ(93679, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"51083\", \"->\", \"46267_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"51083"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"51083\", \"->\", \"46267_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "2ldk_22"};
     ASSERT_EQ(31766, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"2ldk_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"2ldk_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "220022_5"};
     ASSERT_EQ(7512, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"220022_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"220022_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "->", "5c4d_22"};
     ASSERT_EQ(59149, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"->\", \"5c4d_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"->\", \"5c4d_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1b143_15", "->", "38h8_26"};
     ASSERT_EQ(58586, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1b143_15\", \"->\", \"38h8_26\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1b143_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1b143_15\", \"->\", \"38h8_26\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"16911_14", "->", "1001000100111000_2"};
     ASSERT_EQ(37176, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16911_14\", \"->\", \"1001000100111000_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"16911_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"16911_14\", \"->\", \"1001000100111000_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"259e_33", "->", "30332_6"};
     ASSERT_EQ(4016, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"259e_33\", \"->\", \"30332_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"259e_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"259e_33\", \"->\", \"30332_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "->", "1gjj_28"};
     ASSERT_EQ(35047, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"1gjj_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"->\", \"1gjj_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"859a_14", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"859a_14\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"859a_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"859a_14\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3fdd_19", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3fdd_19\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3fdd_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3fdd_19\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1102120_4", "->", "93867"};
     ASSERT_EQ(93867, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1102120_4\", \"->\", \"93867\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1102120_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1102120_4\", \"->\", \"93867\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6057_13", "->", "11110223_5"};
     ASSERT_EQ(97563, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6057_13\", \"->\", \"11110223_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6057_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6057_13\", \"->\", \"11110223_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"71cb_15", "->", "2son_30"};
     ASSERT_EQ(79943, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"71cb_15\", \"->\", \"2son_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"71cb_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"71cb_15\", \"->\", \"2son_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23231232_4", "->", "22854_10"};
     ASSERT_EQ(22854, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23231232_4\", \"->\", \"22854_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23231232_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23231232_4\", \"->\", \"22854_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10pk_32", "->", "4629_17"};
     ASSERT_EQ(21429, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10pk_32\", \"->\", \"4629_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10pk_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10pk_32\", \"->\", \"4629_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10111000221_3", "->", "71979"};
     ASSERT_EQ(71979, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10111000221_3\", \"->\", \"71979\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10111000221_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10111000221_3\", \"->\", \"71979\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6233_16", "->", "155f_21"};
     ASSERT_EQ(11586, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6233_16\", \"->\", \"155f_21\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6233_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6233_16\", \"->\", \"155f_21\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "2000001010_3"};
     ASSERT_EQ(39396, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"2000001010_3\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"2000001010_3\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6kg7_24", "->", "101322313_4"};
     ASSERT_EQ(73399, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6kg7_24\", \"->\", \"101322313_4\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6kg7_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6kg7_24\", \"->\", \"101322313_4\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "->", "10202120002_3"};
     ASSERT_EQ(74036, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"10202120002_3\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"10202120002_3\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"bfa6_16", "->", "2knp_32"};
     ASSERT_EQ(86777, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"bfa6_16\", \"->\", \"2knp_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"bfa6_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"bfa6_16\", \"->\", \"2knp_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"56d3_15", "->", "4264"};
     ASSERT_EQ(4264, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56d3_15\", \"->\", \"4264\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"56d3_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"56d3_15\", \"->\", \"4264\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "->", "25673"};
     ASSERT_EQ(25673, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \"25673\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"->\", \"25673\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"100130021_4", "->", ":onefivenineeight"};
     ASSERT_EQ(1598, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"100130021_4\", \"->\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"100130021_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"100130021_4\", \"->\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"20320", "->", ":twotwo"};
     ASSERT_EQ(22, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20320\", \"->\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"20320"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20320\", \"->\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "140a0_12"};
     ASSERT_EQ(27768, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"140a0_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"140a0_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2e3h_19", "->", "1bu3_31"};
     ASSERT_EQ(41295, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2e3h_19\", \"->\", \"1bu3_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2e3h_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2e3h_19\", \"->\", \"1bu3_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "2b0b0_12"};
     ASSERT_EQ(60612, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"2b0b0_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"2b0b0_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "->", "5ifg_19"};
     ASSERT_EQ(41094, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"5ifg_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"->\", \"5ifg_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1olp_31", "->", "459a_24"};
     ASSERT_EQ(58402, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1olp_31\", \"->\", \"459a_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1olp_31"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1olp_31\", \"->\", \"459a_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "28912"};
     ASSERT_EQ(28912, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"28912\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"28912\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "->", ":eighteightseven"};
     ASSERT_EQ(887, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"->\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"->\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"126505_9", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"126505_9\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"126505_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"126505_9\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"465245_7", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"465245_7\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"465245_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"465245_7\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"260521_7", "->", "37835"};
     ASSERT_EQ(37835, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"260521_7\", \"->\", \"37835\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"260521_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"260521_7\", \"->\", \"37835\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2i5j_26", "->", ":nineninenine"};
     ASSERT_EQ(999, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2i5j_26\", \"->\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2i5j_26"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2i5j_26\", \"->\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "a913_12"};
     ASSERT_EQ(18591, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"a913_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"a913_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"351_11", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"351_11\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"351_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"351_11\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3434010_5", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3434010_5\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3434010_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3434010_5\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"20202003_4", "->", ":onetwothree"};
     ASSERT_EQ(123, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20202003_4\", \"->\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"20202003_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20202003_4\", \"->\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1ne8_32", "->", "70976"};
     ASSERT_EQ(70976, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ne8_32\", \"->\", \"70976\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1ne8_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ne8_32\", \"->\", \"70976\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"101203111_4", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"101203111_4\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"101203111_4"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"101203111_4\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4dea_21", "->", "50m1_24"};
     ASSERT_EQ(69649, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4dea_21\", \"->\", \"50m1_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4dea_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4dea_21\", \"->\", \"50m1_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "->", "3082_14"};
     ASSERT_EQ(8346, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"->\", \"3082_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"->\", \"3082_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"376a_29", "->", "95645"};
     ASSERT_EQ(95645, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"376a_29\", \"->\", \"95645\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"376a_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"376a_29\", \"->\", \"95645\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"53561", "->", "81408"};
     ASSERT_EQ(81408, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"53561\", \"->\", \"81408\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"53561"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"53561\", \"->\", \"81408\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"gfc5_17", "->", "24gm_31"};
     ASSERT_EQ(63944, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"gfc5_17\", \"->\", \"24gm_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"gfc5_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"gfc5_17\", \"->\", \"24gm_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23531_8", "->", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23531_8\", \"->\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23531_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23531_8\", \"->\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "->", "92499"};
     ASSERT_EQ(92499, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"92499\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"->\", \"92499\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "->", "315532_7"};
     ASSERT_EQ(54805, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"315532_7\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"->\", \"315532_7\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "->", "1nkg_27"};
     ASSERT_EQ(37006, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"1nkg_27\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"->\", \"1nkg_27\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"61808", "->", "66257_8"};
     ASSERT_EQ(27823, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"61808\", \"->\", \"66257_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"61808"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"61808\", \"->\", \"66257_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10377", "->", ":fivesixtwo"};
     ASSERT_EQ(562, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10377\", \"->\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10377"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10377\", \"->\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
}

TEST(Baseball, ExtractTargetBaseWithOperationWithoutTarget) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  {
     std::vector<std::string> tokens = {"36723", "%", "6a7l_23"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"36723\", \"%\", \"6a7l_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"36723", "%", "6a7l_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"36723\", \"%\", \"6a7l_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "*", "35041"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"*\", \"35041\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "*", "35041"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"*\", \"35041\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"63046", "+", "10a87_16"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"63046\", \"+\", \"10a87_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"63046", "+", "10a87_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"63046\", \"+\", \"10a87_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4054_14", "%", "a2f2_18"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4054_14\", \"%\", \"a2f2_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4054_14", "%", "a2f2_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4054_14\", \"%\", \"a2f2_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "+", "72212"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"+\", \"72212\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "+", "72212"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"+\", \"72212\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5f7d_24", "%", "64173"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5f7d_24\", \"%\", \"64173\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5f7d_24", "%", "64173"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5f7d_24\", \"%\", \"64173\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"31346", "-", "14824"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31346\", \"-\", \"14824\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"31346", "-", "14824"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"31346\", \"-\", \"14824\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"79ag_17", "+", "1111000000001011_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"79ag_17\", \"+\", \"1111000000001011_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"79ag_17", "+", "1111000000001011_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"79ag_17\", \"+\", \"1111000000001011_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"64b_29", "*", "76930"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"64b_29\", \"*\", \"76930\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"64b_29", "*", "76930"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"64b_29\", \"*\", \"76930\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"699c_13", "-", ":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"699c_13\", \"-\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"699c_13", "-", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"699c_13\", \"-\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "*", "10411310_5"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"*\", \"10411310_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "*", "10411310_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"*\", \"10411310_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1mpp_27", ">>", "e442_19"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1mpp_27\", \">>\", \"e442_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1mpp_27", ">>", "e442_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1mpp_27\", \">>\", \"e442_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1100101110111101_2", "+", "10012011021_3"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1100101110111101_2\", \"+\", \"10012011021_3\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1100101110111101_2", "+", "10012011021_3"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1100101110111101_2\", \"+\", \"10012011021_3\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"t69_35", "<<", "91539"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"t69_35\", \"<<\", \"91539\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"t69_35", "<<", "91539"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"t69_35\", \"<<\", \"91539\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "*", "64hd_24"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \"64hd_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "*", "64hd_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \"64hd_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"583i_26", "*", "73560"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"583i_26\", \"*\", \"73560\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"583i_26", "*", "73560"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"583i_26\", \"*\", \"73560\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "/", "3fon_27"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"/\", \"3fon_27\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "/", "3fon_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"/\", \"3fon_27\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero", "<<", "7h7l_22"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"<<\", \"7h7l_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero", "<<", "7h7l_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\", \"<<\", \"7h7l_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "*", "1bb5_29"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \"1bb5_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "*", "1bb5_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"*\", \"1bb5_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"55262_7", "*", "39e0_24"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"55262_7\", \"*\", \"39e0_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"55262_7", "*", "39e0_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"55262_7\", \"*\", \"39e0_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"172h_20", "+", ":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"172h_20\", \"+\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"172h_20", "+", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"172h_20\", \"+\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"cma_33", "%", ":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"cma_33\", \"%\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"cma_33", "%", ":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"cma_33\", \"%\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"ef80_18", "-", "110011100101_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"ef80_18\", \"-\", \"110011100101_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"ef80_18", "-", "110011100101_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"ef80_18\", \"-\", \"110011100101_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2hc2_32", "*", "138b3_16"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2hc2_32\", \"*\", \"138b3_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2hc2_32", "*", "138b3_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2hc2_32\", \"*\", \"138b3_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "+", "50808"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"+\", \"50808\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "+", "50808"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"+\", \"50808\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2200120101_3", ">>", "551332_7"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2200120101_3\", \">>\", \"551332_7\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2200120101_3", ">>", "551332_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2200120101_3\", \">>\", \"551332_7\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"17b90_14", "/", ":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"17b90_14\", \"/\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"17b90_14", "/", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"17b90_14\", \"/\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "%", "61660_8"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"%\", \"61660_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "%", "61660_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"%\", \"61660_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "%", ":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"%\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "%", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"%\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"7idb_21", ">>", ":twotwo"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7idb_21\", \">>\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"7idb_21", ">>", ":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7idb_21\", \">>\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"65079", "*", ":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"65079\", \"*\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"65079", "*", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"65079\", \"*\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "/", "75618"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"/\", \"75618\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "/", "75618"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"/\", \"75618\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "*", "9660_14"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"*\", \"9660_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "*", "9660_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"*\", \"9660_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", ">>", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \">>\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", ">>", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \">>\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"122651_9", "%", ":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"122651_9\", \"%\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"122651_9", "%", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"122651_9\", \"%\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"99007_10", "%", "4936"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"99007_10\", \"%\", \"4936\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"99007_10", "%", "4936"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"99007_10\", \"%\", \"4936\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"20126", "-", "3ge5_21"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20126\", \"-\", \"3ge5_21\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"20126", "-", "3ge5_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"20126\", \"-\", \"3ge5_21\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3cej_22", "*", "13825"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3cej_22\", \"*\", \"13825\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3cej_22", "*", "13825"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3cej_22\", \"*\", \"13825\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2313033_5", "-", "94065"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2313033_5\", \"-\", \"94065\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2313033_5", "-", "94065"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2313033_5\", \"-\", \"94065\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "*", "90223"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"*\", \"90223\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", "*", "90223"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"*\", \"90223\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"11509", "<<", "4066_18"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11509\", \"<<\", \"4066_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"11509", "<<", "4066_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"11509\", \"<<\", \"4066_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"110333013_4", "+", "4an0_28"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"110333013_4\", \"+\", \"4an0_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"110333013_4", "+", "4an0_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"110333013_4\", \"+\", \"4an0_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "*", ":nineninenine"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"*\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "*", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"*\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"234431_5", "+", "3ljm_27"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"234431_5\", \"+\", \"3ljm_27\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"234431_5", "+", "3ljm_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"234431_5\", \"+\", \"3ljm_27\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo", "<<", ":nineninenine"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"<<\", \":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo", "<<", ":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\", \"<<\", \":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3913", "%", ":onezerozero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3913\", \"%\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3913", "%", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3913\", \"%\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"13173", ">>", "111111110_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"13173\", \">>\", \"111111110_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"13173", ">>", "111111110_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"13173\", \">>\", \"111111110_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"95489", ">>", "1110111100001000_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"95489\", \">>\", \"1110111100001000_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"95489", ">>", "1110111100001000_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"95489\", \">>\", \"1110111100001000_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"59008", "*", "63032"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"59008\", \"*\", \"63032\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"59008", "*", "63032"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"59008\", \"*\", \"63032\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", ">>", "25654"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \">>\", \"25654\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", ">>", "25654"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \">>\", \"25654\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "<<", "340g_25"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"<<\", \"340g_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "<<", "340g_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"<<\", \"340g_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"85536", "%", "89k8_21"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"85536\", \"%\", \"89k8_21\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"85536", "%", "89k8_21"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"85536\", \"%\", \"89k8_21\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1ihi_22", "+", ":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ihi_22\", \"+\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1ihi_22", "+", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ihi_22\", \"+\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"46191", "<<", "74545"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"46191\", \"<<\", \"74545\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"46191", "<<", "74545"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"46191\", \"<<\", \"74545\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "/", "2fhb_22"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"/\", \"2fhb_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "/", "2fhb_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"/\", \"2fhb_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"p3y_35", "/", "k5c_22"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"p3y_35\", \"/\", \"k5c_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"p3y_35", "/", "k5c_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"p3y_35\", \"/\", \"k5c_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4afg_19", "<<", "20483"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4afg_19\", \"<<\", \"20483\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4afg_19", "<<", "20483"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4afg_19\", \"<<\", \"20483\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"9b8a_18", "/", "2042204_5"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"9b8a_18\", \"/\", \"2042204_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"9b8a_18", "/", "2042204_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"9b8a_18\", \"/\", \"2042204_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven", "+", "1i3n_30"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"+\", \"1i3n_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven", "+", "1i3n_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\", \"+\", \"1i3n_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10443321_5", "%", "b164_17"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10443321_5\", \"%\", \"b164_17\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10443321_5", "%", "b164_17"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10443321_5\", \"%\", \"b164_17\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"i4f_29", "+", ":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"i4f_29\", \"+\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"i4f_29", "+", ":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"i4f_29\", \"+\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "+", "95b7_13"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"+\", \"95b7_13\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "+", "95b7_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"+\", \"95b7_13\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2768b_14", "<<", "cb1g_19"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2768b_14\", \"<<\", \"cb1g_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2768b_14", "<<", "cb1g_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2768b_14\", \"<<\", \"cb1g_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"21qu_35", "/", "31158_9"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"21qu_35\", \"/\", \"31158_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"21qu_35", "/", "31158_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"21qu_35\", \"/\", \"31158_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine", "+", ":fivesixtwo"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine", "+", ":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\", \"+\", \":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4p7l_26", "+", "39613"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4p7l_26\", \"+\", \"39613\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4p7l_26", "+", "39613"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4p7l_26\", \"+\", \"39613\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2022333_4", "<<", ":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2022333_4\", \"<<\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2022333_4", "<<", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2022333_4\", \"<<\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"9r1_30", "%", ":onezerozero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"9r1_30\", \"%\", \":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"9r1_30", "%", ":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"9r1_30\", \"%\", \":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3766_14", "-", ":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3766_14\", \"-\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3766_14", "-", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3766_14\", \"-\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo", "<<", ":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"<<\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo", "<<", ":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\", \"<<\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"68504", "<<", ":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68504\", \"<<\", \":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"68504", "<<", ":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68504\", \"<<\", \":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"744k_24", "*", "2a8_22"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"744k_24\", \"*\", \"2a8_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"744k_24", "*", "2a8_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"744k_24\", \"*\", \"2a8_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1110010000110100_2", "+", "62511"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1110010000110100_2\", \"+\", \"62511\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1110010000110100_2", "+", "62511"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1110010000110100_2\", \"+\", \"62511\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", ">>", "64119"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \">>\", \"64119\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", ">>", "64119"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \">>\", \"64119\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "<<", ":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"<<\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "<<", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"<<\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero", "<<", "bo5_29"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"<<\", \"bo5_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero", "<<", "bo5_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\", \"<<\", \"bo5_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10013_15", "/", "11974"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10013_15\", \"/\", \"11974\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10013_15", "/", "11974"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10013_15\", \"/\", \"11974\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "<<", "3004232_5"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"<<\", \"3004232_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "<<", "3004232_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"<<\", \"3004232_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"fb75_16", "+", "60617_9"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"fb75_16\", \"+\", \"60617_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"fb75_16", "+", "60617_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"fb75_16\", \"+\", \"60617_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"324", "<<", ":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"324\", \"<<\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"324", "<<", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"324\", \"<<\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"8128", "+", "1011100111000001_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8128\", \"+\", \"1011100111000001_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"8128", "+", "1011100111000001_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"8128\", \"+\", \"1011100111000001_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"bdi_33", "+", ":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"bdi_33\", \"+\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"bdi_33", "+", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"bdi_33\", \"+\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"30mf_27", "*", "2020014_6"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"30mf_27\", \"*\", \"2020014_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"30mf_27", "*", "2020014_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"30mf_27\", \"*\", \"2020014_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree", "*", ":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"*\", \":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree", "*", ":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\", \"*\", \":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", ">>", "2c8d_34"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \">>\", \"2c8d_34\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", ">>", "2c8d_34"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \">>\", \"2c8d_34\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"225452_7", ">>", "1010010011001100_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"225452_7\", \">>\", \"1010010011001100_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"225452_7", ">>", "1010010011001100_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"225452_7\", \">>\", \"1010010011001100_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3ja5_26", "%", "64793"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3ja5_26\", \"%\", \"64793\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3ja5_26", "%", "64793"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3ja5_26\", \"%\", \"64793\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven", "%", "3s0h_29"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"%\", \"3s0h_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven", "%", "3s0h_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\", \"%\", \"3s0h_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1ps7_34", "%", "7e4e_22"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ps7_34\", \"%\", \"7e4e_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1ps7_34", "%", "7e4e_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1ps7_34\", \"%\", \"7e4e_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"22055", "-", "4ae4_24"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22055\", \"-\", \"4ae4_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"22055", "-", "4ae4_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22055\", \"-\", \"4ae4_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"bvg_33", "<<", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"bvg_33\", \"<<\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"bvg_33", "<<", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"bvg_33\", \"<<\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"30pl_31", "+", ":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"30pl_31\", \"+\", \":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"30pl_31", "+", ":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"30pl_31\", \"+\", \":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"73700", "-", ":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"73700\", \"-\", \":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"73700", "-", ":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"73700\", \"-\", \":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"122382_9", "+", ":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"122382_9\", \"+\", \":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"122382_9", "+", ":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"122382_9\", \"+\", \":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10952_11", "+", ":twotwo"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10952_11\", \"+\", \":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10952_11", "+", ":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10952_11\", \"+\", \":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"83780_9", "*", ":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"83780_9\", \"*\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"83780_9", "*", ":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"83780_9\", \"*\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree", "<<", "a76c_14"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"<<\", \"a76c_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree", "<<", "a76c_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\", \"<<\", \"a76c_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"fda_33", "%", ":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"fda_33\", \"%\", \":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"fda_33", "%", ":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"fda_33\", \"%\", \":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"28353_10", "-", "2lgj_28"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"28353_10\", \"-\", \"2lgj_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"28353_10", "-", "2lgj_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"28353_10\", \"-\", \"2lgj_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight", "/", "qrn_29"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"/\", \"qrn_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight", "/", "qrn_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\", \"/\", \"qrn_29\"}, but the vector wasn't pruned as I expected.";
  }
}

TEST(Baseball, ExtractTargetBaseWithoutOperationWithoutTarget) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  {
     std::vector<std::string> tokens = {"2c2ac_13"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2c2ac_13\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2c2ac_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2c2ac_13\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1dc0_16"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1dc0_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1dc0_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1dc0_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3da_26"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3da_26\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3da_26"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3da_26\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"h66_23"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"h66_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"h66_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"h66_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5183_13"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5183_13\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5183_13"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5183_13\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"584a9_11"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"584a9_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"584a9_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"584a9_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1126e_16"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1126e_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1126e_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1126e_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4821"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4821\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4821"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4821\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"ni7_29"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"ni7_29\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"ni7_29"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"ni7_29\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"34190_10"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"34190_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"34190_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"34190_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"47108"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"47108\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"47108"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"47108\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3572"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3572\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3572"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3572\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"a8a9_12"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"a8a9_12\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"a8a9_12"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"a8a9_12\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4dc4_27"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4dc4_27\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4dc4_27"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4dc4_27\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"ag96_19"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"ag96_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"ag96_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"ag96_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"145861_9"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"145861_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"145861_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"145861_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"42925"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"42925\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"42925"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"42925\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"59477"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"59477\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"59477"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"59477\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"eh71_18"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"eh71_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"eh71_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"eh71_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":twotwo"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":twotwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":twotwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"104703_9"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"104703_9\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"104703_9"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"104703_9\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"70712_10"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70712_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"70712_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70712_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"6966_19"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6966_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"6966_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"6966_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"93105"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"93105\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"93105"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"93105\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"26669_14"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26669_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"26669_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"26669_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"29fq_32"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"29fq_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"29fq_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"29fq_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"74497"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"74497\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"74497"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"74497\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1110110011100110_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1110110011100110_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1110110011100110_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1110110011100110_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"d483_16"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d483_16\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"d483_16"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d483_16\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5hf7_22"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5hf7_22\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5hf7_22"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5hf7_22\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"plj_32"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"plj_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"plj_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"plj_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"25607_11"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25607_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"25607_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"25607_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"49294"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"49294\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"49294"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"49294\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4cbg_23"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4cbg_23\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4cbg_23"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4cbg_23\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"161766_8"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"161766_8\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"161766_8"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"161766_8\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"98558_10"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"98558_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"98558_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"98558_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"15928"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"15928\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"15928"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"15928\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1165_28"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1165_28\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1165_28"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1165_28\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"344j_25"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"344j_25\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"344j_25"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"344j_25\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":fivesixtwo"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":fivesixtwo"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":fivesixtwo\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2kjo_30"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2kjo_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2kjo_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2kjo_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"170ac_14"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"170ac_14\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"170ac_14"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"170ac_14\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2001312_5"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2001312_5\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2001312_5"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2001312_5\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"7542"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7542\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"7542"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"7542\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"57201"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"57201\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"57201"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"57201\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23ho_34"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23ho_34\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23ho_34"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23ho_34\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1445551_6"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1445551_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1445551_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1445551_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"4a34a_11"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4a34a_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"4a34a_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"4a34a_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"3a68_30"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3a68_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"3a68_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"3a68_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2q8n_32"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2q8n_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2q8n_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2q8n_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"68058_10"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68058_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"68058_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68058_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"23r3_30"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23r3_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"23r3_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"23r3_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"352542_6"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"352542_6\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"352542_6"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"352542_6\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"d195_19"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d195_19\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"d195_19"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"d195_19\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"70192"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70192\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"70192"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"70192\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1001001100000011_2"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1001001100000011_2\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1001001100000011_2"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1001001100000011_2\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"jhh_31"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"jhh_31\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"jhh_31"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"jhh_31\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"68816"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68816\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"68816"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"68816\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":nineninenine"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":nineninenine"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":nineninenine\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"21665"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"21665\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"21665"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"21665\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"29365_11"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"29365_11\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"29365_11"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"29365_11\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2tmg_32"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2tmg_32\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2tmg_32"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2tmg_32\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"37h8_18"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37h8_18\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"37h8_18"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"37h8_18\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"5990_20"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5990_20\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"5990_20"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"5990_20\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"22249"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22249\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"22249"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22249\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozerothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozerothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozerothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"10396"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10396\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"10396"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"10396\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"1b6d_33"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1b6d_33\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"1b6d_33"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"1b6d_33\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"96513_10"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"96513_10\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"96513_10"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"96513_10\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"jih_24"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"jih_24\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"jih_24"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"jih_24\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"124c0_15"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"124c0_15\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"124c0_15"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"124c0_15\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"22621"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22621\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"22621"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"22621\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"971"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"971\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"971"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"971\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"2c8q_30"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2c8q_30\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"2c8q_30"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"2c8q_30\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onetwothree"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onetwothree"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onetwothree\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onefivenineeight"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onefivenineeight"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onefivenineeight\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":threeseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":threeseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":threeseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {"561450_7"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"561450_7\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({"561450_7"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\"561450_7\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":eighteightseven"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":eighteightseven"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":eighteightseven\"}, but the vector wasn't pruned as I expected.";
  }
  {
     std::vector<std::string> tokens = {":onezerozero"};
     ASSERT_EQ(10, calc.ExtractTargetBase(tokens)) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but I didn't back the value I expected.";
     ASSERT_EQ(std::vector<std::string>({":onezerozero"}), tokens) << "I tried asking ExtractTargetBase to extract the target base from the vector {\":onezerozero\"}, but the vector wasn't pruned as I expected.";
  }
}

TEST(Baseball, EvaluateVariable) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ(10, calc.EvaluateVariable(":onezero"));
  ASSERT_EQ(22, calc.EvaluateVariable(":twotwo"));
  ASSERT_EQ(100, calc.EvaluateVariable(":onezerozero"));
  ASSERT_EQ(1003, calc.EvaluateVariable(":onezerozerothree"));
  ASSERT_EQ(562, calc.EvaluateVariable(":fivesixtwo"));
  ASSERT_EQ(999, calc.EvaluateVariable(":nineninenine"));
  ASSERT_EQ(37, calc.EvaluateVariable(":threeseven"));
  ASSERT_EQ(123, calc.EvaluateVariable(":onetwothree"));
  ASSERT_EQ(1598, calc.EvaluateVariable(":onefivenineeight"));
  ASSERT_EQ(887, calc.EvaluateVariable(":eighteightseven"));
}

TEST(Baseball, EvaluateOperation) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ(1620, calc.EvaluateOperation(":twotwo", "+", ":onefivenineeight"));
  ASSERT_EQ(125, calc.EvaluateOperation(":onezerozerothree", ">>", "3_20"));
  ASSERT_EQ(52013, calc.EvaluateOperation("2122100102_3", ">>", "0_2"));
  ASSERT_EQ(1009, calc.EvaluateOperation(":onezero", "+", ":nineninenine"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onezerozero", ">>", "9"));
  ASSERT_EQ(1003, calc.EvaluateOperation(":onezerozerothree", "%", "9374_19"));
  ASSERT_EQ(87444, calc.EvaluateOperation("21861", "<<", "2_32"));
  ASSERT_EQ(97037, calc.EvaluateOperation("67632_11", "-", ":eighteightseven"));
  ASSERT_EQ(4, calc.EvaluateOperation("1ged_27", "%", ":onetwothree"));
  ASSERT_EQ(562, calc.EvaluateOperation(":fivesixtwo", "<<", "0_14"));
  ASSERT_EQ(51246, calc.EvaluateOperation("1r58_30", "-", "b3_19"));
  ASSERT_EQ(3662272, calc.EvaluateOperation("36gn_26", "<<", "6_14"));
  ASSERT_EQ(841033624, calc.EvaluateOperation("124661_7", "*", "36068"));
  ASSERT_EQ(26983, calc.EvaluateOperation(":onezero", "+", "26973"));
  ASSERT_EQ(25911, calc.EvaluateOperation("2lka_28", "-", "35027"));
  ASSERT_EQ(2, calc.EvaluateOperation("3995_20", "/", "2473_18"));
  ASSERT_EQ(0, calc.EvaluateOperation(":threeseven", "/", "122024_6"));
  ASSERT_EQ(0, calc.EvaluateOperation(":twotwo", "/", ":fivesixtwo"));
  ASSERT_EQ(22, calc.EvaluateOperation(":twotwo", "%", "46827"));
  ASSERT_EQ(39, calc.EvaluateOperation("tnx_34", "%", ":onezerozero"));
  ASSERT_EQ(66030, calc.EvaluateOperation("46dh_25", "-", ":fivesixtwo"));
  ASSERT_EQ(67106, calc.EvaluateOperation("10000001000110111_2", "+", ":onezerozerothree"));
  ASSERT_EQ(347693257, calc.EvaluateOperation("a2b_26", "*", "8d51_18"));
  ASSERT_EQ(1004, calc.EvaluateOperation("64316", ">>", "6_14"));
  ASSERT_EQ(2285664, calc.EvaluateOperation("a7g6_19", "<<", "101_2"));
  ASSERT_EQ(0, calc.EvaluateOperation(":fivesixtwo", "-", ":fivesixtwo"));
  ASSERT_EQ(1793856, calc.EvaluateOperation("dafa_16", "<<", "101_2"));
  ASSERT_EQ(562, calc.EvaluateOperation(":fivesixtwo", "%", "32301321_4"));
  ASSERT_EQ(162, calc.EvaluateOperation("6009_12", ">>", "6"));
  ASSERT_EQ(123, calc.EvaluateOperation(":onetwothree", "%", "26ga_24"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onezerozerothree", "/", "4kfa_23"));
  ASSERT_EQ(48866, calc.EvaluateOperation("14v6_35", "%", "83ge_23"));
  ASSERT_EQ(176, calc.EvaluateOperation(":twotwo", "<<", "3_26"));
  ASSERT_EQ(907, calc.EvaluateOperation("3f81_28", "%", "5918"));
  ASSERT_EQ(141297, calc.EvaluateOperation("73592", "+", "3bng_27"));
  ASSERT_EQ(0, calc.EvaluateOperation("154275_9", "%", ":onezerozero"));
  ASSERT_EQ(2816, calc.EvaluateOperation(":twotwo", "<<", "7"));
  ASSERT_EQ(91715, calc.EvaluateOperation("42917_11", "+", "20091_11"));
  ASSERT_EQ(0, calc.EvaluateOperation("45k_21", "/", "tbv_33"));
  ASSERT_EQ(2446107, calc.EvaluateOperation("b60f_18", "*", ":threeseven"));
  ASSERT_EQ(1105, calc.EvaluateOperation("1bac3_14", ">>", "6_22"));
  ASSERT_EQ(10, calc.EvaluateOperation(":onezero", "<<", "0"));
  ASSERT_EQ(0, calc.EvaluateOperation("59b_35", "/", "85758"));
  ASSERT_EQ(388, calc.EvaluateOperation("6961_25", ">>", "22_3"));
  ASSERT_EQ(166380, calc.EvaluateOperation("16638", "*", ":onezero"));
  ASSERT_EQ(502008, calc.EvaluateOperation("4cmf_24", "<<", "3_31"));
  ASSERT_EQ(684, calc.EvaluateOperation("8f9g_17", ">>", "6"));
  ASSERT_EQ(8846700, calc.EvaluateOperation(":onezerozero", "*", "1b32c_15"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onezero", "/", "352415_7"));
  ASSERT_EQ(0, calc.EvaluateOperation(":nineninenine", "/", "e3h6_18"));
  ASSERT_EQ(16363, calc.EvaluateOperation("83cc_20", ">>", "10_2"));
  ASSERT_EQ(83052, calc.EvaluateOperation("10101201202_3", "+", "17db_23"));
  ASSERT_EQ(89945, calc.EvaluateOperation("145008_9", "+", ":nineninenine"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onezerozerothree", "/", "2201220202_3"));
  ASSERT_EQ(59311, calc.EvaluateOperation("a0d6_16", "+", "18137"));
  ASSERT_EQ(598, calc.EvaluateOperation("42ge_21", ">>", "6_12"));
  ASSERT_EQ(79904, calc.EvaluateOperation("80027", "-", ":onetwothree"));
  ASSERT_EQ(8114800, calc.EvaluateOperation(":onezerozero", "*", "a2h8_20"));
  ASSERT_EQ(119, calc.EvaluateOperation("42176_11", ">>", "9"));
  ASSERT_EQ(12784, calc.EvaluateOperation(":onefivenineeight", "<<", "3_21"));
  ASSERT_EQ(91, calc.EvaluateOperation("76jb_20", "%", ":onezerozero"));
  ASSERT_EQ(37943, calc.EvaluateOperation("1h4s_29", "-", ":eighteightseven"));
  ASSERT_EQ(637952, calc.EvaluateOperation("6a0_28", "<<", "7_20"));
  ASSERT_EQ(74920, calc.EvaluateOperation("90000", "-", "15080"));
  ASSERT_EQ(67848, calc.EvaluateOperation("1hng_33", "+", "f08_29"));
  ASSERT_EQ(113581, calc.EvaluateOperation("10224031_5", "+", "2k4e_21"));
  ASSERT_EQ(29399, calc.EvaluateOperation("1wqf_34", "-", "47796"));
  ASSERT_EQ(65005, calc.EvaluateOperation("102166_7", "+", "170j_34"));
  ASSERT_EQ(128646, calc.EvaluateOperation("5e0h_19", "+", "2n60_32"));
  ASSERT_EQ(13164, calc.EvaluateOperation(":onezerozerothree", "+", "ck9_31"));
  ASSERT_EQ(214, calc.EvaluateOperation("31123310_4", ">>", "8_15"));
  ASSERT_EQ(2485888, calc.EvaluateOperation("38842", "<<", "6_12"));
  ASSERT_EQ(148, calc.EvaluateOperation(":threeseven", "<<", "2"));
  ASSERT_EQ(1692544, calc.EvaluateOperation("322234_6", "<<", "6_20"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onezerozero", ">>", "8_12"));
  ASSERT_EQ(98649, calc.EvaluateOperation("64557", "+", "17890_12"));
  ASSERT_EQ(27224, calc.EvaluateOperation("62124", "-", "2104100_5"));
  ASSERT_EQ(7651, calc.EvaluateOperation("1313031_4", "+", ":twotwo"));
  ASSERT_EQ(83803, calc.EvaluateOperation("3moh_28", "+", ":onezero"));
  ASSERT_EQ(191920, calc.EvaluateOperation("11995_10", "<<", "4_5"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onetwothree", ">>", "9_12"));
  ASSERT_EQ(2313900, calc.EvaluateOperation("1011202000_3", "*", ":onezerozero"));
  ASSERT_EQ(57504, calc.EvaluateOperation("62507", "-", "11613_8"));
  ASSERT_EQ(287744, calc.EvaluateOperation(":fivesixtwo", "<<", "100_3"));
  ASSERT_EQ(40005, calc.EvaluateOperation("s04_31", "+", "11h6_23"));
  ASSERT_EQ(3469, calc.EvaluateOperation("8354_15", ">>", "3_35"));
  ASSERT_EQ(4, calc.EvaluateOperation("110010001111100_2", "%", ":onezero"));
  ASSERT_EQ(1, calc.EvaluateOperation("336j_30", "/", "2nib_26"));
  ASSERT_EQ(91626, calc.EvaluateOperation("fe63_17", "+", "13780_10"));
  ASSERT_EQ(5440, calc.EvaluateOperation("22211111_3", "-", ":nineninenine"));
  ASSERT_EQ(62096, calc.EvaluateOperation("1joc_34", "%", "39f9_31"));
  ASSERT_EQ(1, calc.EvaluateOperation("b6f6_16", "/", "793a_15"));
  ASSERT_EQ(38492, calc.EvaluateOperation("20570_10", "+", "17922"));
  ASSERT_EQ(112, calc.EvaluateOperation(":nineninenine", "%", ":eighteightseven"));
  ASSERT_EQ(730520526, calc.EvaluateOperation("392a_19", "*", "30599_10"));
  ASSERT_EQ(151, calc.EvaluateOperation("113626_8", ">>", "8_24"));
  ASSERT_EQ(81, calc.EvaluateOperation("82053", "/", ":onezerozerothree"));
  ASSERT_EQ(8, calc.EvaluateOperation(":onezerozerothree", "/", ":onetwothree"));
  ASSERT_EQ(115165, calc.EvaluateOperation("90027", "+", "3cc1_19"));
  ASSERT_EQ(562, calc.EvaluateOperation(":fivesixtwo", "%", "12888"));
  ASSERT_EQ(8444416, calc.EvaluateOperation("16493", "<<", "9_27"));
  ASSERT_EQ(171746, calc.EvaluateOperation("85873", "<<", "1_16"));
  ASSERT_EQ(41650, calc.EvaluateOperation("464601_7", ">>", "1_5"));
  ASSERT_EQ(1000, calc.EvaluateOperation(":onezerozero", "*", ":onezero"));
  ASSERT_EQ(18, calc.EvaluateOperation(":threeseven", ">>", "1"));
  ASSERT_EQ(43960, calc.EvaluateOperation("120b2_14", "-", ":onezerozero"));
  ASSERT_EQ(1180384, calc.EvaluateOperation("10sq_33", "<<", "5_33"));
  ASSERT_EQ(503904, calc.EvaluateOperation("2o9g_28", "<<", "3"));
  ASSERT_EQ(86, calc.EvaluateOperation(":onetwothree", "-", ":threeseven"));
  ASSERT_EQ(98587, calc.EvaluateOperation("98609", "-", ":twotwo"));
  ASSERT_EQ(1801952, calc.EvaluateOperation("2n6g_27", "<<", "5_28"));
  ASSERT_EQ(20633830, calc.EvaluateOperation("36715", "*", ":fivesixtwo"));
  ASSERT_EQ(8689924, calc.EvaluateOperation("9ae_24", "*", ":onefivenineeight"));
  ASSERT_EQ(1003, calc.EvaluateOperation(":onezerozerothree", "%", "9046_21"));
  ASSERT_EQ(11334, calc.EvaluateOperation("lcj_22", "+", ":eighteightseven"));
  ASSERT_EQ(1, calc.EvaluateOperation("99866", "/", "87281"));
  ASSERT_EQ(71439, calc.EvaluateOperation("61891", "+", "9548"));
  ASSERT_EQ(11, calc.EvaluateOperation("4d0_33", "%", ":twotwo"));
  ASSERT_EQ(0, calc.EvaluateOperation("63201", "/", "526005_7"));
  ASSERT_EQ(8244936, calc.EvaluateOperation("4121112_5", "*", ":onetwothree"));
  ASSERT_EQ(43, calc.EvaluateOperation("105447_8", "/", "ou_33"));
  ASSERT_EQ(69443, calc.EvaluateOperation("2aq7_31", "-", ":fivesixtwo"));
  ASSERT_EQ(1056, calc.EvaluateOperation("449h_20", ">>", "12_3"));
  ASSERT_EQ(127400, calc.EvaluateOperation("1mai_33", "+", "21il_32"));
  ASSERT_EQ(39736854, calc.EvaluateOperation("1e0i_30", "*", ":onezerozerothree"));
  ASSERT_EQ(141110, calc.EvaluateOperation("67cd_24", "+", "151111_8"));
  ASSERT_EQ(20978, calc.EvaluateOperation("50762_8", "%", "d0g0_18"));
  ASSERT_EQ(49, calc.EvaluateOperation(":onefivenineeight", ">>", "5_20"));
  ASSERT_EQ(65912, calc.EvaluateOperation("26i6_31", "%", "102312021_4"));
  ASSERT_EQ(44223993, calc.EvaluateOperation("7693_15", "*", "11011100001_2"));
  ASSERT_EQ(2499, calc.EvaluateOperation("79999", ">>", "5"));
  ASSERT_EQ(2726848, calc.EvaluateOperation("42607", "<<", "6_30"));
  ASSERT_EQ(7332, calc.EvaluateOperation("217160_8", "/", ":onezero"));
  ASSERT_EQ(0, calc.EvaluateOperation("1_4", "/", ":onetwothree"));
  ASSERT_EQ(25058, calc.EvaluateOperation("18642_11", "-", ":onezerozerothree"));
  ASSERT_EQ(999, calc.EvaluateOperation(":nineninenine", "%", "c141_15"));
  ASSERT_EQ(764, calc.EvaluateOperation(":eighteightseven", "-", ":onetwothree"));
  ASSERT_EQ(880736, calc.EvaluateOperation("143146_7", "<<", "101_2"));
  ASSERT_EQ(60221, calc.EvaluateOperation("31gb_27", "%", "89004"));
  ASSERT_EQ(10, calc.EvaluateOperation(":onezero", "%", "30002202_4"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onetwothree", "/", "9250_18"));
  ASSERT_EQ(2368, calc.EvaluateOperation(":threeseven", "<<", "6"));
  ASSERT_EQ(0, calc.EvaluateOperation("14164_12", "/", "68057"));
  ASSERT_EQ(764, calc.EvaluateOperation(":eighteightseven", "-", ":onetwothree"));
  ASSERT_EQ(80363, calc.EvaluateOperation("11002020102_3", "%", "34cca_13"));
  ASSERT_EQ(59211102, calc.EvaluateOperation("59034", "*", ":onezerozerothree"));
  ASSERT_EQ(0, calc.EvaluateOperation(":threeseven", ">>", "6"));
  ASSERT_EQ(4572, calc.EvaluateOperation("1oph_35", ">>", "4"));
  ASSERT_EQ(50036, calc.EvaluateOperation("29bq_28", "-", "1258"));
  ASSERT_EQ(53535, calc.EvaluateOperation("1kc3_32", "-", ":onezerozero"));
  ASSERT_EQ(4, calc.EvaluateOperation("4h7c_21", "/", "af1_32"));
  ASSERT_EQ(93330, calc.EvaluateOperation("168a7_16", "+", ":onezerozerothree"));
  ASSERT_EQ(178, calc.EvaluateOperation("3bo7_30", ">>", "9"));
  ASSERT_EQ(101823, calc.EvaluateOperation("23232", "+", "7887_22"));
  ASSERT_EQ(145150, calc.EvaluateOperation("533454_7", "+", "52648"));
  ASSERT_EQ(70252, calc.EvaluateOperation("8fc2_20", "+", ":onezero"));
  ASSERT_EQ(1081100, calc.EvaluateOperation(":onezerozero", "*", "10811"));
  ASSERT_EQ(0, calc.EvaluateOperation("90d4_21", "/", "4qai_27"));
  ASSERT_EQ(8897497, calc.EvaluateOperation(":eighteightseven", "*", "10031"));
  ASSERT_EQ(124478, calc.EvaluateOperation("3apn_29", "+", "62eb_19"));
  ASSERT_EQ(379904, calc.EvaluateOperation("e3b_29", "<<", "5_10"));
  ASSERT_EQ(6, calc.EvaluateOperation(":eighteightseven", ">>", "7"));
  ASSERT_EQ(1357, calc.EvaluateOperation("4j2_22", "-", ":nineninenine"));
  ASSERT_EQ(0, calc.EvaluateOperation(":nineninenine", "/", "51h6_22"));
  ASSERT_EQ(99423, calc.EvaluateOperation("11f75_17", "+", "1212002_4"));
  ASSERT_EQ(1512, calc.EvaluateOperation("57336", "%", "11di_26"));
  ASSERT_EQ(8134, calc.EvaluateOperation("1333012_4", "%", "1355_28"));
  ASSERT_EQ(8, calc.EvaluateOperation(":nineninenine", "/", ":onetwothree"));
  ASSERT_EQ(147489, calc.EvaluateOperation("71214_10", "+", "84k3_21"));
  ASSERT_EQ(9936, calc.EvaluateOperation("11fbg_17", "-", "83036_10"));
  ASSERT_EQ(54912, calc.EvaluateOperation("138701_9", "-", "47da_19"));
  ASSERT_EQ(17095, calc.EvaluateOperation("275043_8", "%", "19927"));
  ASSERT_EQ(23923556, calc.EvaluateOperation("35642_9", "*", ":onezerozerothree"));
  ASSERT_EQ(21, calc.EvaluateOperation("72005", "%", ":twotwo"));
  ASSERT_EQ(5, calc.EvaluateOperation("10041_5", ">>", "7"));
  ASSERT_EQ(1242238678, calc.EvaluateOperation("2002222001_3", "*", "350254_6"));
  ASSERT_EQ(7131930, calc.EvaluateOperation("390", "*", "j0s_31"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onetwothree", "/", "3n2h_26"));
  ASSERT_EQ(12056, calc.EvaluateOperation(":onezero", "+", "12046"));
  ASSERT_EQ(9, calc.EvaluateOperation(":nineninenine", "%", ":onezero"));
  ASSERT_EQ(67991, calc.EvaluateOperation("1oun_34", "-", ":onezerozero"));
  ASSERT_EQ(192, calc.EvaluateOperation("49163", ">>", "8_27"));
  ASSERT_EQ(2, calc.EvaluateOperation("67la_24", "/", "14167_13"));
  ASSERT_EQ(851, calc.EvaluateOperation("440502_7", "%", ":onezerozerothree"));
  ASSERT_EQ(63125, calc.EvaluateOperation("62122", "+", ":onezerozerothree"));
  ASSERT_EQ(15, calc.EvaluateOperation("1637_23", "/", ":nineninenine"));
  ASSERT_EQ(0, calc.EvaluateOperation(":eighteightseven", "/", ":onefivenineeight"));
  ASSERT_EQ(103915, calc.EvaluateOperation("13302320_4", "+", "357ab_12"));
  ASSERT_EQ(13232, calc.EvaluateOperation("25m7_32", "%", "1kcm_33"));
  ASSERT_EQ(142379, calc.EvaluateOperation("5aed_26", "+", "47362"));
  ASSERT_EQ(22643, calc.EvaluateOperation("85848", "-", "af17_18"));
  ASSERT_EQ(31915, calc.EvaluateOperation(":onefivenineeight", "+", "30317"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onetwothree", "/", "3003000_5"));
  ASSERT_EQ(53912, calc.EvaluateOperation("2201221202_3", ">>", "0_22"));
  ASSERT_EQ(7934070, calc.EvaluateOperation(":onefivenineeight", "*", "6lo_27"));
  ASSERT_EQ(25189, calc.EvaluateOperation("11b6_17", "+", "1000011010_3"));
  ASSERT_EQ(1184, calc.EvaluateOperation(":threeseven", "<<", "5_6"));
  ASSERT_EQ(2, calc.EvaluateOperation(":fivesixtwo", ">>", "8_15"));
  ASSERT_EQ(4496, calc.EvaluateOperation(":fivesixtwo", "<<", "3_11"));
  ASSERT_EQ(0, calc.EvaluateOperation(":onezero", "/", ":onetwothree"));
}

TEST(Baseball, Bitwise) {
  Baseball calc;
  calc.Evaluate(":onezero <- 10");
  calc.Evaluate(":twotwo <- 22");
  calc.Evaluate(":onezerozero <- 100");
  calc.Evaluate(":onezerozerothree <- 1003");
  calc.Evaluate(":fivesixtwo <- 562");
  calc.Evaluate(":nineninenine <- 999");
  calc.Evaluate(":threeseven <- 37");
  calc.Evaluate(":onetwothree <- 123");
  calc.Evaluate(":onefivenineeight <- 1598");
  calc.Evaluate(":eighteightseven <- 887");
  ASSERT_EQ(61, calc.EvaluateOperation("46", "^", "10_19"));
  ASSERT_EQ(8, calc.EvaluateOperation("26_20", "&", "24"));
  ASSERT_EQ(0, calc.EvaluateOperation("11_9", "&", "19_23"));
  ASSERT_EQ(52, calc.EvaluateOperation("48", "^", "4"));
  ASSERT_EQ(61, calc.EvaluateOperation("h_20", "|", "39_12"));
  ASSERT_EQ(14, calc.EvaluateOperation("13_5", "^", "6"));
  ASSERT_EQ(31, calc.EvaluateOperation("51_6", "|", "5_9"));
  ASSERT_EQ(31, calc.EvaluateOperation("3", "|", "1002_3"));
  ASSERT_EQ(10, calc.EvaluateOperation("1a_21", "&", "a_27"));
  ASSERT_EQ(39, calc.EvaluateOperation("39", "|", "2_21"));
  ASSERT_EQ(57, calc.EvaluateOperation("b_17", "^", "50"));
  ASSERT_EQ(23, calc.EvaluateOperation("4_14", "^", "19"));
  ASSERT_EQ(47, calc.EvaluateOperation("37", "|", "1j_28"));
  ASSERT_EQ(47, calc.EvaluateOperation("47", "|", "40"));
  ASSERT_EQ(5, calc.EvaluateOperation("16_15", "&", "7"));
  ASSERT_EQ(41, calc.EvaluateOperation("3_10", "^", "30_14"));
  ASSERT_EQ(31, calc.EvaluateOperation("m_27", "|", "1011_2"));
  ASSERT_EQ(7, calc.EvaluateOperation("5", "^", "2_31"));
  ASSERT_EQ(6, calc.EvaluateOperation("7", "&", "1d_25"));
  ASSERT_EQ(5, calc.EvaluateOperation("5_22", "&", "l_28"));
  ASSERT_EQ(3, calc.EvaluateOperation("17_27", "^", "1020_3"));
  ASSERT_EQ(8, calc.EvaluateOperation("18_10", "^", "18_18"));
  ASSERT_EQ(15, calc.EvaluateOperation("14", "|", "b_33"));
  ASSERT_EQ(4, calc.EvaluateOperation("5_20", "&", "s_33"));
  ASSERT_EQ(3, calc.EvaluateOperation("43_10", "^", "40"));
  ASSERT_EQ(44, calc.EvaluateOperation("34", "^", "16_8"));
  ASSERT_EQ(59, calc.EvaluateOperation("3b_13", "|", "25"));
  ASSERT_EQ(15, calc.EvaluateOperation("30", "^", "12_15"));
  ASSERT_EQ(59, calc.EvaluateOperation("49", "|", "1000_3"));
  ASSERT_EQ(63, calc.EvaluateOperation("1c_34", "|", "49"));
  ASSERT_EQ(54, calc.EvaluateOperation("6_15", "|", "48"));
  ASSERT_EQ(6, calc.EvaluateOperation("6_28", "&", "47"));
  ASSERT_EQ(39, calc.EvaluateOperation("53_6", "|", "6"));
  ASSERT_EQ(1, calc.EvaluateOperation("1_12", "&", "210_3"));
  ASSERT_EQ(28, calc.EvaluateOperation("28", "|", "8_9"));
  ASSERT_EQ(12, calc.EvaluateOperation("48_9", "&", "30"));
  ASSERT_EQ(10, calc.EvaluateOperation("22_6", "&", "1121_3"));
  ASSERT_EQ(13, calc.EvaluateOperation("10_13", "|", "c_30"));
  ASSERT_EQ(59, calc.EvaluateOperation("43", "|", "17_9"));
  ASSERT_EQ(55, calc.EvaluateOperation("1l_23", "^", "27"));
  ASSERT_EQ(47, calc.EvaluateOperation("40", "^", "7_17"));
  ASSERT_EQ(51, calc.EvaluateOperation("10_34", "|", "19"));
  ASSERT_EQ(1, calc.EvaluateOperation("1_28", "&", "1k_21"));
  ASSERT_EQ(29, calc.EvaluateOperation("1d_18", "^", "2_31"));
  ASSERT_EQ(59, calc.EvaluateOperation("12_31", "|", "27"));
  ASSERT_EQ(33, calc.EvaluateOperation("1_32", "|", "33"));
  ASSERT_EQ(12, calc.EvaluateOperation("26", "^", "31_7"));
  ASSERT_EQ(10, calc.EvaluateOperation("42", "^", "1012_3"));
  ASSERT_EQ(25, calc.EvaluateOperation("8", "|", "121_4"));
  ASSERT_EQ(59, calc.EvaluateOperation("25", "|", "1m_28"));
  ASSERT_EQ(2, calc.EvaluateOperation("26", "&", "3_15"));
  ASSERT_EQ(55, calc.EvaluateOperation("7_27", "|", "50"));
  ASSERT_EQ(0, calc.EvaluateOperation("4", "&", "39_13"));
  ASSERT_EQ(55, calc.EvaluateOperation("n_35", "|", "39"));
  ASSERT_EQ(32, calc.EvaluateOperation("46", "&", "12_31"));
  ASSERT_EQ(49, calc.EvaluateOperation("g_24", "|", "1d_20"));
  ASSERT_EQ(4, calc.EvaluateOperation("16", "^", "20"));
  ASSERT_EQ(50, calc.EvaluateOperation("42", "^", "24"));
  ASSERT_EQ(4, calc.EvaluateOperation("22", "&", "5"));
  ASSERT_EQ(58, calc.EvaluateOperation("31_13", "|", "26"));
  ASSERT_EQ(63, calc.EvaluateOperation("14", "^", "301_4"));
  ASSERT_EQ(13, calc.EvaluateOperation("1i_29", "&", "32_9"));
  ASSERT_EQ(38, calc.EvaluateOperation("1b_25", "^", "2"));
  ASSERT_EQ(30, calc.EvaluateOperation("22", "|", "13_11"));
  ASSERT_EQ(16, calc.EvaluateOperation("16_14", "&", "17_9"));
  ASSERT_EQ(36, calc.EvaluateOperation("4_28", "^", "1c_20"));
  ASSERT_EQ(1, calc.EvaluateOperation("9_14", "&", "17_32"));
  ASSERT_EQ(54, calc.EvaluateOperation("4_13", "|", "1f_35"));
  ASSERT_EQ(43, calc.EvaluateOperation("3_31", "|", "1i_22"));
  ASSERT_EQ(47, calc.EvaluateOperation("10_4", "|", "47"));
  ASSERT_EQ(5, calc.EvaluateOperation("4_34", "|", "1_35"));
  ASSERT_EQ(0, calc.EvaluateOperation("4", "&", "121_3"));
  ASSERT_EQ(55, calc.EvaluateOperation("10_22", "|", "49"));
  ASSERT_EQ(40, calc.EvaluateOperation("35_12", "^", "1"));
  ASSERT_EQ(0, calc.EvaluateOperation("100101_2", "&", "2_27"));
  ASSERT_EQ(17, calc.EvaluateOperation("49", "&", "13_26"));
  ASSERT_EQ(16, calc.EvaluateOperation("15", "^", "31"));
  ASSERT_EQ(19, calc.EvaluateOperation("14_13", "|", "2_24"));
  ASSERT_EQ(31, calc.EvaluateOperation("4", "|", "33_8"));
  ASSERT_EQ(35, calc.EvaluateOperation("1100_2", "^", "142_5"));
  ASSERT_EQ(43, calc.EvaluateOperation("48", "^", "27"));
  ASSERT_EQ(17, calc.EvaluateOperation("f_16", "^", "u_33"));
  ASSERT_EQ(2, calc.EvaluateOperation("1g_31", "^", "45"));
  ASSERT_EQ(0, calc.EvaluateOperation("2_7", "&", "1a_22"));
  ASSERT_EQ(52, calc.EvaluateOperation("62_7", "^", "1a_14"));
  ASSERT_EQ(38, calc.EvaluateOperation("32", "^", "6_23"));
  ASSERT_EQ(9, calc.EvaluateOperation("110_3", "^", "5"));
  ASSERT_EQ(2, calc.EvaluateOperation("52_8", "^", "1a_30"));
  ASSERT_EQ(27, calc.EvaluateOperation("19_17", "^", "1"));
  ASSERT_EQ(32, calc.EvaluateOperation("21_6", "^", "45"));
  ASSERT_EQ(15, calc.EvaluateOperation("23_13", "^", "33_5"));
  ASSERT_EQ(47, calc.EvaluateOperation("d_29", "^", "37_9"));
  ASSERT_EQ(46, calc.EvaluateOperation("44", "|", "2_30"));
  ASSERT_EQ(3, calc.EvaluateOperation("101111_2", "^", "28_18"));
  ASSERT_EQ(47, calc.EvaluateOperation("7_33", "|", "51_8"));
  ASSERT_EQ(32, calc.EvaluateOperation("48", "&", "18_26"));
  ASSERT_EQ(43, calc.EvaluateOperation("31_11", "^", "9_10"));
  ASSERT_EQ(3, calc.EvaluateOperation("30_5", "^", "12"));
  ASSERT_EQ(2, calc.EvaluateOperation("a_11", "&", "103_4"));
  ASSERT_EQ(16, calc.EvaluateOperation("1m_27", "&", "16_10"));
  ASSERT_EQ(8, calc.EvaluateOperation("1g_24", "&", "r_29"));
  ASSERT_EQ(34, calc.EvaluateOperation("1b_28", "&", "42"));
  ASSERT_EQ(31, calc.EvaluateOperation("27", "|", "31"));
  ASSERT_EQ(15, calc.EvaluateOperation("13", "|", "15"));
  ASSERT_EQ(27, calc.EvaluateOperation("9_20", "|", "1000_3"));
  ASSERT_EQ(29, calc.EvaluateOperation("33_6", "|", "25"));
  ASSERT_EQ(56, calc.EvaluateOperation("1c_31", "^", "14_15"));
  ASSERT_EQ(3, calc.EvaluateOperation("7", "&", "3"));
  ASSERT_EQ(44, calc.EvaluateOperation("39", "^", "b_35"));
  ASSERT_EQ(43, calc.EvaluateOperation("x_34", "|", "43"));
  ASSERT_EQ(44, calc.EvaluateOperation("1a_34", "|", "44"));
  ASSERT_EQ(26, calc.EvaluateOperation("q_31", "|", "a_11"));
  ASSERT_EQ(43, calc.EvaluateOperation("34_13", "|", "3_22"));
  ASSERT_EQ(7, calc.EvaluateOperation("g_21", "^", "23"));
  ASSERT_EQ(5, calc.EvaluateOperation("10_5", "&", "l_35"));
  ASSERT_EQ(56, calc.EvaluateOperation("h_29", "^", "1f_26"));
  ASSERT_EQ(29, calc.EvaluateOperation("16", "|", "14_9"));
  ASSERT_EQ(19, calc.EvaluateOperation("2e_18", "^", "1a_23"));
  ASSERT_EQ(12, calc.EvaluateOperation("112_3", "&", "104_5"));
  ASSERT_EQ(35, calc.EvaluateOperation("35", "&", "124_5"));
  ASSERT_EQ(43, calc.EvaluateOperation("41", "|", "132_5"));
  ASSERT_EQ(57, calc.EvaluateOperation("21", "^", "1g_28"));
  ASSERT_EQ(4, calc.EvaluateOperation("15_10", "&", "4"));
  ASSERT_EQ(1, calc.EvaluateOperation("17", "&", "37"));
  ASSERT_EQ(47, calc.EvaluateOperation("124_5", "|", "21_22"));
  ASSERT_EQ(27, calc.EvaluateOperation("b_12", "|", "17"));
  ASSERT_EQ(25, calc.EvaluateOperation("1", "^", "12_22"));
  ASSERT_EQ(0, calc.EvaluateOperation("17_12", "&", "0_28"));
  ASSERT_EQ(5, calc.EvaluateOperation("5_16", "|", "5_33"));
  ASSERT_EQ(0, calc.EvaluateOperation("33_7", "&", "0_5"));
  ASSERT_EQ(0, calc.EvaluateOperation("m_30", "&", "22_19"));
  ASSERT_EQ(47, calc.EvaluateOperation("23_5", "|", "35"));
  ASSERT_EQ(23, calc.EvaluateOperation("0_3", "^", "1b_12"));
  ASSERT_EQ(4, calc.EvaluateOperation("12", "&", "110_2"));
  ASSERT_EQ(24, calc.EvaluateOperation("28", "&", "1a_14"));
  ASSERT_EQ(15, calc.EvaluateOperation("b_34", "|", "6"));
  ASSERT_EQ(49, calc.EvaluateOperation("49", "|", "1"));
  ASSERT_EQ(10, calc.EvaluateOperation("7_25", "^", "d_21"));
  ASSERT_EQ(20, calc.EvaluateOperation("50", "^", "1c_26"));
  ASSERT_EQ(31, calc.EvaluateOperation("9_23", "|", "22"));
  ASSERT_EQ(35, calc.EvaluateOperation("3", "|", "35"));
  ASSERT_EQ(10, calc.EvaluateOperation("21_5", "&", "35_7"));
  ASSERT_EQ(12, calc.EvaluateOperation("10_20", "^", "14_20"));
  ASSERT_EQ(1, calc.EvaluateOperation("7_31", "&", "1e_19"));
  ASSERT_EQ(53, calc.EvaluateOperation("25_8", "|", "19_27"));
  ASSERT_EQ(25, calc.EvaluateOperation("19_20", "&", "10_25"));
  ASSERT_EQ(17, calc.EvaluateOperation("1f_34", "^", "1f_17"));
  ASSERT_EQ(16, calc.EvaluateOperation("24", "&", "l_33"));
  ASSERT_EQ(1, calc.EvaluateOperation("5", "^", "4_26"));
  ASSERT_EQ(15, calc.EvaluateOperation("2_14", "^", "13"));
  ASSERT_EQ(16, calc.EvaluateOperation("18_17", "^", "9_12"));
  ASSERT_EQ(49, calc.EvaluateOperation("27", "^", "42"));
  ASSERT_EQ(47, calc.EvaluateOperation("131_5", "|", "1c_27"));
  ASSERT_EQ(27, calc.EvaluateOperation("19", "|", "26"));
  ASSERT_EQ(13, calc.EvaluateOperation("15_29", "^", "47"));
  ASSERT_EQ(9, calc.EvaluateOperation("12_13", "&", "9"));
  ASSERT_EQ(3, calc.EvaluateOperation("22", "^", "33_6"));
  ASSERT_EQ(5, calc.EvaluateOperation("7_9", "&", "1e_23"));
  ASSERT_EQ(47, calc.EvaluateOperation("35", "^", "c_20"));
  ASSERT_EQ(8, calc.EvaluateOperation("27", "&", "8"));
  ASSERT_EQ(60, calc.EvaluateOperation("12", "^", "48"));
  ASSERT_EQ(3, calc.EvaluateOperation("2", "|", "3_26"));
  ASSERT_EQ(10, calc.EvaluateOperation("101_5", "&", "e_25"));
  ASSERT_EQ(4, calc.EvaluateOperation("13_19", "^", "18"));
  ASSERT_EQ(8, calc.EvaluateOperation("8_25", "&", "2c_14"));
  ASSERT_EQ(52, calc.EvaluateOperation("47", "^", "27"));
  ASSERT_EQ(30, calc.EvaluateOperation("9", "^", "11_22"));
  ASSERT_EQ(20, calc.EvaluateOperation("m_23", "&", "t_32"));
  ASSERT_EQ(59, calc.EvaluateOperation("20", "^", "2b_18"));
  ASSERT_EQ(0, calc.EvaluateOperation("42", "&", "21"));
  ASSERT_EQ(59, calc.EvaluateOperation("r_34", "|", "1f_19"));
  ASSERT_EQ(61, calc.EvaluateOperation("19_23", "^", "131_4"));
  ASSERT_EQ(9, calc.EvaluateOperation("15_6", "&", "9_11"));
  ASSERT_EQ(0, calc.EvaluateOperation("13", "&", "10_16"));
  ASSERT_EQ(15, calc.EvaluateOperation("31", "&", "f_22"));
  ASSERT_EQ(38, calc.EvaluateOperation("11_3", "|", "38"));
  ASSERT_EQ(62, calc.EvaluateOperation("48", "^", "14"));
  ASSERT_EQ(16, calc.EvaluateOperation("18", "&", "100_4"));
  ASSERT_EQ(20, calc.EvaluateOperation("11", "^", "29_11"));
  ASSERT_EQ(0, calc.EvaluateOperation("12_7", "&", "1i_20"));
  ASSERT_EQ(28, calc.EvaluateOperation("19_19", "|", "4_9"));
  ASSERT_EQ(9, calc.EvaluateOperation("9", "&", "45_10"));
  ASSERT_EQ(31, calc.EvaluateOperation("u_32", "|", "f_20"));
  ASSERT_EQ(40, calc.EvaluateOperation("1h_19", "^", "15_7"));
  ASSERT_EQ(31, calc.EvaluateOperation("7_18", "|", "12_29"));
  ASSERT_EQ(0, calc.EvaluateOperation("1_33", "&", "s_32"));
  ASSERT_EQ(10, calc.EvaluateOperation("47", "^", "37"));
  ASSERT_EQ(0, calc.EvaluateOperation("1_6", "&", "1f_19"));
  ASSERT_EQ(6, calc.EvaluateOperation("6_35", "&", "7"));
  ASSERT_EQ(24, calc.EvaluateOperation("11_26", "^", "3"));
  ASSERT_EQ(45, calc.EvaluateOperation("5_8", "|", "2d_14"));
  ASSERT_EQ(43, calc.EvaluateOperation("34", "|", "43"));
  ASSERT_EQ(60, calc.EvaluateOperation("1a_23", "^", "104_5"));
  ASSERT_EQ(1, calc.EvaluateOperation("37", "&", "1_33"));
  ASSERT_EQ(46, calc.EvaluateOperation("c_26", "|", "15_29"));
  ASSERT_EQ(10, calc.EvaluateOperation("e_25", "&", "42"));
  ASSERT_EQ(19, calc.EvaluateOperation("3_35", "|", "i_24"));
  ASSERT_EQ(38, calc.EvaluateOperation("44", "^", "10"));
  ASSERT_EQ(27, calc.EvaluateOperation("21_5", "|", "17"));
  ASSERT_EQ(63, calc.EvaluateOperation("15_9", "^", "49"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv); 
  return RUN_ALL_TESTS();
}
