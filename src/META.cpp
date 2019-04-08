// generate by pypp
// original source code: ISOBMFF/META.hpp

#include <boost/python.hpp>

#include "ISOBMFF/META.hpp"
#include "ISOBMFF/Parser.hpp"



class METAWrapper :
    public ISOBMFF::META,
    public boost::python::wrapper<ISOBMFF::META>
{
public:
    using ISOBMFF::META::META;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            META::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            META::WriteDescription(os, indentLevel);
        }
    }
    void AddBox (std::shared_ptr<Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            META::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return META::GetBoxes();
        }
    }
};

void init_ISOBMFF_META_hpp() {
    boost::python::class_<METAWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::Container>, std::shared_ptr<ISOBMFF::META>>("META")
        .def("ReadData", &ISOBMFF::META::ReadData)
        .def("WriteDescription", &ISOBMFF::META::WriteDescription)
        .def("AddBox", &ISOBMFF::META::AddBox)
        .def("GetBoxes", &ISOBMFF::META::GetBoxes)
        ;
}
