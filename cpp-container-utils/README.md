# C++ Container Utilities

## �������� �������
����� ������ ��� ������ � ������������ � �������� �������� � C++98.

## �����������
- ��������� ����������� � ��������� ������������
- �������� ���������� � ����������� �������
- ����������� �������� �������� ������
- REST ������ ��� �������������� � ���������

## ����������
- ����������, �������������� C++98
- CMake 2.8+
- Boost
- GoogleTest (��� ������������)

## ������
```bash
mkdir build && cd build
cmake ..
make
```

## ������������
```bash
make test
```

## REST API
- POST `/factorials` - ��������� �����������
- POST `/remove-duplicates` - �������� ����������

## �������
```bash
# ��������� �����������
curl -X POST http://localhost:8080/factorials -d 5

# �������� ����������
curl -X POST http://localhost:8080/remove-duplicates -d "1 2 2 3 1"
```

## ��������
MIT License