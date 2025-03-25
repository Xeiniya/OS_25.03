# C++ Container Utilities

## Описание проекта
Набор утилит для работы с контейнерами и связными списками в C++98.

## Возможности
- Генерация факториалов с проверкой переполнения
- Удаление дубликатов с сохранением порядка
- Рекурсивный разворот связного списка
- REST сервис для взаимодействия с утилитами

## Требования
- Компилятор, поддерживающий C++98
- CMake 2.8+
- Boost
- GoogleTest (для тестирования)

## Сборка
```bash
mkdir build && cd build
cmake ..
make
```

## Тестирование
```bash
make test
```

## REST API
- POST `/factorials` - Генерация факториалов
- POST `/remove-duplicates` - Удаление дубликатов

## Примеры
```bash
# Получение факториалов
curl -X POST http://localhost:8080/factorials -d 5

# Удаление дубликатов
curl -X POST http://localhost:8080/remove-duplicates -d "1 2 2 3 1"
```

## Лицензия
MIT License