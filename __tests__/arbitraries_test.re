open Jest;
open FastCheck;

describe("Abrbitraries", () => {
  open Expect;

  test("simple property string test", () =>
    expect(() =>
      assert_(property3(string(), string(), string(), (a, b, c) =>
        Js.String.indexOf(b, a ++ b ++ c) !== -1
      )))
    |> not_
    |> toThrow
  );

  test("throw exception on case error", () =>
    expect(() =>
      assert_(property3(string(), string(), string(), (a, b, c) =>
        Js.String.indexOf(b, a ++ b ++ c) !== 1
      )))
    |> toThrow
  );

  test("float generation are at leart valid number", () =>
    expect(() =>
      assert_(property4(float_(), float_(), float_(), float_(), (a, b, c, d) =>
        Js.Float.isFinite(a +. c +. b +. d)
      )))
    |> not_
    |> toThrow
  );

  test("int generation are at leart valid number", () =>
    expect(() =>
      assert_(property4(integer(), integer(), integer(), integer(), (a, b, c, d) =>
        (a + c + b + d)
        |> Js.Int.toFloat
        |> Js.Float.isFinite
      )))
    |> not_
    |> toThrow
  );

  test("int generation are at leart valid number", () =>
    expect(() =>
      assert_(property4(integer(), integer(), integer(), integer(), (a, b, c, d) =>
        (a + c + b + d)
        |> Js.Int.toFloat
        |> Js.Float.isFinite
      )))
    |> not_
    |> toThrow
  );

  test("mixed number type generation", () =>
    expect(() =>
      assert_(property4(integer(), float_(), integer(), float_(), (a, b, c, d) => {
        let int = (a + c) |> Js.Int.toFloat;
        Js.Float.isFinite(int +. b +. d)
      })))
    |> not_
    |> toThrow
  );
});
