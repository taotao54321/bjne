vars = Variables(None, ARGUMENTS)
vars.Add("CXX")

env = Environment(variables=vars)

env.Append(CXXFLAGS = ["-std=c++14", "-Wall", "-Wextra", "-O2"])
env.ParseConfig("sdl-config --cflags --libs")

env.Program("bjne", Glob("src/*.cpp"), LIBS=["SDL", "boost_filesystem", "boost_system"])
