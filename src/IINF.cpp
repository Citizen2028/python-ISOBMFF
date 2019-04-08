// generate by pypp
// original source code: ISOBMFF/IINF.hpp

#include <boost/python.hpp>

#include "ISOBMFF/IINF.hpp"
#include "ISOBMFF/Parser.hpp"



class IINFWrapper :
    public ISOBMFF::IINF,
    public boost::python::wrapper<ISOBMFF::IINF>
{
public:
    using ISOBMFF::IINF::IINF;
    void ReadData (ISOBMFF::Parser & parser, ISOBMFF::BinaryStream & stream) override {
        if ( auto ReadData = this->get_override("ReadData") ) {
            ReadData(parser, stream);
        } else {
            IINF::ReadData(parser, stream);
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            IINF::WriteDescription(os, indentLevel);
        }
    }
    void AddBox (std::shared_ptr<Box> box) override {
        if ( auto AddBox = this->get_override("AddBox") ) {
            AddBox(box);
        } else {
            IINF::AddBox(box);
        }
    }
    std::vector<std::shared_ptr<Box> > GetBoxes () const override {
        if ( auto GetBoxes = this->get_override("GetBoxes") ) {
            return GetBoxes();
        } else {
            return IINF::GetBoxes();
        }
    }
};

void init_ISOBMFF_IINF_hpp() {
    boost::python::class_<IINFWrapper, boost::python::bases<ISOBMFF::FullBox, ISOBMFF::Container>, std::shared_ptr<ISOBMFF::IINF>>("IINF")
        .def("ReadData", &ISOBMFF::IINF::ReadData)
        .def("WriteDescription", &ISOBMFF::IINF::WriteDescription)
        .def("AddEntry", &ISOBMFF::IINF::AddEntry)
        .def("GetEntries", &ISOBMFF::IINF::GetEntries)
        .def("GetItemInfo", &ISOBMFF::IINF::GetItemInfo)
        .def("AddBox", &ISOBMFF::IINF::AddBox)
        .def("GetBoxes", &ISOBMFF::IINF::GetBoxes)
        ;
}
