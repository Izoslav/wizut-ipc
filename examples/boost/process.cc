#include <iostream>

#include <boost/process.hpp>

using namespace boost::process;

int main()
{
    // create new interprocess stream
    ipstream pipe_stream;

    // spawn child process and redirect stdout to pipe
    child c("gcc --version", std_out > pipe_stream);

    // read output from child process line by line till the end
    std::string line;
    while (pipe_stream && std::getline(pipe_stream, line) && not line.empty()) {
      std::cerr << line << std::endl;
    }

    // wait for child process to gracefully stop
    c.wait();

    // grouping of processes
    group g;

    // spawn will launch process in detached state
    spawn("gcc --version", g);
    spawn("g++ --version", g);
    g.wait();

    // environment changes
    spawn("gcc", bp::env["PATH"] += {"/my/path/to/compiler"}, g);
    g.wait();
}