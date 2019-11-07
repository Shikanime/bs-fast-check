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
});
