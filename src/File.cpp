// generate by pypp
// original source code: ISOBMFF/File.hpp

#include <boost/python.hpp>

#include "ISOBMFF/File.hpp"



class FileWrapper :
    public ISOBMFF::File,
    public boost::python::wrapper<ISOBMFF::File>
{
public:
    using ISOBMFF::File::File;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return File::GetName();
        }
    }
};

void init_ISOBMFF_File_hpp() {
    boost::python::class_<FileWrapper, boost::python::bases<ISOBMFF::ContainerBox>, std::shared_ptr<ISOBMFF::File>>("File")
        .def("GetName", &ISOBMFF::File::GetName)
        ;
}
