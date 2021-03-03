workspace "Math"
  startproject "Test"

  configurations
  {
    "Debug",
    "Release",
    "Dist"
  }

  flags
	{
		"MultiProcessorCompile"
	}

project "Test"
  kind "ConsoleApp"
  language "C++"
  cppdialect "C++17"
  staticruntime "on"

  targetdir "bin/%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}/%{prj.name}"
  objdir "bin-int/%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}/%{prj.name}"


  files
	{
		"src/**.h",
		"src/**.cpp",
  }

  filter "configurations:Debug"
    defines "Debug"
    runtime "Debug"
    symbols "On"

  filter "configurations:Release"
    defines "NDEBUG"
    runtime "Release"
    optimize "On"
    symbols "On"
