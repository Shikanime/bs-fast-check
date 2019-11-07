[@bs.module "fast-check"] external property : ('a, ('a => 'b)) => 'b = "property";
[@bs.module "fast-check"] external property2 : ('a, 'b, (('a, 'b) => 'c)) => 'c = "property";
[@bs.module "fast-check"] external property3 : ('a, 'b, 'c, (('a, 'b, 'c) => 'd)) => 'd = "property";
[@bs.module "fast-check"] external property4 : ('a, 'b, 'c, 'd, (('a, 'b, 'c, 'd) => 'e)) => 'e = "property";
[@bs.module "fast-check"] external property5 : ('a, 'b, 'c, 'd, 'e, (('a, 'b, 'c, 'd, 'e) => 'f)) => 'f = "property";

[@bs.module "fast-check"] external assert_ : 'a => 'a = "assert";

[@bs.module "fast-check"] external string : unit => string = "string";

[@bs.module "fast-check"] external char : unit => char = "char";

[@bs.module "fast-check"] external integer : unit => int = "integer";

[@bs.module "fast-check"] external maxSafeInteger : unit => int = "maxSafeInteger";

[@bs.module "fast-check"] external nat : unit => float = "nat";

[@bs.module "fast-check"] external maxSafeNat : unit => float = "maxSafeNat";

[@bs.module "fast-check"] external float : unit => float = "float";

/* external array : 'a -> [< 'a array partial] = "array" [@@bs.module "fast-check"] */
[@bs.module "fast-check"] external set : unit => float = "set";
