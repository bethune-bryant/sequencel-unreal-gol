#include "GameOfLife.h"
#include "SL_Generated.h"
class Stack;

#if (defined(__GNUC__) && (__GNUC__) == 4 && ((__GNUC_MINOR__) >= 4 && (__GNUC_MINOR__) <= 6))
#pragma GCC diagnostic ignored "-Wuninitialized"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#if (defined(__GNUC__) && ((__GNUC__) > 4 || ((__GNUC__) == 4 && (__GNU_MINOR__) >= 6))) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#if defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#pragma GCC diagnostic ignored "-Wsometimes-uninitialized"
#pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include <tbb/task.h>
#include <tbb/parallel_for.h>
using namespace tbb;
ostream &operator<<(ostream &stream, const _sl_Point_0& s)
{
return s._toString(stream);
}

bool operator==(const _sl_Point_0&_lhs, const _sl_Point_0&_rhs)
{
return ((_lhs.X == _rhs.X)&&(_lhs.Y == _rhs.Y)&&(_lhs.Z == _rhs.Z));
}
bool operator!=(const _sl_Point_0&_lhs, const _sl_Point_0&_rhs)
{
 return ((_lhs.X != _rhs.X)||(_lhs.Y != _rhs.Y)||(_lhs.Z != _rhs.Z));
}
namespace
{
void SequenceL_oscilate_0(_sl_Point_0 &_SequenceL__Arg_location, SL_FLOAT _SequenceL__Arg_runningTime, SL_FLOAT _SequenceL__Arg_deltaTime, _sl_Point_0 &_SequenceL__resultConv);
void SequenceL_life_0(Sequence< Sequence< int > > &_SequenceL__Arg_Cells, Sequence< Sequence< int > > &_SequenceL__resultConv);
void SequenceL_stressTestInput_0(int _SequenceL__Arg_n, Sequence< Sequence< int > > &_SequenceL__resultConv);
void SequenceL_countLiveCells_0(Sequence< Sequence< int > > &_SequenceL__Arg_grid, int &_SequenceL__resultConv);
void SequenceL__parallel_oscilate_0(_sl_Point_0 &_SequenceL__Arg_location, SL_FLOAT _SequenceL__Arg_runningTime, SL_FLOAT _SequenceL__Arg_deltaTime, _sl_Point_0 &_SequenceL__resultConv);
void SequenceL__parallel_life_0(Sequence< Sequence< int > > &_SequenceL__Arg_Cells, Sequence< Sequence< int > > &_SequenceL__resultConv);
class SequenceL__sl_countLiveCells_nt1_: public NTObj
{
	private:
		Sequence< Sequence< int > > &_SequenceL__Arg_Cells;
		 Sequence< Sequence< int > > &_SequenceL__result2;

