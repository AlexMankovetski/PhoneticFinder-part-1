#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <stdexcept>
using namespace phonetic;
using std::string;

TEST_CASE("Dond vorri be haffy") {
    string text = "Dond vorri be haffy";
    CHECK( find(text, "happy") == string("haffy") );
    CHECK(find(text, "dont") == string("Dond"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "vorri") == string("vorri"));
    CHECK(find(text, "Dond") == string("Dond"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "haffy") == string("haffy"));
    CHECK_THROWS(find(text, "to"));
    CHECK_THROWS(find(text, "yes"));
    CHECK_THROWS(find(text, "no"));
    CHECK_THROWS(find(text, "go"));
    CHECK_THROWS(find(text, "out"));
    CHECK_THROWS(find(text, "in"));
    CHECK_THROWS(find(text, "left"));
    CHECK_THROWS(find(text, "zeus"));
    CHECK_THROWS(find(text, "alex"));
    CHECK_THROWS(find(text, "ron"));
    CHECK_THROWS(find(text, "Rak"));
    CHECK_THROWS(find(text, "tayb"));
    CHECK_THROWS(find(text, "Haifa"));
    CHECK_THROWS(find(text, "yesh"));
    CHECK_THROWS(find(text, "Maccabi"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, "O"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, ""));
    CHECK_THROWS(find(text, "yarok"));
    CHECK_THROWS(find(text, "ole"));
    CHECK_THROWS(find(text, "kulam"));
    CHECK_THROWS(find(text, "kulam kulam"));
    CHECK_THROWS(find(text, "likfotz"));
}

TEST_CASE("The real line is = we will we will rock you") {
    string text = "Ve vyll ve vyll rukk iuo";
    CHECK(find(text, "We") == string("Ve"));
    CHECK(find(text, "will") == string("vyll"));
    CHECK(find(text, "rock") == string("rukk"));
    CHECK(find(text, "rukk") == string("rukk"));
    CHECK(find(text, "vyll") == string("vyll"));
    CHECK(find(text, "you") == string("iuo"));
    CHECK(find(text, "ve") == string("Ve"));
    CHECK_THROWS(find(text, "Rak"));
    CHECK_THROWS(find(text, "be"));
    CHECK_THROWS(find(text, "Haifa"));
    CHECK_THROWS(find(text, "yesh"));
    CHECK_THROWS(find(text, "Maccabi"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, "O"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, ""));
    CHECK_THROWS(find(text, "yarok"));
    CHECK_THROWS(find(text, "ole"));
    CHECK_THROWS(find(text, "kulam"));
    CHECK_THROWS(find(text, "kulam kulam"));
    CHECK_THROWS(find(text, "likfotz"));
    
}

TEST_CASE("The real line is = we are the champions my friend"){
    string text = "Ve are dhe khamfyunz mi brient";
    CHECK(find(text, "We") == string("Ve"));
    CHECK(find(text, "are") == string("are"));
    CHECK(find(text, "champions") == string("khamfyunz"));
    CHECK(find(text, "khampions") == string("khamfyunz"));
    CHECK(find(text, "chamfyons") == string("khamfyunz"));
    CHECK(find(text, "championz") == string("khamfyunz"));
    CHECK(find(text, "the") == string("dhe"));
    CHECK_THROWS(find(text, "to"));
    CHECK_THROWS(find(text, "yes"));
    CHECK_THROWS(find(text, "no"));
    CHECK_THROWS(find(text, "go"));
    CHECK_THROWS(find(text, "out"));
    CHECK_THROWS(find(text, "in"));
    CHECK_THROWS(find(text, "left"));
    CHECK_THROWS(find(text, "zeus"));
    CHECK_THROWS(find(text, "alex"));
    CHECK_THROWS(find(text, "ron"));
    CHECK_THROWS(find(text, "Rak"));
    CHECK_THROWS(find(text, "be"));
    CHECK_THROWS(find(text, "Haifa"));
    CHECK_THROWS(find(text, "yesh"));
    CHECK_THROWS(find(text, "Maccabi"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, "O"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, ""));
    CHECK_THROWS(find(text, "yarok"));
    CHECK_THROWS(find(text, "ole"));
    CHECK_THROWS(find(text, "kulam"));
    CHECK_THROWS(find(text, "kulam kulam"));
    CHECK_THROWS(find(text, "likfotz"));
}

TEST_CASE("The real line is = Love of my life dont leave me"){
    string text = "Love ob mi lybe tond leawe me";
    CHECK(find(text, "Love") == string("Love"));
    CHECK(find(text, "of") == string("ob"));
    CHECK(find(text, "mi") == string("mi"));
    CHECK(find(text, "my") == string("mi"));
    CHECK(find(text, "leave") == string("leawe"));
    CHECK(find(text, "dond") == string("tond"));
    CHECK(find(text, "tund") == string("tond"));
    CHECK(find(text, "tunt") == string("tond"));
    CHECK(find(text, "tond") == string("tond"));
    CHECK(find(text, "dund") == string("tond"));
    CHECK(find(text, "dunt") == string("tond"));
    CHECK_THROWS(find(text, "to"));
    CHECK_THROWS(find(text, "yes"));
    CHECK_THROWS(find(text, "no"));
    CHECK_THROWS(find(text, "go"));
    CHECK_THROWS(find(text, "out"));
    CHECK_THROWS(find(text, "in"));
    CHECK_THROWS(find(text, "left"));
    CHECK_THROWS(find(text, "zeus"));
    CHECK_THROWS(find(text, "alex"));
    CHECK_THROWS(find(text, "ron"));
    CHECK_THROWS(find(text, "Rak"));
    CHECK_THROWS(find(text, "beseder"));
    CHECK_THROWS(find(text, "Haifa"));
    CHECK_THROWS(find(text, "yesh"));
    CHECK_THROWS(find(text, "Maccabi"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, "O"));
    CHECK_THROWS(find(text, "eh"));
    CHECK_THROWS(find(text, ""));
    CHECK_THROWS(find(text, "yarok"));
    CHECK_THROWS(find(text, "ole"));
    CHECK_THROWS(find(text, "kulam"));
    CHECK_THROWS(find(text, "kulam kulam"));
    CHECK_THROWS(find(text, "likfotz"));
}
