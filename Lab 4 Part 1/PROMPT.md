#8.1 Lab Lesson 4 (Part 1 of 2)

Part of lab lesson 4

There are two parts to lab lesson 4. The entire lab will be worth 100 points.

Lab lesson 4 part 1 is worth 50 points.

For part 1 you will have 40 points if you enter the program and successfully run the program tests. An additional 10 points will be based on the style and formatting of your C++ code.

Style points

The 10 points for coding style will be based on the following guidelines:

    Comments at the start of your programming with a brief description of the purpose of the program.
    Comments throughout your program
    Proper formatting of your code (follow the guidelines in the Gaddis text book, or those used by your CS 1336 professor)
    If you have any variables they must have meaningful names.

Development in your IDE

For lab lesson 4 (both parts) you will be developing your solutions using an Integrated Development Environment (IDE) such as Visual Studio, Code::Blocks or Eclipse. You should use whatever IDE you are using for your CS 1336 class. Once you have created and tested your solutions you will be uploading the files to zyBooks/zyLabs. Your uploaded file must match the name specified in the directions for the lab lesson. You will be using an IDE and uploading the appropriate files for this and all future lab lessons.

You will need to develop and test the program in your IDE. Once you are satisfied that it is correct you will need to upload the source file to zyBooks/zyLabs, and submit it for the Submit mode tests. If your program does not pass all of the tests you need to go back to the IDE, and update your program to fix the problems you have with the tests. You must then upload the program from the IDE to zyBooks/zylabs again. You can then run the tests again in Submit mode.

The output when running in zyBooks/zyLabs will look different from the output on your IDE. The output on your IDE will show the input data you enter into cin. The output on zyBooks/zyLabs will not show this since the input to cin is redirected from a file.

When running your program in Submit mode it is very important that you look at the output from all of the tests. You should then try and fix all of the problems in your IDE and then upload the updated code to zyBooks/zyLabs.

C++ requirements

    Calculations should be done with type double.
    You must use const double values for the acceleration due to gravity on the Earth, the Moon and on Venus.
    The filename for your program must be lesson4part1.cpp. The zyBooks environment will not let you upload the source file if it has a different file name.

General overview

You need to write a program that reads in the mass of an object (in kg) and output the weight (in N) on the Earth, on the Moon, and on Venus.

An object's mass can be measured in kilograms. The weight is measured in newtons. So an object of a specific mass (in kilograms) would have one weight (in newtons) on the earth and a different weight on the moon. Your program will read in the mass (in kilograms) and convert it to newtons for the Earth, the Moon, and Venus.

So, on the Earth we can convert kilograms to newtons with the following expression:

weight = mass * 9.81

where 9.81 is the acceleration due to gravity on earth (in meters per second squared or m/s^2).

On the Moon this formula would be:

weight = mass * 1.62

where 1.62 is the acceleration due to gravity on the moon (m/s^2)

Finally, for Venus it would be:

weight = mass * 8.87

Again, all of the above assume the mass is in kilograms (kg) and the weight is in newtons (N).

If the weight on the earth is greater than or equal to 1500 newtons output a message saying the object is heavy.

If the weight on the earth is less than 5 newtons say it is light.

The mass and weight should use fixed notation with a precision of 4 digits to the right of the decimal point. The 1st column has a width of 8 characters and the 2nd column has a width of 14 characters. The 1st column is left justified and the 2nd column is right justified.

Note that when outputting the heading Weight (N) the width should also be 14 if you are outputting the end of the line with endl. If you output the heading as Weight (N)\n you will need to set the width to 15 to account for the \n character in the string.

Use double variables and constants in your calculations.

The acceleration values must be defined as const double values. These are the 9.81, 1.62 and 8.87 values from above.

If the mass is less than or equal to 0 output a message saying the mass must be greater than 0.

See the sample output below for the exact syntax of the messages.

For example, assume the input is:
```101.9367991```

The output when run in your IDE will be as follows:

```Enter the mass in kg
101.9367991[Enter]
The mass is 101.9368 kg
Location    Weight (N)
Earth        1000.0000
Moon          165.1376
Venus         904.1794
```
Note that the prompt for the input is:

```Enter the mass in kg```

You will type in (where [Enter] is hitting the Enter key):

```101.9367991[Enter]```

The output on zyBooks in submit mode would be:

```Enter the mass in kg
The mass is 101.9368 kg
Location    Weight (N)
Earth        1000.0000
Moon          165.1376
Venus         904.1794
```
Another example is when the object is light:

```0.50```

The output from your IDE will as follows:

```Enter the mass in kg
0.50[Enter]
The mass is 0.5000 kg
Location    Weight (N)
Earth           4.9050
Moon            0.8100
Venus           4.4350
The object is light
```
Here is the case where the value is too heavy:

```155```

With IDE output:

```Enter the mass in kg
The mass is 155.0000 kg
Location    Weight (N)
Earth        1520.5500
Moon          251.1000
Venus        1374.8500
The object is heavy
````
Finally, we have the case where the mass is invalid:

```-20.5```

With output:

```Enter the mass in kg
-20.5[Enter]
The mass is -20.5000 kg
The mass must be greater than zero
```
