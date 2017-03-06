
//slc -c GameOfLife.sl -f "life(int(2))" -f "stressTestInput(int(0))" -o SL_Generated --parallel --rtc=0 

Point ::= (X: float, Y: float, Z: float);

oscilate(location, runningTime, deltaTime) :=
	let
		deltaX := cos(2 * (runningTime + deltaTime)) - cos(2 * runningTime);
		deltaY := sin(2 * (runningTime + deltaTime)) - sin(2 * runningTime);
		deltaZ := sin(runningTime + deltaTime) - sin(runningTime);
	in
		(X: location.X + deltaX * 100.0, Y: location.Y + deltaY * 100.0, Z: location.Z + deltaZ * 100.0);

		
life(Cells(2))[I, J] := 
	let
		numNeighbors := Cells[I-1,J-1] +	Cells[I-1,J] +	Cells[I-1,J+1] +
						Cells[I,J-1] +		/*current cell*/Cells[I,J+1] +
						Cells[I+1,J-1] +	Cells[I+1,J] +	Cells[I+1,J+1];
	in
		0 when I=1 or J=1 or I=size(Cells) or J=size(Cells[I]) //On Border
	else
		0 when numNeighbors < 2 or numNeighbors > 3 //Cell Dies
	else
		1 when Cells[I,J] = 1 and numNeighbors = 2 or numNeighbors = 3 //Cell lives on or is born.
	else
		Cells[I,J]; //No Change
		
		
stressTestInput(n(0))[y,x] :=
		0 when not y = n / 2
	else
		1
	foreach y within 1 ... n,
			x within 1 ... n;
			
countLiveCells(grid(2)) := sum(sum(grid));