// generate by pypp
// original source code: ISOBMFF/Parser.hpp

#include <boost/python.hpp>

#include "ISOBMFF/Parser.hpp"



void init_ISOBMFF_Parser_hpp() {
    auto boost_python_ISOBMFF_Parser = boost::python::class_<ISOBMFF::Parser, std::shared_ptr<ISOBMFF::Parser>>("Parser")
        .def(boost::python::init<const std::string &>())
        .def("RegisterBox", &ISOBMFF::Parser::RegisterBox)
        .def("RegisterContainerBox", &ISOBMFF::Parser::RegisterContainerBox)
        .def("CreateBox", &ISOBMFF::Parser::CreateBox)
        .def("Parse", &ISOBMFF::Parser::Parse)
        .def("GetFile", &ISOBMFF::Parser::GetFile)
        .def("GetPreferredStringType", &ISOBMFF::Parser::GetPreferredStringType)
        .def("SetPreferredStringType", &ISOBMFF::Parser::SetPreferredStringType)
        .def("GetOptions", &ISOBMFF::Parser::GetOptions)
        .def("SetOptions", &ISOBMFF::Parser::SetOptions)
        .def("AddOption", &ISOBMFF::Parser::AddOption)
        .def("RemoveOption", &ISOBMFF::Parser::RemoveOption)
        .def("HasOption", &ISOBMFF::Parser::HasOption)
        .def("GetInfo", &ISOBMFF::Parser::GetInfo, boost::python::return_value_policy<boost::python::return_opaque_pointer>())
        .def("SetInfo", &ISOBMFF::Parser::SetInfo)
        ;
    {
        boost::python::scope scope = boost_python_ISOBMFF_Parser;
        boost::python::enum_<ISOBMFF::Parser::StringType>("StringType")
            .value("NULLTerminated", ISOBMFF::Parser::StringType::NULLTerminated)
            .value("Pascal", ISOBMFF::Parser::StringType::Pascal)
            ;
    }
    {
        boost::python::scope scope = boost_python_ISOBMFF_Parser;
        boost::python::enum_<ISOBMFF::Parser::Options>("Options")
            .value("SkipMDATData", ISOBMFF::Parser::Options::SkipMDATData)
            ;
    }
}
