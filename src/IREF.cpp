// generate by pypp
// original source code: ISOBMFF/IREF.hpp

#include <boost/python.hpp>

#include "ISOBMFF/IREF.hpp"
#include "ISOBMFF/Parser.hpp"



class IREFWrapper :
    public ISOBMFF::IREF,
    public boost::python::wrapper<ISOBMFF::IREF>
{
public:
    using ISOBMFF::IREF::IREF;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            IREF::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            IREF::WriteDescription(os, indentLevel);
        }
    }
    void AddBox (std::shared_ptr<Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            IREF::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return IREF::GetBoxes();
        }
    }
};

void init_ISOBMFF_IREF_hpp() {
    boost::python::class_<IREFWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::Container>, std::shared_ptr<ISOBMFF::IREF>>("IREF")
        .def("ReadData", &ISOBMFF::IREF::ReadData)
        .def("WriteDescription", &ISOBMFF::IREF::WriteDescription)
        .def("AddBox", &ISOBMFF::IREF::AddBox)
        .def("GetBoxes", &ISOBMFF::IREF::GetBoxes)
        ;
}
