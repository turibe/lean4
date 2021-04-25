class MulComm (α : Type u) [Mul α] : Prop where
    mulComm : {a b : α} → a * b = b * a

instance : Mul Bool where
  mul := and

instance : MulComm Bool where
  mulComm := fun a b =>
    match a, b with
    | true, true   => rfl
    | true, false  => rfl
    | false, true  => rfl
    | false, false => rfl
