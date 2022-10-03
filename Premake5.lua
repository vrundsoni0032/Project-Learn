workspace "Game" 							--this is our workspace
	configurations  { "Debug", "Release" }	--this is our configurations for workspace and all projects inside it
	platforms		{ "x64" }
	location "build"						--this is our build folder
	characterset "MBCS"

project "Game"								--this is our game project
	kind "WindowedApp"						--we tell lua this is a windowed application
	location "build/Game"-------------------->to differentiate betwn game and framework objs and bins

	--[[this is where we tell premake to include these files
	    in our project so ut shows up in solution explorer.   -]]
	files										
	{
		".gitignore",
		"Premake5.lua",
		"Game/Source/**.cpp",
		"Game/Source/**.h",
		"GenerateProjectFiles.bat",
	}

	includedirs
	{
		"Game/Source",
		"Framework/Source",
	}

	links
	{
		"Framework",
		"opengl32",
	}

project "Framework"
	kind "StaticLib"
	location "build/Framework"--------------->to differentiate betwn game and framework objs and bins

	files
	{
		"Framework/Source/**.cpp",
		"Framework/Source/**.h",
	}

	includedirs
	{
		"Framework/Source",
	}
