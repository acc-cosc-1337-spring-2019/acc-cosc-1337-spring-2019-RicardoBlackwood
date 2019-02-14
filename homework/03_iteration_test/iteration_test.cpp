#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Test case function get_gc_content(string dna)

Value	Result
TAGAGCTA	.375
CGCTATAG	.50
*/
TEST_CASE("get_gc_content")

REQUIRE(get_gc_content("TAGAGCTA") == .375);
REQUIRE(get_gc_content("CGCTATAG") == .50);



/*
Test case function get_reverse_string(string dna)

Value	Result
AGCTATAG	GATATCGA
CGCTATAG	GATATCGC
*/
TEST_CASE("get_reverse_string")

REQUIRE(get_reverse_string("AGCTATAG") == GATATCGA);
REQUIRE(get_reverse_string("CGCTATAG") == GATATCGC);

/*
Test case get dna complement

Value	Result
AAAACCCGGT	ACCGGGTTTT
CCCGGAAAAT	ATTTTCCGGG
*/
TEST_CASE("get_dna_complement")

REQUIRE(get_dna_complement("AAAACCCGGT") == ACCGGGTTTT);
REQUIRE(get_dna_complement("CCCGGAAAAT") == ATTTTCCGGG);
