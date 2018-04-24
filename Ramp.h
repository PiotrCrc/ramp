class Ramp
{
  public:
    Ramp( boolean rgb );
    boolean at_sp();
    void set_sp( int color_r, int color_g, int color_b, int steps);
    void set_sp( int color_w, int change_time);
    void do_step();
    int get_val( byte index ); 
    int get_sp( byte index ); 
    int get_steps();
  private:
    void _calc_steps( int steps );
    boolean _at_sp;
    byte _ch_num;
    float _step[3];
    float _sp[3];
    float _value[3];
    int _value_hw[3];
    int _steps;
};

