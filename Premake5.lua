workspace "Game" 								--this is our workspace
	configurations  { "Debug", "Release" }			--this is our configurations for workspace and all projects inside it
	platforms		{ "x64" }
	location "build"							--this is our build folders
	
project "Game"									--this is our game project
	kind "WindowedApp"							--we tell lua this is a windowed application


	--[[this is where we tell premake to include these files
	    in our project so ut shows up in solution explorer.   -]]
	files										
	{
		".gitignore",
		"Premake5.lua",
		"Game/Source/**.cpp",
		"GenerateProjectFiles.bat",
	}