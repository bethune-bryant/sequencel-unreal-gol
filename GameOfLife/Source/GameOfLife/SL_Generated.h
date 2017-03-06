#ifndef _SEQUENCEL_GENERATED_SL_Generated_H
#define _SEQUENCEL_GENERATED_SL_Generated_H

#define SL_FLOAT_SIZE 8
#if SL_FLOAT_SIZE == 4
#define SL_FLOAT float
#else
#define SL_FLOAT double
#endif

#include <SequenceL/SequenceL.h>

typedef void (*_sl_fun_pointer)(void);

struct _sl_Point_0;
//-----------------------------------------
// _sl_Point_0 struct definition
//------------------------------------------
struct _sl_Point_0
{
SL_FLOAT X;
SL_FLOAT Y;
SL_FLOAT Z;


_sl_Point_0():X(0), Y(0), Z(0)
{
}

_sl_Point_0(Memflags _m):X(0), Y(0), Z(0)
{
}

_sl_Point_0(SL_FLOAT _SequenceL_X, SL_FLOAT _SequenceL_Y, SL_FLOAT _SequenceL_Z):X(_SequenceL_X), Y(_SequenceL_Y), Z(_SequenceL_Z)
{
}

void _initialize(Memflags _mfp)
{
X=0;
Y=0;
Z=0;

}

void _delete_data(bool _parallel)
{

}

void _finished()
{

}

~_sl_Point_0()
{
_delete_data(true);
_finished();
}
void _Reference()
{

}

void _dereference()
{

}

void _deFrag()
{

}

void _parallel_deFrag(int _ln)
{

}

void _fix_padding(_sl_Point_0& _old)
{

}

_sl_Point_0& operator=(const _sl_Point_0& _rhs)
{
X = _rhs.X;
Y = _rhs.Y;
Z = _rhs.Z;

return *this;
}

void _hard_copy(_sl_Point_0& _rhs, int _ln)
{
X = _rhs.X;
Y = _rhs.Y;
Z = _rhs.Z;
}

ostream& _toString(ostream& _stream) const
{
_stream<<"(";
_stream<<"X:";
_SequenceL_toString(X, _stream);
_stream<<","<<"Y:";
_SequenceL_toString(Y, _stream);
_stream<<","<<"Z:";
_SequenceL_toString(Z, _stream);
_stream<<")";
return _stream;
}

string _toString() const
{
ostringstream _stream;
_toString(_stream);
return _stream.str();
}

};

//-----------------------------------------

ostream &operator<<(ostream &stream, const _sl_Point_0& s);
bool operator==(const _sl_Point_0&_lhs, const _sl_Point_0&_rhs);
bool operator!=(const _sl_Point_0&_lhs, const _sl_Point_0&_rhs);

#ifdef _WIN32
#endif


#define _sl_Point _sl_Point_0

void sl_oscilate(_sl_Point_0 &_SequenceL__Arg_arg1, SL_FLOAT _SequenceL__Arg_arg2, SL_FLOAT _SequenceL__Arg_arg3, int _n, _sl_Point_0 &_SequenceL_);
void sl_life(Sequence< Sequence< int > > &_SequenceL__Arg_arg1, int _n, Sequence< Sequence< int > > &_SequenceL_);
void sl_stressTestInput(int _SequenceL__Arg_arg1, int _n, Sequence< Sequence< int > > &_SequenceL_);
void sl_countLiveCells(Sequence< Sequence< int > > &_SequenceL__Arg_arg1, int _n, int &_SequenceL_);

#endif
