// generate by pypp
// original source code: ISOBMFF/Matrix.hpp

#include <boost/python.hpp>

#include "ISOBMFF/Matrix.hpp"



class MatrixWrapper :
    public ISOBMFF::Matrix,
    public boost::python::wrapper<ISOBMFF::Matrix>
{
public:
    using ISOBMFF::Matrix::Matrix;
    std::string GetName () const override {
        if ( auto GetName = this->get_override("GetName") ) {
            return GetName();
        } else {
            return Matrix::GetName();
        }
    }
    void WriteDescription (std::ostream & os, std::size_t indentLevel) const override {
        if ( auto WriteDescription = this->get_override("WriteDescription") ) {
            WriteDescription(os, indentLevel);
        } else {
            Matrix::WriteDescription(os, indentLevel);
        }
    }
    std::vector<std::pair<std::string, std::string> > GetDisplayableProperties () const override {
        if ( auto GetDisplayableProperties = this->get_override("GetDisplayableProperties") ) {
            return GetDisplayableProperties();
        } else {
            return Matrix::GetDisplayableProperties();
        }
    }
};

void init_ISOBMFF_Matrix_hpp() {
    boost::python::class_<MatrixWrapper, boost::python::bases<ISOBMFF::DisplayableObject>, std::shared_ptr<ISOBMFF::Matrix>>("Matrix")
        .def(boost::python::init<uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t>())
        .def("GetName", &ISOBMFF::Matrix::GetName)
        .def("GetA", &ISOBMFF::Matrix::GetA)
        .def("GetB", &ISOBMFF::Matrix::GetB)
        .def("GetU", &ISOBMFF::Matrix::GetU)
        .def("GetC", &ISOBMFF::Matrix::GetC)
        .def("GetD", &ISOBMFF::Matrix::GetD)
        .def("GetV", &ISOBMFF::Matrix::GetV)
        .def("GetX", &ISOBMFF::Matrix::GetX)
        .def("GetY", &ISOBMFF::Matrix::GetY)
        .def("GetW", &ISOBMFF::Matrix::GetW)
        .def("SetA", &ISOBMFF::Matrix::SetA)
        .def("SetB", &ISOBMFF::Matrix::SetB)
        .def("SetU", &ISOBMFF::Matrix::SetU)
        .def("SetC", &ISOBMFF::Matrix::SetC)
        .def("SetD", &ISOBMFF::Matrix::SetD)
        .def("SetV", &ISOBMFF::Matrix::SetV)
        .def("SetX", &ISOBMFF::Matrix::SetX)
        .def("SetY", &ISOBMFF::Matrix::SetY)
        .def("SetW", &ISOBMFF::Matrix::SetW)
        .def("WriteDescription", &ISOBMFF::Matrix::WriteDescription)
        .def("GetDisplayableProperties", &ISOBMFF::Matrix::GetDisplayableProperties)
        ;
}
