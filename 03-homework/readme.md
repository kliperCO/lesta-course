<h1 align="center">Домашняя работа № 3</h1>

<div align="center" style="text-align: center;">
  <div>
    <img src="https://img.shields.io/badge/platform-linux%20-informational?style=for-the-badge&amp;logo=appveyor" alt="Platforms">    
    <a href="https://en.cppreference.com/w/cpp/23">
      <img src="https://img.shields.io/badge/cpp-23-informational?style=for-the-badge&amp;logo=cplusplus" alt="CPP version">
    </a>
  </div>
</div>

# 
1. Cделать программу которая в бесконечном цикле выводит события нажатия виртуальной консоли (up, down, left, ... first_button, second_button) - в одной программе через SDL_Event
2. Переделать предыдущую программу в библиотеку (статическую) (engine) и игру (game) которая использует engine а сама непосредвстенно не работает напрямую с SDL
3. Переделать предыдущую программу engine -> dll game -> exe - собрать убедиться что все работает и так тоже. 
4. Переделать предыдущую программу engine -> exe, game -> dll - игра загружается из dll-ки(so-шки) на лету после старта программы, а также снова перезагружается, если и изменился на диске файл - game.so. (будет проверяться только эта финальная программа)
