// generate by pypp
// original source code: ISOBMFF/STSD.hpp

#include <boost/python.hpp>

#include "ISOBMFF/STSD.hpp"
#include "ISOBMFF/Parser.hpp"



class STSDWrapper :
    public ISOBMFF::STSD,
    public boost::python::wrapper<ISOBMFF::STSD>
{
public:
    using ISOBMFF::STSD::STSD;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            STSD::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            STSD::WriteDescription(os, indentLevel);
        }
    }
    void AddBox (std::shared_ptr<Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            STSD::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return STSD::GetBoxes();
        }
    }
};

void init_ISOBMFF_STSD_hpp() {
    boost::python::class_<STSDWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::Container>, std::shared_ptr<ISOBMFF::STSD>>("STSD")
        .def("ReadData", &ISOBMFF::STSD::ReadData)
        .def("WriteDescription", &ISOBMFF::STSD::WriteDescription)
        .def("AddBox", &ISOBMFF::STSD::AddBox)
        .def("GetBoxes", &ISOBMFF::STSD::GetBoxes)
        ;
}
