<p align="center">
  <img src="/game/banner.svg" alt="Guessing Game Banner" width="100%">
</p>

<h1 align="center">🎮 Jogo de Adivinhação em C</h1>

<p align="center">
  Desenvolvido por <strong>Guilherme Belchior</strong>
</p>

---

## 🧩 Sobre o Projeto

Este repositório apresenta um **Jogo de Adivinhação** desenvolvido em linguagem C, com elementos clássicos de programação estruturada e um toque visual retro através de uma tela ASCII art estilizada, simulando um terminal MS-DOS.

O objetivo do projeto é demonstrar domínio de:

- Manipulação de entrada e saída (`printf`, `scanf`)
- Geração de números aleatórios (`srand`, `rand`)
- Estruturas de repetição e decisão (`for`, `if`, `else`, `switch`)
- Cálculo de pontuação com operações aritméticas
- Controle de fluxo (pausa ao final da execução)
- Organização de código limpo e comentado


## 🚀 Funcionalidades

- ✔️ **ASCII Art inicial** com estilo “console retro”
- ✔️ **Geração de número secreto** de 0 a 99
- ✔️ **Seleção de níveis de dificuldade** (Fácil, Médio, Difícil)
- ✔️ **Sistema de pontuação** baseado na precisão dos chutes
- ✔️ **Feedback visual** de "maior" ou "menor"
- ✔️ **Contagem de tentativas**
- ✔️ **Pausa no final** para evitar o fechamento automático do `.exe`
- ✔️ **Código simples** organizado e fácil de entender

## 🎯 Como o jogo funciona

O programa exibe uma interface ASCII estilizada. O usuário escolhe um nível de dificuldade:

1.  **Fácil** → 20 tentativas
2.  **Médio** → 15 tentativas
3.  **Difícil** → 6 tentativas

Um número secreto entre 0 e 99 é gerado aleatoriamente. A cada tentativa o jogador recebe dicas:

- 🔺 **Seu chute foi maior**
- 🔻 **Seu chute foi menor**

A pontuação diminui conforme a distância entre o chute e o segredo. O jogo termina quando:
- O jogador acerta 🎉
- Ou acabam as tentativas ❌

## 🔧 Como compilar

Se você estiver em um ambiente Linux ou MinGW no Windows:

```bash
gcc jogo.c -o jogo
```

Ou via PowerShell/CMD com MinGW:

DOS

```bash
gcc jogo.c -o jogo.exe
```

## ▶️ Como executar
No Linux/Mac:

```
./jogo
```
No Windows:

DOS
```
jogo.exe
```
## 📂 Estrutura do projeto

```
📁 game/
│
├── 📁 output
├──  └── advinhacao.exe
├── advinhacao.c
├── banner.svg
└── README.md
```

## 🛠️ Tecnologias utilizadas
 - Linguagem C (ANSI C)

- Biblioteca padrão (stdio.h)

- Biblioteca de utilidades (stdlib.h)

- Biblioteca de manipulação de tempo (time.h)

- Programa só fecha quando o jogador pressiona ENTER.


## Desenvolvido por Guilherme Belchior - Programador e estudante de Engenharia de Software e Ciência de Dados

Focado em projetos didáticos, claros e técnicos para evolução constante.

### 📎 Sinta-se à vontade para clonar, melhorar e contribuir com o projeto!

# English Version 

<p align="center"> <img src="game/banner.svg" alt="Guessing Game Banner" width="100%"> </p> <h1 align="center">🎮 Guessing Game in C</h1> <p align="center"> Developed by <strong>Guilherme Belchior</strong> </p>

## 🧩 About the Project

This repository presents a **Guessing Game** developed in the C programming language, featuring classic elements of structured programming and a retro visual touch through a stylized ASCII art screen, simulating an MS-DOS terminal.

The objective of this project is to demonstrate mastery of:

- Input and output handling (printf, scanf)

- Random number generation (srand, rand)

- Repetition and decision structures (for, if, else, switch)

- Score calculation with arithmetic operations

- Flow control (pause at the end of execution)

- Clean and well-commented code organization

## 🚀 Features

- ✔️ Initial ASCII Art with a “retro console” style

- ✔️ Secret number generation from 0 to 99

- ✔️ Difficulty level selection (Easy, Medium, Hard)

- ✔️ Scoring system based on guess accuracy

- ✔️ Visual feedback for “higher” or “lower”

- ✔️ Attempt counter

- ✔️ Pause at the end to prevent the .exe from closing automatically

- ✔️ Simple code that is organized and easy to understand

## 🎯 How the game works

The program displays a stylized ASCII interface. The user chooses a difficulty level:

1. **Easy** → 20 attempts

2. **Medium** → 15 attempts

3. **Hard** → 6 attempts

A secret number between 0 and 99 is randomly generated. On each attempt, the player receives hints:

- 🔺 Your guess was higher

- 🔻 Your guess was lower

The score decreases based on the distance between the guess and the secret. The game ends when:

- The player guesses correctly 🎉

- Or the attempts run out ❌

## 🔧 How to compile

If you are in a Linux environment or using MinGW on Windows:

```
gcc jogo.c -o jogo
```

Or via PowerShell/CMD with MinGW:

DOS
```
gcc jogo.c -o jogo.exe
```
## ▶️ How to run

On Linux/Mac:
```
./jogo
```

On Windows:

DOS
```
jogo.exe
```

## 📂 Project structure
```
📁 game/
│
├── 📁 output
├──  └── advinhacao.exe
├── advinhacao.c
├── banner.svg
└── README.md
```

## 🛠️ Technologies used

- C Language (ANSI C)

- Standard library (stdio.h)

- Utility library (stdlib.h)

- Time manipulation library (time.h)

- Program only closes when the player presses ENTER.

## Developed by Guilherme Belchior – Programmer and Software Engineering & Data Science Student

- Focused on clear, didactic, and technical projects for continuous growth.

### 📎 Feel free to clone, improve, and contribute to the project!
