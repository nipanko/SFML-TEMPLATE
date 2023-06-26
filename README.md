# SFML TEMPLATE

// Steps
First -> Copy libraries folder form other project and paste it into yours

Second -> Then go to SFML folder and copy all the .dll files in the bin and paste in the project folder

Third -> Add main.cpp in the Source folder in the Visual Studio project

Fourth -> Select Project name and right click and select the properties  (with ALL CONFIGURATION ) then ->C/C++->General->Additional include directories

		VC++ directories  -> Include directories -> type -> $(SolutionDir)\libraries\include\   
		then ->Library Directories ->  type -> $(SolutionDir)\libraries\lib\   						Then APPLY and change config to release

Fifth -> Then Linker->Input->Additional Dependencies ->type -> 

sfml-graphics.lib
sfml-window.lib
sfml-system.lib

Then change from Release to Debug and type this (add -d)

sfml-graphics-d.lib
sfml-window-d.lib
sfml-system-d.lib
