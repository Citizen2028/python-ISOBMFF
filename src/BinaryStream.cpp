// generate by pypp
// original source code: ISOBMFF/BinaryStream.hpp

#include <boost/python.hpp>

#include "ISOBMFF/BinaryStream.hpp"



void init_ISOBMFF_BinaryStream_hpp() {
    boost::python::class_<ISOBMFF::BinaryStream, std::shared_ptr<ISOBMFF::BinaryStream>>("BinaryStream")
        .def(boost::python::init<const std::string &>())
        .def(boost::python::init<const std::vector<uint8_t> &>())
        .def(boost::python::init<ISOBMFF::BinaryStream &, uint64_t>())
        .def("HasBytesAvailable", &ISOBMFF::BinaryStream::HasBytesAvailable)
        .def("ReadUInt8", &ISOBMFF::BinaryStream::ReadUInt8)
        .def("ReadInt8", &ISOBMFF::BinaryStream::ReadInt8)
        .def("ReadUInt16", &ISOBMFF::BinaryStream::ReadUInt16)
        .def("ReadInt16", &ISOBMFF::BinaryStream::ReadInt16)
        .def("ReadBigEndianUInt16", &ISOBMFF::BinaryStream::ReadBigEndianUInt16)
        .def("ReadLittleEndianUInt16", &ISOBMFF::BinaryStream::ReadLittleEndianUInt16)
        .def("ReadUInt32", &ISOBMFF::BinaryStream::ReadUInt32)
        .def("ReadInt32", &ISOBMFF::BinaryStream::ReadInt32)
        .def("ReadBigEndianUInt32", &ISOBMFF::BinaryStream::ReadBigEndianUInt32)
        .def("ReadLittleEndianUInt32", &ISOBMFF::BinaryStream::ReadLittleEndianUInt32)
        .def("ReadUInt64", &ISOBMFF::BinaryStream::ReadUInt64)
        .def("ReadInt64", &ISOBMFF::BinaryStream::ReadInt64)
        .def("ReadBigEndianUInt64", &ISOBMFF::BinaryStream::ReadBigEndianUInt64)
        .def("ReadLittleEndianUInt64", &ISOBMFF::BinaryStream::ReadLittleEndianUInt64)
        .def("ReadBigEndianFixedPoint", &ISOBMFF::BinaryStream::ReadBigEndianFixedPoint)
        .def("ReadLittleEndianFixedPoint", &ISOBMFF::BinaryStream::ReadLittleEndianFixedPoint)
        .def("ReadFourCC", &ISOBMFF::BinaryStream::ReadFourCC)
        .def("ReadNULLTerminatedString", &ISOBMFF::BinaryStream::ReadNULLTerminatedString)
        .def("ReadPascalString", &ISOBMFF::BinaryStream::ReadPascalString)
        .def("ReadMatrix", &ISOBMFF::BinaryStream::ReadMatrix)
        .def("ReadAllData", &ISOBMFF::BinaryStream::ReadAllData)
        .def("Read", &ISOBMFF::BinaryStream::Read)
        .def("Get", &ISOBMFF::BinaryStream::Get)
        .def("DeleteBytes", &ISOBMFF::BinaryStream::DeleteBytes)
        ;
}
