cc = g++
prom = prom
deps = $(shell find ./ -name "*.h")
src = $(shell find ./ -name "*.cpp")
obj = $(src:%.cpp=%.o) 
std = c++11

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)
%.o: %.cpp $(deps)
	$(cc) -c $< -o $@ -std=$(std)
clean:
	rm -rf $(obj) $(prom)
