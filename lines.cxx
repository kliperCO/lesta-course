#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Point
{
    int x, y;
};

// Функция для нахождения списка всех точек на линии с помощью алгоритма Брезенхейма
std::vector<Point> BresenhamLine(Point p1, Point p2)
{
    std::vector<Point> linePoints;
    int dx = abs(p2.x - p1.x);
    int dy = abs(p2.y - p1.y);
    int sx = (p1.x < p2.x) ? 1 : -1;
    int sy = (p1.y < p2.y) ? 1 : -1;
    int err = dx - dy;
    while (true) {
        linePoints.push_back({p1.x, p1.y});

        if (p1.x == p2.x && p1.y == p2.y)
        {
            break;
        }

        int e2 = 2 * err;
        if (e2 > -dy)
        {
            err -= dy;
            p1.x += sx;
        }
        if (e2 < dx)
        {
            err += dx;
            p1.y += sy;
        }
    }
    return linePoints;
}

int main(int /*argc*/, char * /*argv*/[])
{
// Задаем размер изображения
    int width = 500;
    int height = 500;

// Инициализируем генератор случайных чисел на основе текущего времени
    std::srand(std::time(nullptr));

    // Создаем вектор линий
    std::vector<std::vector<Point>> lines;

    // Генерируем случайные линии
    for (int i = 0; i < 10; i++)
    {
        // Генерируем случайные точки
        Point p1 = {std::rand() % width, std::rand() % height};
        Point p2 = {std::rand() % width, std::rand() % height};
        // Находим список точек на линии
        std::vector<Point> linePoints = BresenhamLine(p1, p2);
        // Добавляем линию в вектор линий
        lines.push_back(linePoints);
    }

// Создаем файл .ppm и записываем изображение
    std::ofstream file("../image/lines.ppm");
    file << "P3\n" << width << " " << height << "\n255\n";
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++)
        {
// Ищем линии, проходящие через текущую точку
            bool isOnLine = false;
            for (auto line: lines)
            {
                for (auto point: line)
                {
                    if (point.x == x && point.y == y)
                    {
                        isOnLine = true;
                        break;
                    }
                }
                if (isOnLine) break;
            }
            // Записываем цвет пикселя в файл .ppm
            if (isOnLine)
            {
                file << "255 255 255 ";
            } else
            {
                file << "0 0 0 ";
            }
        }
        file << "\n";
    }
    file.close();

    return 0;
}