	public:
		SequenceL__sl_countLiveCells_nt1_(Sequence< Sequence< int > > &_inp1, Sequence< Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_Cells(_inp1), _SequenceL__result2(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_stressTestInput_0(int _SequenceL__Arg_n, Sequence< Sequence< int > > &_SequenceL__resultConv);
class SequenceL__sl_countLiveCells_nt3_: public NTObj
{
	private:
		int _SequenceL__Arg_n;
		int _SequenceL_tmp11;
		 Sequence< Sequence< int > > &_SequenceL__result4;

	public:
		SequenceL__sl_countLiveCells_nt3_(int _inp1, int _inp2, Sequence< Sequence< int > > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_n(_inp1), _SequenceL_tmp11(_inp2), _SequenceL__result4(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};
void SequenceL__parallel_countLiveCells_0(Sequence< Sequence< int > > &_SequenceL__Arg_grid, int &_SequenceL__resultConv);
class SequenceL__sl_countLiveCells_nt5_: public NTObj
{
	private:
		Sequence< Sequence< int > > &_SequenceL__Arg_grid;
		 Sequence< int > &_SequenceL__result6;

	public:
		SequenceL__sl_countLiveCells_nt5_(Sequence< Sequence< int > > &_inp1, Sequence< int > &_out1): NTObj(__LINE__,false), _SequenceL__Arg_grid(_inp1), _SequenceL__result6(_out1)
		{
		}
		void operator() (const blocked_range<int>& r) const;
};


void _SequenceL_init_sl_countLiveCells_globals()
{

}

void _SequenceL_init_sl_stressTestInput_globals()
{

}

void _SequenceL_init_sl_life_globals()
{

}

void _SequenceL_init_sl_oscilate_globals()
{

}

void _SequenceL_delete_sl_countLiveCells_globals()
{

}

void _SequenceL_delete_sl_stressTestInput_globals()
{

}

void _SequenceL_delete_sl_life_globals()
{

}

void _SequenceL_delete_sl_oscilate_globals()
{

}

#ifdef _WIN32
Sequence< Sequence< int > > _sl_vc10_SL_Generated_dummy_1(cspace);
Sequence< int > _sl_vc10_SL_Generated_dummy_2(cspace);
#endif

void SequenceL__sl_countLiveCells_nt5_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__i5 = _r.begin(); _SequenceL__i5 < _e; _SequenceL__i5++)
{

(*(_SequenceL__result6.get_ptr(_SequenceL__i5))) = sum((*(_SequenceL__Arg_grid.get_ptr(_SequenceL__i5))));	/*UnrealEngine1.sl:36: sum(grid)*/
}
}
void SequenceL__parallel_countLiveCells_0(Sequence< Sequence< int > > &_SequenceL__Arg_grid, int &_SequenceL__resultConv)
{
Sequence< int > _SequenceL_tmp4(cspace);

_SequenceL_tmp4.setSize(_SequenceL__Arg_grid.size());	/*UnrealEngine1.sl:36: sum(grid)*/
SequenceL__sl_countLiveCells_nt5_ SequenceL__sl_countLiveCells_nt5__val(_SequenceL__Arg_grid, _SequenceL_tmp4);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL_tmp4.size() + 1, SequenceL__sl_countLiveCells_nt5__val);
_SequenceL__resultConv = _SequenceL_parallel_sum(_SequenceL_tmp4, __LINE__);	/*UnrealEngine1.sl:36: sum(sum(grid))*/
_SequenceL_tmp4.delete_data(false);	
_SequenceL_tmp4.finished();	
}
void SequenceL__sl_countLiveCells_nt3_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_y = _r.begin(); _SequenceL__Index_y < _e; _SequenceL__Index_y++)
{
bool _SequenceL_tmp13;
bool _SequenceL_tmp12;

(*(_SequenceL__result4.get_ptr(_SequenceL__Index_y))).setSize(_SequenceL__Arg_n > 0 ? _SequenceL__Arg_n : 0);	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
_SequenceL_tmp12 = (_SequenceL__Index_y == _SequenceL_tmp11);	/*UnrealEngine1.sl:31: y = n / 2*/
_SequenceL_tmp13 = !_SequenceL_tmp12;	/*UnrealEngine1.sl:31: not y = n / 2*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_x=1,_stop_val__SequenceL__Index_x=_SequenceL__Arg_n; _SequenceL__Index_x<=_stop_val__SequenceL__Index_x; _SequenceL__Index_x+=1)
{
if (_SequenceL_tmp13)	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
{
(*((*(_SequenceL__result4.get_ptr(_SequenceL__Index_y))).get_ptr(_SequenceL__Index_x))) = 0;	/*UnrealEngine1.sl:30: 0*/
}
else
{
(*((*(_SequenceL__result4.get_ptr(_SequenceL__Index_y))).get_ptr(_SequenceL__Index_x))) = 1;	/*UnrealEngine1.sl:33: 1*/
}
}
}
}
void SequenceL__parallel_stressTestInput_0(int _SequenceL__Arg_n, Sequence< Sequence< int > > &_SequenceL__resultConv)
{
int _SequenceL_tmp11;
bool _SequenceL_tmp13;
bool _SequenceL_tmp12;

_SequenceL__resultConv.setSize(_SequenceL__Arg_n > 0 ? _SequenceL__Arg_n : 0);	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
if ((_SequenceL__Arg_n >= 1))	
{
_SequenceL_tmp11 = (_SequenceL__Arg_n / 2);	/*UnrealEngine1.sl:31: n / 2*/
}
else
{
_SequenceL_tmp11 = 0;	
}
if (((((SL_FLOAT)(_SequenceL__Arg_n - 1)) * (2 + ((_SequenceL__Arg_n + -1) * 4))) > (sl_get_num_units() * ((WORK_SHARE_VALUE * WORK_SHARE_VALUE) * MIN_PARALLEL_ITEMS))))	
{
SequenceL__sl_countLiveCells_nt3_ SequenceL__sl_countLiveCells_nt3__val(_SequenceL__Arg_n, _SequenceL_tmp11, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_n + 1, SequenceL__sl_countLiveCells_nt3__val);
}
else
{
SIMD_DIRECTIVE
for (int _SequenceL__Index_y=1,_stop_val__SequenceL__Index_y=_SequenceL__Arg_n; _SequenceL__Index_y<=_stop_val__SequenceL__Index_y; _SequenceL__Index_y+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_y))).setSize(_SequenceL__Arg_n > 0 ? _SequenceL__Arg_n : 0);	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
_SequenceL_tmp12 = (_SequenceL__Index_y == _SequenceL_tmp11);	/*UnrealEngine1.sl:31: y = n / 2*/
_SequenceL_tmp13 = !_SequenceL_tmp12;	/*UnrealEngine1.sl:31: not y = n / 2*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_x=1,_stop_val__SequenceL__Index_x=_SequenceL__Arg_n; _SequenceL__Index_x<=_stop_val__SequenceL__Index_x; _SequenceL__Index_x+=1)
{
if (_SequenceL_tmp13)	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_y))).get_ptr(_SequenceL__Index_x))) = 0;	/*UnrealEngine1.sl:30: 0*/
}
else
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_y))).get_ptr(_SequenceL__Index_x))) = 1;	/*UnrealEngine1.sl:33: 1*/
}
}
}
}
}
void SequenceL__sl_countLiveCells_nt1_::operator() (const blocked_range<int>& _r) const {
  int _e = _r.end();
  for(int _SequenceL__Index_I = _r.begin(); _SequenceL__Index_I < _e; _SequenceL__Index_I++)
{
int _SequenceL__Arg_numNeighbors;
bool _SequenceL_tmp67;
bool _SequenceL_tmp70;

(*(_SequenceL__result2.get_ptr(_SequenceL__Index_I))).setSize((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).size());	/*UnrealEngine1.sl:26: 0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border	else		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
_SequenceL_tmp67 = (_SequenceL__Index_I == 1);	/*UnrealEngine1.sl:20: I=1*/
_SequenceL_tmp70 = (_SequenceL__Index_I == _SequenceL__Arg_Cells.size());	/*UnrealEngine1.sl:20: I=size(Cells)*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_J=1,_stop_val__SequenceL__Index_J=(*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).size(); _SequenceL__Index_J<=_stop_val__SequenceL__Index_J; _SequenceL__Index_J+=1)
{
if ((((_SequenceL_tmp67 || (_SequenceL__Index_J == 1)) || _SequenceL_tmp70) || (_SequenceL__Index_J == (*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).size())))	/*UnrealEngine1.sl:26: 0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border	else		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
{
(*((*(_SequenceL__result2.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = 0;	/*UnrealEngine1.sl:20: 0*/
}
else
{
_SequenceL__Arg_numNeighbors = ((((((((*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I - 1)))).get_ptr((_SequenceL__Index_J - 1)))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I - 1)))).get_ptr(_SequenceL__Index_J)))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I - 1)))).get_ptr((_SequenceL__Index_J + 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr((_SequenceL__Index_J - 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr((_SequenceL__Index_J + 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I + 1)))).get_ptr((_SequenceL__Index_J - 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I + 1)))).get_ptr(_SequenceL__Index_J)))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I + 1)))).get_ptr((_SequenceL__Index_J + 1)))));	/*UnrealEngine1.sl:18: Cells[I-1,J-1] +	Cells[I-1,J] +	Cells[I-1,J+1] +						Cells[I,J-1] +		{*current cell*}Cells[I,J+1] +						Cells[I+1,J-1] +	Cells[I+1,J] +	Cells[I+1,J+1]*/
if (((_SequenceL__Arg_numNeighbors < 2) || (_SequenceL__Arg_numNeighbors > 3)))	/*UnrealEngine1.sl:26: 0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
{
(*((*(_SequenceL__result2.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = 0;	/*UnrealEngine1.sl:22: 0*/
}
else
{
if (((((*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) == 1) && (_SequenceL__Arg_numNeighbors == 2)) || (_SequenceL__Arg_numNeighbors == 3)))	/*UnrealEngine1.sl:26: 1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
{
(*((*(_SequenceL__result2.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = 1;	/*UnrealEngine1.sl:24: 1*/
}
else
{
(*((*(_SequenceL__result2.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = (*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J)));	/*UnrealEngine1.sl:26: Cells[I,J]*/
}
}
}
}
}
}
void SequenceL__parallel_life_0(Sequence< Sequence< int > > &_SequenceL__Arg_Cells, Sequence< Sequence< int > > &_SequenceL__resultConv)
{

_SequenceL__resultConv.setSize(_SequenceL__Arg_Cells.size());	/*UnrealEngine1.sl:26: 0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border	else		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
SequenceL__sl_countLiveCells_nt1_ SequenceL__sl_countLiveCells_nt1__val(_SequenceL__Arg_Cells, _SequenceL__resultConv);
sl_redistribute_mem();
sl_add_new_nt(1, _SequenceL__Arg_Cells.size() + 1, SequenceL__sl_countLiveCells_nt1__val);
}
void SequenceL__parallel_oscilate_0(_sl_Point_0 &_SequenceL__Arg_location, SL_FLOAT _SequenceL__Arg_runningTime, SL_FLOAT _SequenceL__Arg_deltaTime, _sl_Point_0 &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL_tmp146;
SL_FLOAT _SequenceL__Arg_deltaX;
SL_FLOAT _SequenceL_tmp143;
SL_FLOAT _SequenceL_tmp142;
SL_FLOAT _SequenceL_tmp145;
SL_FLOAT _SequenceL_tmp144;
SL_FLOAT _SequenceL_tmp154;
SL_FLOAT _SequenceL__Arg_deltaY;
SL_FLOAT _SequenceL_tmp151;
SL_FLOAT _SequenceL_tmp150;
SL_FLOAT _SequenceL_tmp153;
SL_FLOAT _SequenceL_tmp152;
SL_FLOAT _SequenceL_tmp160;
SL_FLOAT _SequenceL__Arg_deltaZ;
SL_FLOAT _SequenceL_tmp158;
SL_FLOAT _SequenceL_tmp157;
SL_FLOAT _SequenceL_tmp159;

_SequenceL_tmp142 = (2 * (_SequenceL__Arg_runningTime + _SequenceL__Arg_deltaTime));	/*UnrealEngine1.sl:7: 2 * (runningTime + deltaTime)*/
_SequenceL_tmp143 = cos(_SequenceL_tmp142);	/*UnrealEngine1.sl:7: cos(2 * (runningTime + deltaTime))*/
_SequenceL_tmp144 = (2 * _SequenceL__Arg_runningTime);	/*UnrealEngine1.sl:7: 2 * runningTime*/
_SequenceL_tmp145 = cos(_SequenceL_tmp144);	/*UnrealEngine1.sl:7: cos(2 * runningTime)*/
_SequenceL__Arg_deltaX = (_SequenceL_tmp143 - _SequenceL_tmp145);	/*UnrealEngine1.sl:7: cos(2 * (runningTime + deltaTime)) - cos(2 * runningTime)*/
_SequenceL_tmp146 = (_SequenceL__Arg_deltaX * 100.0);	/*UnrealEngine1.sl:11: deltaX * 100.0*/
_SequenceL__resultConv.X = (_SequenceL__Arg_location.X + _SequenceL_tmp146);	/*UnrealEngine1.sl:11: location.X + deltaX * 100.0*/
_SequenceL_tmp150 = (2 * (_SequenceL__Arg_runningTime + _SequenceL__Arg_deltaTime));	/*UnrealEngine1.sl:8: 2 * (runningTime + deltaTime)*/
_SequenceL_tmp151 = sin(_SequenceL_tmp150);	/*UnrealEngine1.sl:8: sin(2 * (runningTime + deltaTime))*/
_SequenceL_tmp152 = (2 * _SequenceL__Arg_runningTime);	/*UnrealEngine1.sl:8: 2 * runningTime*/
_SequenceL_tmp153 = sin(_SequenceL_tmp152);	/*UnrealEngine1.sl:8: sin(2 * runningTime)*/
_SequenceL__Arg_deltaY = (_SequenceL_tmp151 - _SequenceL_tmp153);	/*UnrealEngine1.sl:8: sin(2 * (runningTime + deltaTime)) - sin(2 * runningTime)*/
_SequenceL_tmp154 = (_SequenceL__Arg_deltaY * 100.0);	/*UnrealEngine1.sl:11: deltaY * 100.0*/
_SequenceL__resultConv.Y = (_SequenceL__Arg_location.Y + _SequenceL_tmp154);	/*UnrealEngine1.sl:11: location.Y + deltaY * 100.0*/
_SequenceL_tmp157 = (_SequenceL__Arg_runningTime + _SequenceL__Arg_deltaTime);	/*UnrealEngine1.sl:9: runningTime + deltaTime*/
_SequenceL_tmp158 = sin(_SequenceL_tmp157);	/*UnrealEngine1.sl:9: sin(runningTime + deltaTime)*/
_SequenceL_tmp159 = sin(_SequenceL__Arg_runningTime);	/*UnrealEngine1.sl:9: sin(runningTime)*/
_SequenceL__Arg_deltaZ = (_SequenceL_tmp158 - _SequenceL_tmp159);	/*UnrealEngine1.sl:9: sin(runningTime + deltaTime) - sin(runningTime)*/
_SequenceL_tmp160 = (_SequenceL__Arg_deltaZ * 100.0);	/*UnrealEngine1.sl:11: deltaZ * 100.0*/
_SequenceL__resultConv.Z = (_SequenceL__Arg_location.Z + _SequenceL_tmp160);	/*UnrealEngine1.sl:11: location.Z + deltaZ * 100.0*/
}
void SequenceL_countLiveCells_0(Sequence< Sequence< int > > &_SequenceL__Arg_grid, int &_SequenceL__resultConv)
{
Sequence< int > _SequenceL_tmp4(cspace);

_SequenceL_tmp4.setSize(_SequenceL__Arg_grid.size());	/*UnrealEngine1.sl:36: sum(grid)*/
SIMD_DIRECTIVE
for (int _SequenceL__i5=1,_stop_val__SequenceL__i5=_SequenceL_tmp4.size(); _SequenceL__i5<=_stop_val__SequenceL__i5; _SequenceL__i5+=1)
{
(*(_SequenceL_tmp4.get_ptr(_SequenceL__i5))) = sum((*(_SequenceL__Arg_grid.get_ptr(_SequenceL__i5))));	/*UnrealEngine1.sl:36: sum(grid)*/
}
_SequenceL__resultConv = sum(_SequenceL_tmp4);	/*UnrealEngine1.sl:36: sum(sum(grid))*/
_SequenceL_tmp4.delete_data(true);	
_SequenceL_tmp4.finished();	
}
void SequenceL_stressTestInput_0(int _SequenceL__Arg_n, Sequence< Sequence< int > > &_SequenceL__resultConv)
{
bool _SequenceL_tmp13;
bool _SequenceL_tmp12;
int _SequenceL_tmp11;

_SequenceL__resultConv.setSize(_SequenceL__Arg_n > 0 ? _SequenceL__Arg_n : 0);	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
if ((_SequenceL__Arg_n >= 1))	
{
_SequenceL_tmp11 = (_SequenceL__Arg_n / 2);	/*UnrealEngine1.sl:31: n / 2*/
}
else
{
_SequenceL_tmp11 = 0;	
}
SIMD_DIRECTIVE
for (int _SequenceL__Index_y=1,_stop_val__SequenceL__Index_y=_SequenceL__Arg_n; _SequenceL__Index_y<=_stop_val__SequenceL__Index_y; _SequenceL__Index_y+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_y))).setSize(_SequenceL__Arg_n > 0 ? _SequenceL__Arg_n : 0);	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
_SequenceL_tmp12 = (_SequenceL__Index_y == _SequenceL_tmp11);	/*UnrealEngine1.sl:31: y = n / 2*/
_SequenceL_tmp13 = !_SequenceL_tmp12;	/*UnrealEngine1.sl:31: not y = n / 2*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_x=1,_stop_val__SequenceL__Index_x=_SequenceL__Arg_n; _SequenceL__Index_x<=_stop_val__SequenceL__Index_x; _SequenceL__Index_x+=1)
{
if (_SequenceL_tmp13)	/*UnrealEngine1.sl:33: 0 when not y = n / 2	else		1*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_y))).get_ptr(_SequenceL__Index_x))) = 0;	/*UnrealEngine1.sl:30: 0*/
}
else
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_y))).get_ptr(_SequenceL__Index_x))) = 1;	/*UnrealEngine1.sl:33: 1*/
}
}
}
}
void SequenceL_life_0(Sequence< Sequence< int > > &_SequenceL__Arg_Cells, Sequence< Sequence< int > > &_SequenceL__resultConv)
{
int _SequenceL__Arg_numNeighbors;
bool _SequenceL_tmp67;
bool _SequenceL_tmp70;

_SequenceL__resultConv.setSize(_SequenceL__Arg_Cells.size());	/*UnrealEngine1.sl:26: 0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border	else		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_I=1,_stop_val__SequenceL__Index_I=_SequenceL__Arg_Cells.size(); _SequenceL__Index_I<=_stop_val__SequenceL__Index_I; _SequenceL__Index_I+=1)
{
(*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_I))).setSize((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).size());	/*UnrealEngine1.sl:26: 0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border	else		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
_SequenceL_tmp67 = (_SequenceL__Index_I == 1);	/*UnrealEngine1.sl:20: I=1*/
_SequenceL_tmp70 = (_SequenceL__Index_I == _SequenceL__Arg_Cells.size());	/*UnrealEngine1.sl:20: I=size(Cells)*/
SIMD_DIRECTIVE
for (int _SequenceL__Index_J=1,_stop_val__SequenceL__Index_J=(*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).size(); _SequenceL__Index_J<=_stop_val__SequenceL__Index_J; _SequenceL__Index_J+=1)
{
if ((((_SequenceL_tmp67 || (_SequenceL__Index_J == 1)) || _SequenceL_tmp70) || (_SequenceL__Index_J == (*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).size())))	/*UnrealEngine1.sl:26: 0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border	else		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = 0;	/*UnrealEngine1.sl:20: 0*/
}
else
{
_SequenceL__Arg_numNeighbors = ((((((((*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I - 1)))).get_ptr((_SequenceL__Index_J - 1)))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I - 1)))).get_ptr(_SequenceL__Index_J)))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I - 1)))).get_ptr((_SequenceL__Index_J + 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr((_SequenceL__Index_J - 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr((_SequenceL__Index_J + 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I + 1)))).get_ptr((_SequenceL__Index_J - 1))))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I + 1)))).get_ptr(_SequenceL__Index_J)))) + (*((*(_SequenceL__Arg_Cells.get_ptr((_SequenceL__Index_I + 1)))).get_ptr((_SequenceL__Index_J + 1)))));	/*UnrealEngine1.sl:18: Cells[I-1,J-1] +	Cells[I-1,J] +	Cells[I-1,J+1] +						Cells[I,J-1] +		{*current cell*}Cells[I,J+1] +						Cells[I+1,J-1] +	Cells[I+1,J] +	Cells[I+1,J+1]*/
if (((_SequenceL__Arg_numNeighbors < 2) || (_SequenceL__Arg_numNeighbors > 3)))	/*UnrealEngine1.sl:26: 0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies	else		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = 0;	/*UnrealEngine1.sl:22: 0*/
}
else
{
if (((((*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) == 1) && (_SequenceL__Arg_numNeighbors == 2)) || (_SequenceL__Arg_numNeighbors == 3)))	/*UnrealEngine1.sl:26: 1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.	else		Cells[I,J]*/
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = 1;	/*UnrealEngine1.sl:24: 1*/
}
else
{
(*((*(_SequenceL__resultConv.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J))) = (*((*(_SequenceL__Arg_Cells.get_ptr(_SequenceL__Index_I))).get_ptr(_SequenceL__Index_J)));	/*UnrealEngine1.sl:26: Cells[I,J]*/
}
}
}
}
}
}
void SequenceL_oscilate_0(_sl_Point_0 &_SequenceL__Arg_location, SL_FLOAT _SequenceL__Arg_runningTime, SL_FLOAT _SequenceL__Arg_deltaTime, _sl_Point_0 &_SequenceL__resultConv)
{
SL_FLOAT _SequenceL_tmp146;
SL_FLOAT _SequenceL__Arg_deltaX;
SL_FLOAT _SequenceL_tmp143;
SL_FLOAT _SequenceL_tmp142;
SL_FLOAT _SequenceL_tmp145;
SL_FLOAT _SequenceL_tmp144;
SL_FLOAT _SequenceL_tmp154;
SL_FLOAT _SequenceL__Arg_deltaY;
SL_FLOAT _SequenceL_tmp151;
SL_FLOAT _SequenceL_tmp150;
SL_FLOAT _SequenceL_tmp153;
SL_FLOAT _SequenceL_tmp152;
SL_FLOAT _SequenceL_tmp160;
SL_FLOAT _SequenceL__Arg_deltaZ;
SL_FLOAT _SequenceL_tmp158;
SL_FLOAT _SequenceL_tmp157;
SL_FLOAT _SequenceL_tmp159;

_SequenceL_tmp142 = (2 * (_SequenceL__Arg_runningTime + _SequenceL__Arg_deltaTime));	/*UnrealEngine1.sl:7: 2 * (runningTime + deltaTime)*/
_SequenceL_tmp143 = cos(_SequenceL_tmp142);	/*UnrealEngine1.sl:7: cos(2 * (runningTime + deltaTime))*/
_SequenceL_tmp144 = (2 * _SequenceL__Arg_runningTime);	/*UnrealEngine1.sl:7: 2 * runningTime*/
_SequenceL_tmp145 = cos(_SequenceL_tmp144);	/*UnrealEngine1.sl:7: cos(2 * runningTime)*/
_SequenceL__Arg_deltaX = (_SequenceL_tmp143 - _SequenceL_tmp145);	/*UnrealEngine1.sl:7: cos(2 * (runningTime + deltaTime)) - cos(2 * runningTime)*/
_SequenceL_tmp146 = (_SequenceL__Arg_deltaX * 100.0);	/*UnrealEngine1.sl:11: deltaX * 100.0*/
_SequenceL__resultConv.X = (_SequenceL__Arg_location.X + _SequenceL_tmp146);	/*UnrealEngine1.sl:11: location.X + deltaX * 100.0*/
_SequenceL_tmp150 = (2 * (_SequenceL__Arg_runningTime + _SequenceL__Arg_deltaTime));	/*UnrealEngine1.sl:8: 2 * (runningTime + deltaTime)*/
_SequenceL_tmp151 = sin(_SequenceL_tmp150);	/*UnrealEngine1.sl:8: sin(2 * (runningTime + deltaTime))*/
_SequenceL_tmp152 = (2 * _SequenceL__Arg_runningTime);	/*UnrealEngine1.sl:8: 2 * runningTime*/
_SequenceL_tmp153 = sin(_SequenceL_tmp152);	/*UnrealEngine1.sl:8: sin(2 * runningTime)*/
_SequenceL__Arg_deltaY = (_SequenceL_tmp151 - _SequenceL_tmp153);	/*UnrealEngine1.sl:8: sin(2 * (runningTime + deltaTime)) - sin(2 * runningTime)*/
_SequenceL_tmp154 = (_SequenceL__Arg_deltaY * 100.0);	/*UnrealEngine1.sl:11: deltaY * 100.0*/
_SequenceL__resultConv.Y = (_SequenceL__Arg_location.Y + _SequenceL_tmp154);	/*UnrealEngine1.sl:11: location.Y + deltaY * 100.0*/
_SequenceL_tmp157 = (_SequenceL__Arg_runningTime + _SequenceL__Arg_deltaTime);	/*UnrealEngine1.sl:9: runningTime + deltaTime*/
_SequenceL_tmp158 = sin(_SequenceL_tmp157);	/*UnrealEngine1.sl:9: sin(runningTime + deltaTime)*/
_SequenceL_tmp159 = sin(_SequenceL__Arg_runningTime);	/*UnrealEngine1.sl:9: sin(runningTime)*/
_SequenceL__Arg_deltaZ = (_SequenceL_tmp158 - _SequenceL_tmp159);	/*UnrealEngine1.sl:9: sin(runningTime + deltaTime) - sin(runningTime)*/
_SequenceL_tmp160 = (_SequenceL__Arg_deltaZ * 100.0);	/*UnrealEngine1.sl:11: deltaZ * 100.0*/
_SequenceL__resultConv.Z = (_SequenceL__Arg_location.Z + _SequenceL_tmp160);	/*UnrealEngine1.sl:11: location.Z + deltaZ * 100.0*/
}

}
void sl_oscilate(_sl_Point_0 &_SequenceL__Arg_arg1, SL_FLOAT _SequenceL__Arg_arg2, SL_FLOAT _SequenceL__Arg_arg3, int _n, _sl_Point_0 &_SequenceL__resultConv)
{

bool tag = !sl_active_controller();
if (tag)
{
sl_init(_n);
}
_SequenceL_init_sl_oscilate_globals();
_SequenceL__Arg_arg1._Reference();	
SequenceL__parallel_oscilate_0(_SequenceL__Arg_arg1, _SequenceL__Arg_arg2, _SequenceL__Arg_arg3, _SequenceL__resultConv);	
_SequenceL__Arg_arg1._dereference();	
_SequenceL_delete_sl_oscilate_globals();

if (tag)
{
sl_done();
}
}
void sl_life(Sequence< Sequence< int > > &_SequenceL__Arg_arg1, int _n, Sequence< Sequence< int > > &_SequenceL__resultConv)
{
Sequence< Sequence< int > > _SequenceL__delete_opttmp1(cspace);

bool tag = !sl_active_controller();
if (tag)
{
sl_init(_n);
}
_SequenceL_init_sl_life_globals();
_SequenceL__Arg_arg1.clone(_SequenceL__delete_opttmp1);	
SequenceL__parallel_life_0(_SequenceL__delete_opttmp1, _SequenceL__resultConv);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_delete_sl_life_globals();

if (tag)
{
sl_done();
}
}
void sl_stressTestInput(int _SequenceL__Arg_arg1, int _n, Sequence< Sequence< int > > &_SequenceL__resultConv)
{

bool tag = !sl_active_controller();
if (tag)
{
sl_init(_n);
}
_SequenceL_init_sl_stressTestInput_globals();
SequenceL__parallel_stressTestInput_0(_SequenceL__Arg_arg1, _SequenceL__resultConv);	
_SequenceL_delete_sl_stressTestInput_globals();

if (tag)
{
sl_done();
}
}
void sl_countLiveCells(Sequence< Sequence< int > > &_SequenceL__Arg_arg1, int _n, int &_SequenceL__resultConv)
{
Sequence< Sequence< int > > _SequenceL__delete_opttmp1(cspace);

bool tag = !sl_active_controller();
if (tag)
{
sl_init(_n);
}
_SequenceL_init_sl_countLiveCells_globals();
_SequenceL__Arg_arg1.clone(_SequenceL__delete_opttmp1);	
SequenceL__parallel_countLiveCells_0(_SequenceL__delete_opttmp1, _SequenceL__resultConv);	
_SequenceL__delete_opttmp1.delete_data(true);	
_SequenceL__delete_opttmp1.finished();	
_SequenceL_delete_sl_countLiveCells_globals();

if (tag)
{
sl_done();
}
}
#if (defined(__GNUC__) && (__GNUC__) >= 4 && (__GNU_MINOR__) >= 6) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
