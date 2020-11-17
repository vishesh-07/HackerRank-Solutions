ostream& operator <<(ostream &p,Person &p1){
    p<<"first_name="<<p1.get_first_name()<<","<<"last_name="<<p1.get_last_name();
    return p;
}
