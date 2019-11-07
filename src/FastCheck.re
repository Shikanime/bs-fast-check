type arbitrary('a);
type constraint_;

[@bs.module "fast-check"] external property : (arbitrary('a), ('a => 'b)) => 'b = "property";
[@bs.module "fast-check"] external property2 : (arbitrary('a), arbitrary('b), (('a, 'b) => 'c)) => 'c = "property";
[@bs.module "fast-check"] external property3 : (arbitrary('a), arbitrary('b), arbitrary('c), (('a, 'b, 'c) => 'd)) => 'd = "property";
[@bs.module "fast-check"] external property4 : (arbitrary('a), arbitrary('b), arbitrary('c), arbitrary('d), (('a, 'b, 'c, 'd) => 'e)) => 'e = "property";
[@bs.module "fast-check"] external property5 : (arbitrary('a), arbitrary('b), arbitrary('c), arbitrary('d), arbitrary('e), (('a, 'b, 'c, 'd, 'e) => 'f)) => 'f = "property";

[@bs.module "fast-check"] external assert_ : 'a => 'a = "assert";

[@bs.module "fast-check"] external boolean : unit => bool = "boolean";

[@bs.module "fast-check"] external integer : unit => arbitrary(int) = "integer";
[@bs.module "fast-check"] external integer1 : int => arbitrary(int) = "integer";
[@bs.module "fast-check"] external integer2 : (int, int) => arbitrary(int) = "integer";
[@bs.module "fast-check"] external maxSafeInteger : unit => arbitrary(int) = "maxSafeInteger";
[@bs.module "fast-check"] external nat : unit => arbitrary(float) = "nat";
[@bs.module "fast-check"] external nat1 : int => arbitrary(float) = "nat";
[@bs.module "fast-check"] external maxSafeNat : unit => arbitrary(float) = "maxSafeNat";

[@bs.module "fast-check"] external float_ : unit => arbitrary(float) = "float";
[@bs.module "fast-check"] external float_1 : int => arbitrary(float) = "float";
[@bs.module "fast-check"] external float_2 : (int, int) => arbitrary(float) = "float";
[@bs.module "fast-check"] external double : unit => arbitrary(float) = "doudle";
[@bs.module "fast-check"] external double1 : int => arbitrary(float) = "doudle";
[@bs.module "fast-check"] external double2 : (int, int) => arbitrary(float) = "doudle";

[@bs.module "fast-check"] external bigIntN : unit => arbitrary(int64) = "bigIntN";
[@bs.module "fast-check"] external bigIntN1 : int => arbitrary(int64) = "bigIntN";
[@bs.module "fast-check"] external bigIntN2 : (int, int) => arbitrary(int64) = "bigIntN";

[@bs.module "fast-check"] external bigUint : unit => arbitrary(int64) = "bigUint";
[@bs.module "fast-check"] external bigUint1 : int => arbitrary(int64) = "bigUint";

[@bs.module "fast-check"] external hexa : unit => char = "hexa";
[@bs.module "fast-check"] external base64 : unit => char = "base64";
[@bs.module "fast-check"] external char : unit => char = "char";
[@bs.module "fast-check"] external ancii : unit => char = "ancii";
[@bs.module "fast-check"] external unicode : unit => arbitrary(string) = "unicode";
[@bs.module "fast-check"] external char16bits : unit => arbitrary(string) = "char16bits";
[@bs.module "fast-check"] external fullUnicode : unit => arbitrary(string) = "fullUnicode";

[@bs.module "fast-check"] external hexaString : unit => arbitrary(string) = "hexaString";
[@bs.module "fast-check"] external hexaString1 : int => arbitrary(string) = "hexaString";
[@bs.module "fast-check"] external hexaString2 : (int, int) => arbitrary(string) = "hexaString";
[@bs.module "fast-check"] external base64String : unit => arbitrary(string) = "base64String";
[@bs.module "fast-check"] external base64String1 : int => arbitrary(string) = "base64String";
[@bs.module "fast-check"] external base64String2 : (int, int) => arbitrary(string) = "base64String";
[@bs.module "fast-check"] external string : unit => arbitrary(string) = "string";
[@bs.module "fast-check"] external string1 : int => arbitrary(string) = "string";
[@bs.module "fast-check"] external string2 : (int, int) => arbitrary(string) = "string";
[@bs.module "fast-check"] external asciiString : unit => arbitrary(string) = "asciiString";
[@bs.module "fast-check"] external asciiString1 : int => arbitrary(string) = "asciiString";
[@bs.module "fast-check"] external asciiString2 : (int, int) => arbitrary(string) = "asciiString";
[@bs.module "fast-check"] external unicodeString : unit => arbitrary(string) = "unicodeString";
[@bs.module "fast-check"] external unicodeString1 : int => arbitrary(string) = "unicodeString";
[@bs.module "fast-check"] external unicodeString2 : (int, int) => arbitrary(string) = "unicodeString";
[@bs.module "fast-check"] external string16bits : unit => arbitrary(string) = "string16bits";
[@bs.module "fast-check"] external string16bits1 : int => arbitrary(string) = "string16bits";
[@bs.module "fast-check"] external string16bits2 : (int, int) => arbitrary(string) = "string16bits";
[@bs.module "fast-check"] external fullUnicodeString : unit => arbitrary(string) = "fullUnicodeString";
[@bs.module "fast-check"] external fullUnicodeString1 : int => arbitrary(string) = "fullUnicodeString";
[@bs.module "fast-check"] external fullUnicodeString2 : (int, int) => arbitrary(string) = "fullUnicodeString";
[@bs.module "fast-check"] external stringOf : arbitrary('a) => arbitrary(string) = "stringOf";
[@bs.module "fast-check"] external stringOf2 : (arbitrary('a), int) => arbitrary(string) = "stringOf";
[@bs.module "fast-check"] external stringOf3 : (arbitrary('a), int, int) => arbitrary(string) = "stringOf";

[@bs.module "fast-check"] external json : unit => arbitrary(string) = "json";
[@bs.module "fast-check"] external json1 : int => arbitrary(string) = "json";
[@bs.module "fast-check"] external unicodeJson : unit => arbitrary(string) = "unicodeJson";
[@bs.module "fast-check"] external unicodeJson1 : int => arbitrary(string) = "unicodeJson";
[@bs.module "fast-check"] external lorem : unit => arbitrary(string) = "lorem";
[@bs.module "fast-check"] external lorem1 : int => arbitrary(string) = "lorem";
[@bs.module "fast-check"] external lorem2 : (int, int) => arbitrary(string) = "lorem";
[@bs.module "fast-check"] external ipV4 : unit => arbitrary(string) = "ipV4";
[@bs.module "fast-check"] external ipV4Extended : unit => arbitrary(string) = "ipV4";
[@bs.module "fast-check"] external ipV6 : unit => arbitrary(string) = "ipV6";
[@bs.module "fast-check"] external uuid : unit => arbitrary(string) = "uuid";
[@bs.module "fast-check"] external uuidV1 : int => arbitrary(string) = "uuidV";
[@bs.module "fast-check"] external domain : unit => arbitrary(string) = "domain";
[@bs.module "fast-check"] external webAuthority : unit => arbitrary(string) = "webAuthority";
[@bs.module "fast-check"] external webFragments : unit => arbitrary(string) = "webFragments";
[@bs.module "fast-check"] external webQueryParameters : unit => arbitrary(string) = "webQueryParameters";
[@bs.module "fast-check"] external webSegment : unit => arbitrary(string) = "webSegment";
[@bs.module "fast-check"] external webUrl : unit => arbitrary(string) = "webUrl";
[@bs.module "fast-check"] external emailAddress : unit => arbitrary(string) = "emailAddress";
[@bs.module "fast-check"] external mixedCase : arbitrary('a) => arbitrary(string) = "mixedCase";
[@bs.module "fast-check"] external mixedCase2 : (arbitrary('a), constraint_) => arbitrary(string) = "mixedCase";

[@bs.module "fast-check"] external date : unit => arbitrary(string) = "date";

// [@bs.module "fast-check"] external constant : 'a => arbitrary('a) = "constant";
// [@bs.splice] [@bs.module "fast-check"] external constantFrom : param 'a => arbitrary('a) = "constant";
// [@bs.module "fast-check"] external clonedConstant : 'a => arbitrary('a) = "clonedConstant";
// Fix type
// [@bs.splice] [@bs.module "fast-check"] external mapToConstant : param 'a => arbitrary('a) = "mapToConstant";
// [@bs.splice] [@bs.module "fast-check"] external oneof : param arbitrary('a) => arbitrary('a) = "oneof";
// [@bs.splice] [@bs.module "fast-check"] external frequency : param arbitrary('a) => arbitrary('a) = "frequency";

/* external array : 'a -> [< 'a array partial] = "array" [@@bs.module "fast-check"] */
[@bs.module "fast-check"] external set : unit => arbitrary(float) = "set";
