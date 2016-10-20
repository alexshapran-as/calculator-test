#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float x = 9.0;
    float y = 1.0;
    
    double rv = sum( x, y );
    
	REQUIRE( rv == 10.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float x = 9.0;
    float y = 1.0;
    
    double rv = sub( x, y );
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator mult", "[mult]") {
    float x = 9.0;
    float y = 1.0;
    
    double rv = mult( x, y );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator div", "[div]") {
    float x = 9.0;
    float y = 1.0;
    
    double rv = div( x, y );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator pow", "[pow]") {
    float x = 9.0;
    float y = 1.0;
    
    double rv = pow( x, y );
    
	REQUIRE( rv == 6561.0 );
}
SCENARIO("calculator sq", "[sq]") {
    float x = 9.0;
    float y = 1.0;
    
    double rv = sq( x, y );
    
	REQUIRE( rv == 3.0 );
}
