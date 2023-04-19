workspace "ConsoleApp"
    architecture "x64"
    configurations { "Debug", "Release" }
    startproject "Example"

project "ConsoleApp"
    location ""
    kind "StaticLib"
    language "C++"  
    cppdialect "C++17"

    targetdir("Build")
    objdir("BuildInt")

    files {

        "include/**.h",

        "src/**.h",
        "src/**.cpp"

    }

    includedirs {

        "include"

    }

    filter "system:windows"
        systemversion "latest"

        defines {

            "PL_WINDOWS",

        }
    
    filter "configurations:Debug"
        defines "CN_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "CN_RELEASE"
        runtime "Release"
        optimize "on"

project "Example"
    location ""
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"

    targetdir("Build")
    objdir("BuildInt")

    files {

        "example/**.h",
        "example/**.cpp"

    }

    includedirs {

        "include",

        "example"

    }

    links {

        "ConsoleApp"

    }

    filter "system:windows"
        systemversion "latest"
        defines "PL_WINDOWS"

    filter "configurations:Debug"
        defines "CN_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "CN_RELEASE"
        runtime "Release"
        optimize "on"