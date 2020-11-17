Complex operator+(const Complex A, const Complex B) {
    Complex XYZ;
    XYZ.a=A.a+B.a;
    XYZ.b=A.b+B.b;
    return XYZ;
}
ostream& operator<<(ostream& os, const Complex C) {
    return os << C.a << "+" << "i" << C.b;
}
