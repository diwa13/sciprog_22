WEEK 3 PRACTICAL:

Area_Calculation_trapezoidal_method.C:

*Compile the code using gcc Area_Calculation_trapezoidal_method.c -o Area_Calculation_trapezoidal_method1 -lm

*Run the file using the command ./Area_Calculation_trapezoidal_method1

*The code is written to calculate the area under the curve of f (x) where x ∈ [a, b] using the Trapezodial
rule.

*The initial area is calculated by using the starting and end points of the curve which is tan(0) + tan(π/3) in this case.

*The remaining area is calculated by creating 11 equidistant points between 0 →π/3 , adding it to the initial area and multiplying it with (b-a)/2N.

* Log(2) is used to compare the calculated area, and both the approximate and exact values of the area are printed.