// generate by pypp
// original source code: ISOBMFF/DREF.hpp

#include <boost/python.hpp>

#include "ISOBMFF/DREF.hpp"
#include "ISOBMFF/Parser.hpp"


class DREFWrapper :
    public ISOBMFF::DREF,
    public boost::python::wrapper<ISOBMFF::DREF>
{
public:
    using ISOBMFF::DREF::DREF;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            DREF::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            DREF::WriteDescription(os, indentLevel);
        }
    }
    void AddBox (std::shared_ptr<Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            DREF::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return DREF::GetBoxes();
        }
    }
};

void init_ISOBMFF_DREF_hpp() {
    boost::python::class_<DREFWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::Container>, std::shared_ptr<ISOBMFF::DREF>>("DREF")
        .def("ReadData", &ISOBMFF::DREF::ReadData)
        .def("WriteDescription", &ISOBMFF::DREF::WriteDescription)
        .def("AddBox", &ISOBMFF::DREF::AddBox)
        .def("GetBoxes", &ISOBMFF::DREF::GetBoxes)
        ;
}
