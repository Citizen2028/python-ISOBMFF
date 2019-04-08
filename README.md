# python-ISOBMFF

DigiDNA/ISOBMFF python wrapper

## Usage

```python
>>> import ISOBMFF
>>> parser = ISOBMFF.Parser()
>>> parser.Parse("path/to/some/file")
>>> file = parser.GetFile()
>>> box = file.GetBox("ftyp")
```
